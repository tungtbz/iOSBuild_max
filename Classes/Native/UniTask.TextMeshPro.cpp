#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct AsyncUnityEventHandler_1_t1A6113173A4EBB673A5C3DEAA7CBB5BF8DD2358A;
// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A;
// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.Object>
struct AsyncUnityEventHandler_1_t52562780B902B331ACA79C7CB7FDF904A7E75B32;
// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.String>
struct AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// Cysharp.Threading.Tasks.IAsyncDeselectEventHandler`1<System.String>
struct IAsyncDeselectEventHandler_1_tBFB028CD00012BD12C59B8D3265257AA058F369D;
// Cysharp.Threading.Tasks.IAsyncEndEditEventHandler`1<System.String>
struct IAsyncEndEditEventHandler_1_t657A44799D9062DC5E5CED851E780960079AB1AB;
// Cysharp.Threading.Tasks.IAsyncEndTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct IAsyncEndTextSelectionEventHandler_1_tC146A87CD7C14EDB5AA17DDEEB5E26E096B5153F;
// Cysharp.Threading.Tasks.IAsyncSelectEventHandler`1<System.String>
struct IAsyncSelectEventHandler_1_t1A636C301CFBA1DFE87F4F2C00607D293EDF68B1;
// Cysharp.Threading.Tasks.IAsyncSubmitEventHandler`1<System.String>
struct IAsyncSubmitEventHandler_1_t0D3C0C0D58B27BAF48F693E6820B8F0072FADCE9;
// Cysharp.Threading.Tasks.IAsyncTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct IAsyncTextSelectionEventHandler_1_t6833E1600F27FB0597F85C2AE4E365E3952BD8A1;
// Cysharp.Threading.Tasks.IAsyncValueChangedEventHandler`1<System.String>
struct IAsyncValueChangedEventHandler_1_tD7E9D705788D83E3CD03D5978FBD1078C8C51B9F;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct IUniTaskAsyncEnumerable_1_t5F8A45771F9B2CF39DAAB31C34D7BD17343B6B1C;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>
struct IUniTaskAsyncEnumerable_1_t9CE33A4884C7D192547D43C4CCB5A08027B45E2A;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.String>
struct IUniTaskAsyncEnumerator_1_t40054994847CA6FF9C5A3E7761AF799B79A42CCA;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct IUniTaskSource_1_tA5C8FC70CCAC2A2C3DD775B3E5B99012AC3FC2FF;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct IUniTaskSource_1_tD69097755F602ADF2FA1DD96D35E82DB1D0D14BA;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_t35BC53B57A9D4ACCD139841E4165831832EC7874;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>
struct IUniTaskSource_1_t7CBA21A83BAD1BFC13F28E80F8359A49853FE53D;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.String>
struct IUniTaskSource_1_tC2118E3091189CA08EFCF036CD8D5BD934A8D350;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UnityAction_1_t6300EC731C11646ADE7DFA3F775D52A4FD427572;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647;
// UnityEngine.Events.UnityAction`3<System.String,System.Int32,System.Int32>
struct UnityAction_3_t3E8830446BD8EA06ADED6924C1B6C4A68DC13872;
// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct UnityEventHandlerAsyncEnumerable_1_tC3E063AA1A41576A6B60B4FFA5118ADA3289381D;
// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8;
// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.Object>
struct UnityEventHandlerAsyncEnumerable_1_t82980B66022221CB351B6FC99ED417501DDC2340;
// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.String>
struct UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E;
// UnityEngine.Events.UnityEvent`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct UnityEvent_1_t297084FDCC02BAD72555F69047F3C7681772F74D;
// UnityEngine.Events.UnityEvent`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner
struct IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_InputField
struct TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// Cysharp.Threading.Tasks.TextSelectionEventConverter
struct TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC;
// Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44
struct U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137;

IL2CPP_EXTERN_C RuntimeClass* AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t98CE1739780D10DE070EA22469BDD661F7721BDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerable_1_t9CE33A4884C7D192547D43C4CCB5A08027B45E2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerator_1_t40054994847CA6FF9C5A3E7761AF799B79A42CCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t3C7FCC9A5D80562DD3C2320BF44FC068A2022AA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t9DBF8570AC748696C52D015E46344646DFA4B230_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_mADB1FA60FDE5F84591B3BA002B87C8E20E9D0976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_m412A3C2DBA0B6C2956D5966326F4F2AB412896D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_m555D8121626E97C612B815678992B68D6D51FF62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBindToCoreU3Ed__44_MoveNext_m2373A9663F4E4A336D6FA65F00AC6CEF9C7A485A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C_RuntimeMethod_var;
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

// <Module>
struct U3CModuleU3E_t0337414073C51FF70899F3F1C1FF196847CACA9A 
{
public:

public:
};


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


// Cysharp.Threading.Tasks.TextMeshProAsyncExtensions
struct TextMeshProAsyncExtensions_t66C7F65A9805FE5D61CF4C85C39FE3E98217158C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.String>
struct UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	String_t* ___result_0;
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
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5, ___result_0)); }
	inline String_t* get_result_0() const { return ___result_0; }
	inline String_t** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(String_t* value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5, ___continuationState_6)); }
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


// Cysharp.Threading.Tasks.UniTask`1<System.String>
struct UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E 
{
public:
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	String_t* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E, ___result_1)); }
	inline String_t* get_result_1() const { return ___result_1; }
	inline String_t** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(String_t* value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}

	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E, ___token_2)); }
	inline int16_t get_token_2() const { return ___token_2; }
	inline int16_t* get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(int16_t value)
	{
		___token_2 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.ValueTuple`3<System.Object,System.Int32,System.Int32>
struct ValueTuple_3_t7F9E7F006F8A95186A38C145B74C7DB6896AC603 
{
public:
	// T1 System.ValueTuple`3::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	int32_t ___Item3_2;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_3_t7F9E7F006F8A95186A38C145B74C7DB6896AC603, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_3_t7F9E7F006F8A95186A38C145B74C7DB6896AC603, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_3_t7F9E7F006F8A95186A38C145B74C7DB6896AC603, ___Item3_2)); }
	inline int32_t get_Item3_2() const { return ___Item3_2; }
	inline int32_t* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(int32_t value)
	{
		___Item3_2 = value;
	}
};


// System.ValueTuple`3<System.String,System.Int32,System.Int32>
struct ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81 
{
public:
	// T1 System.ValueTuple`3::Item1
	String_t* ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	int32_t ___Item3_2;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81, ___Item1_0)); }
	inline String_t* get_Item1_0() const { return ___Item1_0; }
	inline String_t** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(String_t* value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81, ___Item3_2)); }
	inline int32_t get_Item3_2() const { return ___Item3_2; }
	inline int32_t* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(int32_t value)
	{
		___Item3_2 = value;
	}
};


// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C 
{
public:
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::runner
	RuntimeObject* ___runner_0;

public:
	inline static int32_t get_offset_of_runner_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C, ___runner_0)); }
	inline RuntimeObject* get_runner_0() const { return ___runner_0; }
	inline RuntimeObject** get_address_of_runner_0() { return &___runner_0; }
	inline void set_runner_0(RuntimeObject* value)
	{
		___runner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runner_0), (void*)value);
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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


// TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
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


// Cysharp.Threading.Tasks.UniTaskVoid
struct UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C__padding[1];
	};

public:
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B 
{
public:
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Array_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_Array_0() const { return ___m_Array_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
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


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81  ___result_0;
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
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51, ___result_0)); }
	inline ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81  get_result_0() const { return ___result_0; }
	inline ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81 * get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81  value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___result_0))->___Item1_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct UniTask_1_t0A7A7621B3DBC1A7913FF4488677528BD96C78C6 
{
public:
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ValueTuple_3_t7F9E7F006F8A95186A38C145B74C7DB6896AC603  ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(UniTask_1_t0A7A7621B3DBC1A7913FF4488677528BD96C78C6, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(UniTask_1_t0A7A7621B3DBC1A7913FF4488677528BD96C78C6, ___result_1)); }
	inline ValueTuple_3_t7F9E7F006F8A95186A38C145B74C7DB6896AC603  get_result_1() const { return ___result_1; }
	inline ValueTuple_3_t7F9E7F006F8A95186A38C145B74C7DB6896AC603 * get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(ValueTuple_3_t7F9E7F006F8A95186A38C145B74C7DB6896AC603  value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___result_1))->___Item1_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(UniTask_1_t0A7A7621B3DBC1A7913FF4488677528BD96C78C6, ___token_2)); }
	inline int16_t get_token_2() const { return ___token_2; }
	inline int16_t* get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(int16_t value)
	{
		___token_2 = value;
	}
};


// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3 
{
public:
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81  ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3, ___result_1)); }
	inline ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81  get_result_1() const { return ___result_1; }
	inline ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81 * get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(ValueTuple_3_tD7928BA5BF916B3F3B0E9C3801375638B2472C81  value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___result_1))->___Item1_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3, ___token_2)); }
	inline int16_t get_token_2() const { return ___token_2; }
	inline int16_t* get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(int16_t value)
	{
		___token_2 = value;
	}
};


// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityEvent`1<T> Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1::unityEvent
	UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA * ___unityEvent_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1::cancellationToken1
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1_1;

public:
	inline static int32_t get_offset_of_unityEvent_0() { return static_cast<int32_t>(offsetof(UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8, ___unityEvent_0)); }
	inline UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA * get_unityEvent_0() const { return ___unityEvent_0; }
	inline UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA ** get_address_of_unityEvent_0() { return &___unityEvent_0; }
	inline void set_unityEvent_0(UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA * value)
	{
		___unityEvent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityEvent_0), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken1_1() { return static_cast<int32_t>(offsetof(UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8, ___cancellationToken1_1)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken1_1() const { return ___cancellationToken1_1; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken1_1() { return &___cancellationToken1_1; }
	inline void set_cancellationToken1_1(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken1_1))->___m_source_0), (void*)NULL);
	}
};


// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.String>
struct UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityEvent`1<T> Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1::unityEvent
	UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * ___unityEvent_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1::cancellationToken1
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1_1;

public:
	inline static int32_t get_offset_of_unityEvent_0() { return static_cast<int32_t>(offsetof(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E, ___unityEvent_0)); }
	inline UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * get_unityEvent_0() const { return ___unityEvent_0; }
	inline UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 ** get_address_of_unityEvent_0() { return &___unityEvent_0; }
	inline void set_unityEvent_0(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * value)
	{
		___unityEvent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityEvent_0), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken1_1() { return static_cast<int32_t>(offsetof(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E, ___cancellationToken1_1)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken1_1() const { return ___cancellationToken1_1; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken1_1() { return &___cancellationToken1_1; }
	inline void set_cancellationToken1_1(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken1_1))->___m_source_0), (void*)NULL);
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// TMPro.ColorMode
struct ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
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

// TMPro.Extents
struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
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


// TMPro.TMP_TextElementType
struct TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cysharp.Threading.Tasks.TextSelectionEventConverter
struct TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C  : public UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA
{
public:
	// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32> Cysharp.Threading.Tasks.TextSelectionEventConverter::innerEvent
	UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE * ___innerEvent_4;
	// UnityEngine.Events.UnityAction`3<System.String,System.Int32,System.Int32> Cysharp.Threading.Tasks.TextSelectionEventConverter::invokeDelegate
	UnityAction_3_t3E8830446BD8EA06ADED6924C1B6C4A68DC13872 * ___invokeDelegate_5;

public:
	inline static int32_t get_offset_of_innerEvent_4() { return static_cast<int32_t>(offsetof(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C, ___innerEvent_4)); }
	inline UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE * get_innerEvent_4() const { return ___innerEvent_4; }
	inline UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE ** get_address_of_innerEvent_4() { return &___innerEvent_4; }
	inline void set_innerEvent_4(UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE * value)
	{
		___innerEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___innerEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_invokeDelegate_5() { return static_cast<int32_t>(offsetof(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C, ___invokeDelegate_5)); }
	inline UnityAction_3_t3E8830446BD8EA06ADED6924C1B6C4A68DC13872 * get_invokeDelegate_5() const { return ___invokeDelegate_5; }
	inline UnityAction_3_t3E8830446BD8EA06ADED6924C1B6C4A68DC13872 ** get_address_of_invokeDelegate_5() { return &___invokeDelegate_5; }
	inline void set_invokeDelegate_5(UnityAction_3_t3E8830446BD8EA06ADED6924C1B6C4A68DC13872 * value)
	{
		___invokeDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invokeDelegate_5), (void*)value);
	}
};


// TMPro.TextureMappingOptions
struct TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// TMPro.VertexGradient
struct VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField/CharacterValidation
struct CharacterValidation_t08E980563A3EBE46E8507BD2BC8F4E865EE0DDB3 
{
public:
	// System.Int32 TMPro.TMP_InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t08E980563A3EBE46E8507BD2BC8F4E865EE0DDB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField/ContentType
struct ContentType_t3496CF3DD8D3F13E61A7A5D5D6BAC0B339D16C4D 
{
public:
	// System.Int32 TMPro.TMP_InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t3496CF3DD8D3F13E61A7A5D5D6BAC0B339D16C4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField/InputType
struct InputType_tBE7A7257C7830BF7F2CBF8D2F612B497DEB8AC95 
{
public:
	// System.Int32 TMPro.TMP_InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_tBE7A7257C7830BF7F2CBF8D2F612B497DEB8AC95, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField/LineType
struct LineType_tCC7BCF3286F44F2AEEBF998AEDB21F4B353569FC 
{
public:
	// System.Int32 TMPro.TMP_InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_tCC7BCF3286F44F2AEEBF998AEDB21F4B353569FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215  : public UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE
{
public:

public:
};


// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
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

// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityAction`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::action
	UnityAction_1_t6300EC731C11646ADE7DFA3F775D52A4FD427572 * ___action_1;
	// UnityEngine.Events.UnityEvent`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::unityEvent
	UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA * ___unityEvent_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___registration_4;
	// System.Boolean Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::isDisposed
	bool ___isDisposed_5;
	// System.Boolean Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::callOnce
	bool ___callOnce_6;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::core
	UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51  ___core_7;

public:
	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A, ___action_1)); }
	inline UnityAction_1_t6300EC731C11646ADE7DFA3F775D52A4FD427572 * get_action_1() const { return ___action_1; }
	inline UnityAction_1_t6300EC731C11646ADE7DFA3F775D52A4FD427572 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_1_t6300EC731C11646ADE7DFA3F775D52A4FD427572 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}

	inline static int32_t get_offset_of_unityEvent_2() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A, ___unityEvent_2)); }
	inline UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA * get_unityEvent_2() const { return ___unityEvent_2; }
	inline UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA ** get_address_of_unityEvent_2() { return &___unityEvent_2; }
	inline void set_unityEvent_2(UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA * value)
	{
		___unityEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityEvent_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_registration_4() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A, ___registration_4)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_registration_4() const { return ___registration_4; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_registration_4() { return &___registration_4; }
	inline void set_registration_4(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___registration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___registration_4))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___registration_4))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_isDisposed_5() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A, ___isDisposed_5)); }
	inline bool get_isDisposed_5() const { return ___isDisposed_5; }
	inline bool* get_address_of_isDisposed_5() { return &___isDisposed_5; }
	inline void set_isDisposed_5(bool value)
	{
		___isDisposed_5 = value;
	}

	inline static int32_t get_offset_of_callOnce_6() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A, ___callOnce_6)); }
	inline bool get_callOnce_6() const { return ___callOnce_6; }
	inline bool* get_address_of_callOnce_6() { return &___callOnce_6; }
	inline void set_callOnce_6(bool value)
	{
		___callOnce_6 = value;
	}

	inline static int32_t get_offset_of_core_7() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A, ___core_7)); }
	inline UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51  get_core_7() const { return ___core_7; }
	inline UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51 * get_address_of_core_7() { return &___core_7; }
	inline void set_core_7(UniTaskCompletionSourceCore_1_t8E753B8DF6CDF11BDB328660C3D8016E6864DA51  value)
	{
		___core_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___core_7))->___result_0))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_7))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_7))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_7))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::cancellationCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallback_0;

public:
	inline static int32_t get_offset_of_cancellationCallback_0() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_StaticFields, ___cancellationCallback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallback_0() const { return ___cancellationCallback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallback_0() { return &___cancellationCallback_0; }
	inline void set_cancellationCallback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallback_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.String>
struct AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityAction`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::action
	UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * ___action_1;
	// UnityEngine.Events.UnityEvent`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::unityEvent
	UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * ___unityEvent_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_3;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___registration_4;
	// System.Boolean Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::isDisposed
	bool ___isDisposed_5;
	// System.Boolean Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::callOnce
	bool ___callOnce_6;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::core
	UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5  ___core_7;

public:
	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6, ___action_1)); }
	inline UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * get_action_1() const { return ___action_1; }
	inline UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_1_t4A1848C01D99711D0E3D235F1FDBBA96BA48B647 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}

	inline static int32_t get_offset_of_unityEvent_2() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6, ___unityEvent_2)); }
	inline UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * get_unityEvent_2() const { return ___unityEvent_2; }
	inline UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 ** get_address_of_unityEvent_2() { return &___unityEvent_2; }
	inline void set_unityEvent_2(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * value)
	{
		___unityEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityEvent_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6, ___cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_registration_4() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6, ___registration_4)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_registration_4() const { return ___registration_4; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_registration_4() { return &___registration_4; }
	inline void set_registration_4(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___registration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___registration_4))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___registration_4))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_isDisposed_5() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6, ___isDisposed_5)); }
	inline bool get_isDisposed_5() const { return ___isDisposed_5; }
	inline bool* get_address_of_isDisposed_5() { return &___isDisposed_5; }
	inline void set_isDisposed_5(bool value)
	{
		___isDisposed_5 = value;
	}

	inline static int32_t get_offset_of_callOnce_6() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6, ___callOnce_6)); }
	inline bool get_callOnce_6() const { return ___callOnce_6; }
	inline bool* get_address_of_callOnce_6() { return &___callOnce_6; }
	inline void set_callOnce_6(bool value)
	{
		___callOnce_6 = value;
	}

	inline static int32_t get_offset_of_core_7() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6, ___core_7)); }
	inline UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5  get_core_7() const { return ___core_7; }
	inline UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5 * get_address_of_core_7() { return &___core_7; }
	inline void set_core_7(UniTaskCompletionSourceCore_1_t9F49391DFEA8E53CC565A0BF13EC3FABCF33F8D5  value)
	{
		___core_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_7))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_7))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_7))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_7))->___continuationState_6), (void*)NULL);
		#endif
	}
};

struct AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::cancellationCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallback_0;

public:
	inline static int32_t get_offset_of_cancellationCallback_0() { return static_cast<int32_t>(offsetof(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_StaticFields, ___cancellationCallback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallback_0() const { return ___cancellationCallback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallback_0() { return &___cancellationCallback_0; }
	inline void set_cancellationCallback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallback_0), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44
struct U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137  : public RuntimeObject
{
public:
	// System.Int32 Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::source
	RuntimeObject* ___source_2;
	// TMPro.TMP_Text Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::text
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___text_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// System.Boolean Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::rebindOnError
	bool ___rebindOnError_5;
	// System.Boolean Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::<repeat>5__1
	bool ___U3CrepeatU3E5__1_6;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::<e>5__2
	RuntimeObject* ___U3CeU3E5__2_7;
	// System.Object Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::<>s__3
	RuntimeObject * ___U3CU3Es__3_8;
	// System.Int32 Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::<>s__4
	int32_t ___U3CU3Es__4_9;
	// System.Boolean Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::<moveNext>5__5
	bool ___U3CmoveNextU3E5__5_10;
	// System.Boolean Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::<>s__6
	bool ___U3CU3Es__6_11;
	// System.Exception Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::<ex>5__7
	Exception_t * ___U3CexU3E5__7_12;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::<>u__1
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  ___U3CU3Eu__1_13;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::<>u__2
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  ___U3CU3Eu__2_14;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___runner_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___source_2)); }
	inline RuntimeObject* get_source_2() const { return ___source_2; }
	inline RuntimeObject** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(RuntimeObject* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_2), (void*)value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___text_3)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_text_3() const { return ___text_3; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rebindOnError_5() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___rebindOnError_5)); }
	inline bool get_rebindOnError_5() const { return ___rebindOnError_5; }
	inline bool* get_address_of_rebindOnError_5() { return &___rebindOnError_5; }
	inline void set_rebindOnError_5(bool value)
	{
		___rebindOnError_5 = value;
	}

	inline static int32_t get_offset_of_U3CrepeatU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___U3CrepeatU3E5__1_6)); }
	inline bool get_U3CrepeatU3E5__1_6() const { return ___U3CrepeatU3E5__1_6; }
	inline bool* get_address_of_U3CrepeatU3E5__1_6() { return &___U3CrepeatU3E5__1_6; }
	inline void set_U3CrepeatU3E5__1_6(bool value)
	{
		___U3CrepeatU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___U3CeU3E5__2_7)); }
	inline RuntimeObject* get_U3CeU3E5__2_7() const { return ___U3CeU3E5__2_7; }
	inline RuntimeObject** get_address_of_U3CeU3E5__2_7() { return &___U3CeU3E5__2_7; }
	inline void set_U3CeU3E5__2_7(RuntimeObject* value)
	{
		___U3CeU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__3_8() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___U3CU3Es__3_8)); }
	inline RuntimeObject * get_U3CU3Es__3_8() const { return ___U3CU3Es__3_8; }
	inline RuntimeObject ** get_address_of_U3CU3Es__3_8() { return &___U3CU3Es__3_8; }
	inline void set_U3CU3Es__3_8(RuntimeObject * value)
	{
		___U3CU3Es__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__3_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__4_9() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___U3CU3Es__4_9)); }
	inline int32_t get_U3CU3Es__4_9() const { return ___U3CU3Es__4_9; }
	inline int32_t* get_address_of_U3CU3Es__4_9() { return &___U3CU3Es__4_9; }
	inline void set_U3CU3Es__4_9(int32_t value)
	{
		___U3CU3Es__4_9 = value;
	}

	inline static int32_t get_offset_of_U3CmoveNextU3E5__5_10() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___U3CmoveNextU3E5__5_10)); }
	inline bool get_U3CmoveNextU3E5__5_10() const { return ___U3CmoveNextU3E5__5_10; }
	inline bool* get_address_of_U3CmoveNextU3E5__5_10() { return &___U3CmoveNextU3E5__5_10; }
	inline void set_U3CmoveNextU3E5__5_10(bool value)
	{
		___U3CmoveNextU3E5__5_10 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__6_11() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___U3CU3Es__6_11)); }
	inline bool get_U3CU3Es__6_11() const { return ___U3CU3Es__6_11; }
	inline bool* get_address_of_U3CU3Es__6_11() { return &___U3CU3Es__6_11; }
	inline void set_U3CU3Es__6_11(bool value)
	{
		___U3CU3Es__6_11 = value;
	}

	inline static int32_t get_offset_of_U3CexU3E5__7_12() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___U3CexU3E5__7_12)); }
	inline Exception_t * get_U3CexU3E5__7_12() const { return ___U3CexU3E5__7_12; }
	inline Exception_t ** get_address_of_U3CexU3E5__7_12() { return &___U3CexU3E5__7_12; }
	inline void set_U3CexU3E5__7_12(Exception_t * value)
	{
		___U3CexU3E5__7_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexU3E5__7_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_13() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___U3CU3Eu__1_13)); }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  get_U3CU3Eu__1_13() const { return ___U3CU3Eu__1_13; }
	inline Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * get_address_of_U3CU3Eu__1_13() { return &___U3CU3Eu__1_13; }
	inline void set_U3CU3Eu__1_13(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  value)
	{
		___U3CU3Eu__1_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_14() { return static_cast<int32_t>(offsetof(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137, ___U3CU3Eu__2_14)); }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  get_U3CU3Eu__2_14() const { return ___U3CU3Eu__2_14; }
	inline Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * get_address_of_U3CU3Eu__2_14() { return &___U3CU3Eu__2_14; }
	inline void set_U3CU3Eu__2_14(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  value)
	{
		___U3CU3Eu__2_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__2_14))->___task_0))->___source_2), (void*)NULL);
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB, ____cancellationToken_17)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
};


// TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_27)); }
	inline float get_fontScaleMultiplier_27() const { return ___fontScaleMultiplier_27; }
	inline float* get_address_of_fontScaleMultiplier_27() { return &___fontScaleMultiplier_27; }
	inline void set_fontScaleMultiplier_27(float value)
	{
		___fontScaleMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_28)); }
	inline float get_currentFontSize_28() const { return ___currentFontSize_28; }
	inline float* get_address_of_currentFontSize_28() { return &___currentFontSize_28; }
	inline void set_currentFontSize_28(float value)
	{
		___currentFontSize_28 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_29)); }
	inline float get_baselineOffset_29() const { return ___baselineOffset_29; }
	inline float* get_address_of_baselineOffset_29() { return &___baselineOffset_29; }
	inline void set_baselineOffset_29(float value)
	{
		___baselineOffset_29 = value;
	}

	inline static int32_t get_offset_of_lineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_30)); }
	inline float get_lineOffset_30() const { return ___lineOffset_30; }
	inline float* get_address_of_lineOffset_30() { return &___lineOffset_30; }
	inline void set_lineOffset_30(float value)
	{
		___lineOffset_30 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_31)); }
	inline bool get_isDrivenLineSpacing_31() const { return ___isDrivenLineSpacing_31; }
	inline bool* get_address_of_isDrivenLineSpacing_31() { return &___isDrivenLineSpacing_31; }
	inline void set_isDrivenLineSpacing_31(bool value)
	{
		___isDrivenLineSpacing_31 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_32)); }
	inline float get_glyphHorizontalAdvanceAdjustment_32() const { return ___glyphHorizontalAdvanceAdjustment_32; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_32() { return &___glyphHorizontalAdvanceAdjustment_32; }
	inline void set_glyphHorizontalAdvanceAdjustment_32(float value)
	{
		___glyphHorizontalAdvanceAdjustment_32 = value;
	}

	inline static int32_t get_offset_of_cSpace_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_33)); }
	inline float get_cSpace_33() const { return ___cSpace_33; }
	inline float* get_address_of_cSpace_33() { return &___cSpace_33; }
	inline void set_cSpace_33(float value)
	{
		___cSpace_33 = value;
	}

	inline static int32_t get_offset_of_mSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_34)); }
	inline float get_mSpace_34() const { return ___mSpace_34; }
	inline float* get_address_of_mSpace_34() { return &___mSpace_34; }
	inline void set_mSpace_34(float value)
	{
		___mSpace_34 = value;
	}

	inline static int32_t get_offset_of_textInfo_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_35)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_35() const { return ___textInfo_35; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_35() { return &___textInfo_35; }
	inline void set_textInfo_35(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_35), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_36)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_36() const { return ___lineInfo_36; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_36() { return &___lineInfo_36; }
	inline void set_lineInfo_36(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_36 = value;
	}

	inline static int32_t get_offset_of_vertexColor_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_37() const { return ___vertexColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_37() { return &___vertexColor_37; }
	inline void set_vertexColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_37 = value;
	}

	inline static int32_t get_offset_of_underlineColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_38() const { return ___underlineColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_38() { return &___underlineColor_38; }
	inline void set_underlineColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_38 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_39() const { return ___strikethroughColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_39() { return &___strikethroughColor_39; }
	inline void set_strikethroughColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_39 = value;
	}

	inline static int32_t get_offset_of_highlightColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_40() const { return ___highlightColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_40() { return &___highlightColor_40; }
	inline void set_highlightColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_40 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_41)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_41() const { return ___basicStyleStack_41; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_41() { return &___basicStyleStack_41; }
	inline void set_basicStyleStack_41(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_41 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_42)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_42() const { return ___italicAngleStack_42; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_42() { return &___italicAngleStack_42; }
	inline void set_italicAngleStack_42(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_42))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_43)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_43() const { return ___colorStack_43; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_43() { return &___colorStack_43; }
	inline void set_colorStack_43(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_44() const { return ___underlineColorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_44() { return &___underlineColorStack_44; }
	inline void set_underlineColorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_45() const { return ___strikethroughColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_45() { return &___strikethroughColorStack_45; }
	inline void set_strikethroughColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_46() const { return ___highlightColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_46() { return &___highlightColorStack_46; }
	inline void set_highlightColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_47)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_47() const { return ___highlightStateStack_47; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_47() { return &___highlightStateStack_47; }
	inline void set_highlightStateStack_47(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_48)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_48() const { return ___colorGradientStack_48; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_48() { return &___colorGradientStack_48; }
	inline void set_colorGradientStack_48(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_49)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_49() const { return ___sizeStack_49; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_49() { return &___sizeStack_49; }
	inline void set_sizeStack_49(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_49))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_50() const { return ___indentStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_50() { return &___indentStack_50; }
	inline void set_indentStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_51)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_51() const { return ___fontWeightStack_51; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_51() { return &___fontWeightStack_51; }
	inline void set_fontWeightStack_51(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_52)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_52() const { return ___styleStack_52; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_52() { return &___styleStack_52; }
	inline void set_styleStack_52(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_53)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_53() const { return ___baselineStack_53; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_53() { return &___baselineStack_53; }
	inline void set_baselineStack_53(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_54)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_54() const { return ___actionStack_54; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_54() { return &___actionStack_54; }
	inline void set_actionStack_54(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_55)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_55() const { return ___materialReferenceStack_55; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_55() { return &___materialReferenceStack_55; }
	inline void set_materialReferenceStack_55(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_56)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_56() const { return ___lineJustificationStack_56; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_56() { return &___lineJustificationStack_56; }
	inline void set_lineJustificationStack_56(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_57)); }
	inline int32_t get_spriteAnimationID_57() const { return ___spriteAnimationID_57; }
	inline int32_t* get_address_of_spriteAnimationID_57() { return &___spriteAnimationID_57; }
	inline void set_spriteAnimationID_57(int32_t value)
	{
		___spriteAnimationID_57 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_58)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_58() const { return ___currentFontAsset_58; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_58() { return &___currentFontAsset_58; }
	inline void set_currentFontAsset_58(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_58), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_59)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_59() const { return ___currentSpriteAsset_59; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_59() { return &___currentSpriteAsset_59; }
	inline void set_currentSpriteAsset_59(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_60)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_60() const { return ___currentMaterial_60; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_60() { return &___currentMaterial_60; }
	inline void set_currentMaterial_60(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_61)); }
	inline int32_t get_currentMaterialIndex_61() const { return ___currentMaterialIndex_61; }
	inline int32_t* get_address_of_currentMaterialIndex_61() { return &___currentMaterialIndex_61; }
	inline void set_currentMaterialIndex_61(int32_t value)
	{
		___currentMaterialIndex_61 = value;
	}

	inline static int32_t get_offset_of_meshExtents_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_62)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_62() const { return ___meshExtents_62; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_62() { return &___meshExtents_62; }
	inline void set_meshExtents_62(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_62 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_63)); }
	inline bool get_tagNoParsing_63() const { return ___tagNoParsing_63; }
	inline bool* get_address_of_tagNoParsing_63() { return &___tagNoParsing_63; }
	inline void set_tagNoParsing_63(bool value)
	{
		___tagNoParsing_63 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_64)); }
	inline bool get_isNonBreakingSpace_64() const { return ___isNonBreakingSpace_64; }
	inline bool* get_address_of_isNonBreakingSpace_64() { return &___isNonBreakingSpace_64; }
	inline void set_isNonBreakingSpace_64(bool value)
	{
		___isNonBreakingSpace_64 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTargetCache_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTargetCache_11)); }
	inline bool get_m_RaycastTargetCache_11() const { return ___m_RaycastTargetCache_11; }
	inline bool* get_address_of_m_RaycastTargetCache_11() { return &___m_RaycastTargetCache_11; }
	inline void set_m_RaycastTargetCache_11(bool value)
	{
		___m_RaycastTargetCache_11 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_12() const { return ___m_RaycastPadding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_12() { return &___m_RaycastPadding_12; }
	inline void set_m_RaycastPadding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_12 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_13)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_13() const { return ___m_RectTransform_13; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_13() { return &___m_RectTransform_13; }
	inline void set_m_RectTransform_13(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_14)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_14() const { return ___m_CanvasRenderer_14; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_14() { return &___m_CanvasRenderer_14; }
	inline void set_m_CanvasRenderer_14(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_15)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_16)); }
	inline bool get_m_VertsDirty_16() const { return ___m_VertsDirty_16; }
	inline bool* get_address_of_m_VertsDirty_16() { return &___m_VertsDirty_16; }
	inline void set_m_VertsDirty_16(bool value)
	{
		___m_VertsDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_17)); }
	inline bool get_m_MaterialDirty_17() const { return ___m_MaterialDirty_17; }
	inline bool* get_address_of_m_MaterialDirty_17() { return &___m_MaterialDirty_17; }
	inline void set_m_MaterialDirty_17(bool value)
	{
		___m_MaterialDirty_17 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_18() const { return ___m_OnDirtyLayoutCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_18() { return &___m_OnDirtyLayoutCallback_18; }
	inline void set_m_OnDirtyLayoutCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_19() const { return ___m_OnDirtyVertsCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_19() { return &___m_OnDirtyVertsCallback_19; }
	inline void set_m_OnDirtyVertsCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_20)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_20() const { return ___m_OnDirtyMaterialCallback_20; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_20() { return &___m_OnDirtyMaterialCallback_20; }
	inline void set_m_OnDirtyMaterialCallback_20(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_23)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_23() const { return ___m_CachedMesh_23; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_23() { return &___m_CachedMesh_23; }
	inline void set_m_CachedMesh_23(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_24)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_24() const { return ___m_CachedUvs_24; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_24() { return &___m_CachedUvs_24; }
	inline void set_m_CachedUvs_24(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_25)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_25() const { return ___m_ColorTweenRunner_25; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_25() { return &___m_ColorTweenRunner_25; }
	inline void set_m_ColorTweenRunner_25(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_26(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_26 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_22;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_21)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_21() const { return ___s_Mesh_21; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_21() { return &___s_Mesh_21; }
	inline void set_s_Mesh_21(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_22)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_22() const { return ___s_VertexHelper_22; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_22() { return &___s_VertexHelper_22; }
	inline void set_s_VertexHelper_22(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_22), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_36;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_27)); }
	inline bool get_m_ShouldRecalculateStencil_27() const { return ___m_ShouldRecalculateStencil_27; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_27() { return &___m_ShouldRecalculateStencil_27; }
	inline void set_m_ShouldRecalculateStencil_27(bool value)
	{
		___m_ShouldRecalculateStencil_27 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_28() const { return ___m_MaskMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_28() { return &___m_MaskMaterial_28; }
	inline void set_m_MaskMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_29)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_29() const { return ___m_ParentMask_29; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_29() { return &___m_ParentMask_29; }
	inline void set_m_ParentMask_29(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_30)); }
	inline bool get_m_Maskable_30() const { return ___m_Maskable_30; }
	inline bool* get_address_of_m_Maskable_30() { return &___m_Maskable_30; }
	inline void set_m_Maskable_30(bool value)
	{
		___m_Maskable_30 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_31)); }
	inline bool get_m_IsMaskingGraphic_31() const { return ___m_IsMaskingGraphic_31; }
	inline bool* get_address_of_m_IsMaskingGraphic_31() { return &___m_IsMaskingGraphic_31; }
	inline void set_m_IsMaskingGraphic_31(bool value)
	{
		___m_IsMaskingGraphic_31 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_32)); }
	inline bool get_m_IncludeForMasking_32() const { return ___m_IncludeForMasking_32; }
	inline bool* get_address_of_m_IncludeForMasking_32() { return &___m_IncludeForMasking_32; }
	inline void set_m_IncludeForMasking_32(bool value)
	{
		___m_IncludeForMasking_32 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_33)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_33() const { return ___m_OnCullStateChanged_33; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_33() { return &___m_OnCullStateChanged_33; }
	inline void set_m_OnCullStateChanged_33(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_34)); }
	inline bool get_m_ShouldRecalculate_34() const { return ___m_ShouldRecalculate_34; }
	inline bool* get_address_of_m_ShouldRecalculate_34() { return &___m_ShouldRecalculate_34; }
	inline void set_m_ShouldRecalculate_34(bool value)
	{
		___m_ShouldRecalculate_34 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_35)); }
	inline int32_t get_m_StencilValue_35() const { return ___m_StencilValue_35; }
	inline int32_t* get_address_of_m_StencilValue_35() { return &___m_StencilValue_35; }
	inline void set_m_StencilValue_35(int32_t value)
	{
		___m_StencilValue_35 = value;
	}

	inline static int32_t get_offset_of_m_Corners_36() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_36)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_36() const { return ___m_Corners_36; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_36() { return &___m_Corners_36; }
	inline void set_m_Corners_36(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_36), (void*)value);
	}
};


// TMPro.TMP_InputField
struct TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED * ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC * ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D * ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_114;

public:
	inline static int32_t get_offset_of_m_SoftKeyboard_20() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_SoftKeyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_SoftKeyboard_20() const { return ___m_SoftKeyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_SoftKeyboard_20() { return &___m_SoftKeyboard_20; }
	inline void set_m_SoftKeyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_SoftKeyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SoftKeyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_RectTransform_22() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RectTransform_22)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_22() const { return ___m_RectTransform_22; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_22() { return &___m_RectTransform_22; }
	inline void set_m_RectTransform_22(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextViewport_23() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextViewport_23)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_TextViewport_23() const { return ___m_TextViewport_23; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_TextViewport_23() { return &___m_TextViewport_23; }
	inline void set_m_TextViewport_23(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_TextViewport_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextViewport_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectMask_24() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextComponentRectMask_24)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_TextComponentRectMask_24() const { return ___m_TextComponentRectMask_24; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_TextComponentRectMask_24() { return &___m_TextComponentRectMask_24; }
	inline void set_m_TextComponentRectMask_24(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_TextComponentRectMask_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponentRectMask_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextViewportRectMask_25() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextViewportRectMask_25)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_TextViewportRectMask_25() const { return ___m_TextViewportRectMask_25; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_TextViewportRectMask_25() { return &___m_TextViewportRectMask_25; }
	inline void set_m_TextViewportRectMask_25(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_TextViewportRectMask_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextViewportRectMask_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedViewportRect_26() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CachedViewportRect_26)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_CachedViewportRect_26() const { return ___m_CachedViewportRect_26; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_CachedViewportRect_26() { return &___m_CachedViewportRect_26; }
	inline void set_m_CachedViewportRect_26(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_CachedViewportRect_26 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_27() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextComponent_27)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_27() const { return ___m_TextComponent_27; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_27() { return &___m_TextComponent_27; }
	inline void set_m_TextComponent_27(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectTransform_28() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextComponentRectTransform_28)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_TextComponentRectTransform_28() const { return ___m_TextComponentRectTransform_28; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_TextComponentRectTransform_28() { return &___m_TextComponentRectTransform_28; }
	inline void set_m_TextComponentRectTransform_28(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_TextComponentRectTransform_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponentRectTransform_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_29() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_Placeholder_29)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_29() const { return ___m_Placeholder_29; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_29() { return &___m_Placeholder_29; }
	inline void set_m_Placeholder_29(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_30() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_VerticalScrollbar_30)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_m_VerticalScrollbar_30() const { return ___m_VerticalScrollbar_30; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_m_VerticalScrollbar_30() { return &___m_VerticalScrollbar_30; }
	inline void set_m_VerticalScrollbar_30(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___m_VerticalScrollbar_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbar_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarEventHandler_31() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_VerticalScrollbarEventHandler_31)); }
	inline TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED * get_m_VerticalScrollbarEventHandler_31() const { return ___m_VerticalScrollbarEventHandler_31; }
	inline TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED ** get_address_of_m_VerticalScrollbarEventHandler_31() { return &___m_VerticalScrollbarEventHandler_31; }
	inline void set_m_VerticalScrollbarEventHandler_31(TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED * value)
	{
		___m_VerticalScrollbarEventHandler_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbarEventHandler_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsDrivenByLayoutComponents_32() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsDrivenByLayoutComponents_32)); }
	inline bool get_m_IsDrivenByLayoutComponents_32() const { return ___m_IsDrivenByLayoutComponents_32; }
	inline bool* get_address_of_m_IsDrivenByLayoutComponents_32() { return &___m_IsDrivenByLayoutComponents_32; }
	inline void set_m_IsDrivenByLayoutComponents_32(bool value)
	{
		___m_IsDrivenByLayoutComponents_32 = value;
	}

	inline static int32_t get_offset_of_m_LayoutGroup_33() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LayoutGroup_33)); }
	inline LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * get_m_LayoutGroup_33() const { return ___m_LayoutGroup_33; }
	inline LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 ** get_address_of_m_LayoutGroup_33() { return &___m_LayoutGroup_33; }
	inline void set_m_LayoutGroup_33(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * value)
	{
		___m_LayoutGroup_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutGroup_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_IScrollHandlerParent_34() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IScrollHandlerParent_34)); }
	inline RuntimeObject* get_m_IScrollHandlerParent_34() const { return ___m_IScrollHandlerParent_34; }
	inline RuntimeObject** get_address_of_m_IScrollHandlerParent_34() { return &___m_IScrollHandlerParent_34; }
	inline void set_m_IScrollHandlerParent_34(RuntimeObject* value)
	{
		___m_IScrollHandlerParent_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IScrollHandlerParent_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollPosition_35() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ScrollPosition_35)); }
	inline float get_m_ScrollPosition_35() const { return ___m_ScrollPosition_35; }
	inline float* get_address_of_m_ScrollPosition_35() { return &___m_ScrollPosition_35; }
	inline void set_m_ScrollPosition_35(float value)
	{
		___m_ScrollPosition_35 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_36() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ScrollSensitivity_36)); }
	inline float get_m_ScrollSensitivity_36() const { return ___m_ScrollSensitivity_36; }
	inline float* get_address_of_m_ScrollSensitivity_36() { return &___m_ScrollSensitivity_36; }
	inline void set_m_ScrollSensitivity_36(float value)
	{
		___m_ScrollSensitivity_36 = value;
	}

	inline static int32_t get_offset_of_m_ContentType_37() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ContentType_37)); }
	inline int32_t get_m_ContentType_37() const { return ___m_ContentType_37; }
	inline int32_t* get_address_of_m_ContentType_37() { return &___m_ContentType_37; }
	inline void set_m_ContentType_37(int32_t value)
	{
		___m_ContentType_37 = value;
	}

	inline static int32_t get_offset_of_m_InputType_38() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_InputType_38)); }
	inline int32_t get_m_InputType_38() const { return ___m_InputType_38; }
	inline int32_t* get_address_of_m_InputType_38() { return &___m_InputType_38; }
	inline void set_m_InputType_38(int32_t value)
	{
		___m_InputType_38 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_39() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_AsteriskChar_39)); }
	inline Il2CppChar get_m_AsteriskChar_39() const { return ___m_AsteriskChar_39; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_39() { return &___m_AsteriskChar_39; }
	inline void set_m_AsteriskChar_39(Il2CppChar value)
	{
		___m_AsteriskChar_39 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_40() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_KeyboardType_40)); }
	inline int32_t get_m_KeyboardType_40() const { return ___m_KeyboardType_40; }
	inline int32_t* get_address_of_m_KeyboardType_40() { return &___m_KeyboardType_40; }
	inline void set_m_KeyboardType_40(int32_t value)
	{
		___m_KeyboardType_40 = value;
	}

	inline static int32_t get_offset_of_m_LineType_41() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LineType_41)); }
	inline int32_t get_m_LineType_41() const { return ___m_LineType_41; }
	inline int32_t* get_address_of_m_LineType_41() { return &___m_LineType_41; }
	inline void set_m_LineType_41(int32_t value)
	{
		___m_LineType_41 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_42() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_HideMobileInput_42)); }
	inline bool get_m_HideMobileInput_42() const { return ___m_HideMobileInput_42; }
	inline bool* get_address_of_m_HideMobileInput_42() { return &___m_HideMobileInput_42; }
	inline void set_m_HideMobileInput_42(bool value)
	{
		___m_HideMobileInput_42 = value;
	}

	inline static int32_t get_offset_of_m_HideSoftKeyboard_43() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_HideSoftKeyboard_43)); }
	inline bool get_m_HideSoftKeyboard_43() const { return ___m_HideSoftKeyboard_43; }
	inline bool* get_address_of_m_HideSoftKeyboard_43() { return &___m_HideSoftKeyboard_43; }
	inline void set_m_HideSoftKeyboard_43(bool value)
	{
		___m_HideSoftKeyboard_43 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_44() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CharacterValidation_44)); }
	inline int32_t get_m_CharacterValidation_44() const { return ___m_CharacterValidation_44; }
	inline int32_t* get_address_of_m_CharacterValidation_44() { return &___m_CharacterValidation_44; }
	inline void set_m_CharacterValidation_44(int32_t value)
	{
		___m_CharacterValidation_44 = value;
	}

	inline static int32_t get_offset_of_m_RegexValue_45() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RegexValue_45)); }
	inline String_t* get_m_RegexValue_45() const { return ___m_RegexValue_45; }
	inline String_t** get_address_of_m_RegexValue_45() { return &___m_RegexValue_45; }
	inline void set_m_RegexValue_45(String_t* value)
	{
		___m_RegexValue_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegexValue_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlobalPointSize_46() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_GlobalPointSize_46)); }
	inline float get_m_GlobalPointSize_46() const { return ___m_GlobalPointSize_46; }
	inline float* get_address_of_m_GlobalPointSize_46() { return &___m_GlobalPointSize_46; }
	inline void set_m_GlobalPointSize_46(float value)
	{
		___m_GlobalPointSize_46 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_47() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CharacterLimit_47)); }
	inline int32_t get_m_CharacterLimit_47() const { return ___m_CharacterLimit_47; }
	inline int32_t* get_address_of_m_CharacterLimit_47() { return &___m_CharacterLimit_47; }
	inline void set_m_CharacterLimit_47(int32_t value)
	{
		___m_CharacterLimit_47 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_48() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnEndEdit_48)); }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * get_m_OnEndEdit_48() const { return ___m_OnEndEdit_48; }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 ** get_address_of_m_OnEndEdit_48() { return &___m_OnEndEdit_48; }
	inline void set_m_OnEndEdit_48(SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * value)
	{
		___m_OnEndEdit_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSubmit_49() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnSubmit_49)); }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * get_m_OnSubmit_49() const { return ___m_OnSubmit_49; }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 ** get_address_of_m_OnSubmit_49() { return &___m_OnSubmit_49; }
	inline void set_m_OnSubmit_49(SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * value)
	{
		___m_OnSubmit_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSubmit_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelect_50() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnSelect_50)); }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * get_m_OnSelect_50() const { return ___m_OnSelect_50; }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 ** get_address_of_m_OnSelect_50() { return &___m_OnSelect_50; }
	inline void set_m_OnSelect_50(SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * value)
	{
		___m_OnSelect_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelect_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDeselect_51() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnDeselect_51)); }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * get_m_OnDeselect_51() const { return ___m_OnDeselect_51; }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 ** get_address_of_m_OnDeselect_51() { return &___m_OnDeselect_51; }
	inline void set_m_OnDeselect_51(SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * value)
	{
		___m_OnDeselect_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDeselect_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTextSelection_52() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnTextSelection_52)); }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * get_m_OnTextSelection_52() const { return ___m_OnTextSelection_52; }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 ** get_address_of_m_OnTextSelection_52() { return &___m_OnTextSelection_52; }
	inline void set_m_OnTextSelection_52(TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * value)
	{
		___m_OnTextSelection_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTextSelection_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEndTextSelection_53() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnEndTextSelection_53)); }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * get_m_OnEndTextSelection_53() const { return ___m_OnEndTextSelection_53; }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 ** get_address_of_m_OnEndTextSelection_53() { return &___m_OnEndTextSelection_53; }
	inline void set_m_OnEndTextSelection_53(TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * value)
	{
		___m_OnEndTextSelection_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndTextSelection_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_54() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnValueChanged_54)); }
	inline OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * get_m_OnValueChanged_54() const { return ___m_OnValueChanged_54; }
	inline OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 ** get_address_of_m_OnValueChanged_54() { return &___m_OnValueChanged_54; }
	inline void set_m_OnValueChanged_54(OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * value)
	{
		___m_OnValueChanged_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTouchScreenKeyboardStatusChanged_55() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnTouchScreenKeyboardStatusChanged_55)); }
	inline TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC * get_m_OnTouchScreenKeyboardStatusChanged_55() const { return ___m_OnTouchScreenKeyboardStatusChanged_55; }
	inline TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC ** get_address_of_m_OnTouchScreenKeyboardStatusChanged_55() { return &___m_OnTouchScreenKeyboardStatusChanged_55; }
	inline void set_m_OnTouchScreenKeyboardStatusChanged_55(TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC * value)
	{
		___m_OnTouchScreenKeyboardStatusChanged_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTouchScreenKeyboardStatusChanged_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_56() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnValidateInput_56)); }
	inline OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * get_m_OnValidateInput_56() const { return ___m_OnValidateInput_56; }
	inline OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA ** get_address_of_m_OnValidateInput_56() { return &___m_OnValidateInput_56; }
	inline void set_m_OnValidateInput_56(OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * value)
	{
		___m_OnValidateInput_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_57() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretColor_57)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_57() const { return ___m_CaretColor_57; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_57() { return &___m_CaretColor_57; }
	inline void set_m_CaretColor_57(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_57 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_58() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CustomCaretColor_58)); }
	inline bool get_m_CustomCaretColor_58() const { return ___m_CustomCaretColor_58; }
	inline bool* get_address_of_m_CustomCaretColor_58() { return &___m_CustomCaretColor_58; }
	inline void set_m_CustomCaretColor_58(bool value)
	{
		___m_CustomCaretColor_58 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_59() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_SelectionColor_59)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_59() const { return ___m_SelectionColor_59; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_59() { return &___m_SelectionColor_59; }
	inline void set_m_SelectionColor_59(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_59 = value;
	}

	inline static int32_t get_offset_of_m_Text_60() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_Text_60)); }
	inline String_t* get_m_Text_60() const { return ___m_Text_60; }
	inline String_t** get_address_of_m_Text_60() { return &___m_Text_60; }
	inline void set_m_Text_60(String_t* value)
	{
		___m_Text_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_61() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretBlinkRate_61)); }
	inline float get_m_CaretBlinkRate_61() const { return ___m_CaretBlinkRate_61; }
	inline float* get_address_of_m_CaretBlinkRate_61() { return &___m_CaretBlinkRate_61; }
	inline void set_m_CaretBlinkRate_61(float value)
	{
		___m_CaretBlinkRate_61 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_62() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretWidth_62)); }
	inline int32_t get_m_CaretWidth_62() const { return ___m_CaretWidth_62; }
	inline int32_t* get_address_of_m_CaretWidth_62() { return &___m_CaretWidth_62; }
	inline void set_m_CaretWidth_62(int32_t value)
	{
		___m_CaretWidth_62 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_63() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ReadOnly_63)); }
	inline bool get_m_ReadOnly_63() const { return ___m_ReadOnly_63; }
	inline bool* get_address_of_m_ReadOnly_63() { return &___m_ReadOnly_63; }
	inline void set_m_ReadOnly_63(bool value)
	{
		___m_ReadOnly_63 = value;
	}

	inline static int32_t get_offset_of_m_RichText_64() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RichText_64)); }
	inline bool get_m_RichText_64() const { return ___m_RichText_64; }
	inline bool* get_address_of_m_RichText_64() { return &___m_RichText_64; }
	inline void set_m_RichText_64(bool value)
	{
		___m_RichText_64 = value;
	}

	inline static int32_t get_offset_of_m_StringPosition_65() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_StringPosition_65)); }
	inline int32_t get_m_StringPosition_65() const { return ___m_StringPosition_65; }
	inline int32_t* get_address_of_m_StringPosition_65() { return &___m_StringPosition_65; }
	inline void set_m_StringPosition_65(int32_t value)
	{
		___m_StringPosition_65 = value;
	}

	inline static int32_t get_offset_of_m_StringSelectPosition_66() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_StringSelectPosition_66)); }
	inline int32_t get_m_StringSelectPosition_66() const { return ___m_StringSelectPosition_66; }
	inline int32_t* get_address_of_m_StringSelectPosition_66() { return &___m_StringSelectPosition_66; }
	inline void set_m_StringSelectPosition_66(int32_t value)
	{
		___m_StringSelectPosition_66 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_67() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretPosition_67)); }
	inline int32_t get_m_CaretPosition_67() const { return ___m_CaretPosition_67; }
	inline int32_t* get_address_of_m_CaretPosition_67() { return &___m_CaretPosition_67; }
	inline void set_m_CaretPosition_67(int32_t value)
	{
		___m_CaretPosition_67 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_68() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretSelectPosition_68)); }
	inline int32_t get_m_CaretSelectPosition_68() const { return ___m_CaretSelectPosition_68; }
	inline int32_t* get_address_of_m_CaretSelectPosition_68() { return &___m_CaretSelectPosition_68; }
	inline void set_m_CaretSelectPosition_68(int32_t value)
	{
		___m_CaretSelectPosition_68 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_69() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___caretRectTrans_69)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_69() const { return ___caretRectTrans_69; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_69() { return &___caretRectTrans_69; }
	inline void set_caretRectTrans_69(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_69), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_70() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CursorVerts_70)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_70() const { return ___m_CursorVerts_70; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_70() { return &___m_CursorVerts_70; }
	inline void set_m_CursorVerts_70(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_70), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_71() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CachedInputRenderer_71)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_71() const { return ___m_CachedInputRenderer_71; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_71() { return &___m_CachedInputRenderer_71; }
	inline void set_m_CachedInputRenderer_71(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_71), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastPosition_72() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LastPosition_72)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastPosition_72() const { return ___m_LastPosition_72; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastPosition_72() { return &___m_LastPosition_72; }
	inline void set_m_LastPosition_72(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastPosition_72 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_73() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_Mesh_73)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_73() const { return ___m_Mesh_73; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_73() { return &___m_Mesh_73; }
	inline void set_m_Mesh_73(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_73), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_74() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_AllowInput_74)); }
	inline bool get_m_AllowInput_74() const { return ___m_AllowInput_74; }
	inline bool* get_address_of_m_AllowInput_74() { return &___m_AllowInput_74; }
	inline void set_m_AllowInput_74(bool value)
	{
		___m_AllowInput_74 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_75() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ShouldActivateNextUpdate_75)); }
	inline bool get_m_ShouldActivateNextUpdate_75() const { return ___m_ShouldActivateNextUpdate_75; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_75() { return &___m_ShouldActivateNextUpdate_75; }
	inline void set_m_ShouldActivateNextUpdate_75(bool value)
	{
		___m_ShouldActivateNextUpdate_75 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_76() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_UpdateDrag_76)); }
	inline bool get_m_UpdateDrag_76() const { return ___m_UpdateDrag_76; }
	inline bool* get_address_of_m_UpdateDrag_76() { return &___m_UpdateDrag_76; }
	inline void set_m_UpdateDrag_76(bool value)
	{
		___m_UpdateDrag_76 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_77() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_DragPositionOutOfBounds_77)); }
	inline bool get_m_DragPositionOutOfBounds_77() const { return ___m_DragPositionOutOfBounds_77; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_77() { return &___m_DragPositionOutOfBounds_77; }
	inline void set_m_DragPositionOutOfBounds_77(bool value)
	{
		___m_DragPositionOutOfBounds_77 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_80() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretVisible_80)); }
	inline bool get_m_CaretVisible_80() const { return ___m_CaretVisible_80; }
	inline bool* get_address_of_m_CaretVisible_80() { return &___m_CaretVisible_80; }
	inline void set_m_CaretVisible_80(bool value)
	{
		___m_CaretVisible_80 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_81() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_BlinkCoroutine_81)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_81() const { return ___m_BlinkCoroutine_81; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_81() { return &___m_BlinkCoroutine_81; }
	inline void set_m_BlinkCoroutine_81(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_81), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_82() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_BlinkStartTime_82)); }
	inline float get_m_BlinkStartTime_82() const { return ___m_BlinkStartTime_82; }
	inline float* get_address_of_m_BlinkStartTime_82() { return &___m_BlinkStartTime_82; }
	inline void set_m_BlinkStartTime_82(float value)
	{
		___m_BlinkStartTime_82 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_83() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_DragCoroutine_83)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_83() const { return ___m_DragCoroutine_83; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_83() { return &___m_DragCoroutine_83; }
	inline void set_m_DragCoroutine_83(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_83), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_84() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OriginalText_84)); }
	inline String_t* get_m_OriginalText_84() const { return ___m_OriginalText_84; }
	inline String_t** get_address_of_m_OriginalText_84() { return &___m_OriginalText_84; }
	inline void set_m_OriginalText_84(String_t* value)
	{
		___m_OriginalText_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_84), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_85() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_WasCanceled_85)); }
	inline bool get_m_WasCanceled_85() const { return ___m_WasCanceled_85; }
	inline bool* get_address_of_m_WasCanceled_85() { return &___m_WasCanceled_85; }
	inline void set_m_WasCanceled_85(bool value)
	{
		___m_WasCanceled_85 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_86() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_HasDoneFocusTransition_86)); }
	inline bool get_m_HasDoneFocusTransition_86() const { return ___m_HasDoneFocusTransition_86; }
	inline bool* get_address_of_m_HasDoneFocusTransition_86() { return &___m_HasDoneFocusTransition_86; }
	inline void set_m_HasDoneFocusTransition_86(bool value)
	{
		___m_HasDoneFocusTransition_86 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_87() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_WaitForSecondsRealtime_87)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_87() const { return ___m_WaitForSecondsRealtime_87; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_87() { return &___m_WaitForSecondsRealtime_87; }
	inline void set_m_WaitForSecondsRealtime_87(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_87), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventCallback_88() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_PreventCallback_88)); }
	inline bool get_m_PreventCallback_88() const { return ___m_PreventCallback_88; }
	inline bool* get_address_of_m_PreventCallback_88() { return &___m_PreventCallback_88; }
	inline void set_m_PreventCallback_88(bool value)
	{
		___m_PreventCallback_88 = value;
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_89() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TouchKeyboardAllowsInPlaceEditing_89)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_89() const { return ___m_TouchKeyboardAllowsInPlaceEditing_89; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_89() { return &___m_TouchKeyboardAllowsInPlaceEditing_89; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_89(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_89 = value;
	}

	inline static int32_t get_offset_of_m_IsTextComponentUpdateRequired_90() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsTextComponentUpdateRequired_90)); }
	inline bool get_m_IsTextComponentUpdateRequired_90() const { return ___m_IsTextComponentUpdateRequired_90; }
	inline bool* get_address_of_m_IsTextComponentUpdateRequired_90() { return &___m_IsTextComponentUpdateRequired_90; }
	inline void set_m_IsTextComponentUpdateRequired_90(bool value)
	{
		___m_IsTextComponentUpdateRequired_90 = value;
	}

	inline static int32_t get_offset_of_m_isLastKeyBackspace_91() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isLastKeyBackspace_91)); }
	inline bool get_m_isLastKeyBackspace_91() const { return ___m_isLastKeyBackspace_91; }
	inline bool* get_address_of_m_isLastKeyBackspace_91() { return &___m_isLastKeyBackspace_91; }
	inline void set_m_isLastKeyBackspace_91(bool value)
	{
		___m_isLastKeyBackspace_91 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownClickStartTime_92() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_PointerDownClickStartTime_92)); }
	inline float get_m_PointerDownClickStartTime_92() const { return ___m_PointerDownClickStartTime_92; }
	inline float* get_address_of_m_PointerDownClickStartTime_92() { return &___m_PointerDownClickStartTime_92; }
	inline void set_m_PointerDownClickStartTime_92(float value)
	{
		___m_PointerDownClickStartTime_92 = value;
	}

	inline static int32_t get_offset_of_m_KeyDownStartTime_93() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_KeyDownStartTime_93)); }
	inline float get_m_KeyDownStartTime_93() const { return ___m_KeyDownStartTime_93; }
	inline float* get_address_of_m_KeyDownStartTime_93() { return &___m_KeyDownStartTime_93; }
	inline void set_m_KeyDownStartTime_93(float value)
	{
		___m_KeyDownStartTime_93 = value;
	}

	inline static int32_t get_offset_of_m_DoubleClickDelay_94() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_DoubleClickDelay_94)); }
	inline float get_m_DoubleClickDelay_94() const { return ___m_DoubleClickDelay_94; }
	inline float* get_address_of_m_DoubleClickDelay_94() { return &___m_DoubleClickDelay_94; }
	inline void set_m_DoubleClickDelay_94(float value)
	{
		___m_DoubleClickDelay_94 = value;
	}

	inline static int32_t get_offset_of_m_IsCompositionActive_96() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsCompositionActive_96)); }
	inline bool get_m_IsCompositionActive_96() const { return ___m_IsCompositionActive_96; }
	inline bool* get_address_of_m_IsCompositionActive_96() { return &___m_IsCompositionActive_96; }
	inline void set_m_IsCompositionActive_96(bool value)
	{
		___m_IsCompositionActive_96 = value;
	}

	inline static int32_t get_offset_of_m_ShouldUpdateIMEWindowPosition_97() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ShouldUpdateIMEWindowPosition_97)); }
	inline bool get_m_ShouldUpdateIMEWindowPosition_97() const { return ___m_ShouldUpdateIMEWindowPosition_97; }
	inline bool* get_address_of_m_ShouldUpdateIMEWindowPosition_97() { return &___m_ShouldUpdateIMEWindowPosition_97; }
	inline void set_m_ShouldUpdateIMEWindowPosition_97(bool value)
	{
		___m_ShouldUpdateIMEWindowPosition_97 = value;
	}

	inline static int32_t get_offset_of_m_PreviousIMEInsertionLine_98() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_PreviousIMEInsertionLine_98)); }
	inline int32_t get_m_PreviousIMEInsertionLine_98() const { return ___m_PreviousIMEInsertionLine_98; }
	inline int32_t* get_address_of_m_PreviousIMEInsertionLine_98() { return &___m_PreviousIMEInsertionLine_98; }
	inline void set_m_PreviousIMEInsertionLine_98(int32_t value)
	{
		___m_PreviousIMEInsertionLine_98 = value;
	}

	inline static int32_t get_offset_of_m_GlobalFontAsset_99() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_GlobalFontAsset_99)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_GlobalFontAsset_99() const { return ___m_GlobalFontAsset_99; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_GlobalFontAsset_99() { return &___m_GlobalFontAsset_99; }
	inline void set_m_GlobalFontAsset_99(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_GlobalFontAsset_99 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlobalFontAsset_99), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocusSelectAll_100() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnFocusSelectAll_100)); }
	inline bool get_m_OnFocusSelectAll_100() const { return ___m_OnFocusSelectAll_100; }
	inline bool* get_address_of_m_OnFocusSelectAll_100() { return &___m_OnFocusSelectAll_100; }
	inline void set_m_OnFocusSelectAll_100(bool value)
	{
		___m_OnFocusSelectAll_100 = value;
	}

	inline static int32_t get_offset_of_m_isSelectAll_101() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isSelectAll_101)); }
	inline bool get_m_isSelectAll_101() const { return ___m_isSelectAll_101; }
	inline bool* get_address_of_m_isSelectAll_101() { return &___m_isSelectAll_101; }
	inline void set_m_isSelectAll_101(bool value)
	{
		___m_isSelectAll_101 = value;
	}

	inline static int32_t get_offset_of_m_ResetOnDeActivation_102() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ResetOnDeActivation_102)); }
	inline bool get_m_ResetOnDeActivation_102() const { return ___m_ResetOnDeActivation_102; }
	inline bool* get_address_of_m_ResetOnDeActivation_102() { return &___m_ResetOnDeActivation_102; }
	inline void set_m_ResetOnDeActivation_102(bool value)
	{
		___m_ResetOnDeActivation_102 = value;
	}

	inline static int32_t get_offset_of_m_SelectionStillActive_103() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_SelectionStillActive_103)); }
	inline bool get_m_SelectionStillActive_103() const { return ___m_SelectionStillActive_103; }
	inline bool* get_address_of_m_SelectionStillActive_103() { return &___m_SelectionStillActive_103; }
	inline void set_m_SelectionStillActive_103(bool value)
	{
		___m_SelectionStillActive_103 = value;
	}

	inline static int32_t get_offset_of_m_ReleaseSelection_104() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ReleaseSelection_104)); }
	inline bool get_m_ReleaseSelection_104() const { return ___m_ReleaseSelection_104; }
	inline bool* get_address_of_m_ReleaseSelection_104() { return &___m_ReleaseSelection_104; }
	inline void set_m_ReleaseSelection_104(bool value)
	{
		___m_ReleaseSelection_104 = value;
	}

	inline static int32_t get_offset_of_m_PreviouslySelectedObject_105() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_PreviouslySelectedObject_105)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PreviouslySelectedObject_105() const { return ___m_PreviouslySelectedObject_105; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PreviouslySelectedObject_105() { return &___m_PreviouslySelectedObject_105; }
	inline void set_m_PreviouslySelectedObject_105(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PreviouslySelectedObject_105 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreviouslySelectedObject_105), (void*)value);
	}

	inline static int32_t get_offset_of_m_RestoreOriginalTextOnEscape_106() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RestoreOriginalTextOnEscape_106)); }
	inline bool get_m_RestoreOriginalTextOnEscape_106() const { return ___m_RestoreOriginalTextOnEscape_106; }
	inline bool* get_address_of_m_RestoreOriginalTextOnEscape_106() { return &___m_RestoreOriginalTextOnEscape_106; }
	inline void set_m_RestoreOriginalTextOnEscape_106(bool value)
	{
		___m_RestoreOriginalTextOnEscape_106 = value;
	}

	inline static int32_t get_offset_of_m_isRichTextEditingAllowed_107() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isRichTextEditingAllowed_107)); }
	inline bool get_m_isRichTextEditingAllowed_107() const { return ___m_isRichTextEditingAllowed_107; }
	inline bool* get_address_of_m_isRichTextEditingAllowed_107() { return &___m_isRichTextEditingAllowed_107; }
	inline void set_m_isRichTextEditingAllowed_107(bool value)
	{
		___m_isRichTextEditingAllowed_107 = value;
	}

	inline static int32_t get_offset_of_m_LineLimit_108() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LineLimit_108)); }
	inline int32_t get_m_LineLimit_108() const { return ___m_LineLimit_108; }
	inline int32_t* get_address_of_m_LineLimit_108() { return &___m_LineLimit_108; }
	inline void set_m_LineLimit_108(int32_t value)
	{
		___m_LineLimit_108 = value;
	}

	inline static int32_t get_offset_of_m_InputValidator_109() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_InputValidator_109)); }
	inline TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D * get_m_InputValidator_109() const { return ___m_InputValidator_109; }
	inline TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D ** get_address_of_m_InputValidator_109() { return &___m_InputValidator_109; }
	inline void set_m_InputValidator_109(TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D * value)
	{
		___m_InputValidator_109 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputValidator_109), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSelected_110() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isSelected_110)); }
	inline bool get_m_isSelected_110() const { return ___m_isSelected_110; }
	inline bool* get_address_of_m_isSelected_110() { return &___m_isSelected_110; }
	inline void set_m_isSelected_110(bool value)
	{
		___m_isSelected_110 = value;
	}

	inline static int32_t get_offset_of_m_IsStringPositionDirty_111() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsStringPositionDirty_111)); }
	inline bool get_m_IsStringPositionDirty_111() const { return ___m_IsStringPositionDirty_111; }
	inline bool* get_address_of_m_IsStringPositionDirty_111() { return &___m_IsStringPositionDirty_111; }
	inline void set_m_IsStringPositionDirty_111(bool value)
	{
		___m_IsStringPositionDirty_111 = value;
	}

	inline static int32_t get_offset_of_m_IsCaretPositionDirty_112() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsCaretPositionDirty_112)); }
	inline bool get_m_IsCaretPositionDirty_112() const { return ___m_IsCaretPositionDirty_112; }
	inline bool* get_address_of_m_IsCaretPositionDirty_112() { return &___m_IsCaretPositionDirty_112; }
	inline void set_m_IsCaretPositionDirty_112(bool value)
	{
		___m_IsCaretPositionDirty_112 = value;
	}

	inline static int32_t get_offset_of_m_forceRectTransformAdjustment_113() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_forceRectTransformAdjustment_113)); }
	inline bool get_m_forceRectTransformAdjustment_113() const { return ___m_forceRectTransformAdjustment_113; }
	inline bool* get_address_of_m_forceRectTransformAdjustment_113() { return &___m_forceRectTransformAdjustment_113; }
	inline void set_m_forceRectTransformAdjustment_113(bool value)
	{
		___m_forceRectTransformAdjustment_113 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_114() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ProcessingEvent_114)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_114() const { return ___m_ProcessingEvent_114; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_114() { return &___m_ProcessingEvent_114; }
	inline void set_m_ProcessingEvent_114(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_114), (void*)value);
	}
};

struct TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59_StaticFields
{
public:
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_259;

public:
	inline static int32_t get_offset_of_m_text_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_37)); }
	inline String_t* get_m_text_37() const { return ___m_text_37; }
	inline String_t** get_address_of_m_text_37() { return &___m_text_37; }
	inline void set_m_text_37(String_t* value)
	{
		___m_text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsTextBackingStringDirty_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextBackingStringDirty_38)); }
	inline bool get_m_IsTextBackingStringDirty_38() const { return ___m_IsTextBackingStringDirty_38; }
	inline bool* get_address_of_m_IsTextBackingStringDirty_38() { return &___m_IsTextBackingStringDirty_38; }
	inline void set_m_IsTextBackingStringDirty_38(bool value)
	{
		___m_IsTextBackingStringDirty_38 = value;
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_39)); }
	inline RuntimeObject* get_m_TextPreprocessor_39() const { return ___m_TextPreprocessor_39; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_39() { return &___m_TextPreprocessor_39; }
	inline void set_m_TextPreprocessor_39(RuntimeObject* value)
	{
		___m_TextPreprocessor_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_40)); }
	inline bool get_m_isRightToLeft_40() const { return ___m_isRightToLeft_40; }
	inline bool* get_address_of_m_isRightToLeft_40() { return &___m_isRightToLeft_40; }
	inline void set_m_isRightToLeft_40(bool value)
	{
		___m_isRightToLeft_40 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_41)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_41() const { return ___m_fontAsset_41; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_41() { return &___m_fontAsset_41; }
	inline void set_m_fontAsset_41(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_42)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_42() const { return ___m_currentFontAsset_42; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_42() { return &___m_currentFontAsset_42; }
	inline void set_m_currentFontAsset_42(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_43)); }
	inline bool get_m_isSDFShader_43() const { return ___m_isSDFShader_43; }
	inline bool* get_address_of_m_isSDFShader_43() { return &___m_isSDFShader_43; }
	inline void set_m_isSDFShader_43(bool value)
	{
		___m_isSDFShader_43 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_44() const { return ___m_sharedMaterial_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_44() { return &___m_sharedMaterial_44; }
	inline void set_m_sharedMaterial_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_45() const { return ___m_currentMaterial_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_45() { return &___m_currentMaterial_45; }
	inline void set_m_currentMaterial_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_49)); }
	inline int32_t get_m_currentMaterialIndex_49() const { return ___m_currentMaterialIndex_49; }
	inline int32_t* get_address_of_m_currentMaterialIndex_49() { return &___m_currentMaterialIndex_49; }
	inline void set_m_currentMaterialIndex_49(int32_t value)
	{
		___m_currentMaterialIndex_49 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_50)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_50() const { return ___m_fontSharedMaterials_50; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_50() { return &___m_fontSharedMaterials_50; }
	inline void set_m_fontSharedMaterials_50(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_51)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_51() const { return ___m_fontMaterial_51; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_51() { return &___m_fontMaterial_51; }
	inline void set_m_fontMaterial_51(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_52)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_52() const { return ___m_fontMaterials_52; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_52() { return &___m_fontMaterials_52; }
	inline void set_m_fontMaterials_52(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_53)); }
	inline bool get_m_isMaterialDirty_53() const { return ___m_isMaterialDirty_53; }
	inline bool* get_address_of_m_isMaterialDirty_53() { return &___m_isMaterialDirty_53; }
	inline void set_m_isMaterialDirty_53(bool value)
	{
		___m_isMaterialDirty_53 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_54)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_54() const { return ___m_fontColor32_54; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_54() { return &___m_fontColor32_54; }
	inline void set_m_fontColor32_54(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_54 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_55)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_55() const { return ___m_fontColor_55; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_55() { return &___m_fontColor_55; }
	inline void set_m_fontColor_55(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_55 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_57)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_57() const { return ___m_underlineColor_57; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_57() { return &___m_underlineColor_57; }
	inline void set_m_underlineColor_57(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_57 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_58)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_58() const { return ___m_strikethroughColor_58; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_58() { return &___m_strikethroughColor_58; }
	inline void set_m_strikethroughColor_58(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_58 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_59)); }
	inline bool get_m_enableVertexGradient_59() const { return ___m_enableVertexGradient_59; }
	inline bool* get_address_of_m_enableVertexGradient_59() { return &___m_enableVertexGradient_59; }
	inline void set_m_enableVertexGradient_59(bool value)
	{
		___m_enableVertexGradient_59 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_60)); }
	inline int32_t get_m_colorMode_60() const { return ___m_colorMode_60; }
	inline int32_t* get_address_of_m_colorMode_60() { return &___m_colorMode_60; }
	inline void set_m_colorMode_60(int32_t value)
	{
		___m_colorMode_60 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_61)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_61() const { return ___m_fontColorGradient_61; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_61() { return &___m_fontColorGradient_61; }
	inline void set_m_fontColorGradient_61(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_61 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_62)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_62() const { return ___m_fontColorGradientPreset_62; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_62() { return &___m_fontColorGradientPreset_62; }
	inline void set_m_fontColorGradientPreset_62(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_63)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_63() const { return ___m_spriteAsset_63; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_63() { return &___m_spriteAsset_63; }
	inline void set_m_spriteAsset_63(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_64)); }
	inline bool get_m_tintAllSprites_64() const { return ___m_tintAllSprites_64; }
	inline bool* get_address_of_m_tintAllSprites_64() { return &___m_tintAllSprites_64; }
	inline void set_m_tintAllSprites_64(bool value)
	{
		___m_tintAllSprites_64 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_65)); }
	inline bool get_m_tintSprite_65() const { return ___m_tintSprite_65; }
	inline bool* get_address_of_m_tintSprite_65() { return &___m_tintSprite_65; }
	inline void set_m_tintSprite_65(bool value)
	{
		___m_tintSprite_65 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_66)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_66() const { return ___m_spriteColor_66; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_66() { return &___m_spriteColor_66; }
	inline void set_m_spriteColor_66(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_66 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_67)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_67() const { return ___m_StyleSheet_67; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_67() { return &___m_StyleSheet_67; }
	inline void set_m_StyleSheet_67(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_68)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_68() const { return ___m_TextStyle_68; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_68() { return &___m_TextStyle_68; }
	inline void set_m_TextStyle_68(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_68), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_69)); }
	inline int32_t get_m_TextStyleHashCode_69() const { return ___m_TextStyleHashCode_69; }
	inline int32_t* get_address_of_m_TextStyleHashCode_69() { return &___m_TextStyleHashCode_69; }
	inline void set_m_TextStyleHashCode_69(int32_t value)
	{
		___m_TextStyleHashCode_69 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_70)); }
	inline bool get_m_overrideHtmlColors_70() const { return ___m_overrideHtmlColors_70; }
	inline bool* get_address_of_m_overrideHtmlColors_70() { return &___m_overrideHtmlColors_70; }
	inline void set_m_overrideHtmlColors_70(bool value)
	{
		___m_overrideHtmlColors_70 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_71)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_71() const { return ___m_faceColor_71; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_71() { return &___m_faceColor_71; }
	inline void set_m_faceColor_71(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_71 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_72)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_72() const { return ___m_outlineColor_72; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_72() { return &___m_outlineColor_72; }
	inline void set_m_outlineColor_72(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_72 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_73)); }
	inline float get_m_outlineWidth_73() const { return ___m_outlineWidth_73; }
	inline float* get_address_of_m_outlineWidth_73() { return &___m_outlineWidth_73; }
	inline void set_m_outlineWidth_73(float value)
	{
		___m_outlineWidth_73 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_74)); }
	inline float get_m_fontSize_74() const { return ___m_fontSize_74; }
	inline float* get_address_of_m_fontSize_74() { return &___m_fontSize_74; }
	inline void set_m_fontSize_74(float value)
	{
		___m_fontSize_74 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_75)); }
	inline float get_m_currentFontSize_75() const { return ___m_currentFontSize_75; }
	inline float* get_address_of_m_currentFontSize_75() { return &___m_currentFontSize_75; }
	inline void set_m_currentFontSize_75(float value)
	{
		___m_currentFontSize_75 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_76)); }
	inline float get_m_fontSizeBase_76() const { return ___m_fontSizeBase_76; }
	inline float* get_address_of_m_fontSizeBase_76() { return &___m_fontSizeBase_76; }
	inline void set_m_fontSizeBase_76(float value)
	{
		___m_fontSizeBase_76 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_77)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_77() const { return ___m_sizeStack_77; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_77() { return &___m_sizeStack_77; }
	inline void set_m_sizeStack_77(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_77 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_77))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_78)); }
	inline int32_t get_m_fontWeight_78() const { return ___m_fontWeight_78; }
	inline int32_t* get_address_of_m_fontWeight_78() { return &___m_fontWeight_78; }
	inline void set_m_fontWeight_78(int32_t value)
	{
		___m_fontWeight_78 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_79)); }
	inline int32_t get_m_FontWeightInternal_79() const { return ___m_FontWeightInternal_79; }
	inline int32_t* get_address_of_m_FontWeightInternal_79() { return &___m_FontWeightInternal_79; }
	inline void set_m_FontWeightInternal_79(int32_t value)
	{
		___m_FontWeightInternal_79 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_80)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_80() const { return ___m_FontWeightStack_80; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_80() { return &___m_FontWeightStack_80; }
	inline void set_m_FontWeightStack_80(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_80 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_80))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_81)); }
	inline bool get_m_enableAutoSizing_81() const { return ___m_enableAutoSizing_81; }
	inline bool* get_address_of_m_enableAutoSizing_81() { return &___m_enableAutoSizing_81; }
	inline void set_m_enableAutoSizing_81(bool value)
	{
		___m_enableAutoSizing_81 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_82)); }
	inline float get_m_maxFontSize_82() const { return ___m_maxFontSize_82; }
	inline float* get_address_of_m_maxFontSize_82() { return &___m_maxFontSize_82; }
	inline void set_m_maxFontSize_82(float value)
	{
		___m_maxFontSize_82 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_83)); }
	inline float get_m_minFontSize_83() const { return ___m_minFontSize_83; }
	inline float* get_address_of_m_minFontSize_83() { return &___m_minFontSize_83; }
	inline void set_m_minFontSize_83(float value)
	{
		___m_minFontSize_83 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_84)); }
	inline int32_t get_m_AutoSizeIterationCount_84() const { return ___m_AutoSizeIterationCount_84; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_84() { return &___m_AutoSizeIterationCount_84; }
	inline void set_m_AutoSizeIterationCount_84(int32_t value)
	{
		___m_AutoSizeIterationCount_84 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_85)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_85() const { return ___m_AutoSizeMaxIterationCount_85; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_85() { return &___m_AutoSizeMaxIterationCount_85; }
	inline void set_m_AutoSizeMaxIterationCount_85(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_85 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_86)); }
	inline bool get_m_IsAutoSizePointSizeSet_86() const { return ___m_IsAutoSizePointSizeSet_86; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_86() { return &___m_IsAutoSizePointSizeSet_86; }
	inline void set_m_IsAutoSizePointSizeSet_86(bool value)
	{
		___m_IsAutoSizePointSizeSet_86 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_87)); }
	inline float get_m_fontSizeMin_87() const { return ___m_fontSizeMin_87; }
	inline float* get_address_of_m_fontSizeMin_87() { return &___m_fontSizeMin_87; }
	inline void set_m_fontSizeMin_87(float value)
	{
		___m_fontSizeMin_87 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_88)); }
	inline float get_m_fontSizeMax_88() const { return ___m_fontSizeMax_88; }
	inline float* get_address_of_m_fontSizeMax_88() { return &___m_fontSizeMax_88; }
	inline void set_m_fontSizeMax_88(float value)
	{
		___m_fontSizeMax_88 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_89)); }
	inline int32_t get_m_fontStyle_89() const { return ___m_fontStyle_89; }
	inline int32_t* get_address_of_m_fontStyle_89() { return &___m_fontStyle_89; }
	inline void set_m_fontStyle_89(int32_t value)
	{
		___m_fontStyle_89 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_90)); }
	inline int32_t get_m_FontStyleInternal_90() const { return ___m_FontStyleInternal_90; }
	inline int32_t* get_address_of_m_FontStyleInternal_90() { return &___m_FontStyleInternal_90; }
	inline void set_m_FontStyleInternal_90(int32_t value)
	{
		___m_FontStyleInternal_90 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_91)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_91() const { return ___m_fontStyleStack_91; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_91() { return &___m_fontStyleStack_91; }
	inline void set_m_fontStyleStack_91(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_91 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_92)); }
	inline bool get_m_isUsingBold_92() const { return ___m_isUsingBold_92; }
	inline bool* get_address_of_m_isUsingBold_92() { return &___m_isUsingBold_92; }
	inline void set_m_isUsingBold_92(bool value)
	{
		___m_isUsingBold_92 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_93)); }
	inline int32_t get_m_HorizontalAlignment_93() const { return ___m_HorizontalAlignment_93; }
	inline int32_t* get_address_of_m_HorizontalAlignment_93() { return &___m_HorizontalAlignment_93; }
	inline void set_m_HorizontalAlignment_93(int32_t value)
	{
		___m_HorizontalAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_94)); }
	inline int32_t get_m_VerticalAlignment_94() const { return ___m_VerticalAlignment_94; }
	inline int32_t* get_address_of_m_VerticalAlignment_94() { return &___m_VerticalAlignment_94; }
	inline void set_m_VerticalAlignment_94(int32_t value)
	{
		___m_VerticalAlignment_94 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_95)); }
	inline int32_t get_m_textAlignment_95() const { return ___m_textAlignment_95; }
	inline int32_t* get_address_of_m_textAlignment_95() { return &___m_textAlignment_95; }
	inline void set_m_textAlignment_95(int32_t value)
	{
		___m_textAlignment_95 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_96)); }
	inline int32_t get_m_lineJustification_96() const { return ___m_lineJustification_96; }
	inline int32_t* get_address_of_m_lineJustification_96() { return &___m_lineJustification_96; }
	inline void set_m_lineJustification_96(int32_t value)
	{
		___m_lineJustification_96 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_97)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_97() const { return ___m_lineJustificationStack_97; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_97() { return &___m_lineJustificationStack_97; }
	inline void set_m_lineJustificationStack_97(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_97 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_97))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_98)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_98() const { return ___m_textContainerLocalCorners_98; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_98() { return &___m_textContainerLocalCorners_98; }
	inline void set_m_textContainerLocalCorners_98(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_98), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_99)); }
	inline float get_m_characterSpacing_99() const { return ___m_characterSpacing_99; }
	inline float* get_address_of_m_characterSpacing_99() { return &___m_characterSpacing_99; }
	inline void set_m_characterSpacing_99(float value)
	{
		___m_characterSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_100)); }
	inline float get_m_cSpacing_100() const { return ___m_cSpacing_100; }
	inline float* get_address_of_m_cSpacing_100() { return &___m_cSpacing_100; }
	inline void set_m_cSpacing_100(float value)
	{
		___m_cSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_101)); }
	inline float get_m_monoSpacing_101() const { return ___m_monoSpacing_101; }
	inline float* get_address_of_m_monoSpacing_101() { return &___m_monoSpacing_101; }
	inline void set_m_monoSpacing_101(float value)
	{
		___m_monoSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_102)); }
	inline float get_m_wordSpacing_102() const { return ___m_wordSpacing_102; }
	inline float* get_address_of_m_wordSpacing_102() { return &___m_wordSpacing_102; }
	inline void set_m_wordSpacing_102(float value)
	{
		___m_wordSpacing_102 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_103)); }
	inline float get_m_lineSpacing_103() const { return ___m_lineSpacing_103; }
	inline float* get_address_of_m_lineSpacing_103() { return &___m_lineSpacing_103; }
	inline void set_m_lineSpacing_103(float value)
	{
		___m_lineSpacing_103 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_104)); }
	inline float get_m_lineSpacingDelta_104() const { return ___m_lineSpacingDelta_104; }
	inline float* get_address_of_m_lineSpacingDelta_104() { return &___m_lineSpacingDelta_104; }
	inline void set_m_lineSpacingDelta_104(float value)
	{
		___m_lineSpacingDelta_104 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_105)); }
	inline float get_m_lineHeight_105() const { return ___m_lineHeight_105; }
	inline float* get_address_of_m_lineHeight_105() { return &___m_lineHeight_105; }
	inline void set_m_lineHeight_105(float value)
	{
		___m_lineHeight_105 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_106)); }
	inline bool get_m_IsDrivenLineSpacing_106() const { return ___m_IsDrivenLineSpacing_106; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_106() { return &___m_IsDrivenLineSpacing_106; }
	inline void set_m_IsDrivenLineSpacing_106(bool value)
	{
		___m_IsDrivenLineSpacing_106 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_107)); }
	inline float get_m_lineSpacingMax_107() const { return ___m_lineSpacingMax_107; }
	inline float* get_address_of_m_lineSpacingMax_107() { return &___m_lineSpacingMax_107; }
	inline void set_m_lineSpacingMax_107(float value)
	{
		___m_lineSpacingMax_107 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_108)); }
	inline float get_m_paragraphSpacing_108() const { return ___m_paragraphSpacing_108; }
	inline float* get_address_of_m_paragraphSpacing_108() { return &___m_paragraphSpacing_108; }
	inline void set_m_paragraphSpacing_108(float value)
	{
		___m_paragraphSpacing_108 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_109)); }
	inline float get_m_charWidthMaxAdj_109() const { return ___m_charWidthMaxAdj_109; }
	inline float* get_address_of_m_charWidthMaxAdj_109() { return &___m_charWidthMaxAdj_109; }
	inline void set_m_charWidthMaxAdj_109(float value)
	{
		___m_charWidthMaxAdj_109 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_110)); }
	inline float get_m_charWidthAdjDelta_110() const { return ___m_charWidthAdjDelta_110; }
	inline float* get_address_of_m_charWidthAdjDelta_110() { return &___m_charWidthAdjDelta_110; }
	inline void set_m_charWidthAdjDelta_110(float value)
	{
		___m_charWidthAdjDelta_110 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_111)); }
	inline bool get_m_enableWordWrapping_111() const { return ___m_enableWordWrapping_111; }
	inline bool* get_address_of_m_enableWordWrapping_111() { return &___m_enableWordWrapping_111; }
	inline void set_m_enableWordWrapping_111(bool value)
	{
		___m_enableWordWrapping_111 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_112)); }
	inline bool get_m_isCharacterWrappingEnabled_112() const { return ___m_isCharacterWrappingEnabled_112; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_112() { return &___m_isCharacterWrappingEnabled_112; }
	inline void set_m_isCharacterWrappingEnabled_112(bool value)
	{
		___m_isCharacterWrappingEnabled_112 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_113)); }
	inline bool get_m_isNonBreakingSpace_113() const { return ___m_isNonBreakingSpace_113; }
	inline bool* get_address_of_m_isNonBreakingSpace_113() { return &___m_isNonBreakingSpace_113; }
	inline void set_m_isNonBreakingSpace_113(bool value)
	{
		___m_isNonBreakingSpace_113 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_114)); }
	inline bool get_m_isIgnoringAlignment_114() const { return ___m_isIgnoringAlignment_114; }
	inline bool* get_address_of_m_isIgnoringAlignment_114() { return &___m_isIgnoringAlignment_114; }
	inline void set_m_isIgnoringAlignment_114(bool value)
	{
		___m_isIgnoringAlignment_114 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_115)); }
	inline float get_m_wordWrappingRatios_115() const { return ___m_wordWrappingRatios_115; }
	inline float* get_address_of_m_wordWrappingRatios_115() { return &___m_wordWrappingRatios_115; }
	inline void set_m_wordWrappingRatios_115(float value)
	{
		___m_wordWrappingRatios_115 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_116)); }
	inline int32_t get_m_overflowMode_116() const { return ___m_overflowMode_116; }
	inline int32_t* get_address_of_m_overflowMode_116() { return &___m_overflowMode_116; }
	inline void set_m_overflowMode_116(int32_t value)
	{
		___m_overflowMode_116 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_117)); }
	inline int32_t get_m_firstOverflowCharacterIndex_117() const { return ___m_firstOverflowCharacterIndex_117; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_117() { return &___m_firstOverflowCharacterIndex_117; }
	inline void set_m_firstOverflowCharacterIndex_117(int32_t value)
	{
		___m_firstOverflowCharacterIndex_117 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_118)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_118() const { return ___m_linkedTextComponent_118; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_118() { return &___m_linkedTextComponent_118; }
	inline void set_m_linkedTextComponent_118(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_118), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_119)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_119() const { return ___parentLinkedComponent_119; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_119() { return &___parentLinkedComponent_119; }
	inline void set_parentLinkedComponent_119(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_119 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_119), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_120)); }
	inline bool get_m_isTextTruncated_120() const { return ___m_isTextTruncated_120; }
	inline bool* get_address_of_m_isTextTruncated_120() { return &___m_isTextTruncated_120; }
	inline void set_m_isTextTruncated_120(bool value)
	{
		___m_isTextTruncated_120 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_121)); }
	inline bool get_m_enableKerning_121() const { return ___m_enableKerning_121; }
	inline bool* get_address_of_m_enableKerning_121() { return &___m_enableKerning_121; }
	inline void set_m_enableKerning_121(bool value)
	{
		___m_enableKerning_121 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_122)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_122() const { return ___m_GlyphHorizontalAdvanceAdjustment_122; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_122() { return &___m_GlyphHorizontalAdvanceAdjustment_122; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_122(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_122 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_123)); }
	inline bool get_m_enableExtraPadding_123() const { return ___m_enableExtraPadding_123; }
	inline bool* get_address_of_m_enableExtraPadding_123() { return &___m_enableExtraPadding_123; }
	inline void set_m_enableExtraPadding_123(bool value)
	{
		___m_enableExtraPadding_123 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_124)); }
	inline bool get_checkPaddingRequired_124() const { return ___checkPaddingRequired_124; }
	inline bool* get_address_of_checkPaddingRequired_124() { return &___checkPaddingRequired_124; }
	inline void set_checkPaddingRequired_124(bool value)
	{
		___checkPaddingRequired_124 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_125)); }
	inline bool get_m_isRichText_125() const { return ___m_isRichText_125; }
	inline bool* get_address_of_m_isRichText_125() { return &___m_isRichText_125; }
	inline void set_m_isRichText_125(bool value)
	{
		___m_isRichText_125 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_126)); }
	inline bool get_m_parseCtrlCharacters_126() const { return ___m_parseCtrlCharacters_126; }
	inline bool* get_address_of_m_parseCtrlCharacters_126() { return &___m_parseCtrlCharacters_126; }
	inline void set_m_parseCtrlCharacters_126(bool value)
	{
		___m_parseCtrlCharacters_126 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_127)); }
	inline bool get_m_isOverlay_127() const { return ___m_isOverlay_127; }
	inline bool* get_address_of_m_isOverlay_127() { return &___m_isOverlay_127; }
	inline void set_m_isOverlay_127(bool value)
	{
		___m_isOverlay_127 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_128)); }
	inline bool get_m_isOrthographic_128() const { return ___m_isOrthographic_128; }
	inline bool* get_address_of_m_isOrthographic_128() { return &___m_isOrthographic_128; }
	inline void set_m_isOrthographic_128(bool value)
	{
		___m_isOrthographic_128 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_129)); }
	inline bool get_m_isCullingEnabled_129() const { return ___m_isCullingEnabled_129; }
	inline bool* get_address_of_m_isCullingEnabled_129() { return &___m_isCullingEnabled_129; }
	inline void set_m_isCullingEnabled_129(bool value)
	{
		___m_isCullingEnabled_129 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_130)); }
	inline bool get_m_isMaskingEnabled_130() const { return ___m_isMaskingEnabled_130; }
	inline bool* get_address_of_m_isMaskingEnabled_130() { return &___m_isMaskingEnabled_130; }
	inline void set_m_isMaskingEnabled_130(bool value)
	{
		___m_isMaskingEnabled_130 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_131)); }
	inline bool get_isMaskUpdateRequired_131() const { return ___isMaskUpdateRequired_131; }
	inline bool* get_address_of_isMaskUpdateRequired_131() { return &___isMaskUpdateRequired_131; }
	inline void set_isMaskUpdateRequired_131(bool value)
	{
		___isMaskUpdateRequired_131 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_132)); }
	inline bool get_m_ignoreCulling_132() const { return ___m_ignoreCulling_132; }
	inline bool* get_address_of_m_ignoreCulling_132() { return &___m_ignoreCulling_132; }
	inline void set_m_ignoreCulling_132(bool value)
	{
		___m_ignoreCulling_132 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_133)); }
	inline int32_t get_m_horizontalMapping_133() const { return ___m_horizontalMapping_133; }
	inline int32_t* get_address_of_m_horizontalMapping_133() { return &___m_horizontalMapping_133; }
	inline void set_m_horizontalMapping_133(int32_t value)
	{
		___m_horizontalMapping_133 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_134)); }
	inline int32_t get_m_verticalMapping_134() const { return ___m_verticalMapping_134; }
	inline int32_t* get_address_of_m_verticalMapping_134() { return &___m_verticalMapping_134; }
	inline void set_m_verticalMapping_134(int32_t value)
	{
		___m_verticalMapping_134 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_135)); }
	inline float get_m_uvLineOffset_135() const { return ___m_uvLineOffset_135; }
	inline float* get_address_of_m_uvLineOffset_135() { return &___m_uvLineOffset_135; }
	inline void set_m_uvLineOffset_135(float value)
	{
		___m_uvLineOffset_135 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_136)); }
	inline int32_t get_m_renderMode_136() const { return ___m_renderMode_136; }
	inline int32_t* get_address_of_m_renderMode_136() { return &___m_renderMode_136; }
	inline void set_m_renderMode_136(int32_t value)
	{
		___m_renderMode_136 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_137)); }
	inline int32_t get_m_geometrySortingOrder_137() const { return ___m_geometrySortingOrder_137; }
	inline int32_t* get_address_of_m_geometrySortingOrder_137() { return &___m_geometrySortingOrder_137; }
	inline void set_m_geometrySortingOrder_137(int32_t value)
	{
		___m_geometrySortingOrder_137 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_138)); }
	inline bool get_m_IsTextObjectScaleStatic_138() const { return ___m_IsTextObjectScaleStatic_138; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_138() { return &___m_IsTextObjectScaleStatic_138; }
	inline void set_m_IsTextObjectScaleStatic_138(bool value)
	{
		___m_IsTextObjectScaleStatic_138 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_139)); }
	inline bool get_m_VertexBufferAutoSizeReduction_139() const { return ___m_VertexBufferAutoSizeReduction_139; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_139() { return &___m_VertexBufferAutoSizeReduction_139; }
	inline void set_m_VertexBufferAutoSizeReduction_139(bool value)
	{
		___m_VertexBufferAutoSizeReduction_139 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_140)); }
	inline int32_t get_m_firstVisibleCharacter_140() const { return ___m_firstVisibleCharacter_140; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_140() { return &___m_firstVisibleCharacter_140; }
	inline void set_m_firstVisibleCharacter_140(int32_t value)
	{
		___m_firstVisibleCharacter_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_141)); }
	inline int32_t get_m_maxVisibleCharacters_141() const { return ___m_maxVisibleCharacters_141; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_141() { return &___m_maxVisibleCharacters_141; }
	inline void set_m_maxVisibleCharacters_141(int32_t value)
	{
		___m_maxVisibleCharacters_141 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_142)); }
	inline int32_t get_m_maxVisibleWords_142() const { return ___m_maxVisibleWords_142; }
	inline int32_t* get_address_of_m_maxVisibleWords_142() { return &___m_maxVisibleWords_142; }
	inline void set_m_maxVisibleWords_142(int32_t value)
	{
		___m_maxVisibleWords_142 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_143)); }
	inline int32_t get_m_maxVisibleLines_143() const { return ___m_maxVisibleLines_143; }
	inline int32_t* get_address_of_m_maxVisibleLines_143() { return &___m_maxVisibleLines_143; }
	inline void set_m_maxVisibleLines_143(int32_t value)
	{
		___m_maxVisibleLines_143 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_144)); }
	inline bool get_m_useMaxVisibleDescender_144() const { return ___m_useMaxVisibleDescender_144; }
	inline bool* get_address_of_m_useMaxVisibleDescender_144() { return &___m_useMaxVisibleDescender_144; }
	inline void set_m_useMaxVisibleDescender_144(bool value)
	{
		___m_useMaxVisibleDescender_144 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_145)); }
	inline int32_t get_m_pageToDisplay_145() const { return ___m_pageToDisplay_145; }
	inline int32_t* get_address_of_m_pageToDisplay_145() { return &___m_pageToDisplay_145; }
	inline void set_m_pageToDisplay_145(int32_t value)
	{
		___m_pageToDisplay_145 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_146)); }
	inline bool get_m_isNewPage_146() const { return ___m_isNewPage_146; }
	inline bool* get_address_of_m_isNewPage_146() { return &___m_isNewPage_146; }
	inline void set_m_isNewPage_146(bool value)
	{
		___m_isNewPage_146 = value;
	}

	inline static int32_t get_offset_of_m_margin_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_147)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_147() const { return ___m_margin_147; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_147() { return &___m_margin_147; }
	inline void set_m_margin_147(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_147 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_148)); }
	inline float get_m_marginLeft_148() const { return ___m_marginLeft_148; }
	inline float* get_address_of_m_marginLeft_148() { return &___m_marginLeft_148; }
	inline void set_m_marginLeft_148(float value)
	{
		___m_marginLeft_148 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_149)); }
	inline float get_m_marginRight_149() const { return ___m_marginRight_149; }
	inline float* get_address_of_m_marginRight_149() { return &___m_marginRight_149; }
	inline void set_m_marginRight_149(float value)
	{
		___m_marginRight_149 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_150)); }
	inline float get_m_marginWidth_150() const { return ___m_marginWidth_150; }
	inline float* get_address_of_m_marginWidth_150() { return &___m_marginWidth_150; }
	inline void set_m_marginWidth_150(float value)
	{
		___m_marginWidth_150 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_151)); }
	inline float get_m_marginHeight_151() const { return ___m_marginHeight_151; }
	inline float* get_address_of_m_marginHeight_151() { return &___m_marginHeight_151; }
	inline void set_m_marginHeight_151(float value)
	{
		___m_marginHeight_151 = value;
	}

	inline static int32_t get_offset_of_m_width_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_152)); }
	inline float get_m_width_152() const { return ___m_width_152; }
	inline float* get_address_of_m_width_152() { return &___m_width_152; }
	inline void set_m_width_152(float value)
	{
		___m_width_152 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_153)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_153() const { return ___m_textInfo_153; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_153() { return &___m_textInfo_153; }
	inline void set_m_textInfo_153(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_153 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_153), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_154)); }
	inline bool get_m_havePropertiesChanged_154() const { return ___m_havePropertiesChanged_154; }
	inline bool* get_address_of_m_havePropertiesChanged_154() { return &___m_havePropertiesChanged_154; }
	inline void set_m_havePropertiesChanged_154(bool value)
	{
		___m_havePropertiesChanged_154 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_155)); }
	inline bool get_m_isUsingLegacyAnimationComponent_155() const { return ___m_isUsingLegacyAnimationComponent_155; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_155() { return &___m_isUsingLegacyAnimationComponent_155; }
	inline void set_m_isUsingLegacyAnimationComponent_155(bool value)
	{
		___m_isUsingLegacyAnimationComponent_155 = value;
	}

	inline static int32_t get_offset_of_m_transform_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_156)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_156() const { return ___m_transform_156; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_156() { return &___m_transform_156; }
	inline void set_m_transform_156(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_156), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_157)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_157() const { return ___m_rectTransform_157; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_157() { return &___m_rectTransform_157; }
	inline void set_m_rectTransform_157(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_157 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_157), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_158)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_158() const { return ___m_PreviousRectTransformSize_158; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_158() { return &___m_PreviousRectTransformSize_158; }
	inline void set_m_PreviousRectTransformSize_158(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_158 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_159)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_159() const { return ___m_PreviousPivotPosition_159; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_159() { return &___m_PreviousPivotPosition_159; }
	inline void set_m_PreviousPivotPosition_159(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_159 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_160)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_160() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_160; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_160() { return &___U3CautoSizeTextContainerU3Ek__BackingField_160; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_160(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_160 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_161)); }
	inline bool get_m_autoSizeTextContainer_161() const { return ___m_autoSizeTextContainer_161; }
	inline bool* get_address_of_m_autoSizeTextContainer_161() { return &___m_autoSizeTextContainer_161; }
	inline void set_m_autoSizeTextContainer_161(bool value)
	{
		___m_autoSizeTextContainer_161 = value;
	}

	inline static int32_t get_offset_of_m_mesh_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_162)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_162() const { return ___m_mesh_162; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_162() { return &___m_mesh_162; }
	inline void set_m_mesh_162(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_162), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_163)); }
	inline bool get_m_isVolumetricText_163() const { return ___m_isVolumetricText_163; }
	inline bool* get_address_of_m_isVolumetricText_163() { return &___m_isVolumetricText_163; }
	inline void set_m_isVolumetricText_163(bool value)
	{
		___m_isVolumetricText_163 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_166)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_166() const { return ___OnPreRenderText_166; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_166() { return &___OnPreRenderText_166; }
	inline void set_OnPreRenderText_166(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_166 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_166), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_167)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_167() const { return ___m_spriteAnimator_167; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_167() { return &___m_spriteAnimator_167; }
	inline void set_m_spriteAnimator_167(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_167 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_167), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_168)); }
	inline float get_m_flexibleHeight_168() const { return ___m_flexibleHeight_168; }
	inline float* get_address_of_m_flexibleHeight_168() { return &___m_flexibleHeight_168; }
	inline void set_m_flexibleHeight_168(float value)
	{
		___m_flexibleHeight_168 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_169)); }
	inline float get_m_flexibleWidth_169() const { return ___m_flexibleWidth_169; }
	inline float* get_address_of_m_flexibleWidth_169() { return &___m_flexibleWidth_169; }
	inline void set_m_flexibleWidth_169(float value)
	{
		___m_flexibleWidth_169 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_170)); }
	inline float get_m_minWidth_170() const { return ___m_minWidth_170; }
	inline float* get_address_of_m_minWidth_170() { return &___m_minWidth_170; }
	inline void set_m_minWidth_170(float value)
	{
		___m_minWidth_170 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_171)); }
	inline float get_m_minHeight_171() const { return ___m_minHeight_171; }
	inline float* get_address_of_m_minHeight_171() { return &___m_minHeight_171; }
	inline void set_m_minHeight_171(float value)
	{
		___m_minHeight_171 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_172)); }
	inline float get_m_maxWidth_172() const { return ___m_maxWidth_172; }
	inline float* get_address_of_m_maxWidth_172() { return &___m_maxWidth_172; }
	inline void set_m_maxWidth_172(float value)
	{
		___m_maxWidth_172 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_173)); }
	inline float get_m_maxHeight_173() const { return ___m_maxHeight_173; }
	inline float* get_address_of_m_maxHeight_173() { return &___m_maxHeight_173; }
	inline void set_m_maxHeight_173(float value)
	{
		___m_maxHeight_173 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_174)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_174() const { return ___m_LayoutElement_174; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_174() { return &___m_LayoutElement_174; }
	inline void set_m_LayoutElement_174(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_174 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_174), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_175)); }
	inline float get_m_preferredWidth_175() const { return ___m_preferredWidth_175; }
	inline float* get_address_of_m_preferredWidth_175() { return &___m_preferredWidth_175; }
	inline void set_m_preferredWidth_175(float value)
	{
		___m_preferredWidth_175 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_176)); }
	inline float get_m_renderedWidth_176() const { return ___m_renderedWidth_176; }
	inline float* get_address_of_m_renderedWidth_176() { return &___m_renderedWidth_176; }
	inline void set_m_renderedWidth_176(float value)
	{
		___m_renderedWidth_176 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_177)); }
	inline bool get_m_isPreferredWidthDirty_177() const { return ___m_isPreferredWidthDirty_177; }
	inline bool* get_address_of_m_isPreferredWidthDirty_177() { return &___m_isPreferredWidthDirty_177; }
	inline void set_m_isPreferredWidthDirty_177(bool value)
	{
		___m_isPreferredWidthDirty_177 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_178)); }
	inline float get_m_preferredHeight_178() const { return ___m_preferredHeight_178; }
	inline float* get_address_of_m_preferredHeight_178() { return &___m_preferredHeight_178; }
	inline void set_m_preferredHeight_178(float value)
	{
		___m_preferredHeight_178 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_179)); }
	inline float get_m_renderedHeight_179() const { return ___m_renderedHeight_179; }
	inline float* get_address_of_m_renderedHeight_179() { return &___m_renderedHeight_179; }
	inline void set_m_renderedHeight_179(float value)
	{
		___m_renderedHeight_179 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_180)); }
	inline bool get_m_isPreferredHeightDirty_180() const { return ___m_isPreferredHeightDirty_180; }
	inline bool* get_address_of_m_isPreferredHeightDirty_180() { return &___m_isPreferredHeightDirty_180; }
	inline void set_m_isPreferredHeightDirty_180(bool value)
	{
		___m_isPreferredHeightDirty_180 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_181)); }
	inline bool get_m_isCalculatingPreferredValues_181() const { return ___m_isCalculatingPreferredValues_181; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_181() { return &___m_isCalculatingPreferredValues_181; }
	inline void set_m_isCalculatingPreferredValues_181(bool value)
	{
		___m_isCalculatingPreferredValues_181 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_182)); }
	inline int32_t get_m_layoutPriority_182() const { return ___m_layoutPriority_182; }
	inline int32_t* get_address_of_m_layoutPriority_182() { return &___m_layoutPriority_182; }
	inline void set_m_layoutPriority_182(int32_t value)
	{
		___m_layoutPriority_182 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_183)); }
	inline bool get_m_isLayoutDirty_183() const { return ___m_isLayoutDirty_183; }
	inline bool* get_address_of_m_isLayoutDirty_183() { return &___m_isLayoutDirty_183; }
	inline void set_m_isLayoutDirty_183(bool value)
	{
		___m_isLayoutDirty_183 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_184)); }
	inline bool get_m_isAwake_184() const { return ___m_isAwake_184; }
	inline bool* get_address_of_m_isAwake_184() { return &___m_isAwake_184; }
	inline void set_m_isAwake_184(bool value)
	{
		___m_isAwake_184 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_185)); }
	inline bool get_m_isWaitingOnResourceLoad_185() const { return ___m_isWaitingOnResourceLoad_185; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_185() { return &___m_isWaitingOnResourceLoad_185; }
	inline void set_m_isWaitingOnResourceLoad_185(bool value)
	{
		___m_isWaitingOnResourceLoad_185 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_186)); }
	inline int32_t get_m_inputSource_186() const { return ___m_inputSource_186; }
	inline int32_t* get_address_of_m_inputSource_186() { return &___m_inputSource_186; }
	inline void set_m_inputSource_186(int32_t value)
	{
		___m_inputSource_186 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_187)); }
	inline float get_m_fontScaleMultiplier_187() const { return ___m_fontScaleMultiplier_187; }
	inline float* get_address_of_m_fontScaleMultiplier_187() { return &___m_fontScaleMultiplier_187; }
	inline void set_m_fontScaleMultiplier_187(float value)
	{
		___m_fontScaleMultiplier_187 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_191)); }
	inline float get_tag_LineIndent_191() const { return ___tag_LineIndent_191; }
	inline float* get_address_of_tag_LineIndent_191() { return &___tag_LineIndent_191; }
	inline void set_tag_LineIndent_191(float value)
	{
		___tag_LineIndent_191 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_192)); }
	inline float get_tag_Indent_192() const { return ___tag_Indent_192; }
	inline float* get_address_of_tag_Indent_192() { return &___tag_Indent_192; }
	inline void set_tag_Indent_192(float value)
	{
		___tag_Indent_192 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_193)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_193() const { return ___m_indentStack_193; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_193() { return &___m_indentStack_193; }
	inline void set_m_indentStack_193(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_193 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_193))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_194)); }
	inline bool get_tag_NoParsing_194() const { return ___tag_NoParsing_194; }
	inline bool* get_address_of_tag_NoParsing_194() { return &___tag_NoParsing_194; }
	inline void set_tag_NoParsing_194(bool value)
	{
		___tag_NoParsing_194 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_195)); }
	inline bool get_m_isParsingText_195() const { return ___m_isParsingText_195; }
	inline bool* get_address_of_m_isParsingText_195() { return &___m_isParsingText_195; }
	inline void set_m_isParsingText_195(bool value)
	{
		___m_isParsingText_195 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_196)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_196() const { return ___m_FXMatrix_196; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_196() { return &___m_FXMatrix_196; }
	inline void set_m_FXMatrix_196(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_196 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_197)); }
	inline bool get_m_isFXMatrixSet_197() const { return ___m_isFXMatrixSet_197; }
	inline bool* get_address_of_m_isFXMatrixSet_197() { return &___m_isFXMatrixSet_197; }
	inline void set_m_isFXMatrixSet_197(bool value)
	{
		___m_isFXMatrixSet_197 = value;
	}

	inline static int32_t get_offset_of_m_TextProcessingArray_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextProcessingArray_198)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_TextProcessingArray_198() const { return ___m_TextProcessingArray_198; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_TextProcessingArray_198() { return &___m_TextProcessingArray_198; }
	inline void set_m_TextProcessingArray_198(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_TextProcessingArray_198 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextProcessingArray_198), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalTextProcessingArraySize_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalTextProcessingArraySize_199)); }
	inline int32_t get_m_InternalTextProcessingArraySize_199() const { return ___m_InternalTextProcessingArraySize_199; }
	inline int32_t* get_address_of_m_InternalTextProcessingArraySize_199() { return &___m_InternalTextProcessingArraySize_199; }
	inline void set_m_InternalTextProcessingArraySize_199(int32_t value)
	{
		___m_InternalTextProcessingArraySize_199 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_200)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_200() const { return ___m_internalCharacterInfo_200; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_200() { return &___m_internalCharacterInfo_200; }
	inline void set_m_internalCharacterInfo_200(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_200 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_200), (void*)value);
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_201)); }
	inline int32_t get_m_totalCharacterCount_201() const { return ___m_totalCharacterCount_201; }
	inline int32_t* get_address_of_m_totalCharacterCount_201() { return &___m_totalCharacterCount_201; }
	inline void set_m_totalCharacterCount_201(int32_t value)
	{
		___m_totalCharacterCount_201 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_208)); }
	inline int32_t get_m_characterCount_208() const { return ___m_characterCount_208; }
	inline int32_t* get_address_of_m_characterCount_208() { return &___m_characterCount_208; }
	inline void set_m_characterCount_208(int32_t value)
	{
		___m_characterCount_208 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_209)); }
	inline int32_t get_m_firstCharacterOfLine_209() const { return ___m_firstCharacterOfLine_209; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_209() { return &___m_firstCharacterOfLine_209; }
	inline void set_m_firstCharacterOfLine_209(int32_t value)
	{
		___m_firstCharacterOfLine_209 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_210)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_210() const { return ___m_firstVisibleCharacterOfLine_210; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_210() { return &___m_firstVisibleCharacterOfLine_210; }
	inline void set_m_firstVisibleCharacterOfLine_210(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_211)); }
	inline int32_t get_m_lastCharacterOfLine_211() const { return ___m_lastCharacterOfLine_211; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_211() { return &___m_lastCharacterOfLine_211; }
	inline void set_m_lastCharacterOfLine_211(int32_t value)
	{
		___m_lastCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_212)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_212() const { return ___m_lastVisibleCharacterOfLine_212; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_212() { return &___m_lastVisibleCharacterOfLine_212; }
	inline void set_m_lastVisibleCharacterOfLine_212(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_212 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_213)); }
	inline int32_t get_m_lineNumber_213() const { return ___m_lineNumber_213; }
	inline int32_t* get_address_of_m_lineNumber_213() { return &___m_lineNumber_213; }
	inline void set_m_lineNumber_213(int32_t value)
	{
		___m_lineNumber_213 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_214)); }
	inline int32_t get_m_lineVisibleCharacterCount_214() const { return ___m_lineVisibleCharacterCount_214; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_214() { return &___m_lineVisibleCharacterCount_214; }
	inline void set_m_lineVisibleCharacterCount_214(int32_t value)
	{
		___m_lineVisibleCharacterCount_214 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_215)); }
	inline int32_t get_m_pageNumber_215() const { return ___m_pageNumber_215; }
	inline int32_t* get_address_of_m_pageNumber_215() { return &___m_pageNumber_215; }
	inline void set_m_pageNumber_215(int32_t value)
	{
		___m_pageNumber_215 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_216)); }
	inline float get_m_PageAscender_216() const { return ___m_PageAscender_216; }
	inline float* get_address_of_m_PageAscender_216() { return &___m_PageAscender_216; }
	inline void set_m_PageAscender_216(float value)
	{
		___m_PageAscender_216 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_217)); }
	inline float get_m_maxTextAscender_217() const { return ___m_maxTextAscender_217; }
	inline float* get_address_of_m_maxTextAscender_217() { return &___m_maxTextAscender_217; }
	inline void set_m_maxTextAscender_217(float value)
	{
		___m_maxTextAscender_217 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_218)); }
	inline float get_m_maxCapHeight_218() const { return ___m_maxCapHeight_218; }
	inline float* get_address_of_m_maxCapHeight_218() { return &___m_maxCapHeight_218; }
	inline void set_m_maxCapHeight_218(float value)
	{
		___m_maxCapHeight_218 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_219)); }
	inline float get_m_ElementAscender_219() const { return ___m_ElementAscender_219; }
	inline float* get_address_of_m_ElementAscender_219() { return &___m_ElementAscender_219; }
	inline void set_m_ElementAscender_219(float value)
	{
		___m_ElementAscender_219 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_220)); }
	inline float get_m_ElementDescender_220() const { return ___m_ElementDescender_220; }
	inline float* get_address_of_m_ElementDescender_220() { return &___m_ElementDescender_220; }
	inline void set_m_ElementDescender_220(float value)
	{
		___m_ElementDescender_220 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_221)); }
	inline float get_m_maxLineAscender_221() const { return ___m_maxLineAscender_221; }
	inline float* get_address_of_m_maxLineAscender_221() { return &___m_maxLineAscender_221; }
	inline void set_m_maxLineAscender_221(float value)
	{
		___m_maxLineAscender_221 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_222)); }
	inline float get_m_maxLineDescender_222() const { return ___m_maxLineDescender_222; }
	inline float* get_address_of_m_maxLineDescender_222() { return &___m_maxLineDescender_222; }
	inline void set_m_maxLineDescender_222(float value)
	{
		___m_maxLineDescender_222 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_223)); }
	inline float get_m_startOfLineAscender_223() const { return ___m_startOfLineAscender_223; }
	inline float* get_address_of_m_startOfLineAscender_223() { return &___m_startOfLineAscender_223; }
	inline void set_m_startOfLineAscender_223(float value)
	{
		___m_startOfLineAscender_223 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_224)); }
	inline float get_m_startOfLineDescender_224() const { return ___m_startOfLineDescender_224; }
	inline float* get_address_of_m_startOfLineDescender_224() { return &___m_startOfLineDescender_224; }
	inline void set_m_startOfLineDescender_224(float value)
	{
		___m_startOfLineDescender_224 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_225)); }
	inline float get_m_lineOffset_225() const { return ___m_lineOffset_225; }
	inline float* get_address_of_m_lineOffset_225() { return &___m_lineOffset_225; }
	inline void set_m_lineOffset_225(float value)
	{
		___m_lineOffset_225 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_226)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_226() const { return ___m_meshExtents_226; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_226() { return &___m_meshExtents_226; }
	inline void set_m_meshExtents_226(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_226 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_227)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_227() const { return ___m_htmlColor_227; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_227() { return &___m_htmlColor_227; }
	inline void set_m_htmlColor_227(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_227 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_228)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_228() const { return ___m_colorStack_228; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_228() { return &___m_colorStack_228; }
	inline void set_m_colorStack_228(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_228 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_228))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_229)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_229() const { return ___m_underlineColorStack_229; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_229() { return &___m_underlineColorStack_229; }
	inline void set_m_underlineColorStack_229(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_230)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_230() const { return ___m_strikethroughColorStack_230; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_230() { return &___m_strikethroughColorStack_230; }
	inline void set_m_strikethroughColorStack_230(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_231)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_231() const { return ___m_HighlightStateStack_231; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_231() { return &___m_HighlightStateStack_231; }
	inline void set_m_HighlightStateStack_231(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_231))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_232)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_232() const { return ___m_colorGradientPreset_232; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_232() { return &___m_colorGradientPreset_232; }
	inline void set_m_colorGradientPreset_232(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_232 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_232), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_233)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_233() const { return ___m_colorGradientStack_233; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_233() { return &___m_colorGradientStack_233; }
	inline void set_m_colorGradientStack_233(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_233 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_233))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_233))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_234)); }
	inline bool get_m_colorGradientPresetIsTinted_234() const { return ___m_colorGradientPresetIsTinted_234; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_234() { return &___m_colorGradientPresetIsTinted_234; }
	inline void set_m_colorGradientPresetIsTinted_234(bool value)
	{
		___m_colorGradientPresetIsTinted_234 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_235)); }
	inline float get_m_tabSpacing_235() const { return ___m_tabSpacing_235; }
	inline float* get_address_of_m_tabSpacing_235() { return &___m_tabSpacing_235; }
	inline void set_m_tabSpacing_235(float value)
	{
		___m_tabSpacing_235 = value;
	}

	inline static int32_t get_offset_of_m_spacing_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_236)); }
	inline float get_m_spacing_236() const { return ___m_spacing_236; }
	inline float* get_address_of_m_spacing_236() { return &___m_spacing_236; }
	inline void set_m_spacing_236(float value)
	{
		___m_spacing_236 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_237)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_237() const { return ___m_TextStyleStacks_237; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_237() { return &___m_TextStyleStacks_237; }
	inline void set_m_TextStyleStacks_237(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_237 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_237), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_238)); }
	inline int32_t get_m_TextStyleStackDepth_238() const { return ___m_TextStyleStackDepth_238; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_238() { return &___m_TextStyleStackDepth_238; }
	inline void set_m_TextStyleStackDepth_238(int32_t value)
	{
		___m_TextStyleStackDepth_238 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_239)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_239() const { return ___m_ItalicAngleStack_239; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_239() { return &___m_ItalicAngleStack_239; }
	inline void set_m_ItalicAngleStack_239(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_239 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_239))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_240)); }
	inline int32_t get_m_ItalicAngle_240() const { return ___m_ItalicAngle_240; }
	inline int32_t* get_address_of_m_ItalicAngle_240() { return &___m_ItalicAngle_240; }
	inline void set_m_ItalicAngle_240(int32_t value)
	{
		___m_ItalicAngle_240 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_241)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_241() const { return ___m_actionStack_241; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_241() { return &___m_actionStack_241; }
	inline void set_m_actionStack_241(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_241 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_241))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_242)); }
	inline float get_m_padding_242() const { return ___m_padding_242; }
	inline float* get_address_of_m_padding_242() { return &___m_padding_242; }
	inline void set_m_padding_242(float value)
	{
		___m_padding_242 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_243)); }
	inline float get_m_baselineOffset_243() const { return ___m_baselineOffset_243; }
	inline float* get_address_of_m_baselineOffset_243() { return &___m_baselineOffset_243; }
	inline void set_m_baselineOffset_243(float value)
	{
		___m_baselineOffset_243 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_244)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_244() const { return ___m_baselineOffsetStack_244; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_244() { return &___m_baselineOffsetStack_244; }
	inline void set_m_baselineOffsetStack_244(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_244 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_244))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_245)); }
	inline float get_m_xAdvance_245() const { return ___m_xAdvance_245; }
	inline float* get_address_of_m_xAdvance_245() { return &___m_xAdvance_245; }
	inline void set_m_xAdvance_245(float value)
	{
		___m_xAdvance_245 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_246)); }
	inline int32_t get_m_textElementType_246() const { return ___m_textElementType_246; }
	inline int32_t* get_address_of_m_textElementType_246() { return &___m_textElementType_246; }
	inline void set_m_textElementType_246(int32_t value)
	{
		___m_textElementType_246 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_247)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_247() const { return ___m_cached_TextElement_247; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_247() { return &___m_cached_TextElement_247; }
	inline void set_m_cached_TextElement_247(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_247 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_247), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_248)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_248() const { return ___m_Ellipsis_248; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_248() { return &___m_Ellipsis_248; }
	inline void set_m_Ellipsis_248(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_248 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_248))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_248))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_248))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_249)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_249() const { return ___m_Underline_249; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_249() { return &___m_Underline_249; }
	inline void set_m_Underline_249(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_249 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_249))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_249))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_249))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_250)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_250() const { return ___m_defaultSpriteAsset_250; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_250() { return &___m_defaultSpriteAsset_250; }
	inline void set_m_defaultSpriteAsset_250(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_250 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_250), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_251)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_251() const { return ___m_currentSpriteAsset_251; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_251() { return &___m_currentSpriteAsset_251; }
	inline void set_m_currentSpriteAsset_251(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_251 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_251), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_252)); }
	inline int32_t get_m_spriteCount_252() const { return ___m_spriteCount_252; }
	inline int32_t* get_address_of_m_spriteCount_252() { return &___m_spriteCount_252; }
	inline void set_m_spriteCount_252(int32_t value)
	{
		___m_spriteCount_252 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_253)); }
	inline int32_t get_m_spriteIndex_253() const { return ___m_spriteIndex_253; }
	inline int32_t* get_address_of_m_spriteIndex_253() { return &___m_spriteIndex_253; }
	inline void set_m_spriteIndex_253(int32_t value)
	{
		___m_spriteIndex_253 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_254)); }
	inline int32_t get_m_spriteAnimationID_254() const { return ___m_spriteAnimationID_254; }
	inline int32_t* get_address_of_m_spriteAnimationID_254() { return &___m_spriteAnimationID_254; }
	inline void set_m_spriteAnimationID_254(int32_t value)
	{
		___m_spriteAnimationID_254 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_257)); }
	inline bool get_m_ignoreActiveState_257() const { return ___m_ignoreActiveState_257; }
	inline bool* get_address_of_m_ignoreActiveState_257() { return &___m_ignoreActiveState_257; }
	inline void set_m_ignoreActiveState_257(bool value)
	{
		___m_ignoreActiveState_257 = value;
	}

	inline static int32_t get_offset_of_m_TextBackingArray_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextBackingArray_258)); }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  get_m_TextBackingArray_258() const { return ___m_TextBackingArray_258; }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B * get_address_of_m_TextBackingArray_258() { return &___m_TextBackingArray_258; }
	inline void set_m_TextBackingArray_258(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  value)
	{
		___m_TextBackingArray_258 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextBackingArray_258))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_k_Power_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_259)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_259() const { return ___k_Power_259; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_259() { return &___k_Power_259; }
	inline void set_k_Power_259(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_259 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_259), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;

public:
	inline static int32_t get_offset_of_m_materialReferences_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferences_46)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_46() const { return ___m_materialReferences_46; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_46() { return &___m_materialReferences_46; }
	inline void set_m_materialReferences_46(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceIndexLookup_47)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_47() const { return ___m_materialReferenceIndexLookup_47; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_47() { return &___m_materialReferenceIndexLookup_47; }
	inline void set_m_materialReferenceIndexLookup_47(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceStack_48)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_48() const { return ___m_materialReferenceStack_48; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_48() { return &___m_materialReferenceStack_48; }
	inline void set_m_materialReferenceStack_48(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_48))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_48))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_48))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_48))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_colorWhite_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_56() const { return ___s_colorWhite_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_56() { return &___s_colorWhite_56; }
	inline void set_s_colorWhite_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_56 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_164)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_164() const { return ___OnFontAssetRequest_164; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_164() { return &___OnFontAssetRequest_164; }
	inline void set_OnFontAssetRequest_164(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_164), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_165)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_165() const { return ___OnSpriteAssetRequest_165; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_165() { return &___OnSpriteAssetRequest_165; }
	inline void set_OnSpriteAssetRequest_165(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_htmlTag_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_htmlTag_188)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_188() const { return ___m_htmlTag_188; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_188() { return &___m_htmlTag_188; }
	inline void set_m_htmlTag_188(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_xmlAttribute_189)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_189() const { return ___m_xmlAttribute_189; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_189() { return &___m_xmlAttribute_189; }
	inline void set_m_xmlAttribute_189(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_attributeParameterValues_190)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_190() const { return ___m_attributeParameterValues_190; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_190() { return &___m_attributeParameterValues_190; }
	inline void set_m_attributeParameterValues_190(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_190 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_190), (void*)value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedWordWrapState_202)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_202() const { return ___m_SavedWordWrapState_202; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_202() { return &___m_SavedWordWrapState_202; }
	inline void set_m_SavedWordWrapState_202(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_202))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_202))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLineState_203)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_203() const { return ___m_SavedLineState_203; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_203() { return &___m_SavedLineState_203; }
	inline void set_m_SavedLineState_203(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_203))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_203))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedEllipsisState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_204() const { return ___m_SavedEllipsisState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_204() { return &___m_SavedEllipsisState_204; }
	inline void set_m_SavedEllipsisState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_204))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_204))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLastValidState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_205() const { return ___m_SavedLastValidState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_205() { return &___m_SavedLastValidState_205; }
	inline void set_m_SavedLastValidState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_205))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_205))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedSoftLineBreakState_206)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_206() const { return ___m_SavedSoftLineBreakState_206; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_206() { return &___m_SavedSoftLineBreakState_206; }
	inline void set_m_SavedSoftLineBreakState_206(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_206))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_206))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_206))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_EllipsisInsertionCandidateStack_207)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_207() const { return ___m_EllipsisInsertionCandidateStack_207; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_207() { return &___m_EllipsisInsertionCandidateStack_207; }
	inline void set_m_EllipsisInsertionCandidateStack_207(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_207 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_207))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_207))->___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_k_ParseTextMarker_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_ParseTextMarker_255)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseTextMarker_255() const { return ___k_ParseTextMarker_255; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseTextMarker_255() { return &___k_ParseTextMarker_255; }
	inline void set_k_ParseTextMarker_255(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseTextMarker_255 = value;
	}

	inline static int32_t get_offset_of_k_InsertNewLineMarker_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_InsertNewLineMarker_256)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_InsertNewLineMarker_256() const { return ___k_InsertNewLineMarker_256; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_InsertNewLineMarker_256() { return &___k_InsertNewLineMarker_256; }
	inline void set_k_InsertNewLineMarker_256(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_InsertNewLineMarker_256 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_260() const { return ___k_LargePositiveVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_260() { return &___k_LargePositiveVector2_260; }
	inline void set_k_LargePositiveVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_261)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_261() const { return ___k_LargeNegativeVector2_261; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_261() { return &___k_LargeNegativeVector2_261; }
	inline void set_k_LargeNegativeVector2_261(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_261 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_262)); }
	inline float get_k_LargePositiveFloat_262() const { return ___k_LargePositiveFloat_262; }
	inline float* get_address_of_k_LargePositiveFloat_262() { return &___k_LargePositiveFloat_262; }
	inline void set_k_LargePositiveFloat_262(float value)
	{
		___k_LargePositiveFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_263)); }
	inline float get_k_LargeNegativeFloat_263() const { return ___k_LargeNegativeFloat_263; }
	inline float* get_address_of_k_LargeNegativeFloat_263() { return &___k_LargeNegativeFloat_263; }
	inline void set_k_LargeNegativeFloat_263(float value)
	{
		___k_LargeNegativeFloat_263 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_264)); }
	inline int32_t get_k_LargePositiveInt_264() const { return ___k_LargePositiveInt_264; }
	inline int32_t* get_address_of_k_LargePositiveInt_264() { return &___k_LargePositiveInt_264; }
	inline void set_k_LargePositiveInt_264(int32_t value)
	{
		___k_LargePositiveInt_264 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_265() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_265)); }
	inline int32_t get_k_LargeNegativeInt_265() const { return ___k_LargeNegativeInt_265; }
	inline int32_t* get_address_of_k_LargeNegativeInt_265() { return &___k_LargeNegativeInt_265; }
	inline void set_k_LargeNegativeInt_265(int32_t value)
	{
		___k_LargeNegativeInt_265 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.Object>::.ctor(UnityEngine.Events.UnityEvent`1<!0>,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUnityEventHandler_1__ctor_m38F5A62AFC2095695465ABBE7321F90D6B6D2121_gshared (AsyncUnityEventHandler_1_t52562780B902B331ACA79C7CB7FDF904A7E75B32 * __this, UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * ___unityEvent0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, bool ___callOnce2, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTask`1<!0> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.Object>::OnInvokeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE836249643B9776FC1B1395D730506D279EDF950  AsyncUnityEventHandler_1_OnInvokeAsync_mD00FA8D55BC3C310B70D067DF1194E655200AFD7_gshared (AsyncUnityEventHandler_1_t52562780B902B331ACA79C7CB7FDF904A7E75B32 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.Object>::.ctor(UnityEngine.Events.UnityEvent`1<!0>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventHandlerAsyncEnumerable_1__ctor_m591DADB08B63957054A6C2DBE85BB11391839A75_gshared (UnityEventHandlerAsyncEnumerable_1_t82980B66022221CB351B6FC99ED417501DDC2340 * __this, UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * ___unityEvent0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>::.ctor(UnityEngine.Events.UnityEvent`1<!0>,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUnityEventHandler_1__ctor_mB3DDB3132431880914DE8E2699994FC05E2760A6_gshared (AsyncUnityEventHandler_1_t1A6113173A4EBB673A5C3DEAA7CBB5BF8DD2358A * __this, UnityEvent_1_t297084FDCC02BAD72555F69047F3C7681772F74D * ___unityEvent0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, bool ___callOnce2, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTask`1<!0> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>::OnInvokeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_t0A7A7621B3DBC1A7913FF4488677528BD96C78C6  AsyncUnityEventHandler_1_OnInvokeAsync_m7C8D567526E05EC2F482EAE98606B645F8EAA568_gshared (AsyncUnityEventHandler_1_t1A6113173A4EBB673A5C3DEAA7CBB5BF8DD2358A * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>::.ctor(UnityEngine.Events.UnityEvent`1<!0>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventHandlerAsyncEnumerable_1__ctor_mE3614E453A16A5DD6708525C68DB3C193B3A8D03_gshared (UnityEventHandlerAsyncEnumerable_1_tC3E063AA1A41576A6B60B4FFA5118ADA3289381D * __this, UnityEvent_1_t297084FDCC02BAD72555F69047F3C7681772F74D * ___unityEvent0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_Start_TisRuntimeObject_m7FC6A981ACA4592D4022CC370762B11A35E476F1_gshared (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<!0> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,System.Object>(!!0&,!!1&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_mEB59A675766FC967F2261D63519AC954D16A48E7_gshared_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// !0 Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,System.Object>(!!0&,!!1&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_m2613A2A64F51901FA7FC25B3EFBF64EBD893BDD5_gshared_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m14BF2E8159027C244CF6E5A02EC652E7ED59FD91_gshared_inline (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * __this, UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * ___task0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mF793F73DCA5BDE86A3C5F27A07B14D57DEAC04CE_gshared_inline (UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 * __this, const RuntimeMethod* method);

// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::get_onValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * TMP_InputField_get_onValueChanged_mC41EC42425A67164F2766396C2B2C962C64842DD (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method);
// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTaskCancellationExtensions::GetCancellationTokenOnDestroy(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.String>::.ctor(UnityEngine.Events.UnityEvent`1<!0>,System.Threading.CancellationToken,System.Boolean)
inline void AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3 (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * __this, UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * ___unityEvent0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, bool ___callOnce2, const RuntimeMethod* method)
{
	((  void (*) (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *, UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , bool, const RuntimeMethod*))AsyncUnityEventHandler_1__ctor_m38F5A62AFC2095695465ABBE7321F90D6B6D2121_gshared)(__this, ___unityEvent0, ___cancellationToken1, ___callOnce2, method);
}
// Cysharp.Threading.Tasks.UniTask`1<!0> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.String>::OnInvokeAsync()
inline UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  (*) (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *, const RuntimeMethod*))AsyncUnityEventHandler_1_OnInvokeAsync_mD00FA8D55BC3C310B70D067DF1194E655200AFD7_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.String>::.ctor(UnityEngine.Events.UnityEvent`1<!0>,System.Threading.CancellationToken)
inline void UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51 (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E * __this, UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * ___unityEvent0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	((  void (*) (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E *, UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))UnityEventHandlerAsyncEnumerable_1__ctor_m591DADB08B63957054A6C2DBE85BB11391839A75_gshared)(__this, ___unityEvent0, ___cancellationToken1, method);
}
// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::get_onEndEdit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * TMP_InputField_get_onEndEdit_m8D8ECFF9EBD638343CA661282BEFE9A63DC43AFB (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method);
// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::get_onEndTextSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * TMP_InputField_get_onEndTextSelection_m4386B3340C3F191F6B55121C6EB019A20AB2985C (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.TextSelectionEventConverter::.ctor(UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16 (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * __this, UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE * ___unityEvent0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>::.ctor(UnityEngine.Events.UnityEvent`1<!0>,System.Threading.CancellationToken,System.Boolean)
inline void AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0 (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A * __this, UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA * ___unityEvent0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, bool ___callOnce2, const RuntimeMethod* method)
{
	((  void (*) (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A *, UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , bool, const RuntimeMethod*))AsyncUnityEventHandler_1__ctor_mB3DDB3132431880914DE8E2699994FC05E2760A6_gshared)(__this, ___unityEvent0, ___cancellationToken1, ___callOnce2, method);
}
// Cysharp.Threading.Tasks.UniTask`1<!0> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>::OnInvokeAsync()
inline UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111 (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A * __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  (*) (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A *, const RuntimeMethod*))AsyncUnityEventHandler_1_OnInvokeAsync_m7C8D567526E05EC2F482EAE98606B645F8EAA568_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>::.ctor(UnityEngine.Events.UnityEvent`1<!0>,System.Threading.CancellationToken)
inline void UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C (UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8 * __this, UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA * ___unityEvent0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	((  void (*) (UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8 *, UnityEvent_1_tFDD4D265866398D3CAF68AAD107287A78C6E2AAA *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))UnityEventHandlerAsyncEnumerable_1__ctor_mE3614E453A16A5DD6708525C68DB3C193B3A8D03_gshared)(__this, ___unityEvent0, ___cancellationToken1, method);
}
// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::get_onTextSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * TMP_InputField_get_onTextSelection_m2CC7C2BF18D3A9550656694D45D22E00F75B8AD4 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method);
// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::get_onDeselect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * TMP_InputField_get_onDeselect_mB8E07B2C21235C00EF3A7F8F7085913C577590CB (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method);
// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::get_onSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * TMP_InputField_get_onSelect_m241707F27186A6AF19AAD1150CC282FB580DB7F0 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method);
// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::get_onSubmit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * TMP_InputField_get_onSubmit_m040EAC78F73F052C410EE74DBE967AAC5F337063 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::BindToCore(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>,TMPro.TMP_Text,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  TextMeshProAsyncExtensions_BindToCore_m1A27EFC4C2BD55F5B034EC4D5783C8C83FE9213B (RuntimeObject* ___source0, TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___text1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, bool ___rebindOnError3, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTaskVoid::Forget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskVoid_Forget_mF31D43637D4FA1966D36F47416CC8199C872C3B5 (UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__44__ctor_m0DAE1A3C875F945EF86407CDD34B3E6EFA76E54B (U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * __this, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  AsyncUniTaskVoidMethodBuilder_Create_m325D2EF5D114A5F35C4A9B69DEB903C70CF17FE4_inline (const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44>(!!0&)
inline void AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_m555D8121626E97C612B815678992B68D6D51FF62 (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *, U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 **, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_Start_TisRuntimeObject_m7FC6A981ACA4592D4022CC370762B11A35E476F1_gshared)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  AsyncUniTaskVoidMethodBuilder_get_Task_m87EE24C6D8D3780BAB08F794393A3A3ADD07F7A3_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44>(!!0&,!!1&)
inline void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_mADB1FA60FDE5F84591B3BA002B87C8E20E9D0976_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *, U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 **, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_mEB59A675766FC967F2261D63519AC954D16A48E7_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
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
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44>(!!0&,!!1&)
inline void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_m412A3C2DBA0B6C2956D5966326F4F2AB412896D3_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *, U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 **, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_m2613A2A64F51901FA7FC25B3EFBF64EBD893BDD5_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mFCA8BA81A9A7DA641DEFC7FC121FED87A3EC06CA_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ExceptionDispatchInfo_Capture_m2576BA3BF8758CA1B34DF06BD78707EFC8DEE3E1 (Exception_t * ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095 (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m35DDCA81CC0E4EC89538C0ADC9DF03230036C4F0_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_mC611800EBF9547E943D54F22388BBAF42D4E3300_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m5C4926AF1F0B75F44AC954B944D307066AA132CF_inline (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * __this, UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * ___task0, const RuntimeMethod* method);
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_m5CCD7973CFD636CF45F67AF23CC34349ABBAD0AD_inline (UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F * __this, const RuntimeMethod* method);
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m8AF9BAB9BC85FE3C4E1DDF155F3D0D572B9A9744_inline (int32_t ___status0, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.PlayerLoopHelper::AddContinuation(Cysharp.Threading.Tasks.PlayerLoopTiming,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m24541B60D7DA760D0D684A0C27363951BC41DDED (int32_t ___timing0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation1, const RuntimeMethod* method);
// System.Void Cysharp.Threading.Tasks.UniTaskScheduler::PublishUnobservedTaskException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m3733BB2FF78C903D5CAECAB042E251A5E2D1DEC4 (Exception_t * ___ex0, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Cysharp.Threading.Tasks.IAsyncValueChangedEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncValueChangedEventHandler_mD4A527E3B3BD889D6DA0E4CEFA4BDD5965CAE3C9 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<string>(inputField.onValueChanged, inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * L_1;
		L_1 = TMP_InputField_get_onValueChanged_mC41EC42425A67164F2766396C2B2C962C64842DD(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_4 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_4, L_1, L_3, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IAsyncValueChangedEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncValueChangedEventHandler_m3D5DF5B1EBC58610C064FBC28DAEF603482A673A (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<string>(inputField.onValueChanged, cancellationToken, false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * L_1;
		L_1 = TMP_InputField_get_onValueChanged_mC41EC42425A67164F2766396C2B2C962C64842DD(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_3 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_3, L_1, L_2, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnValueChangedAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  TextMeshProAsyncExtensions_OnValueChangedAsync_m16899EBB1E91C68E20F045F5D14C9FAC9D279913 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<string>(inputField.onValueChanged, inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * L_1;
		L_1 = TMP_InputField_get_onValueChanged_mC41EC42425A67164F2766396C2B2C962C64842DD(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_4 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_4, L_1, L_3, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E(L_4, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_6 = V_0;
		return L_6;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnValueChangedAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  TextMeshProAsyncExtensions_OnValueChangedAsync_mDDA1996BCDB2DB59B270DBE9AF295FCB4A78B318 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<string>(inputField.onValueChanged, cancellationToken, true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * L_1;
		L_1 = TMP_InputField_get_onValueChanged_mC41EC42425A67164F2766396C2B2C962C64842DD(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_3 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_3, L_1, L_2, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		NullCheck(L_3);
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_4;
		L_4 = AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E(L_3, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnValueChangedAsAsyncEnumerable_mE097BE7BA3E2028EF24D2989D7CECD690FE2BDCF (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onValueChanged, inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * L_1;
		L_1 = TMP_InputField_get_onValueChanged_mC41EC42425A67164F2766396C2B2C962C64842DD(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E * L_4 = (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51(L_4, L_1, L_3, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnValueChangedAsAsyncEnumerable_m1BFEFFAEF8C47949E935A086EAAED1AA9AEA357C (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onValueChanged, cancellationToken);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * L_1;
		L_1 = TMP_InputField_get_onValueChanged_mC41EC42425A67164F2766396C2B2C962C64842DD(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E * L_3 = (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51(L_3, L_1, L_2, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IAsyncEndEditEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncEndEditEventHandler_m8019755E57524B1BD769BDE362A34F99F7B40846 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<string>(inputField.onEndEdit, inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onEndEdit_m8D8ECFF9EBD638343CA661282BEFE9A63DC43AFB(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_4 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_4, L_1, L_3, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IAsyncEndEditEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncEndEditEventHandler_m620E19B6B372E8499717954E04E852F0F28711FE (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<string>(inputField.onEndEdit, cancellationToken, false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onEndEdit_m8D8ECFF9EBD638343CA661282BEFE9A63DC43AFB(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_3 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_3, L_1, L_2, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndEditAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  TextMeshProAsyncExtensions_OnEndEditAsync_m486CD78793B4F415C9E92DFF085F8AC577D0230C (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<string>(inputField.onEndEdit, inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onEndEdit_m8D8ECFF9EBD638343CA661282BEFE9A63DC43AFB(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_4 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_4, L_1, L_3, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E(L_4, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_6 = V_0;
		return L_6;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndEditAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  TextMeshProAsyncExtensions_OnEndEditAsync_mEFFAB9D9CA0279AC6FC3BC6BCFAC9A00E407237D (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<string>(inputField.onEndEdit, cancellationToken, true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onEndEdit_m8D8ECFF9EBD638343CA661282BEFE9A63DC43AFB(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_3 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_3, L_1, L_2, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		NullCheck(L_3);
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_4;
		L_4 = AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E(L_3, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnEndEditAsAsyncEnumerable_mAF99C357835163F99D39739E29BD562580D3E40F (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onEndEdit, inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onEndEdit_m8D8ECFF9EBD638343CA661282BEFE9A63DC43AFB(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E * L_4 = (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51(L_4, L_1, L_3, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnEndEditAsAsyncEnumerable_m01F357FD8C07412EC14D2125FEE390E31D6A9298 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onEndEdit, cancellationToken);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onEndEdit_m8D8ECFF9EBD638343CA661282BEFE9A63DC43AFB(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E * L_3 = (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51(L_3, L_1, L_2, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IAsyncEndTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncEndTextSelectionEventHandler_m2B2C50B84DD3F9ACCA60A3B9CD3386B143E4314A (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_m4386B3340C3F191F6B55121C6EB019A20AB2985C(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_3 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_3, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A * L_5 = (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0(L_5, L_2, L_4, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// Cysharp.Threading.Tasks.IAsyncEndTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncEndTextSelectionEventHandler_m049FD76E49E326804B0E640CBE9626A3D8AB17A6 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), cancellationToken, false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_m4386B3340C3F191F6B55121C6EB019A20AB2985C(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A * L_4 = (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0(L_4, L_2, L_3, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndTextSelectionAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  TextMeshProAsyncExtensions_OnEndTextSelectionAsync_m4EC133509A8508767F440650E26B1AF412385330 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_m4386B3340C3F191F6B55121C6EB019A20AB2985C(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_3 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_3, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A * L_5 = (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0(L_5, L_2, L_4, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		NullCheck(L_5);
		UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  L_6;
		L_6 = AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111(L_5, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111_RuntimeMethod_var);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  L_7 = V_0;
		return L_7;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndTextSelectionAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  TextMeshProAsyncExtensions_OnEndTextSelectionAsync_m00BC57EE529C70EF8F5ED37B8ADED36641513B74 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), cancellationToken, true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_m4386B3340C3F191F6B55121C6EB019A20AB2985C(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A * L_4 = (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0(L_4, L_2, L_3, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111(L_4, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  L_6 = V_0;
		return L_6;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnEndTextSelectionAsAsyncEnumerable_m3D1D6D20CE93D2FC8D3817D17AA4F5ADC5C1557A (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_m4386B3340C3F191F6B55121C6EB019A20AB2985C(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_3 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_3, /*hidden argument*/NULL);
		UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8 * L_5 = (UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8 *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C(L_5, L_2, L_4, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnEndTextSelectionAsAsyncEnumerable_m44483CBE6DEF83393B6EE8A01365F95EADF234EF (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), cancellationToken);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_m4386B3340C3F191F6B55121C6EB019A20AB2985C(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8 * L_4 = (UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8 *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C(L_4, L_2, L_3, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IAsyncTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncTextSelectionEventHandler_m81935595968A2133A85B660E9CCBEB68101729ED (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onTextSelection_m2CC7C2BF18D3A9550656694D45D22E00F75B8AD4(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_3 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_3, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A * L_5 = (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0(L_5, L_2, L_4, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// Cysharp.Threading.Tasks.IAsyncTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncTextSelectionEventHandler_mD6D174FCE361489A4A141F60CA8DE6EBD90EE158 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), cancellationToken, false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onTextSelection_m2CC7C2BF18D3A9550656694D45D22E00F75B8AD4(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A * L_4 = (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0(L_4, L_2, L_3, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnTextSelectionAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  TextMeshProAsyncExtensions_OnTextSelectionAsync_mB87733C5119A9621F6C1B64233916DC9E709C041 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onTextSelection_m2CC7C2BF18D3A9550656694D45D22E00F75B8AD4(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_3 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_3, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A * L_5 = (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0(L_5, L_2, L_4, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		NullCheck(L_5);
		UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  L_6;
		L_6 = AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111(L_5, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111_RuntimeMethod_var);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  L_7 = V_0;
		return L_7;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnTextSelectionAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  TextMeshProAsyncExtensions_OnTextSelectionAsync_m5CCE6089D031556410E717AA80CAE4F6FAB922DD (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), cancellationToken, true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onTextSelection_m2CC7C2BF18D3A9550656694D45D22E00F75B8AD4(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A * L_4 = (AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tB7A85C013C896674EF25861B2B7D576F5356911A_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0(L_4, L_2, L_3, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m5363E94BD0E20B4D6A17D1049846C41493DD38C0_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111(L_4, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mAAC7619BF380A38F9CFEA6E177B634D6416AE111_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		UniTask_1_tD61FBFD8CA6F372BB3C90D3CBDF9C63E86286FE3  L_6 = V_0;
		return L_6;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnTextSelectionAsAsyncEnumerable_m7B1354D0DC68680C5E22096A612D02EA9FAFB13A (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onTextSelection_m2CC7C2BF18D3A9550656694D45D22E00F75B8AD4(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_3 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_3, /*hidden argument*/NULL);
		UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8 * L_5 = (UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8 *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C(L_5, L_2, L_4, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnTextSelectionAsAsyncEnumerable_m26A78E847C61C153465F10DEE126D27689361351 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), cancellationToken);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * L_1;
		L_1 = TMP_InputField_get_onTextSelection_m2CC7C2BF18D3A9550656694D45D22E00F75B8AD4(L_0, /*hidden argument*/NULL);
		TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C * L_2 = (TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C *)il2cpp_codegen_object_new(TextSelectionEventConverter_t924216F60D4FBC3178A30E78CE0D318BE466886C_il2cpp_TypeInfo_var);
		TextSelectionEventConverter__ctor_mA3E58A66BEBF6764492B9625C2AC1C9073670C16(L_2, L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8 * L_4 = (UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8 *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t7D1AB7FFA83882A397B21CD841EB3A432A5CA0E8_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C(L_4, L_2, L_3, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m65ACA17BA2600375EC7C3560C03AC60A8839ED1C_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IAsyncDeselectEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncDeselectEventHandler_m307C8D221A330AB07B6D3F794A36DFB3A6C8DCC8 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<string>(inputField.onDeselect, inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onDeselect_mB8E07B2C21235C00EF3A7F8F7085913C577590CB(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_4 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_4, L_1, L_3, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IAsyncDeselectEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncDeselectEventHandler_m30E680EB0E7F80D68D838787642825A538F503EE (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<string>(inputField.onDeselect, cancellationToken, false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onDeselect_mB8E07B2C21235C00EF3A7F8F7085913C577590CB(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_3 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_3, L_1, L_2, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnDeselectAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  TextMeshProAsyncExtensions_OnDeselectAsync_m36419903045EEFA9F6CD9D31860F60407DBB0E0D (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<string>(inputField.onDeselect, inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onDeselect_mB8E07B2C21235C00EF3A7F8F7085913C577590CB(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_4 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_4, L_1, L_3, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E(L_4, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_6 = V_0;
		return L_6;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnDeselectAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  TextMeshProAsyncExtensions_OnDeselectAsync_mCA9F784DB583C90DEC211615E882CE57D8D91172 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<string>(inputField.onDeselect, cancellationToken, true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onDeselect_mB8E07B2C21235C00EF3A7F8F7085913C577590CB(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_3 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_3, L_1, L_2, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		NullCheck(L_3);
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_4;
		L_4 = AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E(L_3, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnDeselectAsAsyncEnumerable_m76A3637D608319C1882B6CE7DA26AC656921995C (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onDeselect, inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onDeselect_mB8E07B2C21235C00EF3A7F8F7085913C577590CB(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E * L_4 = (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51(L_4, L_1, L_3, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnDeselectAsAsyncEnumerable_mA165D9A77FF87E2C8598E49184377C6D18304C2C (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onDeselect, cancellationToken);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onDeselect_mB8E07B2C21235C00EF3A7F8F7085913C577590CB(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E * L_3 = (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51(L_3, L_1, L_2, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IAsyncSelectEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncSelectEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncSelectEventHandler_mA2C615723270FC176AE52A2676AE07A77C09AFD0 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSelect, inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onSelect_m241707F27186A6AF19AAD1150CC282FB580DB7F0(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_4 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_4, L_1, L_3, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IAsyncSelectEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncSelectEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncSelectEventHandler_m2A59F65D4BC5B5F9FDC1FBB43F6A79656ABFAA66 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSelect, cancellationToken, false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onSelect_m241707F27186A6AF19AAD1150CC282FB580DB7F0(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_3 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_3, L_1, L_2, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSelectAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  TextMeshProAsyncExtensions_OnSelectAsync_m4F1B990DA0EB1C32F283F05D6365AF0D59821804 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSelect, inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onSelect_m241707F27186A6AF19AAD1150CC282FB580DB7F0(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_4 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_4, L_1, L_3, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E(L_4, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_6 = V_0;
		return L_6;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSelectAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  TextMeshProAsyncExtensions_OnSelectAsync_m451EF1E09BFDB2B19BEFFBA491A2AF2B52C930AF (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSelect, cancellationToken, true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onSelect_m241707F27186A6AF19AAD1150CC282FB580DB7F0(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_3 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_3, L_1, L_2, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		NullCheck(L_3);
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_4;
		L_4 = AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E(L_3, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnSelectAsAsyncEnumerable_m7F9B70301AF332BEAA6C9C682A6ED9E71F7383ED (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onSelect, inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onSelect_m241707F27186A6AF19AAD1150CC282FB580DB7F0(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E * L_4 = (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51(L_4, L_1, L_3, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnSelectAsAsyncEnumerable_m94492E03B33B663488639D3029FE2A8CA16987B1 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onSelect, cancellationToken);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * L_1;
		L_1 = TMP_InputField_get_onSelect_m241707F27186A6AF19AAD1150CC282FB580DB7F0(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E * L_3 = (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51(L_3, L_1, L_2, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IAsyncSubmitEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncSubmitEventHandler_m3E2D6F4466823E190BFD176D026F96058E6312E1 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSubmit, inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onSubmit_m040EAC78F73F052C410EE74DBE967AAC5F337063(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_4 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_4, L_1, L_3, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IAsyncSubmitEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncSubmitEventHandler_m233C25BB2874DD1286BAEE19C7C8BE2A408AD521 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSubmit, cancellationToken, false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onSubmit_m040EAC78F73F052C410EE74DBE967AAC5F337063(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_3 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_3, L_1, L_2, (bool)0, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSubmitAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  TextMeshProAsyncExtensions_OnSubmitAsync_mD20EF2FCBA50E906064EF76626E2B4DB48B61FF9 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSubmit, inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onSubmit_m040EAC78F73F052C410EE74DBE967AAC5F337063(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_4 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_4, L_1, L_3, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E(L_4, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_6 = V_0;
		return L_6;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSubmitAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  TextMeshProAsyncExtensions_OnSubmitAsync_m0BE4BC6DF8A052EC8355BB159CAFD98258008B13 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSubmit, cancellationToken, true).OnInvokeAsync();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onSubmit_m040EAC78F73F052C410EE74DBE967AAC5F337063(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 * L_3 = (AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6 *)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_t79EC1D2328BFCA81129BCA5197D4CE9228DB2DF6_il2cpp_TypeInfo_var);
		AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3(L_3, L_1, L_2, (bool)1, /*hidden argument*/AsyncUnityEventHandler_1__ctor_m18C99751F0192E09D577A7AABEEBBA42A3D7B2A3_RuntimeMethod_var);
		NullCheck(L_3);
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_4;
		L_4 = AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E(L_3, /*hidden argument*/AsyncUnityEventHandler_1_OnInvokeAsync_mF5DD4E0EB31D75980EC9842FE9ADA89D18F9DA3E_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		UniTask_1_tADED6902082245D54BDF8FC51104D107D4BF1F9E  L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnSubmitAsAsyncEnumerable_m737B1EBF31F0BDDB890365E787AD1824D7CF1346 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onSubmit, inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onSubmit_m040EAC78F73F052C410EE74DBE967AAC5F337063(L_0, /*hidden argument*/NULL);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_2 = ___inputField0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E * L_4 = (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51(L_4, L_1, L_3, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnSubmitAsAsyncEnumerable_mEE1CE29BACEBEB5F64607C695CC4BE7DAFE655BF (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___inputField0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onSubmit, cancellationToken);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * L_1;
		L_1 = TMP_InputField_get_onSubmit_m040EAC78F73F052C410EE74DBE967AAC5F337063(L_0, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E * L_3 = (UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E *)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t5B82D202C06ED6E99509F978A5B339FEDFA8FD1E_il2cpp_TypeInfo_var);
		UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51(L_3, L_1, L_2, /*hidden argument*/UnityEventHandlerAsyncEnumerable_1__ctor_m29B353CC3862CB3DA12B54B201368ACA6DBC8E51_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::BindTo(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>,TMPro.TMP_Text,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMeshProAsyncExtensions_BindTo_mA9FD28F743E2D4019B46ECAF7F37CE0D391EB368 (RuntimeObject* ___source0, TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___text1, bool ___rebindOnError2, const RuntimeMethod* method)
{
	UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// BindToCore(source, text, text.GetCancellationTokenOnDestroy(), rebindOnError).Forget();
		RuntimeObject* L_0 = ___source0;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_1 = ___text1;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_2 = ___text1;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m8E9C958F7688B79EA62E7556AA6A08EE5C4BC8C9(L_2, /*hidden argument*/NULL);
		bool L_4 = ___rebindOnError2;
		UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  L_5;
		L_5 = TextMeshProAsyncExtensions_BindToCore_m1A27EFC4C2BD55F5B034EC4D5783C8C83FE9213B(L_0, L_1, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		UniTaskVoid_Forget_mF31D43637D4FA1966D36F47416CC8199C872C3B5((UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C *)(&V_0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::BindTo(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>,TMPro.TMP_Text,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMeshProAsyncExtensions_BindTo_mD166E5ABBFACC50182AEA94308C8A28E5829D4FD (RuntimeObject* ___source0, TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___text1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, bool ___rebindOnError3, const RuntimeMethod* method)
{
	UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// BindToCore(source, text, cancellationToken, rebindOnError).Forget();
		RuntimeObject* L_0 = ___source0;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_1 = ___text1;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken2;
		bool L_3 = ___rebindOnError3;
		UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  L_4;
		L_4 = TextMeshProAsyncExtensions_BindToCore_m1A27EFC4C2BD55F5B034EC4D5783C8C83FE9213B(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		UniTaskVoid_Forget_mF31D43637D4FA1966D36F47416CC8199C872C3B5((UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C *)(&V_0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::BindToCore(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>,TMPro.TMP_Text,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  TextMeshProAsyncExtensions_BindToCore_m1A27EFC4C2BD55F5B034EC4D5783C8C83FE9213B (RuntimeObject* ___source0, TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___text1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, bool ___rebindOnError3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_m555D8121626E97C612B815678992B68D6D51FF62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * V_0 = NULL;
	AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * L_0 = (U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 *)il2cpp_codegen_object_new(U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_il2cpp_TypeInfo_var);
		U3CBindToCoreU3Ed__44__ctor_m0DAE1A3C875F945EF86407CDD34B3E6EFA76E54B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * L_1 = V_0;
		RuntimeObject* L_2 = ___source0;
		NullCheck(L_1);
		L_1->set_source_2(L_2);
		U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * L_3 = V_0;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_4 = ___text1;
		NullCheck(L_3);
		L_3->set_text_3(L_4);
		U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * L_5 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_6 = ___cancellationToken2;
		NullCheck(L_5);
		L_5->set_cancellationToken_4(L_6);
		U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * L_7 = V_0;
		bool L_8 = ___rebindOnError3;
		NullCheck(L_7);
		L_7->set_rebindOnError_5(L_8);
		U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * L_9 = V_0;
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  L_10;
		L_10 = AsyncUniTaskVoidMethodBuilder_Create_m325D2EF5D114A5F35C4A9B69DEB903C70CF17FE4_inline(/*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_U3CU3Et__builder_1(L_10);
		U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * L_11 = V_0;
		NullCheck(L_11);
		L_11->set_U3CU3E1__state_0((-1));
		U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * L_12 = V_0;
		NullCheck(L_12);
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  L_13 = L_12->get_U3CU3Et__builder_1();
		V_1 = L_13;
		AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_m555D8121626E97C612B815678992B68D6D51FF62((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)(&V_1), (U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 **)(&V_0), /*hidden argument*/AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_m555D8121626E97C612B815678992B68D6D51FF62_RuntimeMethod_var);
		U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * L_14 = V_0;
		NullCheck(L_14);
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_15 = L_14->get_address_of_U3CU3Et__builder_1();
		UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  L_16;
		L_16 = AsyncUniTaskVoidMethodBuilder_get_Task_m87EE24C6D8D3780BAB08F794393A3A3ADD07F7A3_inline((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_15, /*hidden argument*/NULL);
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
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__44__ctor_m0DAE1A3C875F945EF86407CDD34B3E6EFA76E54B (U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__44_MoveNext_m2373A9663F4E4A336D6FA65F00AC6CEF9C7A485A (U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_mADB1FA60FDE5F84591B3BA002B87C8E20E9D0976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_m412A3C2DBA0B6C2956D5966326F4F2AB412896D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tFDD03B647DB3381A7C8817E2F8EEA455435C28FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerable_1_t9CE33A4884C7D192547D43C4CCB5A08027B45E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerator_1_t40054994847CA6FF9C5A3E7761AF799B79A42CCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject * V_9 = NULL;
	bool V_10 = false;
	Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_tB2308A79346AE4017FEA07795B6E0A00C0D30B0F  V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 11> __leave_targets;
	int32_t G_B28_0 = 0;
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
			goto IL_01d1;
		}

IL_0019:
		{
			// var repeat = false;
			__this->set_U3CrepeatU3E5__1_6((bool)0);
		}

IL_0021:
		{
			// var e = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_3 = __this->get_source_2();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = __this->get_cancellationToken_4();
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<!0> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IUniTaskAsyncEnumerable_1_t9CE33A4884C7D192547D43C4CCB5A08027B45E2A_il2cpp_TypeInfo_var, L_3, L_4);
			__this->set_U3CeU3E5__2_7(L_5);
			__this->set_U3CU3Es__3_8(NULL);
			__this->set_U3CU3Es__4_9(0);
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
				goto IL_0056;
			}

IL_004f:
			{
				goto IL_0153;
			}

IL_0055:
			{
			}

IL_0056:
			{
			}

IL_0057:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_005c;
					}
				}

IL_005a:
				{
					goto IL_005e;
				}

IL_005c:
				{
					goto IL_00a3;
				}

IL_005e:
				{
					// moveNext = await e.MoveNextAsync();
					RuntimeObject* L_8 = __this->get_U3CeU3E5__2_7();
					NullCheck(L_8);
					UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  L_9;
					L_9 = InterfaceFuncInvoker0< UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8  >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.String>::MoveNextAsync() */, IUniTaskAsyncEnumerator_1_t40054994847CA6FF9C5A3E7761AF799B79A42CCA_il2cpp_TypeInfo_var, L_8);
					V_2 = L_9;
					Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_10;
					L_10 = UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_inline((UniTask_1_tEA0FDD8D249BBF22F5A2B7BC68219250D6AE4DA8 *)(&V_2), /*hidden argument*/UniTask_1_GetAwaiter_mC9E74E1A63F0E613CFE6E1484CD0F333B15EE421_RuntimeMethod_var);
					V_1 = L_10;
					bool L_11;
					L_11 = Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_1), /*hidden argument*/Awaiter_get_IsCompleted_m6A38D49F0FCA8F7F2BE0A40C22D37096D6C03BAA_RuntimeMethod_var);
					if (L_11)
					{
						goto IL_00bf;
					}
				}

IL_007c:
				{
					int32_t L_12 = 0;
					V_0 = L_12;
					__this->set_U3CU3E1__state_0(L_12);
					Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_13 = V_1;
					__this->set_U3CU3Eu__1_13(L_13);
					V_3 = __this;
					AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_14 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_mADB1FA60FDE5F84591B3BA002B87C8E20E9D0976_inline((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_14, (Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_1), (U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 **)(&V_3), /*hidden argument*/AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_mADB1FA60FDE5F84591B3BA002B87C8E20E9D0976_RuntimeMethod_var);
					goto IL_028a;
				}

IL_00a3:
				{
					Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C  L_15 = __this->get_U3CU3Eu__1_13();
					V_1 = L_15;
					Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_16 = __this->get_address_of_U3CU3Eu__1_13();
					il2cpp_codegen_initobj(L_16, sizeof(Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C ));
					int32_t L_17 = (-1);
					V_0 = L_17;
					__this->set_U3CU3E1__state_0(L_17);
				}

IL_00bf:
				{
					bool L_18;
					L_18 = Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_inline((Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C *)(&V_1), /*hidden argument*/Awaiter_GetResult_mABB7545D3F1FDCC807FDAD504E7AD47A55E0877E_RuntimeMethod_var);
					__this->set_U3CU3Es__6_11(L_18);
					bool L_19 = __this->get_U3CU3Es__6_11();
					__this->set_U3CmoveNextU3E5__5_10(L_19);
					// repeat = false;
					__this->set_U3CrepeatU3E5__1_6((bool)0);
					goto IL_012a;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00e2;
				}
				throw e;
			}

CATCH_00e2:
			{ // begin catch(System.Exception)
				{
					// catch (Exception ex)
					V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
					Exception_t * L_20 = V_4;
					__this->set_U3CexU3E5__7_12(L_20);
					// if (ex is OperationCanceledException) return;
					Exception_t * L_21 = __this->get_U3CexU3E5__7_12();
					V_5 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)((OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)IsInstClass((RuntimeObject*)L_21, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
					bool L_22 = V_5;
					if (!L_22)
					{
						goto IL_0103;
					}
				}

IL_0101:
				{
					// if (ex is OperationCanceledException) return;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0164;
				}

IL_0103:
				{
					// if (rebindOnError && !repeat)
					bool L_23 = __this->get_rebindOnError_5();
					if (!L_23)
					{
						goto IL_0116;
					}
				}

IL_010b:
				{
					bool L_24 = __this->get_U3CrepeatU3E5__1_6();
					G_B28_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
					goto IL_0117;
				}

IL_0116:
				{
					G_B28_0 = 0;
				}

IL_0117:
				{
					V_6 = (bool)G_B28_0;
					bool L_25 = V_6;
					if (!L_25)
					{
						goto IL_0127;
					}
				}

IL_011d:
				{
					// repeat = true;
					__this->set_U3CrepeatU3E5__1_6((bool)1);
					// goto BIND_AGAIN;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_015b;
				}

IL_0127:
				{
					// throw;
					IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBindToCoreU3Ed__44_MoveNext_m2373A9663F4E4A336D6FA65F00AC6CEF9C7A485A_RuntimeMethod_var)));
				}
			} // end catch (depth: 3)

IL_012a:
			{
				// if (!moveNext) return;
				bool L_26 = __this->get_U3CmoveNextU3E5__5_10();
				V_7 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
				bool L_27 = V_7;
				if (!L_27)
				{
					goto IL_013b;
				}
			}

IL_0139:
			{
				// if (!moveNext) return;
				goto IL_0164;
			}

IL_013b:
			{
				// text.text = e.Current;
				TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_28 = __this->get_text_3();
				RuntimeObject* L_29 = __this->get_U3CeU3E5__2_7();
				NullCheck(L_29);
				String_t* L_30;
				L_30 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.String>::get_Current() */, IUniTaskAsyncEnumerator_1_t40054994847CA6FF9C5A3E7761AF799B79A42CCA_il2cpp_TypeInfo_var, L_29);
				NullCheck(L_28);
				VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_28, L_30);
			}

IL_0153:
			{
				// while (true)
				V_8 = (bool)1;
				goto IL_0055;
			}

IL_015b:
			{
				__this->set_U3CU3Es__4_9(1);
				goto IL_0179;
			}

IL_0164:
			{
				__this->set_U3CU3Es__4_9(2);
				goto IL_0179;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_016d;
			}
			throw e;
		}

CATCH_016d:
		{ // begin catch(System.Object)
			V_9 = ((RuntimeObject *)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject *));
			RuntimeObject * L_31 = V_9;
			__this->set_U3CU3Es__3_8(L_31);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0179;
		} // end catch (depth: 2)

IL_0179:
		{
			// if (e != null)
			RuntimeObject* L_32 = __this->get_U3CeU3E5__2_7();
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_32) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_33 = V_10;
			if (!L_33)
			{
				goto IL_01f7;
			}
		}

IL_0189:
		{
			// await e.DisposeAsync();
			RuntimeObject* L_34 = __this->get_U3CeU3E5__2_7();
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
				goto IL_01ee;
			}
		}

IL_01a9:
		{
			int32_t L_38 = 1;
			V_0 = L_38;
			__this->set_U3CU3E1__state_0(L_38);
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_39 = V_11;
			__this->set_U3CU3Eu__2_14(L_39);
			V_3 = __this;
			AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_40 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_m412A3C2DBA0B6C2956D5966326F4F2AB412896D3_inline((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_40, (Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_11), (U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 **)(&V_3), /*hidden argument*/AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisU3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137_m412A3C2DBA0B6C2956D5966326F4F2AB412896D3_RuntimeMethod_var);
			goto IL_028a;
		}

IL_01d1:
		{
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0  L_41 = __this->get_U3CU3Eu__2_14();
			V_11 = L_41;
			Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_42 = __this->get_address_of_U3CU3Eu__2_14();
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 ));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->set_U3CU3E1__state_0(L_43);
		}

IL_01ee:
		{
			Awaiter_GetResult_mFCA8BA81A9A7DA641DEFC7FC121FED87A3EC06CA_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(&V_11), /*hidden argument*/NULL);
		}

IL_01f7:
		{
			RuntimeObject * L_44 = __this->get_U3CU3Es__3_8();
			V_9 = L_44;
			RuntimeObject * L_45 = V_9;
			if (!L_45)
			{
				goto IL_0221;
			}
		}

IL_0204:
		{
			RuntimeObject * L_46 = V_9;
			V_4 = ((Exception_t *)IsInstClass((RuntimeObject*)L_46, Exception_t_il2cpp_TypeInfo_var));
			Exception_t * L_47 = V_4;
			if (L_47)
			{
				goto IL_0214;
			}
		}

IL_0211:
		{
			RuntimeObject * L_48 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBindToCoreU3Ed__44_MoveNext_m2373A9663F4E4A336D6FA65F00AC6CEF9C7A485A_RuntimeMethod_var)));
		}

IL_0214:
		{
			Exception_t * L_49 = V_4;
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_50;
			L_50 = ExceptionDispatchInfo_Capture_m2576BA3BF8758CA1B34DF06BD78707EFC8DEE3E1(L_49, /*hidden argument*/NULL);
			NullCheck(L_50);
			ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_50, /*hidden argument*/NULL);
		}

IL_0221:
		{
			int32_t L_51 = __this->get_U3CU3Es__4_9();
			V_13 = L_51;
			int32_t L_52 = V_13;
			if ((((int32_t)L_52) == ((int32_t)1)))
			{
				goto IL_0237;
			}
		}

IL_022e:
		{
			goto IL_0230;
		}

IL_0230:
		{
			int32_t L_53 = V_13;
			if ((((int32_t)L_53) == ((int32_t)2)))
			{
				goto IL_023c;
			}
		}

IL_0235:
		{
			goto IL_023e;
		}

IL_0237:
		{
			goto IL_0021;
		}

IL_023c:
		{
			goto IL_026f;
		}

IL_023e:
		{
			__this->set_U3CU3Es__3_8(NULL);
			__this->set_U3CeU3E5__2_7((RuntimeObject*)NULL);
			goto IL_026f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_024e;
		}
		throw e;
	}

CATCH_024e:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CeU3E5__2_7((RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_54 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_55 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m35DDCA81CC0E4EC89538C0ADC9DF03230036C4F0_inline((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_54, L_55, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028a;
	} // end catch (depth: 1)

IL_026f:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CeU3E5__2_7((RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * L_56 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskVoidMethodBuilder_SetResult_mC611800EBF9547E943D54F22388BBAF42D4E3300_inline((AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C *)L_56, /*hidden argument*/NULL);
	}

IL_028a:
	{
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__44::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__44_SetStateMachine_m488211ADCE8307C4929FDF7946537EBB8F5CC85F (U3CBindToCoreU3Ed__44_t5750303089ADCE0105BC0002454A19A2FCD01137 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  AsyncUniTaskVoidMethodBuilder_Create_m325D2EF5D114A5F35C4A9B69DEB903C70CF17FE4_inline (const RuntimeMethod* method)
{
	AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C ));
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C  L_1 = V_1;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  AsyncUniTaskVoidMethodBuilder_get_Task_m87EE24C6D8D3780BAB08F794393A3A3ADD07F7A3_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, const RuntimeMethod* method)
{
	UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C ));
		UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		UniTaskVoid_tD57FAEC07506F4406FE1E9B63781562B8626479C  L_1 = V_1;
		return L_1;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m35DDCA81CC0E4EC89538C0ADC9DF03230036C4F0_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t9DBF8570AC748696C52D015E46344646DFA4B230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->get_runner_0();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_2 = __this->get_runner_0();
		NullCheck(L_2);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3;
		L_3 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(2 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m24541B60D7DA760D0D684A0C27363951BC41DDED(((int32_t)13), L_3, /*hidden argument*/NULL);
		// runner = null;
		__this->set_runner_0((RuntimeObject*)NULL);
	}

IL_002a:
	{
		// UniTaskScheduler.PublishUnobservedTaskException(exception);
		Exception_t * L_4 = ___exception0;
		IL2CPP_RUNTIME_CLASS_INIT(UniTaskScheduler_t9DBF8570AC748696C52D015E46344646DFA4B230_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m3733BB2FF78C903D5CAECAB042E251A5E2D1DEC4(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_mC611800EBF9547E943D54F22388BBAF42D4E3300_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->get_runner_0();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_2 = __this->get_runner_0();
		NullCheck(L_2);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3;
		L_3 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(2 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerLoopHelper_t2E5EE4D6CAA10845C9E0146D0A57E739FFA078DC_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m24541B60D7DA760D0D684A0C27363951BC41DDED(((int32_t)13), L_3, /*hidden argument*/NULL);
		// runner = null;
		__this->set_runner_0((RuntimeObject*)NULL);
	}

IL_002a:
	{
		// }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C_TisRuntimeObject_mEB59A675766FC967F2261D63519AC954D16A48E7_gshared_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICriticalNotifyCompletion_t3F4FCEA29CDCACD07747F3A1D6D1406521556838_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runner == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runner_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AsyncUniTaskVoid<TStateMachine>.SetStateMachine(ref stateMachine, ref runner);
		RuntimeObject ** L_2 = ___stateMachine1;
		RuntimeObject** L_3 = (RuntimeObject**)__this->get_address_of_runner_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (RuntimeObject **, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_2, (RuntimeObject**)(RuntimeObject**)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_001d:
	{
		// awaiter.UnsafeOnCompleted(runner.MoveNext);
		Awaiter_t4C1033F2040270AB168EBD707C93DBCF0317D61C * L_4 = ___awaiter0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_runner_0();
		NullCheck((RuntimeObject*)L_5);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6;
		L_6 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_MoveNext() */, IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0_TisRuntimeObject_m2613A2A64F51901FA7FC25B3EFBF64EBD893BDD5_gshared_inline (AsyncUniTaskVoidMethodBuilder_t9D4F99614FDEF7D8BF0DC107D27AFBA0EC838C8C * __this, Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (runner == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_runner_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// AsyncUniTaskVoid<TStateMachine>.SetStateMachine(ref stateMachine, ref runner);
		RuntimeObject ** L_2 = ___stateMachine1;
		RuntimeObject** L_3 = (RuntimeObject**)__this->get_address_of_runner_0();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (RuntimeObject **, RuntimeObject**, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_2, (RuntimeObject**)(RuntimeObject**)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
	}

IL_001d:
	{
		// awaiter.UnsafeOnCompleted(runner.MoveNext);
		Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 * L_4 = ___awaiter0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_runner_0();
		NullCheck((RuntimeObject*)L_5);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6;
		L_6 = InterfaceFuncInvoker0< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_MoveNext() */, IStateMachineRunner_tA69E9AE384149AF04910DF77A8BEFBC0D7695DEE_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
		Awaiter_UnsafeOnCompleted_m1428D2FC0145C8CABB14E4B9A15F38B6AE34F8E5_inline((Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)(Awaiter_t6DACE416FC47D39CDB55A3CE67458F1B9FC89FC0 *)L_4, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, /*hidden argument*/NULL);
		// }
		return;
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
