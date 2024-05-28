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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>
struct Dictionary_2_tD3028AE9C2E834A16C028C96DF140D8C77EDA043;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>
struct Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationCategory>
struct IEnumerable_1_tD293947962F568CBCB4BDE8BFE6D4A2299EB3DD4;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.IntPtr>
struct KeyCollection_tAE114AD31EAF840AC6F382B960E1F98344827D2A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAction>
struct List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD;
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>
struct List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.IntPtr>
struct ValueCollection_t4D725C6663302C46D973255AF68699B24E589AF0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.IntPtr>[]
struct EntryU5BU5D_tC7F541397307B009020236829C1BAAE96D611432;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Unity.Notifications.iOS.iOSNotificationAction[]
struct iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02;
// Unity.Notifications.iOS.iOSNotificationAttachment[]
struct iOSNotificationAttachmentU5BU5D_tFD594D2A85C14F9984BAFFA68A33CFE730E99AA4;
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[]
struct iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// Unity.Notifications.iOS.AuthorizationRequest
struct AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB2FAC817877BBE79BED6B020ABD5B9B1E4CD4569;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFAD0993D14CC3E2B1685A7D29A1B551E9A8DD4C3;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6;
// Unity.Notifications.iOS.iOSNotification
struct iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25;
// Unity.Notifications.iOS.iOSNotificationAction
struct iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729;
// Unity.Notifications.iOS.iOSNotificationCategory
struct iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F;
// Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074;
// Unity.Notifications.iOS.iOSNotificationTrigger
struct iOSNotificationTrigger_t8E00E938D40866C0F592F785DFCA748E50C10391;
// Unity.Notifications.iOS.iOSNotificationsWrapper
struct iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783;
// Unity.Notifications.iOS.iOSNotificationCenter/<>c
struct U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C;
// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97;
// Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback
struct AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3;
// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback
struct NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2;
// Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback
struct ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1;
// Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback
struct ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tD293947962F568CBCB4BDE8BFE6D4A2299EB3DD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tED65D2A81EA00796AC146050D5B1B8914F81C8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationTriggerType_t78E8529D68EC3318286E315CC85677211E73C974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationTrigger_t8E00E938D40866C0F592F785DFCA748E50C10391_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F;
IL2CPP_EXTERN_C String_t* _stringLiteral3445424CCE31FF31906AAE9ADB0236D08C87E42B;
IL2CPP_EXTERN_C String_t* _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF;
IL2CPP_EXTERN_C String_t* _stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2;
IL2CPP_EXTERN_C String_t* _stringLiteral7FC8D6A046F1C98C7C41C53A755D310105555A8C;
IL2CPP_EXTERN_C String_t* _stringLiteral88B697A2C9C4DE6D613594AF141EACF167383C3E;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D955B52CE2A9A7D166E809868D6DAC459EF687;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF095BC29C39D74DCA3923E99C34901B64AF08344;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA8707FE0861CE909C71CAD2EB86B6143B5E8D7;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD412F0CE5C91166E5AD153A4DD9B1DDB7C0A8972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m4B172709BA5195F9B5E3BA933FF0F219B3891251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m21C86306EDE2BA282B1C80169EA6B4D62429BD95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m469C9C901730E5AE4B72E50F1B3F959E1E4A56DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m0DCF9C6DB49CAA24A295155397007F77CCEF7EA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m43CBDA7EBE23CD948CEB5A61998934641888DD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4F098123B7F4D6295E91179C53FAC3375833F057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1664B023733A5AAF8DC09D0B058F45871C82E354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m491598D999088BC4951CCED617A1FD68465E8DBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m791E953E29C33E73940968C88B6D7748A3798BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAAE55B9576E035F422B79EDA328DF89F83815456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m70C4ABD3F9F97FE5FD942670F7E5AFB0076215A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m055B3C8434BBE78C619B9FD25362C05693018CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6A45B679BC1EECBB9AC64AC1C0D2F7064D5CAB1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9E95552C251944A09E2A6E97226B4B5880A42FB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDEA2F2369E63A9C4609035514ECB01A2F8EEBE55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m52AFB0DD1D38F1B2D39F62908902B818D97E7DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__38_0_m937C65F2062714E2D4607229E9731A3B412C2157_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__38_1_m54778B1190F05B511CDBC01D4F7DCE50B769A218_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotification_set_Trigger_m41B5FA43DDC81CFD154152C84A907A53B023E586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_AuthorizationRequestReceived_mB9751C47825AFE4609A354DE4295B9C075029BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_CsAttachmentsToObjc_m9F7D5BBEFB2439DF49FA11F2E6853C7343DF0B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_NotificationReceived_m6F8D49A4F5423E19F5C0A43799F43794735D6E7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m17BF76EFE06EAF8269A3CC4341FE8B64BC0D0969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mDCCB51142652FB705C10A9373913A49015092EB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_RemoteNotificationReceived_mE1A64E992B4A9C9DE069B2C8BE1E7F936965B5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_SetNotificationCategories_m6E104DE6BE821573CA566E5A5A400C09AF279153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6;;
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke;;
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074;;
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com;
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com;;
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke;
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02;
struct iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5E5AAFCB36C9CFF85EE3134F392BDC6642307F03 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>
struct Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC7F541397307B009020236829C1BAAE96D611432* ___entries_1;
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
	KeyCollection_tAE114AD31EAF840AC6F382B960E1F98344827D2A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4D725C6663302C46D973255AF68699B24E589AF0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1, ___entries_1)); }
	inline EntryU5BU5D_tC7F541397307B009020236829C1BAAE96D611432* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC7F541397307B009020236829C1BAAE96D611432** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC7F541397307B009020236829C1BAAE96D611432* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1, ___keys_7)); }
	inline KeyCollection_tAE114AD31EAF840AC6F382B960E1F98344827D2A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tAE114AD31EAF840AC6F382B960E1F98344827D2A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tAE114AD31EAF840AC6F382B960E1F98344827D2A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1, ___values_8)); }
	inline ValueCollection_t4D725C6663302C46D973255AF68699B24E589AF0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4D725C6663302C46D973255AF68699B24E589AF0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4D725C6663302C46D973255AF68699B24E589AF0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAction>
struct List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD, ____items_1)); }
	inline iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* get__items_1() const { return ____items_1; }
	inline iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD_StaticFields, ____emptyArray_5)); }
	inline iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* get__emptyArray_5() const { return ____emptyArray_5; }
	inline iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>
struct List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	iOSNotificationAttachmentU5BU5D_tFD594D2A85C14F9984BAFFA68A33CFE730E99AA4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C, ____items_1)); }
	inline iOSNotificationAttachmentU5BU5D_tFD594D2A85C14F9984BAFFA68A33CFE730E99AA4* get__items_1() const { return ____items_1; }
	inline iOSNotificationAttachmentU5BU5D_tFD594D2A85C14F9984BAFFA68A33CFE730E99AA4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(iOSNotificationAttachmentU5BU5D_tFD594D2A85C14F9984BAFFA68A33CFE730E99AA4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	iOSNotificationAttachmentU5BU5D_tFD594D2A85C14F9984BAFFA68A33CFE730E99AA4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C_StaticFields, ____emptyArray_5)); }
	inline iOSNotificationAttachmentU5BU5D_tFD594D2A85C14F9984BAFFA68A33CFE730E99AA4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline iOSNotificationAttachmentU5BU5D_tFD594D2A85C14F9984BAFFA68A33CFE730E99AA4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(iOSNotificationAttachmentU5BU5D_tFD594D2A85C14F9984BAFFA68A33CFE730E99AA4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Unity.Notifications.iOS.AuthorizationRequest
struct AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676  : public RuntimeObject
{
public:
	// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::m_IsFinished
	bool ___m_IsFinished_0;
	// System.Boolean Unity.Notifications.iOS.AuthorizationRequest::m_Granted
	bool ___m_Granted_1;
	// System.String Unity.Notifications.iOS.AuthorizationRequest::m_Error
	String_t* ___m_Error_2;
	// System.String Unity.Notifications.iOS.AuthorizationRequest::m_DeviceToken
	String_t* ___m_DeviceToken_3;

public:
	inline static int32_t get_offset_of_m_IsFinished_0() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___m_IsFinished_0)); }
	inline bool get_m_IsFinished_0() const { return ___m_IsFinished_0; }
	inline bool* get_address_of_m_IsFinished_0() { return &___m_IsFinished_0; }
	inline void set_m_IsFinished_0(bool value)
	{
		___m_IsFinished_0 = value;
	}

	inline static int32_t get_offset_of_m_Granted_1() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___m_Granted_1)); }
	inline bool get_m_Granted_1() const { return ___m_Granted_1; }
	inline bool* get_address_of_m_Granted_1() { return &___m_Granted_1; }
	inline void set_m_Granted_1(bool value)
	{
		___m_Granted_1 = value;
	}

	inline static int32_t get_offset_of_m_Error_2() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___m_Error_2)); }
	inline String_t* get_m_Error_2() const { return ___m_Error_2; }
	inline String_t** get_address_of_m_Error_2() { return &___m_Error_2; }
	inline void set_m_Error_2(String_t* value)
	{
		___m_Error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Error_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceToken_3() { return static_cast<int32_t>(offsetof(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676, ___m_DeviceToken_3)); }
	inline String_t* get_m_DeviceToken_3() const { return ___m_DeviceToken_3; }
	inline String_t** get_address_of_m_DeviceToken_3() { return &___m_DeviceToken_3; }
	inline void set_m_DeviceToken_3(String_t* value)
	{
		___m_DeviceToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceToken_3), (void*)value);
	}
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

// Unity.Notifications.iOS.iOSNotificationCenter
struct iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008  : public RuntimeObject
{
public:

public:
};

struct iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields
{
public:
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::s_Initialized
	bool ___s_Initialized_0;
	// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::s_OnNotificationReceived
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___s_OnNotificationReceived_1;
	// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::s_OnRemoteNotificationReceived
	NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * ___s_OnRemoteNotificationReceived_2;

public:
	inline static int32_t get_offset_of_s_Initialized_0() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields, ___s_Initialized_0)); }
	inline bool get_s_Initialized_0() const { return ___s_Initialized_0; }
	inline bool* get_address_of_s_Initialized_0() { return &___s_Initialized_0; }
	inline void set_s_Initialized_0(bool value)
	{
		___s_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_OnNotificationReceived_1() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields, ___s_OnNotificationReceived_1)); }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * get_s_OnNotificationReceived_1() const { return ___s_OnNotificationReceived_1; }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 ** get_address_of_s_OnNotificationReceived_1() { return &___s_OnNotificationReceived_1; }
	inline void set_s_OnNotificationReceived_1(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * value)
	{
		___s_OnNotificationReceived_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnNotificationReceived_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_OnRemoteNotificationReceived_2() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields, ___s_OnRemoteNotificationReceived_2)); }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * get_s_OnRemoteNotificationReceived_2() const { return ___s_OnRemoteNotificationReceived_2; }
	inline NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 ** get_address_of_s_OnRemoteNotificationReceived_2() { return &___s_OnRemoteNotificationReceived_2; }
	inline void set_s_OnRemoteNotificationReceived_2(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * value)
	{
		___s_OnRemoteNotificationReceived_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnRemoteNotificationReceived_2), (void*)value);
	}
};


// Unity.Notifications.iOS.iOSNotificationCenter/<>c
struct U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields
{
public:
	// Unity.Notifications.iOS.iOSNotificationCenter/<>c Unity.Notifications.iOS.iOSNotificationCenter/<>c::<>9
	U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// Unity.Notifications.iOS.CalendarTriggerData
struct CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 
{
public:
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::year
	int32_t ___year_0;
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::month
	int32_t ___month_1;
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::day
	int32_t ___day_2;
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::hour
	int32_t ___hour_3;
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::minute
	int32_t ___minute_4;
	// System.Int32 Unity.Notifications.iOS.CalendarTriggerData::second
	int32_t ___second_5;
	// System.Byte Unity.Notifications.iOS.CalendarTriggerData::repeats
	uint8_t ___repeats_6;

public:
	inline static int32_t get_offset_of_year_0() { return static_cast<int32_t>(offsetof(CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13, ___year_0)); }
	inline int32_t get_year_0() const { return ___year_0; }
	inline int32_t* get_address_of_year_0() { return &___year_0; }
	inline void set_year_0(int32_t value)
	{
		___year_0 = value;
	}

	inline static int32_t get_offset_of_month_1() { return static_cast<int32_t>(offsetof(CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13, ___month_1)); }
	inline int32_t get_month_1() const { return ___month_1; }
	inline int32_t* get_address_of_month_1() { return &___month_1; }
	inline void set_month_1(int32_t value)
	{
		___month_1 = value;
	}

	inline static int32_t get_offset_of_day_2() { return static_cast<int32_t>(offsetof(CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13, ___day_2)); }
	inline int32_t get_day_2() const { return ___day_2; }
	inline int32_t* get_address_of_day_2() { return &___day_2; }
	inline void set_day_2(int32_t value)
	{
		___day_2 = value;
	}

	inline static int32_t get_offset_of_hour_3() { return static_cast<int32_t>(offsetof(CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13, ___hour_3)); }
	inline int32_t get_hour_3() const { return ___hour_3; }
	inline int32_t* get_address_of_hour_3() { return &___hour_3; }
	inline void set_hour_3(int32_t value)
	{
		___hour_3 = value;
	}

	inline static int32_t get_offset_of_minute_4() { return static_cast<int32_t>(offsetof(CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13, ___minute_4)); }
	inline int32_t get_minute_4() const { return ___minute_4; }
	inline int32_t* get_address_of_minute_4() { return &___minute_4; }
	inline void set_minute_4(int32_t value)
	{
		___minute_4 = value;
	}

	inline static int32_t get_offset_of_second_5() { return static_cast<int32_t>(offsetof(CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13, ___second_5)); }
	inline int32_t get_second_5() const { return ___second_5; }
	inline int32_t* get_address_of_second_5() { return &___second_5; }
	inline void set_second_5(int32_t value)
	{
		___second_5 = value;
	}

	inline static int32_t get_offset_of_repeats_6() { return static_cast<int32_t>(offsetof(CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13, ___repeats_6)); }
	inline uint8_t get_repeats_6() const { return ___repeats_6; }
	inline uint8_t* get_address_of_repeats_6() { return &___repeats_6; }
	inline void set_repeats_6(uint8_t value)
	{
		___repeats_6 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB2FAC817877BBE79BED6B020ABD5B9B1E4CD4569  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tFAD0993D14CC3E2B1685A7D29A1B551E9A8DD4C3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Unity.Notifications.iOS.LocationTriggerData
struct LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 
{
public:
	// System.Double Unity.Notifications.iOS.LocationTriggerData::latitude
	double ___latitude_0;
	// System.Double Unity.Notifications.iOS.LocationTriggerData::longitude
	double ___longitude_1;
	// System.Single Unity.Notifications.iOS.LocationTriggerData::radius
	float ___radius_2;
	// System.Byte Unity.Notifications.iOS.LocationTriggerData::notifyOnEntry
	uint8_t ___notifyOnEntry_3;
	// System.Byte Unity.Notifications.iOS.LocationTriggerData::notifyOnExit
	uint8_t ___notifyOnExit_4;
	// System.Byte Unity.Notifications.iOS.LocationTriggerData::repeats
	uint8_t ___repeats_5;

public:
	inline static int32_t get_offset_of_latitude_0() { return static_cast<int32_t>(offsetof(LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0, ___latitude_0)); }
	inline double get_latitude_0() const { return ___latitude_0; }
	inline double* get_address_of_latitude_0() { return &___latitude_0; }
	inline void set_latitude_0(double value)
	{
		___latitude_0 = value;
	}

	inline static int32_t get_offset_of_longitude_1() { return static_cast<int32_t>(offsetof(LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0, ___longitude_1)); }
	inline double get_longitude_1() const { return ___longitude_1; }
	inline double* get_address_of_longitude_1() { return &___longitude_1; }
	inline void set_longitude_1(double value)
	{
		___longitude_1 = value;
	}

	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_notifyOnEntry_3() { return static_cast<int32_t>(offsetof(LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0, ___notifyOnEntry_3)); }
	inline uint8_t get_notifyOnEntry_3() const { return ___notifyOnEntry_3; }
	inline uint8_t* get_address_of_notifyOnEntry_3() { return &___notifyOnEntry_3; }
	inline void set_notifyOnEntry_3(uint8_t value)
	{
		___notifyOnEntry_3 = value;
	}

	inline static int32_t get_offset_of_notifyOnExit_4() { return static_cast<int32_t>(offsetof(LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0, ___notifyOnExit_4)); }
	inline uint8_t get_notifyOnExit_4() const { return ___notifyOnExit_4; }
	inline uint8_t* get_address_of_notifyOnExit_4() { return &___notifyOnExit_4; }
	inline void set_notifyOnExit_4(uint8_t value)
	{
		___notifyOnExit_4 = value;
	}

	inline static int32_t get_offset_of_repeats_5() { return static_cast<int32_t>(offsetof(LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0, ___repeats_5)); }
	inline uint8_t get_repeats_5() const { return ___repeats_5; }
	inline uint8_t* get_address_of_repeats_5() { return &___repeats_5; }
	inline void set_repeats_5(uint8_t value)
	{
		___repeats_5 = value;
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


// Unity.Notifications.iOS.TimeTriggerData
struct TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332 
{
public:
	// System.Int32 Unity.Notifications.iOS.TimeTriggerData::interval
	int32_t ___interval_0;
	// System.Byte Unity.Notifications.iOS.TimeTriggerData::repeats
	uint8_t ___repeats_1;

public:
	inline static int32_t get_offset_of_interval_0() { return static_cast<int32_t>(offsetof(TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332, ___interval_0)); }
	inline int32_t get_interval_0() const { return ___interval_0; }
	inline int32_t* get_address_of_interval_0() { return &___interval_0; }
	inline void set_interval_0(int32_t value)
	{
		___interval_0 = value;
	}

	inline static int32_t get_offset_of_repeats_1() { return static_cast<int32_t>(offsetof(TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332, ___repeats_1)); }
	inline uint8_t get_repeats_1() const { return ___repeats_1; }
	inline uint8_t* get_address_of_repeats_1() { return &___repeats_1; }
	inline void set_repeats_1(uint8_t value)
	{
		___repeats_1 = value;
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


// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSAuthorizationRequestData::granted
	int32_t ___granted_0;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::error
	String_t* ___error_1;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::deviceToken
	String_t* ___deviceToken_2;

public:
	inline static int32_t get_offset_of_granted_0() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6, ___granted_0)); }
	inline int32_t get_granted_0() const { return ___granted_0; }
	inline int32_t* get_address_of_granted_0() { return &___granted_0; }
	inline void set_granted_0(int32_t value)
	{
		___granted_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6, ___error_1)); }
	inline String_t* get_error_1() const { return ___error_1; }
	inline String_t** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(String_t* value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_deviceToken_2() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6, ___deviceToken_2)); }
	inline String_t* get_deviceToken_2() const { return ___deviceToken_2; }
	inline String_t** get_address_of_deviceToken_2() { return &___deviceToken_2; }
	inline void set_deviceToken_2(String_t* value)
	{
		___deviceToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceToken_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke
{
	int32_t ___granted_0;
	char* ___error_1;
	char* ___deviceToken_2;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com
{
	int32_t ___granted_0;
	Il2CppChar* ___error_1;
	Il2CppChar* ___deviceToken_2;
};

// Unity.Notifications.iOS.iOSNotificationAttachment
struct iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 
{
public:
	// System.String Unity.Notifications.iOS.iOSNotificationAttachment::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.iOS.iOSNotificationAttachment::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469, ___U3CUrlU3Ek__BackingField_1)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_1() const { return ___U3CUrlU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_1() { return &___U3CUrlU3Ek__BackingField_1; }
	inline void set_U3CUrlU3Ek__BackingField_1(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationAttachment
struct iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshaled_pinvoke
{
	char* ___U3CIdU3Ek__BackingField_0;
	char* ___U3CUrlU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationAttachment
struct iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshaled_com
{
	Il2CppChar* ___U3CIdU3Ek__BackingField_0;
	Il2CppChar* ___U3CUrlU3Ek__BackingField_1;
};

// Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 
{
public:
	// System.Double Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Latitude>k__BackingField
	double ___U3CLatitudeU3Ek__BackingField_0;
	// System.Double Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Longitude>k__BackingField
	double ___U3CLongitudeU3Ek__BackingField_1;
	// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Radius>k__BackingField
	float ___U3CRadiusU3Ek__BackingField_2;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnEntry>k__BackingField
	bool ___U3CNotifyOnEntryU3Ek__BackingField_3;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnExit>k__BackingField
	bool ___U3CNotifyOnExitU3Ek__BackingField_4;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CLatitudeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CLatitudeU3Ek__BackingField_0)); }
	inline double get_U3CLatitudeU3Ek__BackingField_0() const { return ___U3CLatitudeU3Ek__BackingField_0; }
	inline double* get_address_of_U3CLatitudeU3Ek__BackingField_0() { return &___U3CLatitudeU3Ek__BackingField_0; }
	inline void set_U3CLatitudeU3Ek__BackingField_0(double value)
	{
		___U3CLatitudeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLongitudeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CLongitudeU3Ek__BackingField_1)); }
	inline double get_U3CLongitudeU3Ek__BackingField_1() const { return ___U3CLongitudeU3Ek__BackingField_1; }
	inline double* get_address_of_U3CLongitudeU3Ek__BackingField_1() { return &___U3CLongitudeU3Ek__BackingField_1; }
	inline void set_U3CLongitudeU3Ek__BackingField_1(double value)
	{
		___U3CLongitudeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CRadiusU3Ek__BackingField_2)); }
	inline float get_U3CRadiusU3Ek__BackingField_2() const { return ___U3CRadiusU3Ek__BackingField_2; }
	inline float* get_address_of_U3CRadiusU3Ek__BackingField_2() { return &___U3CRadiusU3Ek__BackingField_2; }
	inline void set_U3CRadiusU3Ek__BackingField_2(float value)
	{
		___U3CRadiusU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNotifyOnEntryU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CNotifyOnEntryU3Ek__BackingField_3)); }
	inline bool get_U3CNotifyOnEntryU3Ek__BackingField_3() const { return ___U3CNotifyOnEntryU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CNotifyOnEntryU3Ek__BackingField_3() { return &___U3CNotifyOnEntryU3Ek__BackingField_3; }
	inline void set_U3CNotifyOnEntryU3Ek__BackingField_3(bool value)
	{
		___U3CNotifyOnEntryU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CNotifyOnExitU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CNotifyOnExitU3Ek__BackingField_4)); }
	inline bool get_U3CNotifyOnExitU3Ek__BackingField_4() const { return ___U3CNotifyOnExitU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CNotifyOnExitU3Ek__BackingField_4() { return &___U3CNotifyOnExitU3Ek__BackingField_4; }
	inline void set_U3CNotifyOnExitU3Ek__BackingField_4(bool value)
	{
		___U3CNotifyOnExitU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRepeatsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605, ___U3CRepeatsU3Ek__BackingField_5)); }
	inline bool get_U3CRepeatsU3Ek__BackingField_5() const { return ___U3CRepeatsU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CRepeatsU3Ek__BackingField_5() { return &___U3CRepeatsU3Ek__BackingField_5; }
	inline void set_U3CRepeatsU3Ek__BackingField_5(bool value)
	{
		___U3CRepeatsU3Ek__BackingField_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke
{
	double ___U3CLatitudeU3Ek__BackingField_0;
	double ___U3CLongitudeU3Ek__BackingField_1;
	float ___U3CRadiusU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_3;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_4;
	int32_t ___U3CRepeatsU3Ek__BackingField_5;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com
{
	double ___U3CLatitudeU3Ek__BackingField_0;
	double ___U3CLongitudeU3Ek__BackingField_1;
	float ___U3CRadiusU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_3;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_4;
	int32_t ___U3CRepeatsU3Ek__BackingField_5;
};

// Unity.Notifications.iOS.iOSNotificationSettings
struct iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::authorizationStatus
	int32_t ___authorizationStatus_0;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::notificationCenterSetting
	int32_t ___notificationCenterSetting_1;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::lockScreenSetting
	int32_t ___lockScreenSetting_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::carPlaySetting
	int32_t ___carPlaySetting_3;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertSetting
	int32_t ___alertSetting_4;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::badgeSetting
	int32_t ___badgeSetting_5;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::soundSetting
	int32_t ___soundSetting_6;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertStyle
	int32_t ___alertStyle_7;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::showPreviewsSetting
	int32_t ___showPreviewsSetting_8;

public:
	inline static int32_t get_offset_of_authorizationStatus_0() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___authorizationStatus_0)); }
	inline int32_t get_authorizationStatus_0() const { return ___authorizationStatus_0; }
	inline int32_t* get_address_of_authorizationStatus_0() { return &___authorizationStatus_0; }
	inline void set_authorizationStatus_0(int32_t value)
	{
		___authorizationStatus_0 = value;
	}

	inline static int32_t get_offset_of_notificationCenterSetting_1() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___notificationCenterSetting_1)); }
	inline int32_t get_notificationCenterSetting_1() const { return ___notificationCenterSetting_1; }
	inline int32_t* get_address_of_notificationCenterSetting_1() { return &___notificationCenterSetting_1; }
	inline void set_notificationCenterSetting_1(int32_t value)
	{
		___notificationCenterSetting_1 = value;
	}

	inline static int32_t get_offset_of_lockScreenSetting_2() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___lockScreenSetting_2)); }
	inline int32_t get_lockScreenSetting_2() const { return ___lockScreenSetting_2; }
	inline int32_t* get_address_of_lockScreenSetting_2() { return &___lockScreenSetting_2; }
	inline void set_lockScreenSetting_2(int32_t value)
	{
		___lockScreenSetting_2 = value;
	}

	inline static int32_t get_offset_of_carPlaySetting_3() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___carPlaySetting_3)); }
	inline int32_t get_carPlaySetting_3() const { return ___carPlaySetting_3; }
	inline int32_t* get_address_of_carPlaySetting_3() { return &___carPlaySetting_3; }
	inline void set_carPlaySetting_3(int32_t value)
	{
		___carPlaySetting_3 = value;
	}

	inline static int32_t get_offset_of_alertSetting_4() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___alertSetting_4)); }
	inline int32_t get_alertSetting_4() const { return ___alertSetting_4; }
	inline int32_t* get_address_of_alertSetting_4() { return &___alertSetting_4; }
	inline void set_alertSetting_4(int32_t value)
	{
		___alertSetting_4 = value;
	}

	inline static int32_t get_offset_of_badgeSetting_5() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___badgeSetting_5)); }
	inline int32_t get_badgeSetting_5() const { return ___badgeSetting_5; }
	inline int32_t* get_address_of_badgeSetting_5() { return &___badgeSetting_5; }
	inline void set_badgeSetting_5(int32_t value)
	{
		___badgeSetting_5 = value;
	}

	inline static int32_t get_offset_of_soundSetting_6() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___soundSetting_6)); }
	inline int32_t get_soundSetting_6() const { return ___soundSetting_6; }
	inline int32_t* get_address_of_soundSetting_6() { return &___soundSetting_6; }
	inline void set_soundSetting_6(int32_t value)
	{
		___soundSetting_6 = value;
	}

	inline static int32_t get_offset_of_alertStyle_7() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___alertStyle_7)); }
	inline int32_t get_alertStyle_7() const { return ___alertStyle_7; }
	inline int32_t* get_address_of_alertStyle_7() { return &___alertStyle_7; }
	inline void set_alertStyle_7(int32_t value)
	{
		___alertStyle_7 = value;
	}

	inline static int32_t get_offset_of_showPreviewsSetting_8() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D, ___showPreviewsSetting_8)); }
	inline int32_t get_showPreviewsSetting_8() const { return ___showPreviewsSetting_8; }
	inline int32_t* get_address_of_showPreviewsSetting_8() { return &___showPreviewsSetting_8; }
	inline void set_showPreviewsSetting_8(int32_t value)
	{
		___showPreviewsSetting_8 = value;
	}
};


// Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::timeInterval
	int32_t ___timeInterval_0;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_timeInterval_0() { return static_cast<int32_t>(offsetof(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923, ___timeInterval_0)); }
	inline int32_t get_timeInterval_0() const { return ___timeInterval_0; }
	inline int32_t* get_address_of_timeInterval_0() { return &___timeInterval_0; }
	inline void set_timeInterval_0(int32_t value)
	{
		___timeInterval_0 = value;
	}

	inline static int32_t get_offset_of_U3CRepeatsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923, ___U3CRepeatsU3Ek__BackingField_1)); }
	inline bool get_U3CRepeatsU3Ek__BackingField_1() const { return ___U3CRepeatsU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CRepeatsU3Ek__BackingField_1() { return &___U3CRepeatsU3Ek__BackingField_1; }
	inline void set_U3CRepeatsU3Ek__BackingField_1(bool value)
	{
		___U3CRepeatsU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>
struct Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE, ___list_0)); }
	inline List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * get_list_0() const { return ___list_0; }
	inline List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE, ___current_3)); }
	inline iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  get_current_3() const { return ___current_3; }
	inline iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___U3CIdU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___U3CUrlU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.IntPtr>
struct KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	intptr_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8, ___value_1)); }
	inline intptr_t get_value_1() const { return ___value_1; }
	inline intptr_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(intptr_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.IntPtr>
struct KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	intptr_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA, ___value_1)); }
	inline intptr_t get_value_1() const { return ___value_1; }
	inline intptr_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(intptr_t value)
	{
		___value_1 = value;
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


// System.DateTimeKind
struct DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
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

// Unity.Notifications.iOS.NotificationSoundType
struct NotificationSoundType_t2CB936B48876B62DF047CA9655710C3FD7EFB897 
{
public:
	// System.Int32 Unity.Notifications.iOS.NotificationSoundType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotificationSoundType_t2CB936B48876B62DF047CA9655710C3FD7EFB897, ___value___2)); }
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

// Unity.Notifications.iOS.PresentationOption
struct PresentationOption_t467B22F0F0ADD6BFC2DAFE468B6858EC2D8BBC0D 
{
public:
	// System.Int32 Unity.Notifications.iOS.PresentationOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PresentationOption_t467B22F0F0ADD6BFC2DAFE468B6858EC2D8BBC0D, ___value___2)); }
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


// Unity.Notifications.iOS.TriggerData
struct TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Notifications.iOS.TimeTriggerData Unity.Notifications.iOS.TriggerData::timeInterval
			TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332  ___timeInterval_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332  ___timeInterval_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Notifications.iOS.CalendarTriggerData Unity.Notifications.iOS.TriggerData::calendar
			CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13  ___calendar_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13  ___calendar_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Notifications.iOS.LocationTriggerData Unity.Notifications.iOS.TriggerData::location
			LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0  ___location_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0  ___location_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_timeInterval_0() { return static_cast<int32_t>(offsetof(TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3, ___timeInterval_0)); }
	inline TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332  get_timeInterval_0() const { return ___timeInterval_0; }
	inline TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332 * get_address_of_timeInterval_0() { return &___timeInterval_0; }
	inline void set_timeInterval_0(TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332  value)
	{
		___timeInterval_0 = value;
	}

	inline static int32_t get_offset_of_calendar_1() { return static_cast<int32_t>(offsetof(TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3, ___calendar_1)); }
	inline CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13  get_calendar_1() const { return ___calendar_1; }
	inline CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * get_address_of_calendar_1() { return &___calendar_1; }
	inline void set_calendar_1(CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13  value)
	{
		___calendar_1 = value;
	}

	inline static int32_t get_offset_of_location_2() { return static_cast<int32_t>(offsetof(TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3, ___location_2)); }
	inline LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0  get_location_2() const { return ___location_2; }
	inline LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * get_address_of_location_2() { return &___location_2; }
	inline void set_location_2(LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0  value)
	{
		___location_2 = value;
	}
};


// Unity.Notifications.iOS.iOSNotificationActionOptions
struct iOSNotificationActionOptions_t04FA081F38565E76BA930821BD06B51CE3A84F9E 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationActionOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(iOSNotificationActionOptions_t04FA081F38565E76BA930821BD06B51CE3A84F9E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 
{
public:
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Year>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CYearU3Ek__BackingField_0;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Month>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMonthU3Ek__BackingField_1;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Day>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CDayU3Ek__BackingField_2;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Hour>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CHourU3Ek__BackingField_3;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Minute>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinuteU3Ek__BackingField_4;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Second>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CSecondU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<UtcTime>k__BackingField
	bool ___U3CUtcTimeU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CYearU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CYearU3Ek__BackingField_0)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CYearU3Ek__BackingField_0() const { return ___U3CYearU3Ek__BackingField_0; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CYearU3Ek__BackingField_0() { return &___U3CYearU3Ek__BackingField_0; }
	inline void set_U3CYearU3Ek__BackingField_0(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CYearU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMonthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CMonthU3Ek__BackingField_1)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMonthU3Ek__BackingField_1() const { return ___U3CMonthU3Ek__BackingField_1; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMonthU3Ek__BackingField_1() { return &___U3CMonthU3Ek__BackingField_1; }
	inline void set_U3CMonthU3Ek__BackingField_1(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMonthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CDayU3Ek__BackingField_2)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CDayU3Ek__BackingField_2() const { return ___U3CDayU3Ek__BackingField_2; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CDayU3Ek__BackingField_2() { return &___U3CDayU3Ek__BackingField_2; }
	inline void set_U3CDayU3Ek__BackingField_2(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CDayU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CHourU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CHourU3Ek__BackingField_3)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CHourU3Ek__BackingField_3() const { return ___U3CHourU3Ek__BackingField_3; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CHourU3Ek__BackingField_3() { return &___U3CHourU3Ek__BackingField_3; }
	inline void set_U3CHourU3Ek__BackingField_3(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CHourU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMinuteU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CMinuteU3Ek__BackingField_4)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMinuteU3Ek__BackingField_4() const { return ___U3CMinuteU3Ek__BackingField_4; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMinuteU3Ek__BackingField_4() { return &___U3CMinuteU3Ek__BackingField_4; }
	inline void set_U3CMinuteU3Ek__BackingField_4(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMinuteU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSecondU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CSecondU3Ek__BackingField_5)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CSecondU3Ek__BackingField_5() const { return ___U3CSecondU3Ek__BackingField_5; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CSecondU3Ek__BackingField_5() { return &___U3CSecondU3Ek__BackingField_5; }
	inline void set_U3CSecondU3Ek__BackingField_5(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CSecondU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CUtcTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CUtcTimeU3Ek__BackingField_6)); }
	inline bool get_U3CUtcTimeU3Ek__BackingField_6() const { return ___U3CUtcTimeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CUtcTimeU3Ek__BackingField_6() { return &___U3CUtcTimeU3Ek__BackingField_6; }
	inline void set_U3CUtcTimeU3Ek__BackingField_6(bool value)
	{
		___U3CUtcTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CRepeatsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022, ___U3CRepeatsU3Ek__BackingField_7)); }
	inline bool get_U3CRepeatsU3Ek__BackingField_7() const { return ___U3CRepeatsU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CRepeatsU3Ek__BackingField_7() { return &___U3CRepeatsU3Ek__BackingField_7; }
	inline void set_U3CRepeatsU3Ek__BackingField_7(bool value)
	{
		___U3CRepeatsU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke
{
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CYearU3Ek__BackingField_0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CDayU3Ek__BackingField_2;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CHourU3Ek__BackingField_3;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CUtcTimeU3Ek__BackingField_6;
	int32_t ___U3CRepeatsU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com
{
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CYearU3Ek__BackingField_0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CDayU3Ek__BackingField_2;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CHourU3Ek__BackingField_3;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CUtcTimeU3Ek__BackingField_6;
	int32_t ___U3CRepeatsU3Ek__BackingField_7;
};

// Unity.Notifications.iOS.iOSNotificationCategoryOptions
struct iOSNotificationCategoryOptions_t2F6BDEC137D466DAECF2021A2864DACEA94070A6 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationCategoryOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(iOSNotificationCategoryOptions_t2F6BDEC137D466DAECF2021A2864DACEA94070A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Notifications.iOS.iOSNotificationTriggerType
struct iOSNotificationTriggerType_t78E8529D68EC3318286E315CC85677211E73C974 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationTriggerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(iOSNotificationTriggerType_t78E8529D68EC3318286E315CC85677211E73C974, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.IntPtr>
struct Enumerator_t741639F98DE67308FC85DC78CF84C0180FE11C14 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tD3028AE9C2E834A16C028C96DF140D8C77EDA043 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t741639F98DE67308FC85DC78CF84C0180FE11C14, ___dictionary_0)); }
	inline Dictionary_2_tD3028AE9C2E834A16C028C96DF140D8C77EDA043 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tD3028AE9C2E834A16C028C96DF140D8C77EDA043 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tD3028AE9C2E834A16C028C96DF140D8C77EDA043 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t741639F98DE67308FC85DC78CF84C0180FE11C14, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t741639F98DE67308FC85DC78CF84C0180FE11C14, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t741639F98DE67308FC85DC78CF84C0180FE11C14, ___current_3)); }
	inline KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t741639F98DE67308FC85DC78CF84C0180FE11C14, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.IntPtr>
struct Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4, ___dictionary_0)); }
	inline Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4, ___current_3)); }
	inline KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
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


// Unity.Notifications.iOS.iOSNotificationAction
struct iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729  : public RuntimeObject
{
public:
	// System.String Unity.Notifications.iOS.iOSNotificationAction::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.iOS.iOSNotificationAction::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_1;
	// Unity.Notifications.iOS.iOSNotificationActionOptions Unity.Notifications.iOS.iOSNotificationAction::<Options>k__BackingField
	int32_t ___U3COptionsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729, ___U3CTitleU3Ek__BackingField_1)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_1() const { return ___U3CTitleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_1() { return &___U3CTitleU3Ek__BackingField_1; }
	inline void set_U3CTitleU3Ek__BackingField_1(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTitleU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729, ___U3COptionsU3Ek__BackingField_2)); }
	inline int32_t get_U3COptionsU3Ek__BackingField_2() const { return ___U3COptionsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3COptionsU3Ek__BackingField_2() { return &___U3COptionsU3Ek__BackingField_2; }
	inline void set_U3COptionsU3Ek__BackingField_2(int32_t value)
	{
		___U3COptionsU3Ek__BackingField_2 = value;
	}
};


// Unity.Notifications.iOS.iOSNotificationCategory
struct iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAction> Unity.Notifications.iOS.iOSNotificationCategory::m_Actions
	List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD * ___m_Actions_0;
	// System.Collections.Generic.List`1<System.String> Unity.Notifications.iOS.iOSNotificationCategory::m_IntentIdentifiers
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_IntentIdentifiers_1;
	// System.String Unity.Notifications.iOS.iOSNotificationCategory::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_2;
	// System.String Unity.Notifications.iOS.iOSNotificationCategory::<HiddenPreviewsBodyPlaceholder>k__BackingField
	String_t* ___U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3;
	// System.String Unity.Notifications.iOS.iOSNotificationCategory::<SummaryFormat>k__BackingField
	String_t* ___U3CSummaryFormatU3Ek__BackingField_4;
	// Unity.Notifications.iOS.iOSNotificationCategoryOptions Unity.Notifications.iOS.iOSNotificationCategory::<Options>k__BackingField
	int32_t ___U3COptionsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Actions_0() { return static_cast<int32_t>(offsetof(iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F, ___m_Actions_0)); }
	inline List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD * get_m_Actions_0() const { return ___m_Actions_0; }
	inline List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD ** get_address_of_m_Actions_0() { return &___m_Actions_0; }
	inline void set_m_Actions_0(List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD * value)
	{
		___m_Actions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IntentIdentifiers_1() { return static_cast<int32_t>(offsetof(iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F, ___m_IntentIdentifiers_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_IntentIdentifiers_1() const { return ___m_IntentIdentifiers_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_IntentIdentifiers_1() { return &___m_IntentIdentifiers_1; }
	inline void set_m_IntentIdentifiers_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_IntentIdentifiers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IntentIdentifiers_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F, ___U3CIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CIdU3Ek__BackingField_2() const { return ___U3CIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_2() { return &___U3CIdU3Ek__BackingField_2; }
	inline void set_U3CIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F, ___U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3)); }
	inline String_t* get_U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3() const { return ___U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3() { return &___U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3; }
	inline void set_U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3(String_t* value)
	{
		___U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSummaryFormatU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F, ___U3CSummaryFormatU3Ek__BackingField_4)); }
	inline String_t* get_U3CSummaryFormatU3Ek__BackingField_4() const { return ___U3CSummaryFormatU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CSummaryFormatU3Ek__BackingField_4() { return &___U3CSummaryFormatU3Ek__BackingField_4; }
	inline void set_U3CSummaryFormatU3Ek__BackingField_4(String_t* value)
	{
		___U3CSummaryFormatU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSummaryFormatU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F, ___U3COptionsU3Ek__BackingField_5)); }
	inline int32_t get_U3COptionsU3Ek__BackingField_5() const { return ___U3COptionsU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3COptionsU3Ek__BackingField_5() { return &___U3COptionsU3Ek__BackingField_5; }
	inline void set_U3COptionsU3Ek__BackingField_5(int32_t value)
	{
		___U3COptionsU3Ek__BackingField_5 = value;
	}
};


// Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 
{
public:
	// System.String Unity.Notifications.iOS.iOSNotificationData::identifier
	String_t* ___identifier_0;
	// System.String Unity.Notifications.iOS.iOSNotificationData::title
	String_t* ___title_1;
	// System.String Unity.Notifications.iOS.iOSNotificationData::body
	String_t* ___body_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::badge
	int32_t ___badge_3;
	// System.String Unity.Notifications.iOS.iOSNotificationData::subtitle
	String_t* ___subtitle_4;
	// System.String Unity.Notifications.iOS.iOSNotificationData::categoryIdentifier
	String_t* ___categoryIdentifier_5;
	// System.String Unity.Notifications.iOS.iOSNotificationData::threadIdentifier
	String_t* ___threadIdentifier_6;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::soundType
	int32_t ___soundType_7;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::soundVolume
	float ___soundVolume_8;
	// System.String Unity.Notifications.iOS.iOSNotificationData::soundName
	String_t* ___soundName_9;
	// System.IntPtr Unity.Notifications.iOS.iOSNotificationData::userInfo
	intptr_t ___userInfo_10;
	// System.IntPtr Unity.Notifications.iOS.iOSNotificationData::attachments
	intptr_t ___attachments_11;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::triggerType
	int32_t ___triggerType_12;
	// Unity.Notifications.iOS.TriggerData Unity.Notifications.iOS.iOSNotificationData::trigger
	TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3  ___trigger_13;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_1), (void*)value);
	}

	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___body_2)); }
	inline String_t* get_body_2() const { return ___body_2; }
	inline String_t** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(String_t* value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_2), (void*)value);
	}

	inline static int32_t get_offset_of_badge_3() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___badge_3)); }
	inline int32_t get_badge_3() const { return ___badge_3; }
	inline int32_t* get_address_of_badge_3() { return &___badge_3; }
	inline void set_badge_3(int32_t value)
	{
		___badge_3 = value;
	}

	inline static int32_t get_offset_of_subtitle_4() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___subtitle_4)); }
	inline String_t* get_subtitle_4() const { return ___subtitle_4; }
	inline String_t** get_address_of_subtitle_4() { return &___subtitle_4; }
	inline void set_subtitle_4(String_t* value)
	{
		___subtitle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subtitle_4), (void*)value);
	}

	inline static int32_t get_offset_of_categoryIdentifier_5() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___categoryIdentifier_5)); }
	inline String_t* get_categoryIdentifier_5() const { return ___categoryIdentifier_5; }
	inline String_t** get_address_of_categoryIdentifier_5() { return &___categoryIdentifier_5; }
	inline void set_categoryIdentifier_5(String_t* value)
	{
		___categoryIdentifier_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryIdentifier_5), (void*)value);
	}

	inline static int32_t get_offset_of_threadIdentifier_6() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___threadIdentifier_6)); }
	inline String_t* get_threadIdentifier_6() const { return ___threadIdentifier_6; }
	inline String_t** get_address_of_threadIdentifier_6() { return &___threadIdentifier_6; }
	inline void set_threadIdentifier_6(String_t* value)
	{
		___threadIdentifier_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadIdentifier_6), (void*)value);
	}

	inline static int32_t get_offset_of_soundType_7() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___soundType_7)); }
	inline int32_t get_soundType_7() const { return ___soundType_7; }
	inline int32_t* get_address_of_soundType_7() { return &___soundType_7; }
	inline void set_soundType_7(int32_t value)
	{
		___soundType_7 = value;
	}

	inline static int32_t get_offset_of_soundVolume_8() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___soundVolume_8)); }
	inline float get_soundVolume_8() const { return ___soundVolume_8; }
	inline float* get_address_of_soundVolume_8() { return &___soundVolume_8; }
	inline void set_soundVolume_8(float value)
	{
		___soundVolume_8 = value;
	}

	inline static int32_t get_offset_of_soundName_9() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___soundName_9)); }
	inline String_t* get_soundName_9() const { return ___soundName_9; }
	inline String_t** get_address_of_soundName_9() { return &___soundName_9; }
	inline void set_soundName_9(String_t* value)
	{
		___soundName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundName_9), (void*)value);
	}

	inline static int32_t get_offset_of_userInfo_10() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___userInfo_10)); }
	inline intptr_t get_userInfo_10() const { return ___userInfo_10; }
	inline intptr_t* get_address_of_userInfo_10() { return &___userInfo_10; }
	inline void set_userInfo_10(intptr_t value)
	{
		___userInfo_10 = value;
	}

	inline static int32_t get_offset_of_attachments_11() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___attachments_11)); }
	inline intptr_t get_attachments_11() const { return ___attachments_11; }
	inline intptr_t* get_address_of_attachments_11() { return &___attachments_11; }
	inline void set_attachments_11(intptr_t value)
	{
		___attachments_11 = value;
	}

	inline static int32_t get_offset_of_triggerType_12() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___triggerType_12)); }
	inline int32_t get_triggerType_12() const { return ___triggerType_12; }
	inline int32_t* get_address_of_triggerType_12() { return &___triggerType_12; }
	inline void set_triggerType_12(int32_t value)
	{
		___triggerType_12 = value;
	}

	inline static int32_t get_offset_of_trigger_13() { return static_cast<int32_t>(offsetof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074, ___trigger_13)); }
	inline TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3  get_trigger_13() const { return ___trigger_13; }
	inline TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * get_address_of_trigger_13() { return &___trigger_13; }
	inline void set_trigger_13(TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3  value)
	{
		___trigger_13 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke
{
	char* ___identifier_0;
	char* ___title_1;
	char* ___body_2;
	int32_t ___badge_3;
	char* ___subtitle_4;
	char* ___categoryIdentifier_5;
	char* ___threadIdentifier_6;
	int32_t ___soundType_7;
	float ___soundVolume_8;
	char* ___soundName_9;
	intptr_t ___userInfo_10;
	intptr_t ___attachments_11;
	int32_t ___triggerType_12;
	TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3  ___trigger_13;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Il2CppChar* ___title_1;
	Il2CppChar* ___body_2;
	int32_t ___badge_3;
	Il2CppChar* ___subtitle_4;
	Il2CppChar* ___categoryIdentifier_5;
	Il2CppChar* ___threadIdentifier_6;
	int32_t ___soundType_7;
	float ___soundVolume_8;
	Il2CppChar* ___soundName_9;
	intptr_t ___userInfo_10;
	intptr_t ___attachments_11;
	int32_t ___triggerType_12;
	TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3  ___trigger_13;
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotification
struct iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25  : public RuntimeObject
{
public:
	// System.Nullable`1<System.Single> Unity.Notifications.iOS.iOSNotification::<SoundVolume>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CSoundVolumeU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotification::<Attachments>k__BackingField
	List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * ___U3CAttachmentsU3Ek__BackingField_1;
	// Unity.Notifications.iOS.iOSNotificationData Unity.Notifications.iOS.iOSNotification::data
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotification::userInfo
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo_3;

public:
	inline static int32_t get_offset_of_U3CSoundVolumeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25, ___U3CSoundVolumeU3Ek__BackingField_0)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CSoundVolumeU3Ek__BackingField_0() const { return ___U3CSoundVolumeU3Ek__BackingField_0; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CSoundVolumeU3Ek__BackingField_0() { return &___U3CSoundVolumeU3Ek__BackingField_0; }
	inline void set_U3CSoundVolumeU3Ek__BackingField_0(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CSoundVolumeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAttachmentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25, ___U3CAttachmentsU3Ek__BackingField_1)); }
	inline List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * get_U3CAttachmentsU3Ek__BackingField_1() const { return ___U3CAttachmentsU3Ek__BackingField_1; }
	inline List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C ** get_address_of_U3CAttachmentsU3Ek__BackingField_1() { return &___U3CAttachmentsU3Ek__BackingField_1; }
	inline void set_U3CAttachmentsU3Ek__BackingField_1(List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * value)
	{
		___U3CAttachmentsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttachmentsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25, ___data_2)); }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  get_data_2() const { return ___data_2; }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_2))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_2))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_2))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_2))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_2))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_2))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_2))->___soundName_9), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_userInfo_3() { return static_cast<int32_t>(offsetof(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25, ___userInfo_3)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_userInfo_3() const { return ___userInfo_3; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_userInfo_3() { return &___userInfo_3; }
	inline void set_userInfo_3(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___userInfo_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userInfo_3), (void*)value);
	}
};


// Unity.Notifications.iOS.iOSNotificationWithUserInfo
struct iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4 
{
public:
	// Unity.Notifications.iOS.iOSNotificationData Unity.Notifications.iOS.iOSNotificationWithUserInfo::data
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotificationWithUserInfo::userInfo
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo_1;
	// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotificationWithUserInfo::attachments
	List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * ___attachments_2;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4, ___data_0)); }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  get_data_0() const { return ___data_0; }
	inline iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___soundName_9), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_userInfo_1() { return static_cast<int32_t>(offsetof(iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4, ___userInfo_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_userInfo_1() const { return ___userInfo_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_userInfo_1() { return &___userInfo_1; }
	inline void set_userInfo_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___userInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userInfo_1), (void*)value);
	}

	inline static int32_t get_offset_of_attachments_2() { return static_cast<int32_t>(offsetof(iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4, ___attachments_2)); }
	inline List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * get_attachments_2() const { return ___attachments_2; }
	inline List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C ** get_address_of_attachments_2() { return &___attachments_2; }
	inline void set_attachments_2(List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * value)
	{
		___attachments_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachments_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationWithUserInfo
struct iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_pinvoke
{
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ___data_0;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo_1;
	List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * ___attachments_2;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationWithUserInfo
struct iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_com
{
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com ___data_0;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo_1;
	List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * ___attachments_2;
};

// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback
struct AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback
struct NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback
struct ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback
struct ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>
struct Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A 
{
public:
	// T System.Nullable`1::value
	iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A, ___value_0)); }
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  get_value_0() const { return ___value_0; }
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___value_0))->___data_0))->___soundName_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___userInfo_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___attachments_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper
struct iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Notifications.iOS.iOSNotificationAction[]
struct iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * m_Items[1];

public:
	inline iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * value)
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
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[]
struct iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  m_Items[1];

public:
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___soundName_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userInfo_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___attachments_2), (void*)NULL);
		#endif
	}
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data_0))->___soundName_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userInfo_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___attachments_2), (void*)NULL);
		#endif
	}
};
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

IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_back(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_cleanup(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com_back(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled);
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com_cleanup(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_back(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m055B3C8434BBE78C619B9FD25362C05693018CE6_gshared (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * __this, iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  ___item0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m52AFB0DD1D38F1B2D39F62908902B818D97E7DF7_gshared_inline (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE  List_1_GetEnumerator_m6A45B679BC1EECBB9AC64AC1C0D2F7064D5CAB1E_gshared (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  Enumerator_get_Current_mAAE55B9576E035F422B79EDA328DF89F83815456_gshared_inline (Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m491598D999088BC4951CCED617A1FD68465E8DBF_gshared (Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4F098123B7F4D6295E91179C53FAC3375833F057_gshared (Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDEA2F2369E63A9C4609035514ECB01A2F8EEBE55_gshared (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF_gshared (Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A * __this, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC545985B6CB8D0458E713F0F449D4C8B82BF397A_gshared (Dictionary_2_tD3028AE9C2E834A16C028C96DF140D8C77EDA043 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9F519978D9813E32F070E04ACB8A0AA4499894EB_gshared (Dictionary_2_tD3028AE9C2E834A16C028C96DF140D8C77EDA043 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4938058DEF7241E12488FFB9381F0FA6093FC7C9_gshared (Dictionary_2_tD3028AE9C2E834A16C028C96DF140D8C77EDA043 * __this, RuntimeObject * ___key0, intptr_t ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Dictionary_2_get_Item_mF1358AFABAB2B4BC8F011C1A5692D76B4C22A378_gshared (Dictionary_2_tD3028AE9C2E834A16C028C96DF140D8C77EDA043 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.IntPtr>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t741639F98DE67308FC85DC78CF84C0180FE11C14  Dictionary_2_GetEnumerator_m59149938D4DC2DCCCEDE5F7F17D97C129F601B8F_gshared (Dictionary_2_tD3028AE9C2E834A16C028C96DF140D8C77EDA043 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.IntPtr>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8  Enumerator_get_Current_mDD38489908E68C8998AC30B3FE2661BE1789C1D0_gshared_inline (Enumerator_t741639F98DE67308FC85DC78CF84C0180FE11C14 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.IntPtr>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Value_m0F02476F8A51CD2A362A4C5A14A6EF420668BC0D_gshared_inline (KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.IntPtr>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2533AD403EF633E23CDDED8021FE3C931E50582C_gshared (Enumerator_t741639F98DE67308FC85DC78CF84C0180FE11C14 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.IntPtr>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mDF09F9590C12498198B140F69A46808E5F6FB69D_gshared (Enumerator_t741639F98DE67308FC85DC78CF84C0180FE11C14 * __this, const RuntimeMethod* method);

// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterAuthorizationRequestCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mE250D9D2610655E9166576F59F86535D8DDC4F40 (const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_IsFinished(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_IsFinished_mAED11A9DD594CA7EA548FFD600E9FBB7F76CB336 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Granted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Granted_m0FDA28D3B975A3B02654DFB62C8F354047125D07 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Error_mE85BA8C0180B42AEE7BCCD5EC37604D91BAA11EF (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_DeviceToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_DeviceToken_m3DD8821EB8D8C6AD3AD1A7383BF5AFF33362B447 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_FromIntPtr_mF902872DD04971F6A22B8356F5AE4358F21C0FB1 (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___requestData0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m418B8879895C54AF03169B53DAA24EE9067E3DC7 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_UtcTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_UtcTime_m6D6EF46252C6198BB8379365E943A25D89616A69_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationCalendarTrigger Unity.Notifications.iOS.iOSNotificationCalendarTrigger::ToUtc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  iOSNotificationCalendarTrigger_ToUtc_m78B842064750F9BDB5CED8B62A688DA946135059 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared)(__this, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Double Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Latitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double iOSNotificationLocationTrigger_get_Latitude_m7FF6B3D8921E629467073919B8FE637C676306F6_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.Double Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Longitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double iOSNotificationLocationTrigger_get_Longitude_m40A4E5D82529580699BBB7D0D399FE483F347372_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Repeats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_Repeats_m38C493F8C90E10EEA49F87B65452D8DB21EA6B42_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mDC71803EA6776DD66EA7477CDCCD62191726B478 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotification::GenerateUniqueID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_GenerateUniqueID_mF7AAA00B19609D8A7C199AE074AD1F93A2AF3227 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m12783CF62ECB6ADBAEEF50373F000E9617A5301D (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___identifier0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Data_m7EB258537988162DEFFE93308B6FC3A016749489 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::set_ShowInForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ShowInForeground_m5CDAADD1F4958302625FB22BAD63593E91E5F9CD (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::set_ForegroundPresentationOption(Unity.Notifications.iOS.PresentationOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ForegroundPresentationOption_mD8228915A03D3B94FDC32569CF7BD658B3472C6B (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::set_Attachments(System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotification_set_Attachments_m1CF24E7DA6C06E6E1E7F023415604B4EABBFD741_inline (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * ___value0, const RuntimeMethod* method);
// System.Nullable`1<System.Single> Unity.Notifications.iOS.iOSNotification::get_SoundVolume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  iOSNotification_get_SoundVolume_m3D9788BEC01B11031FCE7021F4688072F8E7FE8F_inline (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotification::get_Attachments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * iOSNotification_get_Attachments_mFA2FB0000E8BD6D6FFA9B97C2F3835BF0AB7A89D_inline (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotificationAction::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Id_m8FFEE9A273939945116A9818B267022F9AB64C9A_inline (iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * __this, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotificationAction::get_Title()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Title_m9B860D8EC20777A0390D3868E2E79F6EC31647CC_inline (iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * __this, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationActionOptions Unity.Notifications.iOS.iOSNotificationAction::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationAction_get_Options_mAAB1E184E727E23D3C553A337BDEF6F58647E0E5_inline (iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * __this, const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_CreateUNNotificationAction(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__CreateUNNotificationAction_mB3BEE94F03EFD24C2F9EC54F5550A27CF9E3A957 (String_t* ___id0, String_t* ___title1, int32_t ___options2, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotificationAttachment::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Id_m1B8437D2A337B7215D3A6C6BAF175A9ADA45253D_inline (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationAttachment::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Id_mE24B264C7720EC1D63778503DDECB1C28D99DEBB_inline (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotificationAttachment::get_Url()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Url_m35E1E10007413B9CFFE9758836D0BB06BB50D438_inline (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationAttachment::set_Url(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Url_m18CC8994CE416B9CECC819391B4A3C3ADF91FDDD_inline (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, String_t* ___value0, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_mF726AFE6F7725E23FAE83D04A88BF15104791286 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Year(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m72F083C6925652471A793F83721247438D8F9950_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Month(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m6A4FE821F69215FB6B357B94F7EF074940D1B8A6_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Day(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m3A8C0DEB5043AA5508019FA3A718CC2BBDA9F354_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Hour(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m2CBC30DBB39E7242C46EF9C0768B8082E6A41A11_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Minute(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mAAEA2870CAEDB70DED3269CDE1BA05887380DDD1_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Second(System.Nullable`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_mD3512EC69850049A146489592559FF0746674365_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_UtcTime(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_UtcTime_m2BE645F9E24579A5CC2DF05AD4279937FA647C8E_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Repeats(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_m7186E9769E79CF510A57105FCEFCC325A3E18F28_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, bool ___value0, const RuntimeMethod* method);
// System.DateTime Unity.Notifications.iOS.iOSNotificationCalendarTrigger::AssignDateTimeComponents(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  iOSNotificationCalendarTrigger_AssignDateTimeComponents_m810D34B3C63C36B3483C1A28521D323D78F7D207 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dt0, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::AssignNonEmptyComponents(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_AssignNonEmptyComponents_mD1DE326009EB4B0D42227C23954C8E044A565451 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dt0, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.DateTimeKind System.DateTime::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// !0[] System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAction>::ToArray()
inline iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* List_1_ToArray_m9E95552C251944A09E2A6E97226B4B5880A42FB6 (List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD * __this, const RuntimeMethod* method)
{
	return ((  iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* (*) (List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_m5855BD63F57A3C47A7C2D4E91F9552AD07F9C1BB (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m824D721C760A07E399A19B050EDC98DCC2C37D3C (const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotification::GetDataForSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  iOSNotification_GetDataForSending_m8B36AD41A5E6E0039846F8AD37D91275252046F0 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_m9D69A4E8DDBFD5E6C112DA5279E51C8DEB9BC341 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveScheduledNotification_mC2E6054DAC790A0C93E8A6C72D41AA2843CADF20 (String_t* ___identifier0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveDeliveredNotification_m29618A47D61160A6774064857CF50896C6B1A5BA (String_t* ___identifier0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m7E8C66D7D84868BA73309E146A47115CBB7C99C2 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_m99ECD66BD77BB5D2AF504ED0E66E68693EBA858E (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_m0DDB14E9C0E2AED5E4D3C9476C8567807A19EAF4 (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_TimeInterval(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92 (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_Repeats(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m6171793E71519177BD5D31FD2EB3919063EF041D_inline (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_mB9751C47825AFE4609A354DE4295B9C075029BDC (intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_mE1A64E992B4A9C9DE069B2C8BE1E7F936965B5F3 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_m6F8D49A4F5423E19F5C0A43799F43794735D6E7F (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ReceiveNSDictionaryKeyValue(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m17BF76EFE06EAF8269A3CC4341FE8B64BC0D0969 (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ReceiveUNNotificationAttachment(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mDCCB51142652FB705C10A9373913A49015092EB0 (intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_m868F99A8BEFAEC8EC4117FCDD67497341FEBDD74 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m4B4D3BA5372081EA1B52F02FD578953EB94BCC2F (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_m5A8ED7AE498B5F12BE88A0F727CFAC0F9BF5E9AD (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m447301B068524960C99C7D6B9B39BF617BD4251F (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_mFC05250867229427A886AD23B0E316172DB359F3 (intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___requestData1, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationDataToDataWithUserInfo(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_mF5D785852B0691FDC6958A41A6ABACE5277C14A7 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnReceivedRemoteNotification_mADC0BAB68873EE7CDD2AD23DC88B9D770DCAD103 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnSentNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnSentNotification_m4A69C2985933635C1468D76CE10A2B5498A623A6 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotificationsWrapper::NSDictionaryToCs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * iOSNotificationsWrapper_NSDictionaryToCs_mB5F13AD34956A8A1A6E21E88B92FCF8997115156 (intptr_t ___dict0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotificationsWrapper::AttachmentsNSArrayToCs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * iOSNotificationsWrapper_AttachmentsNSArrayToCs_mF08902C04F6B255515765AA1D6B6A6B14CEB4919 (intptr_t ___array0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::Add(!0)
inline void List_1_Add_m055B3C8434BBE78C619B9FD25362C05693018CE6 (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * __this, iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C *, iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 , const RuntimeMethod*))List_1_Add_m055B3C8434BBE78C619B9FD25362C05693018CE6_gshared)(__this, ___item0, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_m86EB551B43BAE031EF4D2EDAD9181F4D55A71D77 (intptr_t ___request0, int32_t ___options1, bool ___registerForRemote2, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  iOSNotificationsWrapper__GetNotificationSettings_m17F955C6C3B74A5DC2331C2F399227A3B436091B (const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::CsDictionaryToObjC(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper_CsDictionaryToObjC_mF617FE581214F6529236E65804AC2D28AD3530E8 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo0, const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::CsAttachmentsToObjc(System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper_CsAttachmentsToObjc_m9F7D5BBEFB2439DF49FA11F2E6853C7343DF0B36 (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * ___attachments0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_m0FE073924AB38E03176B4977DF938681F82250CB (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataArray_mBAD4BEBC3B2A94F8906B686FB22FF1CED07D3E09 (int32_t* ___count0, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::MarshalAndFreeNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_m728E36B8447B7EF235AB8D72BBDAE956BD702AE6 (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastRespondedNotificationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__GetLastRespondedNotificationAction_m49C392416AF05FAC880C4752465A25DCEECBABC9 (const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastRespondedNotificationUserText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__GetLastRespondedNotificationUserText_m10FA743543A4A0916EB63EE698D9E1C5994AFFE0 (const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataArray_m6D9CFAEB227C95507F1CF1AD23262552EF3BBB7E (int32_t* ___count0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m8CD931EE1525CF3F1A3628F71285862BC74A4A92 (Type_t * ___t0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_mBB4D12265C6D3720CC85C120DB2E2E9351674AD4 (intptr_t ___ptr0, Type_t * ___structureType1, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m9A29705FE7EF0501FD9DB69925AA70734E66BC7D (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagediOSNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_mFAACEC35BA057EBCF8D73DB423B5273CB6A35BAE (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddItemToNSDictionary(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddItemToNSDictionary_m9A154BF72E2F74BA3712A1674F7EC9313C81C3AE (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::get_Count()
inline int32_t List_1_get_Count_m52AFB0DD1D38F1B2D39F62908902B818D97E7DF7_inline (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C *, const RuntimeMethod*))List_1_get_Count_m52AFB0DD1D38F1B2D39F62908902B818D97E7DF7_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::GetEnumerator()
inline Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE  List_1_GetEnumerator_m6A45B679BC1EECBB9AC64AC1C0D2F7064D5CAB1E (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE  (*) (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C *, const RuntimeMethod*))List_1_GetEnumerator_m6A45B679BC1EECBB9AC64AC1C0D2F7064D5CAB1E_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::get_Current()
inline iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  Enumerator_get_Current_mAAE55B9576E035F422B79EDA328DF89F83815456_inline (Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE * __this, const RuntimeMethod* method)
{
	return ((  iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  (*) (Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE *, const RuntimeMethod*))Enumerator_get_Current_mAAE55B9576E035F422B79EDA328DF89F83815456_gshared_inline)(__this, method);
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddAttachmentToNSArray(System.IntPtr,System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddAttachmentToNSArray_mDE2E1081FDC40EB3A8C72A562EA5FDF4215EF560 (intptr_t ___atts0, String_t* ___id1, String_t* ___url2, intptr_t* ___error3, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReleaseNSObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReleaseNSObject_m212E0AEC9796670B0ED6D7450EACFD839D842E13 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_NSErrorToMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__NSErrorToMessage_mA54C4C2355E1E53BA18915F38616C337230475F3 (intptr_t ___error0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::MoveNext()
inline bool Enumerator_MoveNext_m491598D999088BC4951CCED617A1FD68465E8DBF (Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE *, const RuntimeMethod*))Enumerator_MoveNext_m491598D999088BC4951CCED617A1FD68465E8DBF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Notifications.iOS.iOSNotificationAttachment>::Dispose()
inline void Enumerator_Dispose_m4F098123B7F4D6295E91179C53FAC3375833F057 (Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE *, const RuntimeMethod*))Enumerator_Dispose_m4F098123B7F4D6295E91179C53FAC3375833F057_gshared)(__this, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mE8C4B1D393FE153622948BF355728FCF08C98EF1 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback__ctor_m4B65D4BA92D77AE03C50211EFDCA8B881ECEB5CA (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReadNSDictionary(System.IntPtr,System.IntPtr,Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReadNSDictionary_m8B68845A104CA8314D8F0EEBC2A4C117E261F5D0 (intptr_t ___handle0, intptr_t ___nsDict1, ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * ___callback2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>::.ctor()
inline void List_1__ctor_mDEA2F2369E63A9C4609035514ECB01A2F8EEBE55 (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C *, const RuntimeMethod*))List_1__ctor_mDEA2F2369E63A9C4609035514ECB01A2F8EEBE55_gshared)(__this, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveUNNotificationAttachmentCallback__ctor_mCCFFCAB4402283480FE41B572A38ADD01AE57617 (ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReadAttachmentsNSArray(System.IntPtr,System.IntPtr,Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReadAttachmentsNSArray_m5C052EB0676A7EB39167CFAD45D3573616B83780 (intptr_t ___handle0, intptr_t ___nsArray1, ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A * ___callback2, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m7812ED294B75668B91289C61C97424EFF9CFCEC7 (int32_t ___badge0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_m7D53F47440E3D622F5C1E8CC9046BE86F9242B12 (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4A91869C17130A44FFB8275C7B3D57F7F66D9B75 (const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_m2F6EDD5C93023BDF31F2839D68BF209F18B5D4D1 (const RuntimeMethod* method);
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo>::.ctor(!0)
inline void Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF (Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A * __this, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A *, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4 , const RuntimeMethod*))Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>::.ctor()
inline void Dictionary_2__ctor_m21C86306EDE2BA282B1C80169EA6B4D62429BD95 (Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 *, const RuntimeMethod*))Dictionary_2__ctor_mC545985B6CB8D0458E713F0F449D4C8B82BF397A_gshared)(__this, method);
}
// Unity.Notifications.iOS.iOSNotificationAction[] Unity.Notifications.iOS.iOSNotificationCategory::get_Actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* iOSNotificationCategory_get_Actions_mF6C534453529EC6869CC5F59779CB5E11BD643E7 (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mD412F0CE5C91166E5AD153A4DD9B1DDB7C0A8972 (Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m9F519978D9813E32F070E04ACB8A0AA4499894EB_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m0DCF9C6DB49CAA24A295155397007F77CCEF7EA2 (Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * __this, String_t* ___key0, intptr_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 *, String_t*, intptr_t, const RuntimeMethod*))Dictionary_2_set_Item_m4938058DEF7241E12488FFB9381F0FA6093FC7C9_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>::get_Item(!0)
inline intptr_t Dictionary_2_get_Item_m469C9C901730E5AE4B72E50F1B3F959E1E4A56DD (Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mF1358AFABAB2B4BC8F011C1A5692D76B4C22A378_gshared)(__this, ___key0, method);
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddActionToNSArray(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddActionToNSArray_mFD325820BA9B587AFE5DC0052014FDFF16ABA5BA (intptr_t ___actions0, intptr_t ___action1, int32_t ___capacity2, const RuntimeMethod* method);
// System.String[] Unity.Notifications.iOS.iOSNotificationCategory::get_IntentIdentifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* iOSNotificationCategory_get_IntentIdentifiers_m016611A5CD651F12DEAD07571500EF4136CA7C90 (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddStringToNSArray(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddStringToNSArray_m642AE8BA78E406B55AC383F0114AFFC4844922C7 (intptr_t ___array0, String_t* ___str1, int32_t ___capacity2, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_Id_m4D902EFBB02F9DCD93D9CB24F8436DEB8BB28911_inline (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_HiddenPreviewsBodyPlaceholder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_HiddenPreviewsBodyPlaceholder_mC0A7B14924799C5FEBF0D083F2883BA53674FFBB_inline (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method);
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_SummaryFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_SummaryFormat_m82F443308C442357C68FCCD6E97FE8408C40B1D4_inline (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method);
// Unity.Notifications.iOS.iOSNotificationCategoryOptions Unity.Notifications.iOS.iOSNotificationCategory::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationCategory_get_Options_mEBA73C38D2D3B588CC19EBF141ED0293F76E9416_inline (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_CreateUNNotificationCategory(System.String,System.String,System.String,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__CreateUNNotificationCategory_mFCB3CC7E861CEA364780C09A8882CF2D4CB8896C (String_t* ___id0, String_t* ___hiddenPreviewsBodyPlaceholder1, String_t* ___summaryFormat2, int32_t ___options3, intptr_t ___actions4, intptr_t ___intentIdentifiers5, const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddCategoryToCategorySet(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddCategoryToCategorySet_mCFAD4457A9E51E54B60FFB444BD1B3962617C0D9 (intptr_t ___categorySet0, intptr_t ___category1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationCategories(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationCategories_m0E99574293B8F7E3E04B3F87F4B4A61450A60437 (intptr_t ___categorySet0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.IntPtr>::GetEnumerator()
inline Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4  Dictionary_2_GetEnumerator_m4B172709BA5195F9B5E3BA933FF0F219B3891251 (Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4  (*) (Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m59149938D4DC2DCCCEDE5F7F17D97C129F601B8F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.IntPtr>::get_Current()
inline KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA  Enumerator_get_Current_m791E953E29C33E73940968C88B6D7748A3798BDC_inline (Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA  (*) (Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4 *, const RuntimeMethod*))Enumerator_get_Current_mDD38489908E68C8998AC30B3FE2661BE1789C1D0_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.IntPtr>::get_Value()
inline intptr_t KeyValuePair_2_get_Value_m70C4ABD3F9F97FE5FD942670F7E5AFB0076215A6_inline (KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA * __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA *, const RuntimeMethod*))KeyValuePair_2_get_Value_m0F02476F8A51CD2A362A4C5A14A6EF420668BC0D_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.IntPtr>::MoveNext()
inline bool Enumerator_MoveNext_m1664B023733A5AAF8DC09D0B058F45871C82E354 (Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4 *, const RuntimeMethod*))Enumerator_MoveNext_m2533AD403EF633E23CDDED8021FE3C931E50582C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.IntPtr>::Dispose()
inline void Enumerator_Dispose_m43CBDA7EBE23CD948CEB5A61998934641888DD63 (Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4 *, const RuntimeMethod*))Enumerator_Dispose_mDF09F9590C12498198B140F69A46808E5F6FB69D_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC41C252011128378380FB873DA6C375C4B8E35D4 (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL _RequestAuthorization(intptr_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _ScheduleLocalNotification(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetNotificationReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetRemoteNotificationReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetAuthorizationRequestReceivedDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  DEFAULT_CALL _GetNotificationSettings();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetScheduledNotificationDataArray(int32_t*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetDeliveredNotificationDataArray(int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveScheduledNotification(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllScheduledNotifications();
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveDeliveredNotification(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetApplicationBadge(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetApplicationBadge();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetAppOpenedUsingNotification();
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllDeliveredNotifications();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetLastNotificationData();
IL2CPP_EXTERN_C char* DEFAULT_CALL _GetLastRespondedNotificationAction();
IL2CPP_EXTERN_C char* DEFAULT_CALL _GetLastRespondedNotificationUserText();
IL2CPP_EXTERN_C void DEFAULT_CALL _FreeUnmanagediOSNotificationDataArray(intptr_t, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _AddItemToNSDictionary(intptr_t, char*, char*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _AddAttachmentToNSArray(intptr_t, char*, char*, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL _ReadNSDictionary(intptr_t, intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL _ReadAttachmentsNSArray(intptr_t, intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _CreateUNNotificationAction(char*, char*, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _CreateUNTextInputNotificationAction(char*, char*, int32_t, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _ReleaseNSObject(intptr_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NSErrorToMessage(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _AddActionToNSArray(intptr_t, intptr_t, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _CreateUNNotificationCategory(char*, char*, char*, int32_t, intptr_t, intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _AddCategoryToCategorySet(intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _SetNotificationCategories(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _AddStringToNSArray(intptr_t, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _OpenNotificationSettings();
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
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_IsFinished(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_IsFinished_mAED11A9DD594CA7EA548FFD600E9FBB7F76CB336 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_IsFinished = value; }
		bool L_0 = ___value0;
		__this->set_m_IsFinished_0(L_0);
		// private set { m_IsFinished = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Granted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Granted_m0FDA28D3B975A3B02654DFB62C8F354047125D07 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_Granted = value; }
		bool L_0 = ___value0;
		__this->set_m_Granted_1(L_0);
		// private set { m_Granted = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_Error_mE85BA8C0180B42AEE7BCCD5EC37604D91BAA11EF (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_Error = value; }
		String_t* L_0 = ___value0;
		__this->set_m_Error_2(L_0);
		// private set { m_Error = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::set_DeviceToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_set_DeviceToken_m3DD8821EB8D8C6AD3AD1A7383BF5AFF33362B447 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private set { m_DeviceToken = value; }
		String_t* L_0 = ___value0;
		__this->set_m_DeviceToken_3(L_0);
		// private set { m_DeviceToken = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest__cctor_m951C9270727ED500F0DE9D0406552459D21FC137 (const RuntimeMethod* method)
{
	{
		// iOSNotificationsWrapper.RegisterAuthorizationRequestCallback();
		iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mE250D9D2610655E9166576F59F86535D8DDC4F40(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408 (AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * __this, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___requestData0, const RuntimeMethod* method)
{
	AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0005:
	try
	{ // begin try (depth: 1)
		AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_0 = V_0;
		Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// IsFinished = true;
		AuthorizationRequest_set_IsFinished_mAED11A9DD594CA7EA548FFD600E9FBB7F76CB336(__this, (bool)1, /*hidden argument*/NULL);
		// Granted = requestData.granted != 0;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_1 = ___requestData0;
		int32_t L_2 = L_1.get_granted_0();
		AuthorizationRequest_set_Granted_m0FDA28D3B975A3B02654DFB62C8F354047125D07(__this, (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// Error = requestData.error;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_3 = ___requestData0;
		String_t* L_4 = L_3.get_error_1();
		AuthorizationRequest_set_Error_mE85BA8C0180B42AEE7BCCD5EC37604D91BAA11EF(__this, L_4, /*hidden argument*/NULL);
		// DeviceToken = requestData.deviceToken;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_5 = ___requestData0;
		String_t* L_6 = L_5.get_deviceToken_2();
		AuthorizationRequest_set_DeviceToken_m3DD8821EB8D8C6AD3AD1A7383BF5AFF33362B447(__this, L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x4F, FINALLY_0044);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_004e;
			}
		}

IL_0047:
		{
			AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_8 = V_0;
			Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1(L_8, /*hidden argument*/NULL);
		}

IL_004e:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.AuthorizationRequest::OnAuthorizationRequestCompleted(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequest_OnAuthorizationRequestCompleted_mFC05250867229427A886AD23B0E316172DB359F3 (intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___requestData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		// var handle = GCHandle.FromIntPtr(request);
		intptr_t L_0 = ___request0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_FromIntPtr_mF902872DD04971F6A22B8356F5AE4358F21C0FB1((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var req = handle.Target as AuthorizationRequest;
		RuntimeObject * L_2;
		L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 *)IsInstClass((RuntimeObject*)L_2, AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676_il2cpp_TypeInfo_var));
		// handle.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// req.OnAuthorizationRequestCompleted(requestData);
		AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676 * L_3 = V_1;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_4 = ___requestData1;
		NullCheck(L_3);
		AuthorizationRequest_OnAuthorizationRequestCompleted_mB3579FF2C6E254D3DA4EDC75CA2FF3A00E209408(L_3, L_4, /*hidden argument*/NULL);
		goto IL_0035;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.LogException(e);
		Exception_t * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogException_m418B8879895C54AF03169B53DAA24EE9067E3DC7(L_5, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0035;
	} // end catch (depth: 1)

IL_0035:
	{
		// }
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m1B7389133A43D709FB46E5D6243953A1D14CFBD5 (EmbeddedAttribute_tB2FAC817877BBE79BED6B020ABD5B9B1E4CD4569 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m3E3DB4779359F51DB7256A1D9C9C8097145CB031 (IsReadOnlyAttribute_tFAD0993D14CC3E2B1685A7D29A1B551E9A8DD4C3 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled)
{
	marshaled.___granted_0 = unmarshaled.get_granted_0();
	marshaled.___error_1 = il2cpp_codegen_marshal_string(unmarshaled.get_error_1());
	marshaled.___deviceToken_2 = il2cpp_codegen_marshal_string(unmarshaled.get_deviceToken_2());
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_back(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled)
{
	int32_t unmarshaled_granted_temp_0 = 0;
	unmarshaled_granted_temp_0 = marshaled.___granted_0;
	unmarshaled.set_granted_0(unmarshaled_granted_temp_0);
	unmarshaled.set_error_1(il2cpp_codegen_marshal_string_result(marshaled.___error_1));
	unmarshaled.set_deviceToken_2(il2cpp_codegen_marshal_string_result(marshaled.___deviceToken_2));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___deviceToken_2);
	marshaled.___deviceToken_2 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_com(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com& marshaled)
{
	marshaled.___granted_0 = unmarshaled.get_granted_0();
	marshaled.___error_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_error_1());
	marshaled.___deviceToken_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_deviceToken_2());
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_com_back(const iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com& marshaled, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6& unmarshaled)
{
	int32_t unmarshaled_granted_temp_0 = 0;
	unmarshaled_granted_temp_0 = marshaled.___granted_0;
	unmarshaled.set_granted_0(unmarshaled_granted_temp_0);
	unmarshaled.set_error_1(il2cpp_codegen_marshal_bstring_result(marshaled.___error_1));
	unmarshaled.set_deviceToken_2(il2cpp_codegen_marshal_bstring_result(marshaled.___deviceToken_2));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_com_cleanup(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___deviceToken_2);
	marshaled.___deviceToken_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Notifications.iOS.iOSNotification::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Identifier_mFE947313351A2805A5146828FA3AC987F5AF0E8F (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return data.identifier; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_2();
		String_t* L_1 = L_0->get_identifier_0();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return data.identifier; }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Identifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Identifier_m1CE4470A3B31A3641B8D64ABD0031EE60C361DBA (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.identifier = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_2();
		String_t* L_1 = ___value0;
		L_0->set_identifier_0(L_1);
		// set { data.identifier = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_CategoryIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_CategoryIdentifier_mECC330742B4318BB85E0298208A7B05CC2677A4F (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.categoryIdentifier = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_2();
		String_t* L_1 = ___value0;
		L_0->set_categoryIdentifier_5(L_1);
		// set { data.categoryIdentifier = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ThreadIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ThreadIdentifier_m992B4B56DF5825EF652448A4F23FA925A5EBF930 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.threadIdentifier = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_2();
		String_t* L_1 = ___value0;
		L_0->set_threadIdentifier_6(L_1);
		// set { data.threadIdentifier = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Title_m5543C334BAC8EB7E0CB41C0FAB190BF0E8A49CE3 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.title = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_2();
		String_t* L_1 = ___value0;
		L_0->set_title_1(L_1);
		// set { data.title = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Subtitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Subtitle_m41A15FB72EF7B7709A765873B86F1CFFE96BEBEA (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.subtitle = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_2();
		String_t* L_1 = ___value0;
		L_0->set_subtitle_4(L_1);
		// set { data.subtitle = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Body(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Body_m60222C7FE1A0B5A8959C1B2F62301B343079EBB5 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.body = value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_2();
		String_t* L_1 = ___value0;
		L_0->set_body_2(L_1);
		// set { data.body = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ShowInForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ShowInForeground_m5CDAADD1F4958302625FB22BAD63593E91E5F9CD (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B3_2 = NULL;
	{
		// set { userInfo["showInForeground"] = value ? "YES" : "NO"; }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_userInfo_3();
		bool L_1 = ___value0;
		G_B1_0 = _stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral14ECD5B329440AEF4A1AA1B6D967DAECF5BEC86F;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = _stringLiteral7471FC92FC1AA570D64A46C83CB352615E0781C2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = _stringLiteralD8F50872454B1DDA643F3A29398B40D5880A7DDA;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		NullCheck(G_B3_2);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// set { userInfo["showInForeground"] = value ? "YES" : "NO"; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ForegroundPresentationOption(Unity.Notifications.iOS.PresentationOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ForegroundPresentationOption_mD8228915A03D3B94FDC32569CF7BD658B3472C6B (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D955B52CE2A9A7D166E809868D6DAC459EF687);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// set { userInfo["showInForegroundPresentationOptions"] = ((int)value).ToString(); }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_userInfo_3();
		int32_t L_1 = ___value0;
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_0, _stringLiteralC2D955B52CE2A9A7D166E809868D6DAC459EF687, L_2, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// set { userInfo["showInForegroundPresentationOptions"] = ((int)value).ToString(); }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_SoundType(Unity.Notifications.iOS.NotificationSoundType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_SoundType_m33332408D5195BA3592E87547B2538B5237AA32E (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { data.soundType = (int)value; }
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_2();
		int32_t L_1 = ___value0;
		L_0->set_soundType_7(L_1);
		// set { data.soundType = (int)value; }
		return;
	}
}
// System.Nullable`1<System.Single> Unity.Notifications.iOS.iOSNotification::get_SoundVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  iOSNotification_get_SoundVolume_m3D9788BEC01B11031FCE7021F4688072F8E7FE8F (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	{
		// public float? SoundVolume { get; set; }
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_0 = __this->get_U3CSoundVolumeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Data_m7EB258537988162DEFFE93308B6FC3A016749489 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { userInfo["data"] = value; }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_userInfo_3();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_0, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, L_1, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// set { userInfo["data"] = value; }
		return;
	}
}
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotification::get_Attachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * iOSNotification_get_Attachments_mFA2FB0000E8BD6D6FFA9B97C2F3835BF0AB7A89D (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	{
		// public List<iOSNotificationAttachment> Attachments { get; set; }
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_0 = __this->get_U3CAttachmentsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Attachments(System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Attachments_m1CF24E7DA6C06E6E1E7F023415604B4EABBFD741 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * ___value0, const RuntimeMethod* method)
{
	{
		// public List<iOSNotificationAttachment> Attachments { get; set; }
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_0 = ___value0;
		__this->set_U3CAttachmentsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Trigger(Unity.Notifications.iOS.iOSNotificationTrigger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Trigger_m41B5FA43DDC81CFD154152C84A907A53B023E586 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FC8D6A046F1C98C7C41C53A755D310105555A8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationTrigger_t8E00E938D40866C0F592F785DFCA748E50C10391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_7;
	memset((&V_7), 0, sizeof(V_7));
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t G_B12_0 = 0;
	TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332 * G_B16_0 = NULL;
	TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332 * G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332 * G_B17_1 = NULL;
	String_t* G_B22_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B22_1 = NULL;
	String_t* G_B21_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B21_1 = NULL;
	String_t* G_B23_0 = NULL;
	String_t* G_B23_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B23_2 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B27_0 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B28_1 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B30_0 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B29_0 = NULL;
	int32_t G_B31_0 = 0;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B31_1 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B33_0 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B32_0 = NULL;
	int32_t G_B34_0 = 0;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B34_1 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B36_0 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B35_0 = NULL;
	int32_t G_B37_0 = 0;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B37_1 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B39_0 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B38_0 = NULL;
	int32_t G_B40_0 = 0;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B40_1 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B42_0 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B41_0 = NULL;
	int32_t G_B43_0 = 0;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B43_1 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B45_0 = NULL;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * G_B46_1 = NULL;
	LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * G_B49_0 = NULL;
	LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * G_B48_0 = NULL;
	int32_t G_B50_0 = 0;
	LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * G_B50_1 = NULL;
	LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * G_B52_0 = NULL;
	LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * G_B51_0 = NULL;
	int32_t G_B53_0 = 0;
	LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * G_B53_1 = NULL;
	LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * G_B55_0 = NULL;
	LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * G_B54_0 = NULL;
	int32_t G_B56_0 = 0;
	LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * G_B56_1 = NULL;
	{
		// switch (value.Type)
		RuntimeObject* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationTrigger::get_Type() */, iOSNotificationTrigger_t8E00E938D40866C0F592F785DFCA748E50C10391_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)3)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_0351;
		}
	}
	{
		goto IL_0353;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)10))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)20))))
		{
			goto IL_0289;
		}
	}
	{
		goto IL_0353;
	}

IL_0033:
	{
		// var trigger = (iOSNotificationTimeIntervalTrigger)value;
		RuntimeObject* L_8 = ___value0;
		V_2 = ((*(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)((iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)UnBox(L_8, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_il2cpp_TypeInfo_var))));
		// data.trigger.timeInterval.interval = trigger.timeInterval;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_9 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_10 = L_9->get_address_of_trigger_13();
		TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332 * L_11 = L_10->get_address_of_timeInterval_0();
		iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923  L_12 = V_2;
		int32_t L_13 = L_12.get_timeInterval_0();
		L_11->set_interval_0(L_13);
		// if (trigger.Repeats && trigger.timeInterval < 60)
		bool L_14;
		L_14 = iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline((iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)(&V_2), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006b;
		}
	}
	{
		iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923  L_15 = V_2;
		int32_t L_16 = L_15.get_timeInterval_0();
		G_B12_0 = ((((int32_t)L_16) < ((int32_t)((int32_t)60)))? 1 : 0);
		goto IL_006c;
	}

IL_006b:
	{
		G_B12_0 = 0;
	}

IL_006c:
	{
		V_3 = (bool)G_B12_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_007b;
		}
	}
	{
		// throw new ArgumentException("Time interval must be 60 seconds or greater for repeating notifications.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_18 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF095BC29C39D74DCA3923E99C34901B64AF08344)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotification_set_Trigger_m41B5FA43DDC81CFD154152C84A907A53B023E586_RuntimeMethod_var)));
	}

IL_007b:
	{
		// data.trigger.timeInterval.repeats = (byte)(trigger.Repeats ? 1 : 0);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_19 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_20 = L_19->get_address_of_trigger_13();
		TimeTriggerData_tE3A22A674F472E276F74A9D42488FC286B4BF332 * L_21 = L_20->get_address_of_timeInterval_0();
		bool L_22;
		L_22 = iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline((iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *)(&V_2), /*hidden argument*/NULL);
		G_B15_0 = L_21;
		if (L_22)
		{
			G_B16_0 = L_21;
			goto IL_0097;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		goto IL_0098;
	}

IL_0097:
	{
		G_B17_0 = 1;
		G_B17_1 = G_B16_0;
	}

IL_0098:
	{
		G_B17_1->set_repeats_1((uint8_t)((int32_t)((uint8_t)G_B17_0)));
		// break;
		goto IL_036e;
	}

IL_00a3:
	{
		// var trigger = ((iOSNotificationCalendarTrigger)value);
		RuntimeObject* L_23 = ___value0;
		V_4 = ((*(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)UnBox(L_23, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_il2cpp_TypeInfo_var))));
		// if (userInfo == null)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_24 = __this->get_userInfo_3();
		V_5 = (bool)((((RuntimeObject*)(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)L_24) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		// userInfo = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_26 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_26, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_userInfo_3(L_26);
	}

IL_00c6:
	{
		// userInfo["OriginalUtc"] = trigger.UtcTime ? "1" : "0";
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_27 = __this->get_userInfo_3();
		bool L_28;
		L_28 = iOSNotificationCalendarTrigger_get_UtcTime_m6D6EF46252C6198BB8379365E943A25D89616A69_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		G_B21_0 = _stringLiteral7FC8D6A046F1C98C7C41C53A755D310105555A8C;
		G_B21_1 = L_27;
		if (L_28)
		{
			G_B22_0 = _stringLiteral7FC8D6A046F1C98C7C41C53A755D310105555A8C;
			G_B22_1 = L_27;
			goto IL_00e1;
		}
	}
	{
		G_B23_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		goto IL_00e6;
	}

IL_00e1:
	{
		G_B23_0 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
	}

IL_00e6:
	{
		NullCheck(G_B23_2);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(G_B23_2, G_B23_1, G_B23_0, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// if (!trigger.UtcTime)
		bool L_29;
		L_29 = iOSNotificationCalendarTrigger_get_UtcTime_m6D6EF46252C6198BB8379365E943A25D89616A69_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0105;
		}
	}
	{
		// trigger = trigger.ToUtc();
		iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  L_31;
		L_31 = iOSNotificationCalendarTrigger_ToUtc_m78B842064750F9BDB5CED8B62A688DA946135059((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_4 = L_31;
	}

IL_0105:
	{
		// data.trigger.calendar.year = trigger.Year != null ? trigger.Year.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_32 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_33 = L_32->get_address_of_trigger_13();
		CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * L_34 = L_33->get_address_of_calendar_1();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_35;
		L_35 = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_35;
		bool L_36;
		L_36 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B26_0 = L_34;
		if (L_36)
		{
			G_B27_0 = L_34;
			goto IL_012a;
		}
	}
	{
		G_B28_0 = (-1);
		G_B28_1 = G_B26_0;
		goto IL_013a;
	}

IL_012a:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_37;
		L_37 = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_37;
		int32_t L_38;
		L_38 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B28_0 = L_38;
		G_B28_1 = G_B27_0;
	}

IL_013a:
	{
		G_B28_1->set_year_0(G_B28_0);
		// data.trigger.calendar.month = trigger.Month != null ? trigger.Month.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_39 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_40 = L_39->get_address_of_trigger_13();
		CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * L_41 = L_40->get_address_of_calendar_1();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_42;
		L_42 = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_42;
		bool L_43;
		L_43 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B29_0 = L_41;
		if (L_43)
		{
			G_B30_0 = L_41;
			goto IL_0164;
		}
	}
	{
		G_B31_0 = (-1);
		G_B31_1 = G_B29_0;
		goto IL_0174;
	}

IL_0164:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_44;
		L_44 = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_44;
		int32_t L_45;
		L_45 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B31_0 = L_45;
		G_B31_1 = G_B30_0;
	}

IL_0174:
	{
		G_B31_1->set_month_1(G_B31_0);
		// data.trigger.calendar.day = trigger.Day != null ? trigger.Day.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_46 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_47 = L_46->get_address_of_trigger_13();
		CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * L_48 = L_47->get_address_of_calendar_1();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_49;
		L_49 = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_49;
		bool L_50;
		L_50 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B32_0 = L_48;
		if (L_50)
		{
			G_B33_0 = L_48;
			goto IL_019e;
		}
	}
	{
		G_B34_0 = (-1);
		G_B34_1 = G_B32_0;
		goto IL_01ae;
	}

IL_019e:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_51;
		L_51 = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_51;
		int32_t L_52;
		L_52 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B34_0 = L_52;
		G_B34_1 = G_B33_0;
	}

IL_01ae:
	{
		G_B34_1->set_day_2(G_B34_0);
		// data.trigger.calendar.hour = trigger.Hour != null ? trigger.Hour.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_53 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_54 = L_53->get_address_of_trigger_13();
		CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * L_55 = L_54->get_address_of_calendar_1();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_56;
		L_56 = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_56;
		bool L_57;
		L_57 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B35_0 = L_55;
		if (L_57)
		{
			G_B36_0 = L_55;
			goto IL_01d8;
		}
	}
	{
		G_B37_0 = (-1);
		G_B37_1 = G_B35_0;
		goto IL_01e8;
	}

IL_01d8:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_58;
		L_58 = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_58;
		int32_t L_59;
		L_59 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B37_0 = L_59;
		G_B37_1 = G_B36_0;
	}

IL_01e8:
	{
		G_B37_1->set_hour_3(G_B37_0);
		// data.trigger.calendar.minute = trigger.Minute != null ? trigger.Minute.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_60 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_61 = L_60->get_address_of_trigger_13();
		CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * L_62 = L_61->get_address_of_calendar_1();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_63;
		L_63 = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_63;
		bool L_64;
		L_64 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B38_0 = L_62;
		if (L_64)
		{
			G_B39_0 = L_62;
			goto IL_0212;
		}
	}
	{
		G_B40_0 = (-1);
		G_B40_1 = G_B38_0;
		goto IL_0222;
	}

IL_0212:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_65;
		L_65 = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_65;
		int32_t L_66;
		L_66 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B40_0 = L_66;
		G_B40_1 = G_B39_0;
	}

IL_0222:
	{
		G_B40_1->set_minute_4(G_B40_0);
		// data.trigger.calendar.second = trigger.Second != null ? trigger.Second.Value : -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_67 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_68 = L_67->get_address_of_trigger_13();
		CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * L_69 = L_68->get_address_of_calendar_1();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_70;
		L_70 = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_70;
		bool L_71;
		L_71 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		G_B41_0 = L_69;
		if (L_71)
		{
			G_B42_0 = L_69;
			goto IL_024c;
		}
	}
	{
		G_B43_0 = (-1);
		G_B43_1 = G_B41_0;
		goto IL_025c;
	}

IL_024c:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_72;
		L_72 = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		V_7 = L_72;
		int32_t L_73;
		L_73 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_7), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B43_0 = L_73;
		G_B43_1 = G_B42_0;
	}

IL_025c:
	{
		G_B43_1->set_second_5(G_B43_0);
		// data.trigger.calendar.repeats = (byte)(trigger.Repeats ? 1 : 0);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_74 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_75 = L_74->get_address_of_trigger_13();
		CalendarTriggerData_tFA29D73816A0A678A6E574DC3D51A3D21AE70C13 * L_76 = L_75->get_address_of_calendar_1();
		bool L_77;
		L_77 = iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_4), /*hidden argument*/NULL);
		G_B44_0 = L_76;
		if (L_77)
		{
			G_B45_0 = L_76;
			goto IL_027d;
		}
	}
	{
		G_B46_0 = 0;
		G_B46_1 = G_B44_0;
		goto IL_027e;
	}

IL_027d:
	{
		G_B46_0 = 1;
		G_B46_1 = G_B45_0;
	}

IL_027e:
	{
		G_B46_1->set_repeats_6((uint8_t)((int32_t)((uint8_t)G_B46_0)));
		// break;
		goto IL_036e;
	}

IL_0289:
	{
		// var trigger = (iOSNotificationLocationTrigger)value;
		RuntimeObject* L_78 = ___value0;
		V_8 = ((*(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)UnBox(L_78, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_il2cpp_TypeInfo_var))));
		// data.trigger.location.latitude = trigger.Latitude;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_79 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_80 = L_79->get_address_of_trigger_13();
		LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * L_81 = L_80->get_address_of_location_2();
		double L_82;
		L_82 = iOSNotificationLocationTrigger_get_Latitude_m7FF6B3D8921E629467073919B8FE637C676306F6_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_8), /*hidden argument*/NULL);
		L_81->set_latitude_0(L_82);
		// data.trigger.location.longitude = trigger.Longitude;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_83 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_84 = L_83->get_address_of_trigger_13();
		LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * L_85 = L_84->get_address_of_location_2();
		double L_86;
		L_86 = iOSNotificationLocationTrigger_get_Longitude_m40A4E5D82529580699BBB7D0D399FE483F347372_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_8), /*hidden argument*/NULL);
		L_85->set_longitude_1(L_86);
		// data.trigger.location.notifyOnEntry = (byte)(trigger.NotifyOnEntry ? 1 : 0);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_87 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_88 = L_87->get_address_of_trigger_13();
		LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * L_89 = L_88->get_address_of_location_2();
		bool L_90;
		L_90 = iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_8), /*hidden argument*/NULL);
		G_B48_0 = L_89;
		if (L_90)
		{
			G_B49_0 = L_89;
			goto IL_02e6;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_02e7;
	}

IL_02e6:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_02e7:
	{
		G_B50_1->set_notifyOnEntry_3((uint8_t)((int32_t)((uint8_t)G_B50_0)));
		// data.trigger.location.notifyOnExit = (byte)(trigger.NotifyOnExit ? 1 : 0);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_91 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_92 = L_91->get_address_of_trigger_13();
		LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * L_93 = L_92->get_address_of_location_2();
		bool L_94;
		L_94 = iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_8), /*hidden argument*/NULL);
		G_B51_0 = L_93;
		if (L_94)
		{
			G_B52_0 = L_93;
			goto IL_0309;
		}
	}
	{
		G_B53_0 = 0;
		G_B53_1 = G_B51_0;
		goto IL_030a;
	}

IL_0309:
	{
		G_B53_0 = 1;
		G_B53_1 = G_B52_0;
	}

IL_030a:
	{
		G_B53_1->set_notifyOnExit_4((uint8_t)((int32_t)((uint8_t)G_B53_0)));
		// data.trigger.location.radius = trigger.Radius;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_95 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_96 = L_95->get_address_of_trigger_13();
		LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * L_97 = L_96->get_address_of_location_2();
		float L_98;
		L_98 = iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_8), /*hidden argument*/NULL);
		L_97->set_radius_2(L_98);
		// data.trigger.location.repeats = (byte)(trigger.Repeats ? 1 : 0);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_99 = __this->get_address_of_data_2();
		TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3 * L_100 = L_99->get_address_of_trigger_13();
		LocationTriggerData_t504F8C90EBBB1234561F833C12A5060A366988C0 * L_101 = L_100->get_address_of_location_2();
		bool L_102;
		L_102 = iOSNotificationLocationTrigger_get_Repeats_m38C493F8C90E10EEA49F87B65452D8DB21EA6B42_inline((iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *)(&V_8), /*hidden argument*/NULL);
		G_B54_0 = L_101;
		if (L_102)
		{
			G_B55_0 = L_101;
			goto IL_0348;
		}
	}
	{
		G_B56_0 = 0;
		G_B56_1 = G_B54_0;
		goto IL_0349;
	}

IL_0348:
	{
		G_B56_0 = 1;
		G_B56_1 = G_B55_0;
	}

IL_0349:
	{
		G_B56_1->set_repeats_5((uint8_t)((int32_t)((uint8_t)G_B56_0)));
		// break;
		goto IL_036e;
	}

IL_0351:
	{
		// break;
		goto IL_036e;
	}

IL_0353:
	{
		// throw new Exception($"Unknown trigger type {value.Type}");
		RuntimeObject* L_103 = ___value0;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationTrigger::get_Type() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationTrigger_t8E00E938D40866C0F592F785DFCA748E50C10391_il2cpp_TypeInfo_var)), L_103);
		int32_t L_105 = L_104;
		RuntimeObject * L_106 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationTriggerType_t78E8529D68EC3318286E315CC85677211E73C974_il2cpp_TypeInfo_var)), &L_105);
		String_t* L_107;
		L_107 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88B697A2C9C4DE6D613594AF141EACF167383C3E)), L_106, /*hidden argument*/NULL);
		Exception_t * L_108 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_108, L_107, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_108, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotification_set_Trigger_m41B5FA43DDC81CFD154152C84A907A53B023E586_RuntimeMethod_var)));
	}

IL_036e:
	{
		// data.triggerType = (int)value.Type;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_109 = __this->get_address_of_data_2();
		RuntimeObject* L_110 = ___value0;
		NullCheck(L_110);
		int32_t L_111;
		L_111 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationTrigger::get_Type() */, iOSNotificationTrigger_t8E00E938D40866C0F592F785DFCA748E50C10391_il2cpp_TypeInfo_var, L_110);
		L_109->set_triggerType_12(L_111);
		// }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::GenerateUniqueID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_GenerateUniqueID_mF7AAA00B19609D8A7C199AE074AD1F93A2AF3227 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// return Math.Abs(DateTime.Now.ToString("yyMMddHHmmssffffff").GetHashCode()).ToString();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_Now_mDC71803EA6776DD66EA7477CDCCD62191726B478(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = il2cpp_codegen_abs(L_2);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m4EBBEFB3A261C60DC402F75851F9658595E2E4B4 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	{
		// public iOSNotification() : this(GenerateUniqueID())
		String_t* L_0;
		L_0 = iOSNotification_GenerateUniqueID_mF7AAA00B19609D8A7C199AE074AD1F93A2AF3227(/*hidden argument*/NULL);
		iOSNotification__ctor_m12783CF62ECB6ADBAEEF50373F000E9617A5301D(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m12783CF62ECB6ADBAEEF50373F000E9617A5301D (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public iOSNotification(string identifier)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// data = new iOSNotificationData();
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_2();
		il2cpp_codegen_initobj(L_0, sizeof(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 ));
		// data.identifier = identifier;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_1 = __this->get_address_of_data_2();
		String_t* L_2 = ___identifier0;
		L_1->set_identifier_0(L_2);
		// data.title = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_3 = __this->get_address_of_data_2();
		L_3->set_title_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.body = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_4 = __this->get_address_of_data_2();
		L_4->set_body_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.badge = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_5 = __this->get_address_of_data_2();
		L_5->set_badge_3((-1));
		// data.subtitle = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_6 = __this->get_address_of_data_2();
		L_6->set_subtitle_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.categoryIdentifier = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_7 = __this->get_address_of_data_2();
		L_7->set_categoryIdentifier_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.threadIdentifier = "";
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_8 = __this->get_address_of_data_2();
		L_8->set_threadIdentifier_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.triggerType = -1;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_9 = __this->get_address_of_data_2();
		L_9->set_triggerType_12((-1));
		// data.userInfo = IntPtr.Zero;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_10 = __this->get_address_of_data_2();
		L_10->set_userInfo_10((intptr_t)(0));
		// userInfo = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_11 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_11, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_userInfo_3(L_11);
		// Data = "";
		iOSNotification_set_Data_m7EB258537988162DEFFE93308B6FC3A016749489(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// ShowInForeground = false;
		iOSNotification_set_ShowInForeground_m5CDAADD1F4958302625FB22BAD63593E91E5F9CD(__this, (bool)0, /*hidden argument*/NULL);
		// ForegroundPresentationOption = PresentationOption.Alert | PresentationOption.Sound;
		iOSNotification_set_ForegroundPresentationOption_mD8228915A03D3B94FDC32569CF7BD658B3472C6B(__this, 6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m7E8C66D7D84868BA73309E146A47115CBB7C99C2 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method)
{
	{
		// internal iOSNotification(iOSNotificationWithUserInfo data)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.data = data.data;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_0 = ___data0;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_1 = L_0.get_data_0();
		__this->set_data_2(L_1);
		// userInfo = data.userInfo;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_2 = ___data0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = L_2.get_userInfo_1();
		__this->set_userInfo_3(L_3);
		// Attachments = data.attachments;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_4 = ___data0;
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_5 = L_4.get_attachments_2();
		iOSNotification_set_Attachments_m1CF24E7DA6C06E6E1E7F023415604B4EABBFD741_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotification::GetDataForSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  iOSNotification_GetDataForSending_m8B36AD41A5E6E0039846F8AD37D91275252046F0 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (data.identifier == null)
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = __this->get_address_of_data_2();
		String_t* L_1 = L_0->get_identifier_0();
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// data.identifier = GenerateUniqueID();
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_3 = __this->get_address_of_data_2();
		String_t* L_4;
		L_4 = iOSNotification_GenerateUniqueID_mF7AAA00B19609D8A7C199AE074AD1F93A2AF3227(/*hidden argument*/NULL);
		L_3->set_identifier_0(L_4);
	}

IL_0023:
	{
		// if (SoundVolume.HasValue)
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_5;
		L_5 = iOSNotification_get_SoundVolume_m3D9788BEC01B11031FCE7021F4688072F8E7FE8F_inline(__this, /*hidden argument*/NULL);
		V_3 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// data.soundVolume = SoundVolume.Value;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_8 = __this->get_address_of_data_2();
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_9;
		L_9 = iOSNotification_get_SoundVolume_m3D9788BEC01B11031FCE7021F4688072F8E7FE8F_inline(__this, /*hidden argument*/NULL);
		V_3 = L_9;
		float L_10;
		L_10 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_3), /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		L_8->set_soundVolume_8(L_10);
		goto IL_0060;
	}

IL_0050:
	{
		// data.soundVolume = -1.0f;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_11 = __this->get_address_of_data_2();
		L_11->set_soundVolume_8((-1.0f));
	}

IL_0060:
	{
		// ret.data = data;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_12 = __this->get_data_2();
		(&V_0)->set_data_0(L_12);
		// ret.userInfo = userInfo;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_13 = __this->get_userInfo_3();
		(&V_0)->set_userInfo_1(L_13);
		// ret.attachments = Attachments;
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_14;
		L_14 = iOSNotification_get_Attachments_mFA2FB0000E8BD6D6FFA9B97C2F3835BF0AB7A89D_inline(__this, /*hidden argument*/NULL);
		(&V_0)->set_attachments_2(L_14);
		// return ret;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_15 = V_0;
		V_4 = L_15;
		goto IL_008c;
	}

IL_008c:
	{
		// }
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_16 = V_4;
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
// System.String Unity.Notifications.iOS.iOSNotificationAction::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Id_m8FFEE9A273939945116A9818B267022F9AB64C9A (iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationAction::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Title_m9B860D8EC20777A0390D3868E2E79F6EC31647CC (iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * __this, const RuntimeMethod* method)
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->get_U3CTitleU3Ek__BackingField_1();
		return L_0;
	}
}
// Unity.Notifications.iOS.iOSNotificationActionOptions Unity.Notifications.iOS.iOSNotificationAction::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationAction_get_Options_mAAB1E184E727E23D3C553A337BDEF6F58647E0E5 (iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * __this, const RuntimeMethod* method)
{
	{
		// public iOSNotificationActionOptions Options { get; set; }
		int32_t L_0 = __this->get_U3COptionsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationAction::CreateUNNotificationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationAction_CreateUNNotificationAction_m9AF65E1469A87A98BC95789F9EA73D120E0B1617 (iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return iOSNotificationsWrapper._CreateUNNotificationAction(Id, Title, (int)Options);
		String_t* L_0;
		L_0 = iOSNotificationAction_get_Id_m8FFEE9A273939945116A9818B267022F9AB64C9A_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = iOSNotificationAction_get_Title_m9B860D8EC20777A0390D3868E2E79F6EC31647CC_inline(__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = iOSNotificationAction_get_Options_mAAB1E184E727E23D3C553A337BDEF6F58647E0E5_inline(__this, /*hidden argument*/NULL);
		intptr_t L_3;
		L_3 = iOSNotificationsWrapper__CreateUNNotificationAction_mB3BEE94F03EFD24C2F9EC54F5550A27CF9E3A957(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationAttachment
IL2CPP_EXTERN_C void iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshal_pinvoke(const iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469& unmarshaled, iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CIdU3Ek__BackingField_0());
	marshaled.___U3CUrlU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CUrlU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshal_pinvoke_back(const iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshaled_pinvoke& marshaled, iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469& unmarshaled)
{
	unmarshaled.set_U3CIdU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.set_U3CUrlU3Ek__BackingField_1(il2cpp_codegen_marshal_string_result(marshaled.___U3CUrlU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationAttachment
IL2CPP_EXTERN_C void iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshal_pinvoke_cleanup(iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CUrlU3Ek__BackingField_1);
	marshaled.___U3CUrlU3Ek__BackingField_1 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationAttachment
IL2CPP_EXTERN_C void iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshal_com(const iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469& unmarshaled, iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshaled_com& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CIdU3Ek__BackingField_0());
	marshaled.___U3CUrlU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CUrlU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshal_com_back(const iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshaled_com& marshaled, iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469& unmarshaled)
{
	unmarshaled.set_U3CIdU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.set_U3CUrlU3Ek__BackingField_1(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CUrlU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationAttachment
IL2CPP_EXTERN_C void iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshal_com_cleanup(iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CUrlU3Ek__BackingField_1);
	marshaled.___U3CUrlU3Ek__BackingField_1 = NULL;
}
// System.String Unity.Notifications.iOS.iOSNotificationAttachment::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Id_m1B8437D2A337B7215D3A6C6BAF175A9ADA45253D (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* iOSNotificationAttachment_get_Id_m1B8437D2A337B7215D3A6C6BAF175A9ADA45253D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * _thisAdjusted = reinterpret_cast<iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = iOSNotificationAttachment_get_Id_m1B8437D2A337B7215D3A6C6BAF175A9ADA45253D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationAttachment::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Id_mE24B264C7720EC1D63778503DDECB1C28D99DEBB (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationAttachment_set_Id_mE24B264C7720EC1D63778503DDECB1C28D99DEBB_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * _thisAdjusted = reinterpret_cast<iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 *>(__this + _offset);
	iOSNotificationAttachment_set_Id_mE24B264C7720EC1D63778503DDECB1C28D99DEBB_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.iOS.iOSNotificationAttachment::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Url_m35E1E10007413B9CFFE9758836D0BB06BB50D438 (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, const RuntimeMethod* method)
{
	{
		// public string Url { get; set; }
		String_t* L_0 = __this->get_U3CUrlU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* iOSNotificationAttachment_get_Url_m35E1E10007413B9CFFE9758836D0BB06BB50D438_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * _thisAdjusted = reinterpret_cast<iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = iOSNotificationAttachment_get_Url_m35E1E10007413B9CFFE9758836D0BB06BB50D438_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationAttachment::set_Url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Url_m18CC8994CE416B9CECC819391B4A3C3ADF91FDDD (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Url { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUrlU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationAttachment_set_Url_m18CC8994CE416B9CECC819391B4A3C3ADF91FDDD_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * _thisAdjusted = reinterpret_cast<iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 *>(__this + _offset);
	iOSNotificationAttachment_set_Url_m18CC8994CE416B9CECC819391B4A3C3ADF91FDDD_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_pinvoke(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_pinvoke_back(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke& marshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_pinvoke_cleanup(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_com(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_com_back(const iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com& marshaled, iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshal_com_cleanup(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022_marshaled_com& marshaled)
{
}
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_mF726AFE6F7725E23FAE83D04A88BF15104791286 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public iOSNotificationTriggerType Type { get { return iOSNotificationTriggerType.Calendar; } }
		V_0 = ((int32_t)10);
		goto IL_0006;
	}

IL_0006:
	{
		// public iOSNotificationTriggerType Type { get { return iOSNotificationTriggerType.Calendar; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationCalendarTrigger_get_Type_mF726AFE6F7725E23FAE83D04A88BF15104791286_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Type_mF726AFE6F7725E23FAE83D04A88BF15104791286(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CYearU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Year(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m72F083C6925652471A793F83721247438D8F9950 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CYearU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Year_m72F083C6925652471A793F83721247438D8F9950_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Year_m72F083C6925652471A793F83721247438D8F9950_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMonthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Month(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m6A4FE821F69215FB6B357B94F7EF074940D1B8A6 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CMonthU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Month_m6A4FE821F69215FB6B357B94F7EF074940D1B8A6_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Month_m6A4FE821F69215FB6B357B94F7EF074940D1B8A6_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CDayU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Day(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m3A8C0DEB5043AA5508019FA3A718CC2BBDA9F354 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CDayU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Day_m3A8C0DEB5043AA5508019FA3A718CC2BBDA9F354_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Day_m3A8C0DEB5043AA5508019FA3A718CC2BBDA9F354_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CHourU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Hour(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m2CBC30DBB39E7242C46EF9C0768B8082E6A41A11 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CHourU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Hour_m2CBC30DBB39E7242C46EF9C0768B8082E6A41A11_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Hour_m2CBC30DBB39E7242C46EF9C0768B8082E6A41A11_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMinuteU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Minute(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mAAEA2870CAEDB70DED3269CDE1BA05887380DDD1 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CMinuteU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Minute_mAAEA2870CAEDB70DED3269CDE1BA05887380DDD1_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Minute_mAAEA2870CAEDB70DED3269CDE1BA05887380DDD1_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CSecondU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Second(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_mD3512EC69850049A146489592559FF0746674365 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CSecondU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Second_mD3512EC69850049A146489592559FF0746674365_AdjustorThunk (RuntimeObject * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Second_mD3512EC69850049A146489592559FF0746674365_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_UtcTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_UtcTime_m6D6EF46252C6198BB8379365E943A25D89616A69 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public bool UtcTime { get; set; }
		bool L_0 = __this->get_U3CUtcTimeU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationCalendarTrigger_get_UtcTime_m6D6EF46252C6198BB8379365E943A25D89616A69_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_UtcTime_m6D6EF46252C6198BB8379365E943A25D89616A69_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_UtcTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_UtcTime_m2BE645F9E24579A5CC2DF05AD4279937FA647C8E (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UtcTime { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUtcTimeU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_UtcTime_m2BE645F9E24579A5CC2DF05AD4279937FA647C8E_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_UtcTime_m2BE645F9E24579A5CC2DF05AD4279937FA647C8E_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_m7186E9769E79CF510A57105FCEFCC325A3E18F28 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_set_Repeats_m7186E9769E79CF510A57105FCEFCC325A3E18F28_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_set_Repeats_m7186E9769E79CF510A57105FCEFCC325A3E18F28_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.iOS.iOSNotificationCalendarTrigger Unity.Notifications.iOS.iOSNotificationCalendarTrigger::ToUtc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  iOSNotificationCalendarTrigger_ToUtc_m78B842064750F9BDB5CED8B62A688DA946135059 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  V_3;
	memset((&V_3), 0, sizeof(V_3));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (UtcTime)
		bool L_0;
		L_0 = iOSNotificationCalendarTrigger_get_UtcTime_m6D6EF46252C6198BB8379365E943A25D89616A69_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return this;
		iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  L_2 = (*(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this);
		V_3 = L_2;
		goto IL_0046;
	}

IL_0014:
	{
		// var notificationTime = AssignDateTimeComponents(DateTime.Now).ToUniversalTime();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = DateTime_get_Now_mDC71803EA6776DD66EA7477CDCCD62191726B478(/*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4;
		L_4 = iOSNotificationCalendarTrigger_AssignDateTimeComponents_m810D34B3C63C36B3483C1A28521D323D78F7D207((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5;
		L_5 = DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_4), /*hidden argument*/NULL);
		V_0 = L_5;
		// iOSNotificationCalendarTrigger result = this;
		iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  L_6 = (*(iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this);
		V_1 = L_6;
		// result.UtcTime = true;
		iOSNotificationCalendarTrigger_set_UtcTime_m2BE645F9E24579A5CC2DF05AD4279937FA647C8E_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		// result.AssignNonEmptyComponents(notificationTime);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_7 = V_0;
		iOSNotificationCalendarTrigger_AssignNonEmptyComponents_mD1DE326009EB4B0D42227C23954C8E044A565451((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)(&V_1), L_7, /*hidden argument*/NULL);
		// return result;
		iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  L_8 = V_1;
		V_3 = L_8;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  L_9 = V_3;
		return L_9;
	}
}
IL2CPP_EXTERN_C  iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  iOSNotificationCalendarTrigger_ToUtc_m78B842064750F9BDB5CED8B62A688DA946135059_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_ToUtc_m78B842064750F9BDB5CED8B62A688DA946135059(_thisAdjusted, method);
	return _returnValue;
}
// System.DateTime Unity.Notifications.iOS.iOSNotificationCalendarTrigger::AssignDateTimeComponents(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  iOSNotificationCalendarTrigger_AssignDateTimeComponents_m810D34B3C63C36B3483C1A28521D323D78F7D207 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_6;
	memset((&V_6), 0, sizeof(V_6));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// int year = Year != null ? Year.Value : dt.Year;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0;
		L_0 = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2;
		L_2 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_002a;
	}

IL_001b:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_3;
		L_3 = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_3;
		int32_t L_4;
		L_4 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B3_0 = L_4;
	}

IL_002a:
	{
		V_0 = G_B3_0;
		// int month = Month != null ? Month.Value : dt.Month;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_5;
		L_5 = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7;
		L_7 = DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		G_B6_0 = L_7;
		goto IL_0054;
	}

IL_0045:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_8;
		L_8 = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_8;
		int32_t L_9;
		L_9 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B6_0 = L_9;
	}

IL_0054:
	{
		V_1 = G_B6_0;
		// int day = Day != null ? Day.Value : dt.Day;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_10;
		L_10 = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_10;
		bool L_11;
		L_11 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_12;
		L_12 = DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		G_B9_0 = L_12;
		goto IL_007e;
	}

IL_006f:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_13;
		L_13 = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_13;
		int32_t L_14;
		L_14 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B9_0 = L_14;
	}

IL_007e:
	{
		V_2 = G_B9_0;
		// int hour = Hour != null ? Hour.Value : dt.Hour;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_15;
		L_15 = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_15;
		bool L_16;
		L_16 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_17;
		L_17 = DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		G_B12_0 = L_17;
		goto IL_00a8;
	}

IL_0099:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_18;
		L_18 = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_18;
		int32_t L_19;
		L_19 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B12_0 = L_19;
	}

IL_00a8:
	{
		V_3 = G_B12_0;
		// int minute = Minute != null ? Minute.Value : dt.Minute;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_20;
		L_20 = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_20;
		bool L_21;
		L_21 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_22;
		L_22 = DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		G_B15_0 = L_22;
		goto IL_00d2;
	}

IL_00c3:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_23;
		L_23 = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_23;
		int32_t L_24;
		L_24 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B15_0 = L_24;
	}

IL_00d2:
	{
		V_4 = G_B15_0;
		// int second = Second != null ? Second.Value : dt.Second;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_25;
		L_25 = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_25;
		bool L_26;
		L_26 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (L_26)
		{
			goto IL_00ee;
		}
	}
	{
		int32_t L_27;
		L_27 = DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		G_B18_0 = L_27;
		goto IL_00fd;
	}

IL_00ee:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_28;
		L_28 = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_6 = L_28;
		int32_t L_29;
		L_29 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_6), /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		G_B18_0 = L_29;
	}

IL_00fd:
	{
		V_5 = G_B18_0;
		// return new DateTime(year, month, day, hour, minute, second, dt.Kind);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_2;
		int32_t L_33 = V_3;
		int32_t L_34 = V_4;
		int32_t L_35 = V_5;
		int32_t L_36;
		L_36 = DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_37;
		memset((&L_37), 0, sizeof(L_37));
		DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA((&L_37), L_30, L_31, L_32, L_33, L_34, L_35, L_36, /*hidden argument*/NULL);
		V_7 = L_37;
		goto IL_0117;
	}

IL_0117:
	{
		// }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_38 = V_7;
		return L_38;
	}
}
IL2CPP_EXTERN_C  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  iOSNotificationCalendarTrigger_AssignDateTimeComponents_m810D34B3C63C36B3483C1A28521D323D78F7D207_AdjustorThunk (RuntimeObject * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dt0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  _returnValue;
	_returnValue = iOSNotificationCalendarTrigger_AssignDateTimeComponents_m810D34B3C63C36B3483C1A28521D323D78F7D207(_thisAdjusted, ___dt0, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCalendarTrigger::AssignNonEmptyComponents(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_AssignNonEmptyComponents_mD1DE326009EB4B0D42227C23954C8E044A565451 (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (Year != null)
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0;
		L_0 = iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// Year = dt.Year;
		int32_t L_3;
		L_3 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Year_m72F083C6925652471A793F83721247438D8F9950_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// if (Month != null)
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_5;
		L_5 = iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		// Month = dt.Month;
		int32_t L_8;
		L_8 = DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Month_m6A4FE821F69215FB6B357B94F7EF074940D1B8A6_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, L_9, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// if (Day != null)
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_10;
		L_10 = iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11;
		L_11 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		// Day = dt.Day;
		int32_t L_13;
		L_13 = DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_14), L_13, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Day_m3A8C0DEB5043AA5508019FA3A718CC2BBDA9F354_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, L_14, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// if (Hour != null)
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_15;
		L_15 = iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_1 = L_15;
		bool L_16;
		L_16 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// Hour = dt.Hour;
		int32_t L_18;
		L_18 = DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_19), L_18, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Hour_m2CBC30DBB39E7242C46EF9C0768B8082E6A41A11_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, L_19, /*hidden argument*/NULL);
	}

IL_0097:
	{
		// if (Minute != null)
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_20;
		L_20 = iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_1 = L_20;
		bool L_21;
		L_21 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		V_5 = L_21;
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_00be;
		}
	}
	{
		// Minute = dt.Minute;
		int32_t L_23;
		L_23 = DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_24), L_23, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Minute_mAAEA2870CAEDB70DED3269CDE1BA05887380DDD1_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, L_24, /*hidden argument*/NULL);
	}

IL_00be:
	{
		// if (Second != null)
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_25;
		L_25 = iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, /*hidden argument*/NULL);
		V_1 = L_25;
		bool L_26;
		L_26 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		V_6 = L_26;
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00e5;
		}
	}
	{
		// Second = dt.Second;
		int32_t L_28;
		L_28 = DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dt0), /*hidden argument*/NULL);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_29), L_28, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		iOSNotificationCalendarTrigger_set_Second_mD3512EC69850049A146489592559FF0746674365_inline((iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *)__this, L_29, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationCalendarTrigger_AssignNonEmptyComponents_mD1DE326009EB4B0D42227C23954C8E044A565451_AdjustorThunk (RuntimeObject * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dt0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 *>(__this + _offset);
	iOSNotificationCalendarTrigger_AssignNonEmptyComponents_mD1DE326009EB4B0D42227C23954C8E044A565451(_thisAdjusted, ___dt0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_Id_m4D902EFBB02F9DCD93D9CB24F8436DEB8BB28911 (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_2();
		return L_0;
	}
}
// Unity.Notifications.iOS.iOSNotificationAction[] Unity.Notifications.iOS.iOSNotificationCategory::get_Actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* iOSNotificationCategory_get_Actions_mF6C534453529EC6869CC5F59779CB5E11BD643E7 (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9E95552C251944A09E2A6E97226B4B5880A42FB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* V_0 = NULL;
	{
		// public iOSNotificationAction[] Actions { get { return m_Actions.ToArray(); } }
		List_1_tA216DA7490CF5D57615E30A6540AA7E6D3F09EBD * L_0 = __this->get_m_Actions_0();
		NullCheck(L_0);
		iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* L_1;
		L_1 = List_1_ToArray_m9E95552C251944A09E2A6E97226B4B5880A42FB6(L_0, /*hidden argument*/List_1_ToArray_m9E95552C251944A09E2A6E97226B4B5880A42FB6_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public iOSNotificationAction[] Actions { get { return m_Actions.ToArray(); } }
		iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* L_2 = V_0;
		return L_2;
	}
}
// System.String[] Unity.Notifications.iOS.iOSNotificationCategory::get_IntentIdentifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* iOSNotificationCategory_get_IntentIdentifiers_m016611A5CD651F12DEAD07571500EF4136CA7C90 (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		// public string[] IntentIdentifiers { get { return m_IntentIdentifiers.ToArray(); } }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_m_IntentIdentifiers_1();
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1;
		L_1 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_0, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public string[] IntentIdentifiers { get { return m_IntentIdentifiers.ToArray(); } }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_0;
		return L_2;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_HiddenPreviewsBodyPlaceholder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_HiddenPreviewsBodyPlaceholder_mC0A7B14924799C5FEBF0D083F2883BA53674FFBB (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method)
{
	{
		// public string HiddenPreviewsBodyPlaceholder { get; set; }
		String_t* L_0 = __this->get_U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3();
		return L_0;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationCategory::get_SummaryFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_SummaryFormat_m82F443308C442357C68FCCD6E97FE8408C40B1D4 (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method)
{
	{
		// public string SummaryFormat { get; set; }
		String_t* L_0 = __this->get_U3CSummaryFormatU3Ek__BackingField_4();
		return L_0;
	}
}
// Unity.Notifications.iOS.iOSNotificationCategoryOptions Unity.Notifications.iOS.iOSNotificationCategory::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCategory_get_Options_mEBA73C38D2D3B588CC19EBF141ED0293F76E9416 (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method)
{
	{
		// public iOSNotificationCategoryOptions Options { get; set; }
		int32_t L_0 = __this->get_U3COptionsU3Ek__BackingField_5();
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
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m824D721C760A07E399A19B050EDC98DCC2C37D3C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (s_Initialized)
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		bool L_0 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_Initialized_0();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_001e;
	}

IL_000e:
	{
		// iOSNotificationsWrapper.RegisterOnReceivedCallback();
		iOSNotificationsWrapper_RegisterOnReceivedCallback_m5855BD63F57A3C47A7C2D4E91F9552AD07F9C1BB(/*hidden argument*/NULL);
		// return s_Initialized = true;
		int32_t L_2 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->set_s_Initialized_0((bool)L_2);
		V_1 = (bool)L_2;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::ScheduleNotification(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_ScheduleNotification_m6BFD964B053A169BB89ADA0DA736F95211A60937 (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationCenter_Initialize_m824D721C760A07E399A19B050EDC98DCC2C37D3C(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		goto IL_001b;
	}

IL_000f:
	{
		// iOSNotificationsWrapper.ScheduleLocalNotification(notification.GetDataForSending());
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_2 = ___notification0;
		NullCheck(L_2);
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_3;
		L_3 = iOSNotification_GetDataForSending_m8B36AD41A5E6E0039846F8AD37D91275252046F0(L_2, /*hidden argument*/NULL);
		iOSNotificationsWrapper_ScheduleLocalNotification_m9D69A4E8DDBFD5E6C112DA5279E51C8DEB9BC341(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveScheduledNotification_mE4242AE34D6CCBA76D0ED64F23C192F41A69ACB6 (String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationCenter_Initialize_m824D721C760A07E399A19B050EDC98DCC2C37D3C(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// iOSNotificationsWrapper._RemoveScheduledNotification(identifier);
		String_t* L_2 = ___identifier0;
		iOSNotificationsWrapper__RemoveScheduledNotification_mC2E6054DAC790A0C93E8A6C72D41AA2843CADF20(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveDeliveredNotification_mB848A103E00B3AD8965CAE29E312B4F6DEF35FDD (String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = iOSNotificationCenter_Initialize_m824D721C760A07E399A19B050EDC98DCC2C37D3C(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// iOSNotificationsWrapper._RemoveDeliveredNotification(identifier);
		String_t* L_2 = ___identifier0;
		iOSNotificationsWrapper__RemoveDeliveredNotification_m29618A47D61160A6774064857CF50896C6B1A5BA(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnReceivedRemoteNotification_mADC0BAB68873EE7CDD2AD23DC88B9D770DCAD103 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * V_0 = NULL;
	{
		// var notification = new iOSNotification(data);
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_0 = ___data0;
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_1 = (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *)il2cpp_codegen_object_new(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m7E8C66D7D84868BA73309E146A47115CBB7C99C2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// s_OnRemoteNotificationReceived(notification);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_2 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_OnRemoteNotificationReceived_2();
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_3 = V_0;
		NullCheck(L_2);
		NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::OnSentNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_OnSentNotification_m4A69C2985933635C1468D76CE10A2B5498A623A6 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * V_0 = NULL;
	{
		// var notification = new iOSNotification(data);
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_0 = ___data0;
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_1 = (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *)il2cpp_codegen_object_new(iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m7E8C66D7D84868BA73309E146A47115CBB7C99C2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// s_OnNotificationReceived(notification);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_2 = ((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->get_s_OnNotificationReceived_1();
		iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * L_3 = V_0;
		NullCheck(L_2);
		NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter__cctor_mE0457F55890043904B60C0FAB000971BD75ADA03 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__38_0_m937C65F2062714E2D4607229E9731A3B412C2157_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__38_1_m54778B1190F05B511CDBC01D4F7DCE50B769A218_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static event NotificationReceivedCallback s_OnNotificationReceived = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * L_0 = ((U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_1 = (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__38_0_m937C65F2062714E2D4607229E9731A3B412C2157_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->set_s_OnNotificationReceived_1(L_1);
		// private static event NotificationReceivedCallback s_OnRemoteNotificationReceived = delegate { };
		U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * L_2 = ((U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * L_3 = (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__38_1_m54778B1190F05B511CDBC01D4F7DCE50B769A218_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var))->set_s_OnRemoteNotificationReceived_2(L_3);
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.get_identifier_0());
	marshaled.___title_1 = il2cpp_codegen_marshal_string(unmarshaled.get_title_1());
	marshaled.___body_2 = il2cpp_codegen_marshal_string(unmarshaled.get_body_2());
	marshaled.___badge_3 = unmarshaled.get_badge_3();
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_string(unmarshaled.get_subtitle_4());
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_string(unmarshaled.get_categoryIdentifier_5());
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_string(unmarshaled.get_threadIdentifier_6());
	marshaled.___soundType_7 = unmarshaled.get_soundType_7();
	marshaled.___soundVolume_8 = unmarshaled.get_soundVolume_8();
	marshaled.___soundName_9 = il2cpp_codegen_marshal_string(unmarshaled.get_soundName_9());
	marshaled.___userInfo_10 = unmarshaled.get_userInfo_10();
	marshaled.___attachments_11 = unmarshaled.get_attachments_11();
	marshaled.___triggerType_12 = unmarshaled.get_triggerType_12();
	marshaled.___trigger_13 = unmarshaled.get_trigger_13();
}
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_back(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled)
{
	unmarshaled.set_identifier_0(il2cpp_codegen_marshal_string_result(marshaled.___identifier_0));
	unmarshaled.set_title_1(il2cpp_codegen_marshal_string_result(marshaled.___title_1));
	unmarshaled.set_body_2(il2cpp_codegen_marshal_string_result(marshaled.___body_2));
	int32_t unmarshaled_badge_temp_3 = 0;
	unmarshaled_badge_temp_3 = marshaled.___badge_3;
	unmarshaled.set_badge_3(unmarshaled_badge_temp_3);
	unmarshaled.set_subtitle_4(il2cpp_codegen_marshal_string_result(marshaled.___subtitle_4));
	unmarshaled.set_categoryIdentifier_5(il2cpp_codegen_marshal_string_result(marshaled.___categoryIdentifier_5));
	unmarshaled.set_threadIdentifier_6(il2cpp_codegen_marshal_string_result(marshaled.___threadIdentifier_6));
	int32_t unmarshaled_soundType_temp_7 = 0;
	unmarshaled_soundType_temp_7 = marshaled.___soundType_7;
	unmarshaled.set_soundType_7(unmarshaled_soundType_temp_7);
	float unmarshaled_soundVolume_temp_8 = 0.0f;
	unmarshaled_soundVolume_temp_8 = marshaled.___soundVolume_8;
	unmarshaled.set_soundVolume_8(unmarshaled_soundVolume_temp_8);
	unmarshaled.set_soundName_9(il2cpp_codegen_marshal_string_result(marshaled.___soundName_9));
	intptr_t unmarshaled_userInfo_temp_10;
	memset((&unmarshaled_userInfo_temp_10), 0, sizeof(unmarshaled_userInfo_temp_10));
	unmarshaled_userInfo_temp_10 = marshaled.___userInfo_10;
	unmarshaled.set_userInfo_10(unmarshaled_userInfo_temp_10);
	intptr_t unmarshaled_attachments_temp_11;
	memset((&unmarshaled_attachments_temp_11), 0, sizeof(unmarshaled_attachments_temp_11));
	unmarshaled_attachments_temp_11 = marshaled.___attachments_11;
	unmarshaled.set_attachments_11(unmarshaled_attachments_temp_11);
	int32_t unmarshaled_triggerType_temp_12 = 0;
	unmarshaled_triggerType_temp_12 = marshaled.___triggerType_12;
	unmarshaled.set_triggerType_12(unmarshaled_triggerType_temp_12);
	TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3  unmarshaled_trigger_temp_13;
	memset((&unmarshaled_trigger_temp_13), 0, sizeof(unmarshaled_trigger_temp_13));
	unmarshaled_trigger_temp_13 = marshaled.___trigger_13;
	unmarshaled.set_trigger_13(unmarshaled_trigger_temp_13);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_cleanup(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___soundName_9);
	marshaled.___soundName_9 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_identifier_0());
	marshaled.___title_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_title_1());
	marshaled.___body_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_body_2());
	marshaled.___badge_3 = unmarshaled.get_badge_3();
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_subtitle_4());
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_categoryIdentifier_5());
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_bstring(unmarshaled.get_threadIdentifier_6());
	marshaled.___soundType_7 = unmarshaled.get_soundType_7();
	marshaled.___soundVolume_8 = unmarshaled.get_soundVolume_8();
	marshaled.___soundName_9 = il2cpp_codegen_marshal_bstring(unmarshaled.get_soundName_9());
	marshaled.___userInfo_10 = unmarshaled.get_userInfo_10();
	marshaled.___attachments_11 = unmarshaled.get_attachments_11();
	marshaled.___triggerType_12 = unmarshaled.get_triggerType_12();
	marshaled.___trigger_13 = unmarshaled.get_trigger_13();
}
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com_back(const iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074& unmarshaled)
{
	unmarshaled.set_identifier_0(il2cpp_codegen_marshal_bstring_result(marshaled.___identifier_0));
	unmarshaled.set_title_1(il2cpp_codegen_marshal_bstring_result(marshaled.___title_1));
	unmarshaled.set_body_2(il2cpp_codegen_marshal_bstring_result(marshaled.___body_2));
	int32_t unmarshaled_badge_temp_3 = 0;
	unmarshaled_badge_temp_3 = marshaled.___badge_3;
	unmarshaled.set_badge_3(unmarshaled_badge_temp_3);
	unmarshaled.set_subtitle_4(il2cpp_codegen_marshal_bstring_result(marshaled.___subtitle_4));
	unmarshaled.set_categoryIdentifier_5(il2cpp_codegen_marshal_bstring_result(marshaled.___categoryIdentifier_5));
	unmarshaled.set_threadIdentifier_6(il2cpp_codegen_marshal_bstring_result(marshaled.___threadIdentifier_6));
	int32_t unmarshaled_soundType_temp_7 = 0;
	unmarshaled_soundType_temp_7 = marshaled.___soundType_7;
	unmarshaled.set_soundType_7(unmarshaled_soundType_temp_7);
	float unmarshaled_soundVolume_temp_8 = 0.0f;
	unmarshaled_soundVolume_temp_8 = marshaled.___soundVolume_8;
	unmarshaled.set_soundVolume_8(unmarshaled_soundVolume_temp_8);
	unmarshaled.set_soundName_9(il2cpp_codegen_marshal_bstring_result(marshaled.___soundName_9));
	intptr_t unmarshaled_userInfo_temp_10;
	memset((&unmarshaled_userInfo_temp_10), 0, sizeof(unmarshaled_userInfo_temp_10));
	unmarshaled_userInfo_temp_10 = marshaled.___userInfo_10;
	unmarshaled.set_userInfo_10(unmarshaled_userInfo_temp_10);
	intptr_t unmarshaled_attachments_temp_11;
	memset((&unmarshaled_attachments_temp_11), 0, sizeof(unmarshaled_attachments_temp_11));
	unmarshaled_attachments_temp_11 = marshaled.___attachments_11;
	unmarshaled.set_attachments_11(unmarshaled_attachments_temp_11);
	int32_t unmarshaled_triggerType_temp_12 = 0;
	unmarshaled_triggerType_temp_12 = marshaled.___triggerType_12;
	unmarshaled.set_triggerType_12(unmarshaled_triggerType_temp_12);
	TriggerData_tD2C00A8B07CABE0E3DEB0E73DF7137C4E28E76C3  unmarshaled_trigger_temp_13;
	memset((&unmarshaled_trigger_temp_13), 0, sizeof(unmarshaled_trigger_temp_13));
	unmarshaled_trigger_temp_13 = marshaled.___trigger_13;
	unmarshaled.set_trigger_13(unmarshaled_trigger_temp_13);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_com_cleanup(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___soundName_9);
	marshaled.___soundName_9 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_pinvoke(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CLatitudeU3Ek__BackingField_0 = unmarshaled.get_U3CLatitudeU3Ek__BackingField_0();
	marshaled.___U3CLongitudeU3Ek__BackingField_1 = unmarshaled.get_U3CLongitudeU3Ek__BackingField_1();
	marshaled.___U3CRadiusU3Ek__BackingField_2 = unmarshaled.get_U3CRadiusU3Ek__BackingField_2();
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnEntryU3Ek__BackingField_3());
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_4 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnExitU3Ek__BackingField_4());
	marshaled.___U3CRepeatsU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_5());
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_pinvoke_back(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke& marshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled)
{
	double unmarshaled_U3CLatitudeU3Ek__BackingField_temp_0 = 0.0;
	unmarshaled_U3CLatitudeU3Ek__BackingField_temp_0 = marshaled.___U3CLatitudeU3Ek__BackingField_0;
	unmarshaled.set_U3CLatitudeU3Ek__BackingField_0(unmarshaled_U3CLatitudeU3Ek__BackingField_temp_0);
	double unmarshaled_U3CLongitudeU3Ek__BackingField_temp_1 = 0.0;
	unmarshaled_U3CLongitudeU3Ek__BackingField_temp_1 = marshaled.___U3CLongitudeU3Ek__BackingField_1;
	unmarshaled.set_U3CLongitudeU3Ek__BackingField_1(unmarshaled_U3CLongitudeU3Ek__BackingField_temp_1);
	float unmarshaled_U3CRadiusU3Ek__BackingField_temp_2 = 0.0f;
	unmarshaled_U3CRadiusU3Ek__BackingField_temp_2 = marshaled.___U3CRadiusU3Ek__BackingField_2;
	unmarshaled.set_U3CRadiusU3Ek__BackingField_2(unmarshaled_U3CRadiusU3Ek__BackingField_temp_2);
	bool unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_3 = false;
	unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_3);
	unmarshaled.set_U3CNotifyOnEntryU3Ek__BackingField_3(unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_3);
	bool unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_4 = false;
	unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_4 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_4);
	unmarshaled.set_U3CNotifyOnExitU3Ek__BackingField_4(unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_4);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_5 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_5);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_5(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_5);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_pinvoke_cleanup(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_com(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com& marshaled)
{
	marshaled.___U3CLatitudeU3Ek__BackingField_0 = unmarshaled.get_U3CLatitudeU3Ek__BackingField_0();
	marshaled.___U3CLongitudeU3Ek__BackingField_1 = unmarshaled.get_U3CLongitudeU3Ek__BackingField_1();
	marshaled.___U3CRadiusU3Ek__BackingField_2 = unmarshaled.get_U3CRadiusU3Ek__BackingField_2();
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnEntryU3Ek__BackingField_3());
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_4 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnExitU3Ek__BackingField_4());
	marshaled.___U3CRepeatsU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_5());
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_com_back(const iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com& marshaled, iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605& unmarshaled)
{
	double unmarshaled_U3CLatitudeU3Ek__BackingField_temp_0 = 0.0;
	unmarshaled_U3CLatitudeU3Ek__BackingField_temp_0 = marshaled.___U3CLatitudeU3Ek__BackingField_0;
	unmarshaled.set_U3CLatitudeU3Ek__BackingField_0(unmarshaled_U3CLatitudeU3Ek__BackingField_temp_0);
	double unmarshaled_U3CLongitudeU3Ek__BackingField_temp_1 = 0.0;
	unmarshaled_U3CLongitudeU3Ek__BackingField_temp_1 = marshaled.___U3CLongitudeU3Ek__BackingField_1;
	unmarshaled.set_U3CLongitudeU3Ek__BackingField_1(unmarshaled_U3CLongitudeU3Ek__BackingField_temp_1);
	float unmarshaled_U3CRadiusU3Ek__BackingField_temp_2 = 0.0f;
	unmarshaled_U3CRadiusU3Ek__BackingField_temp_2 = marshaled.___U3CRadiusU3Ek__BackingField_2;
	unmarshaled.set_U3CRadiusU3Ek__BackingField_2(unmarshaled_U3CRadiusU3Ek__BackingField_temp_2);
	bool unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_3 = false;
	unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_3);
	unmarshaled.set_U3CNotifyOnEntryU3Ek__BackingField_3(unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_3);
	bool unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_4 = false;
	unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_4 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_4);
	unmarshaled.set_U3CNotifyOnExitU3Ek__BackingField_4(unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_4);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_5 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_5);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_5(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_5);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshal_com_cleanup(iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605_marshaled_com& marshaled)
{
}
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_m99ECD66BD77BB5D2AF504ED0E66E68693EBA858E (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public iOSNotificationTriggerType Type { get { return iOSNotificationTriggerType.Location; } }
		V_0 = ((int32_t)20);
		goto IL_0006;
	}

IL_0006:
	{
		// public iOSNotificationTriggerType Type { get { return iOSNotificationTriggerType.Location; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationLocationTrigger_get_Type_m99ECD66BD77BB5D2AF504ED0E66E68693EBA858E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Type_m99ECD66BD77BB5D2AF504ED0E66E68693EBA858E(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double iOSNotificationLocationTrigger_get_Latitude_m7FF6B3D8921E629467073919B8FE637C676306F6 (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public double Latitude { get; set; }
		double L_0 = __this->get_U3CLatitudeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  double iOSNotificationLocationTrigger_get_Latitude_m7FF6B3D8921E629467073919B8FE637C676306F6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	double _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Latitude_m7FF6B3D8921E629467073919B8FE637C676306F6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double iOSNotificationLocationTrigger_get_Longitude_m40A4E5D82529580699BBB7D0D399FE483F347372 (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public double Longitude { get; set; }
		double L_0 = __this->get_U3CLongitudeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  double iOSNotificationLocationTrigger_get_Longitude_m40A4E5D82529580699BBB7D0D399FE483F347372_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	double _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Longitude_m40A4E5D82529580699BBB7D0D399FE483F347372_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	float _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->get_U3CNotifyOnEntryU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98 (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->get_U3CNotifyOnExitU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_Repeats_m38C493F8C90E10EEA49F87B65452D8DB21EA6B42 (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_Repeats_m38C493F8C90E10EEA49F87B65452D8DB21EA6B42_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationLocationTrigger_get_Repeats_m38C493F8C90E10EEA49F87B65452D8DB21EA6B42_inline(_thisAdjusted, method);
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_pinvoke(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.get_timeInterval_0();
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_pinvoke_back(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke& marshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled)
{
	int32_t unmarshaled_timeInterval_temp_0 = 0;
	unmarshaled_timeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.set_timeInterval_0(unmarshaled_timeInterval_temp_0);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_1(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_pinvoke_cleanup(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_com(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.get_timeInterval_0();
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_com_back(const iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com& marshaled, iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923& unmarshaled)
{
	int32_t unmarshaled_timeInterval_temp_0 = 0;
	unmarshaled_timeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.set_timeInterval_0(unmarshaled_timeInterval_temp_0);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_1(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshal_com_cleanup(iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923_marshaled_com& marshaled)
{
}
// Unity.Notifications.iOS.iOSNotificationTriggerType Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_m0DDB14E9C0E2AED5E4D3C9476C8567807A19EAF4 (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public iOSNotificationTriggerType Type { get { return iOSNotificationTriggerType.TimeInterval; } }
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		// public iOSNotificationTriggerType Type { get { return iOSNotificationTriggerType.TimeInterval; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t iOSNotificationTimeIntervalTrigger_get_Type_m0DDB14E9C0E2AED5E4D3C9476C8567807A19EAF4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = iOSNotificationTimeIntervalTrigger_get_Type_m0DDB14E9C0E2AED5E4D3C9476C8567807A19EAF4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_TimeInterval(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92 (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// timeInterval = (int)value.TotalSeconds;
		double L_0;
		L_0 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&___value0), /*hidden argument*/NULL);
		__this->set_timeInterval_0(il2cpp_codegen_cast_double_to_int<int32_t>(L_0));
		// if (timeInterval <= 0)
		int32_t L_1 = __this->get_timeInterval_0();
		V_0 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// throw new ArgumentException("Time interval must be greater than 0.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCA8707FE0861CE909C71CAD2EB86B6143B5E8D7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92_RuntimeMethod_var)));
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92_AdjustorThunk (RuntimeObject * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *>(__this + _offset);
	iOSNotificationTimeIntervalTrigger_set_TimeInterval_mEAF737982A0DF4B33396D3766DC45C89D3097B92(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *>(__this + _offset);
	bool _returnValue;
	_returnValue = iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m6171793E71519177BD5D31FD2EB3919063EF041D (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationTimeIntervalTrigger_set_Repeats_m6171793E71519177BD5D31FD2EB3919063EF041D_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 *>(__this + _offset);
	iOSNotificationTimeIntervalTrigger_set_Repeats_m6171793E71519177BD5D31FD2EB3919063EF041D_inline(_thisAdjusted, ___value0, method);
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


// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_pinvoke(const iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4& unmarshaled, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_pinvoke_back(const iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_pinvoke& marshaled, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4& unmarshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_pinvoke_cleanup(iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_com(const iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4& unmarshaled, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_com& marshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_com_back(const iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_com& marshaled, iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4& unmarshaled)
{
	Exception_t* ___userInfo_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'userInfo' of type 'iOSNotificationWithUserInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___userInfo_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationWithUserInfo
IL2CPP_EXTERN_C void iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshal_com_cleanup(iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4_marshaled_com& marshaled)
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_mB9751C47825AFE4609A354DE4295B9C075029BDC(intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke ___data1)
{


	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___data1' to managed representation
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ____data1_unmarshaled;
	memset((&____data1_unmarshaled), 0, sizeof(____data1_unmarshaled));
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_back(___data1, ____data1_unmarshaled);

	// Managed method invocation
	iOSNotificationsWrapper_AuthorizationRequestReceived_mB9751C47825AFE4609A354DE4295B9C075029BDC(___request0, ____data1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_mE1A64E992B4A9C9DE069B2C8BE1E7F936965B5F3(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ___data0)
{


	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___data0' to managed representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ____data0_unmarshaled;
	memset((&____data0_unmarshaled), 0, sizeof(____data0_unmarshaled));
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_back(___data0, ____data0_unmarshaled);

	// Managed method invocation
	iOSNotificationsWrapper_RemoteNotificationReceived_mE1A64E992B4A9C9DE069B2C8BE1E7F936965B5F3(____data0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_m6F8D49A4F5423E19F5C0A43799F43794735D6E7F(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ___data0)
{


	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___data0' to managed representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ____data0_unmarshaled;
	memset((&____data0_unmarshaled), 0, sizeof(____data0_unmarshaled));
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_back(___data0, ____data0_unmarshaled);

	// Managed method invocation
	iOSNotificationsWrapper_NotificationReceived_m6F8D49A4F5423E19F5C0A43799F43794735D6E7F(____data0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m17BF76EFE06EAF8269A3CC4341FE8B64BC0D0969(intptr_t ___dict0, char* ___key1, char* ___value2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key1' to managed representation
	String_t* ____key1_unmarshaled = NULL;
	____key1_unmarshaled = il2cpp_codegen_marshal_string_result(___key1);

	// Marshaling of parameter '___value2' to managed representation
	String_t* ____value2_unmarshaled = NULL;
	____value2_unmarshaled = il2cpp_codegen_marshal_string_result(___value2);

	// Managed method invocation
	iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m17BF76EFE06EAF8269A3CC4341FE8B64BC0D0969(___dict0, ____key1_unmarshaled, ____value2_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mDCCB51142652FB705C10A9373913A49015092EB0(intptr_t ___array0, char* ___id1, char* ___url2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___id1' to managed representation
	String_t* ____id1_unmarshaled = NULL;
	____id1_unmarshaled = il2cpp_codegen_marshal_string_result(___id1);

	// Marshaling of parameter '___url2' to managed representation
	String_t* ____url2_unmarshaled = NULL;
	____url2_unmarshaled = il2cpp_codegen_marshal_string_result(___url2);

	// Managed method invocation
	iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mDCCB51142652FB705C10A9373913A49015092EB0(___array0, ____id1_unmarshaled, ____url2_unmarshaled, NULL);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_m86EB551B43BAE031EF4D2EDAD9181F4D55A71D77 (intptr_t ___request0, int32_t ___options1, bool ___registerForRemote2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RequestAuthorization)(___request0, ___options1, static_cast<int32_t>(___registerForRemote2));

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_m0FE073924AB38E03176B4977DF938681F82250CB (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke);

	// Marshaling of parameter '___data0' to native representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ____data0_marshaled = {};
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke(___data0, ____data0_marshaled);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ScheduleLocalNotification)(____data0_marshaled);

	// Marshaling cleanup of parameter '___data0' native representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_cleanup(____data0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m447301B068524960C99C7D6B9B39BF617BD4251F (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetNotificationReceivedDelegate)(____callback0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_m5A8ED7AE498B5F12BE88A0F727CFAC0F9BF5E9AD (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetRemoteNotificationReceivedDelegate)(____callback0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m4B4D3BA5372081EA1B52F02FD578953EB94BCC2F (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetAuthorizationRequestReceivedDelegate)(____callback0_marshaled);

}
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  iOSNotificationsWrapper__GetNotificationSettings_m17F955C6C3B74A5DC2331C2F399227A3B436091B (const RuntimeMethod* method)
{
	typedef iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  returnValue = reinterpret_cast<PInvokeFunc>(_GetNotificationSettings)();

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataArray_m6D9CFAEB227C95507F1CF1AD23262552EF3BBB7E (int32_t* ___count0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetScheduledNotificationDataArray)(___count0);

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataArray_mBAD4BEBC3B2A94F8906B686FB22FF1CED07D3E09 (int32_t* ___count0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetDeliveredNotificationDataArray)(___count0);

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveScheduledNotification_mC2E6054DAC790A0C93E8A6C72D41AA2843CADF20 (String_t* ___identifier0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveScheduledNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllScheduledNotifications_m1FA6BE334E25E00A1539239D752E190B19141E64 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllScheduledNotifications)();

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveDeliveredNotification_m29618A47D61160A6774064857CF50896C6B1A5BA (String_t* ___identifier0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveDeliveredNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m7812ED294B75668B91289C61C97424EFF9CFCEC7 (int32_t ___badge0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetApplicationBadge)(___badge0);

}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_m7D53F47440E3D622F5C1E8CC9046BE86F9242B12 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetApplicationBadge)();

	return returnValue;
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4A91869C17130A44FFB8275C7B3D57F7F66D9B75 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetAppOpenedUsingNotification)();

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllDeliveredNotifications_m36E6E5926E7E790CE7F751BD5E2A5C4B5BB68C5D (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllDeliveredNotifications)();

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_m2F6EDD5C93023BDF31F2839D68BF209F18B5D4D1 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetLastNotificationData)();

	return returnValue;
}
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastRespondedNotificationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__GetLastRespondedNotificationAction_m49C392416AF05FAC880C4752465A25DCEECBABC9 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_GetLastRespondedNotificationAction)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastRespondedNotificationUserText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__GetLastRespondedNotificationUserText_m10FA743543A4A0916EB63EE698D9E1C5994AFFE0 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_GetLastRespondedNotificationUserText)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagediOSNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_mFAACEC35BA057EBCF8D73DB423B5273CB6A35BAE (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_FreeUnmanagediOSNotificationDataArray)(___ptr0, ___count1);

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddItemToNSDictionary(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddItemToNSDictionary_m9A154BF72E2F74BA3712A1674F7EC9313C81C3AE (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___key1' to native representation
	char* ____key1_marshaled = NULL;
	____key1_marshaled = il2cpp_codegen_marshal_string(___key1);

	// Marshaling of parameter '___value2' to native representation
	char* ____value2_marshaled = NULL;
	____value2_marshaled = il2cpp_codegen_marshal_string(___value2);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_AddItemToNSDictionary)(___dict0, ____key1_marshaled, ____value2_marshaled);

	// Marshaling cleanup of parameter '___key1' native representation
	il2cpp_codegen_marshal_free(____key1_marshaled);
	____key1_marshaled = NULL;

	// Marshaling cleanup of parameter '___value2' native representation
	il2cpp_codegen_marshal_free(____value2_marshaled);
	____value2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddAttachmentToNSArray(System.IntPtr,System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddAttachmentToNSArray_mDE2E1081FDC40EB3A8C72A562EA5FDF4215EF560 (intptr_t ___atts0, String_t* ___id1, String_t* ___url2, intptr_t* ___error3, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*, intptr_t*);

	// Marshaling of parameter '___id1' to native representation
	char* ____id1_marshaled = NULL;
	____id1_marshaled = il2cpp_codegen_marshal_string(___id1);

	// Marshaling of parameter '___url2' to native representation
	char* ____url2_marshaled = NULL;
	____url2_marshaled = il2cpp_codegen_marshal_string(___url2);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_AddAttachmentToNSArray)(___atts0, ____id1_marshaled, ____url2_marshaled, ___error3);

	// Marshaling cleanup of parameter '___id1' native representation
	il2cpp_codegen_marshal_free(____id1_marshaled);
	____id1_marshaled = NULL;

	// Marshaling cleanup of parameter '___url2' native representation
	il2cpp_codegen_marshal_free(____url2_marshaled);
	____url2_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReadNSDictionary(System.IntPtr,System.IntPtr,Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReadNSDictionary_m8B68845A104CA8314D8F0EEBC2A4C117E261F5D0 (intptr_t ___handle0, intptr_t ___nsDict1, ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * ___callback2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ReadNSDictionary)(___handle0, ___nsDict1, ____callback2_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReadAttachmentsNSArray(System.IntPtr,System.IntPtr,Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReadAttachmentsNSArray_m5C052EB0676A7EB39167CFAD45D3573616B83780 (intptr_t ___handle0, intptr_t ___nsArray1, ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A * ___callback2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ReadAttachmentsNSArray)(___handle0, ___nsArray1, ____callback2_marshaled);

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_CreateUNNotificationAction(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__CreateUNNotificationAction_mB3BEE94F03EFD24C2F9EC54F5550A27CF9E3A957 (String_t* ___id0, String_t* ___title1, int32_t ___options2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Marshaling of parameter '___title1' to native representation
	char* ____title1_marshaled = NULL;
	____title1_marshaled = il2cpp_codegen_marshal_string(___title1);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_CreateUNNotificationAction)(____id0_marshaled, ____title1_marshaled, ___options2);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

	// Marshaling cleanup of parameter '___title1' native representation
	il2cpp_codegen_marshal_free(____title1_marshaled);
	____title1_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_CreateUNTextInputNotificationAction(System.String,System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__CreateUNTextInputNotificationAction_m96412AA06689F077608F083E686EA33160D46CAF (String_t* ___id0, String_t* ___title1, int32_t ___options2, String_t* ___buttonTitle3, String_t* ___placeholder4, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t, char*, char*);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Marshaling of parameter '___title1' to native representation
	char* ____title1_marshaled = NULL;
	____title1_marshaled = il2cpp_codegen_marshal_string(___title1);

	// Marshaling of parameter '___buttonTitle3' to native representation
	char* ____buttonTitle3_marshaled = NULL;
	____buttonTitle3_marshaled = il2cpp_codegen_marshal_string(___buttonTitle3);

	// Marshaling of parameter '___placeholder4' to native representation
	char* ____placeholder4_marshaled = NULL;
	____placeholder4_marshaled = il2cpp_codegen_marshal_string(___placeholder4);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_CreateUNTextInputNotificationAction)(____id0_marshaled, ____title1_marshaled, ___options2, ____buttonTitle3_marshaled, ____placeholder4_marshaled);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

	// Marshaling cleanup of parameter '___title1' native representation
	il2cpp_codegen_marshal_free(____title1_marshaled);
	____title1_marshaled = NULL;

	// Marshaling cleanup of parameter '___buttonTitle3' native representation
	il2cpp_codegen_marshal_free(____buttonTitle3_marshaled);
	____buttonTitle3_marshaled = NULL;

	// Marshaling cleanup of parameter '___placeholder4' native representation
	il2cpp_codegen_marshal_free(____placeholder4_marshaled);
	____placeholder4_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ReleaseNSObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ReleaseNSObject_m212E0AEC9796670B0ED6D7450EACFD839D842E13 (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ReleaseNSObject)(___obj0);

}
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::_NSErrorToMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper__NSErrorToMessage_mA54C4C2355E1E53BA18915F38616C337230475F3 (intptr_t ___error0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NSErrorToMessage)(___error0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddActionToNSArray(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddActionToNSArray_mFD325820BA9B587AFE5DC0052014FDFF16ABA5BA (intptr_t ___actions0, intptr_t ___action1, int32_t ___capacity2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_AddActionToNSArray)(___actions0, ___action1, ___capacity2);

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_CreateUNNotificationCategory(System.String,System.String,System.String,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__CreateUNNotificationCategory_mFCB3CC7E861CEA364780C09A8882CF2D4CB8896C (String_t* ___id0, String_t* ___hiddenPreviewsBodyPlaceholder1, String_t* ___summaryFormat2, int32_t ___options3, intptr_t ___actions4, intptr_t ___intentIdentifiers5, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, int32_t, intptr_t, intptr_t);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Marshaling of parameter '___hiddenPreviewsBodyPlaceholder1' to native representation
	char* ____hiddenPreviewsBodyPlaceholder1_marshaled = NULL;
	____hiddenPreviewsBodyPlaceholder1_marshaled = il2cpp_codegen_marshal_string(___hiddenPreviewsBodyPlaceholder1);

	// Marshaling of parameter '___summaryFormat2' to native representation
	char* ____summaryFormat2_marshaled = NULL;
	____summaryFormat2_marshaled = il2cpp_codegen_marshal_string(___summaryFormat2);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_CreateUNNotificationCategory)(____id0_marshaled, ____hiddenPreviewsBodyPlaceholder1_marshaled, ____summaryFormat2_marshaled, ___options3, ___actions4, ___intentIdentifiers5);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

	// Marshaling cleanup of parameter '___hiddenPreviewsBodyPlaceholder1' native representation
	il2cpp_codegen_marshal_free(____hiddenPreviewsBodyPlaceholder1_marshaled);
	____hiddenPreviewsBodyPlaceholder1_marshaled = NULL;

	// Marshaling cleanup of parameter '___summaryFormat2' native representation
	il2cpp_codegen_marshal_free(____summaryFormat2_marshaled);
	____summaryFormat2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddCategoryToCategorySet(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddCategoryToCategorySet_mCFAD4457A9E51E54B60FFB444BD1B3962617C0D9 (intptr_t ___categorySet0, intptr_t ___category1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_AddCategoryToCategorySet)(___categorySet0, ___category1);

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationCategories(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationCategories_m0E99574293B8F7E3E04B3F87F4B4A61450A60437 (intptr_t ___categorySet0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetNotificationCategories)(___categorySet0);

}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_AddStringToNSArray(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__AddStringToNSArray_m642AE8BA78E406B55AC383F0114AFFC4844922C7 (intptr_t ___array0, String_t* ___str1, int32_t ___capacity2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, int32_t);

	// Marshaling of parameter '___str1' to native representation
	char* ____str1_marshaled = NULL;
	____str1_marshaled = il2cpp_codegen_marshal_string(___str1);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_AddStringToNSArray)(___array0, ____str1_marshaled, ___capacity2);

	// Marshaling cleanup of parameter '___str1' native representation
	il2cpp_codegen_marshal_free(____str1_marshaled);
	____str1_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_OpenNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__OpenNotificationSettings_mA492964AE7045185399E21AF557D52F2C447D7FC (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_OpenNotificationSettings)();

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterAuthorizationRequestCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_mE250D9D2610655E9166576F59F86535D8DDC4F40 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_AuthorizationRequestReceived_mB9751C47825AFE4609A354DE4295B9C075029BDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetAuthorizationRequestReceivedDelegate(AuthorizationRequestReceived);
		AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * L_0 = (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 *)il2cpp_codegen_object_new(AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3_il2cpp_TypeInfo_var);
		AuthorizationRequestCallback__ctor_m868F99A8BEFAEC8EC4117FCDD67497341FEBDD74(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_AuthorizationRequestReceived_mB9751C47825AFE4609A354DE4295B9C075029BDC_RuntimeMethod_var), /*hidden argument*/NULL);
		iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_m4B4D3BA5372081EA1B52F02FD578953EB94BCC2F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedRemoteNotificationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_m4AA035B4DDA04294BDA889BC212A29BE83B6802A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_RemoteNotificationReceived_mE1A64E992B4A9C9DE069B2C8BE1E7F936965B5F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetRemoteNotificationReceivedDelegate(RemoteNotificationReceived);
		NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * L_0 = (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_RemoteNotificationReceived_mE1A64E992B4A9C9DE069B2C8BE1E7F936965B5F3_RuntimeMethod_var), /*hidden argument*/NULL);
		iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_m5A8ED7AE498B5F12BE88A0F727CFAC0F9BF5E9AD(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_m5855BD63F57A3C47A7C2D4E91F9552AD07F9C1BB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_NotificationReceived_m6F8D49A4F5423E19F5C0A43799F43794735D6E7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetNotificationReceivedDelegate(NotificationReceived);
		NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * L_0 = (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_NotificationReceived_m6F8D49A4F5423E19F5C0A43799F43794735D6E7F_RuntimeMethod_var), /*hidden argument*/NULL);
		iOSNotificationsWrapper__SetNotificationReceivedDelegate_m447301B068524960C99C7D6B9B39BF617BD4251F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_mB9751C47825AFE4609A354DE4295B9C075029BDC (intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AuthorizationRequest.OnAuthorizationRequestCompleted(request, data);
		intptr_t L_0 = ___request0;
		iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  L_1 = ___data1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthorizationRequest_t354C781782F6B01F967BAAE2EA83F857BAEDF676_il2cpp_TypeInfo_var);
		AuthorizationRequest_OnAuthorizationRequestCompleted_mFC05250867229427A886AD23B0E316172DB359F3((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_mE1A64E992B4A9C9DE069B2C8BE1E7F936965B5F3 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iOSNotificationCenter.OnReceivedRemoteNotification(NotificationDataToDataWithUserInfo(data));
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_0 = ___data0;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_1;
		L_1 = iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_mF5D785852B0691FDC6958A41A6ABACE5277C14A7(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnReceivedRemoteNotification_mADC0BAB68873EE7CDD2AD23DC88B9D770DCAD103(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_m6F8D49A4F5423E19F5C0A43799F43794735D6E7F (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iOSNotificationCenter.OnSentNotification(NotificationDataToDataWithUserInfo(data));
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_0 = ___data0;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_1;
		L_1 = iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_mF5D785852B0691FDC6958A41A6ABACE5277C14A7(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t19261B260216D8DDD9A7C7A3A0F7A7AF2D317008_il2cpp_TypeInfo_var);
		iOSNotificationCenter_OnSentNotification_m4A69C2985933635C1468D76CE10A2B5498A623A6(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationDataToDataWithUserInfo(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  iOSNotificationsWrapper_NotificationDataToDataWithUserInfo_mF5D785852B0691FDC6958A41A6ABACE5277C14A7 (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ret.data = data;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_0 = ___data0;
		(&V_0)->set_data_0(L_0);
		// ret.data.userInfo = IntPtr.Zero;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_1 = (&V_0)->get_address_of_data_0();
		L_1->set_userInfo_10((intptr_t)(0));
		// ret.userInfo = NSDictionaryToCs(data.userInfo);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_2 = ___data0;
		intptr_t L_3 = L_2.get_userInfo_10();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4;
		L_4 = iOSNotificationsWrapper_NSDictionaryToCs_mB5F13AD34956A8A1A6E21E88B92FCF8997115156((intptr_t)L_3, /*hidden argument*/NULL);
		(&V_0)->set_userInfo_1(L_4);
		// ret.attachments = AttachmentsNSArrayToCs(data.attachments);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_5 = ___data0;
		intptr_t L_6 = L_5.get_attachments_11();
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_7;
		L_7 = iOSNotificationsWrapper_AttachmentsNSArrayToCs_mF08902C04F6B255515765AA1D6B6A6B14CEB4919((intptr_t)L_6, /*hidden argument*/NULL);
		(&V_0)->set_attachments_2(L_7);
		// return ret;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_8 = V_0;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_9 = V_1;
		return L_9;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ReceiveNSDictionaryKeyValue(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m17BF76EFE06EAF8269A3CC4341FE8B64BC0D0969 (intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_1 = NULL;
	bool V_2 = false;
	{
		// GCHandle handle = GCHandle.FromIntPtr(dict);
		intptr_t L_0 = ___dict0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_FromIntPtr_mF902872DD04971F6A22B8356F5AE4358F21C0FB1((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var dictionary = (Dictionary<string, string>)handle.Target;
		RuntimeObject * L_2;
		L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)CastclassClass((RuntimeObject*)L_2, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var));
		// if (dictionary == null)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = V_1;
		V_2 = (bool)((((RuntimeObject*)(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		goto IL_0028;
	}

IL_001f:
	{
		// dictionary[key] = value;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = V_1;
		String_t* L_6 = ___key1;
		String_t* L_7 = ___value2;
		NullCheck(L_5);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ReceiveUNNotificationAttachment(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mDCCB51142652FB705C10A9373913A49015092EB0 (intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m055B3C8434BBE78C619B9FD25362C05693018CE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * V_1 = NULL;
	bool V_2 = false;
	iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GCHandle handle = GCHandle.FromIntPtr(array);
		intptr_t L_0 = ___array0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_FromIntPtr_mF902872DD04971F6A22B8356F5AE4358F21C0FB1((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var list = (List<iOSNotificationAttachment>)handle.Target;
		RuntimeObject * L_2;
		L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C *)CastclassClass((RuntimeObject*)L_2, List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C_il2cpp_TypeInfo_var));
		// if (list == null)
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_3 = V_1;
		V_2 = (bool)((((RuntimeObject*)(List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		goto IL_0041;
	}

IL_001f:
	{
		// list.Add(new iOSNotificationAttachment()
		// {
		//     Id = id,
		//     Url = url,
		// });
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_5 = V_1;
		il2cpp_codegen_initobj((&V_3), sizeof(iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 ));
		String_t* L_6 = ___id1;
		iOSNotificationAttachment_set_Id_mE24B264C7720EC1D63778503DDECB1C28D99DEBB_inline((iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 *)(&V_3), L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___url2;
		iOSNotificationAttachment_set_Url_m18CC8994CE416B9CECC819391B4A3C3ADF91FDDD_inline((iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 *)(&V_3), L_7, /*hidden argument*/NULL);
		iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  L_8 = V_3;
		NullCheck(L_5);
		List_1_Add_m055B3C8434BBE78C619B9FD25362C05693018CE6(L_5, L_8, /*hidden argument*/List_1_Add_m055B3C8434BBE78C619B9FD25362C05693018CE6_RuntimeMethod_var);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RequestAuthorization(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RequestAuthorization_m8D2B4D82BFCA98577C249A5FFCFD9D12D9A41F81 (intptr_t ___request0, int32_t ___options1, bool ___registerRemote2, const RuntimeMethod* method)
{
	{
		// _RequestAuthorization(request, options, registerRemote);
		intptr_t L_0 = ___request0;
		int32_t L_1 = ___options1;
		bool L_2 = ___registerRemote2;
		iOSNotificationsWrapper__RequestAuthorization_m86EB551B43BAE031EF4D2EDAD9181F4D55A71D77((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  iOSNotificationsWrapper_GetNotificationSettings_m1FADF5256FA7406B468B99E1B4330035915E7CD2 (const RuntimeMethod* method)
{
	iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _GetNotificationSettings();
		iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  L_0;
		L_0 = iOSNotificationsWrapper__GetNotificationSettings_m17F955C6C3B74A5DC2331C2F399227A3B436091B(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		iOSNotificationSettings_t5E4EA880FD56A549554CB3F5D851E054196BEA3D  L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationWithUserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_m9D69A4E8DDBFD5E6C112DA5279E51C8DEB9BC341 (iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  ___data0, const RuntimeMethod* method)
{
	{
		// data.data.userInfo = iOSNotificationsWrapper.CsDictionaryToObjC(data.userInfo);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_0 = (&___data0)->get_address_of_data_0();
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_1 = ___data0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = L_1.get_userInfo_1();
		intptr_t L_3;
		L_3 = iOSNotificationsWrapper_CsDictionaryToObjC_mF617FE581214F6529236E65804AC2D28AD3530E8(L_2, /*hidden argument*/NULL);
		L_0->set_userInfo_10((intptr_t)L_3);
		// data.data.attachments = iOSNotificationsWrapper.CsAttachmentsToObjc(data.attachments);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_4 = (&___data0)->get_address_of_data_0();
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_5 = ___data0;
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_6 = L_5.get_attachments_2();
		intptr_t L_7;
		L_7 = iOSNotificationsWrapper_CsAttachmentsToObjc_m9F7D5BBEFB2439DF49FA11F2E6853C7343DF0B36(L_6, /*hidden argument*/NULL);
		L_4->set_attachments_11((intptr_t)L_7);
		// _ScheduleLocalNotification(data.data);
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_8 = ___data0;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_9 = L_8.get_data_0();
		iOSNotificationsWrapper__ScheduleLocalNotification_m0FE073924AB38E03176B4977DF938681F82250CB(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetDeliveredNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* iOSNotificationsWrapper_GetDeliveredNotificationData_m245209EA04D2C31FD95E2EB4F47D4639C91ADEDC (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* V_2 = NULL;
	{
		// var ptr = _GetDeliveredNotificationDataArray(out count);
		intptr_t L_0;
		L_0 = iOSNotificationsWrapper__GetDeliveredNotificationDataArray_mBAD4BEBC3B2A94F8906B686FB22FF1CED07D3E09((int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_0;
		// return MarshalAndFreeNotificationDataArray(ptr, count);
		intptr_t L_1 = V_1;
		int32_t L_2 = V_0;
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_3;
		L_3 = iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_m728E36B8447B7EF235AB8D72BBDAE956BD702AE6((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_4 = V_2;
		return L_4;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastRespondedNotificationAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper_GetLastRespondedNotificationAction_m150ACD59277DDFDE60B1D67353E264F350E6ABBE (const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return _GetLastRespondedNotificationAction();
		String_t* L_0;
		L_0 = iOSNotificationsWrapper__GetLastRespondedNotificationAction_m49C392416AF05FAC880C4752465A25DCEECBABC9(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastRespondedNotificationUserText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotificationsWrapper_GetLastRespondedNotificationUserText_m43E2F56B7E83B495DBDD553270B2EA6A5EB31EE2 (const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return _GetLastRespondedNotificationUserText();
		String_t* L_0;
		L_0 = iOSNotificationsWrapper__GetLastRespondedNotificationUserText_m10FA743543A4A0916EB63EE698D9E1C5994AFFE0(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetScheduledNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* iOSNotificationsWrapper_GetScheduledNotificationData_mC5657A08B1AD504668049703BEACA309306DAA42 (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* V_2 = NULL;
	{
		// var ptr = _GetScheduledNotificationDataArray(out count);
		intptr_t L_0;
		L_0 = iOSNotificationsWrapper__GetScheduledNotificationDataArray_m6D9CFAEB227C95507F1CF1AD23262552EF3BBB7E((int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_0;
		// return MarshalAndFreeNotificationDataArray(ptr, count);
		intptr_t L_1 = V_1;
		int32_t L_2 = V_0;
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_3;
		L_3 = iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_m728E36B8447B7EF235AB8D72BBDAE956BD702AE6((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_4 = V_2;
		return L_4;
	}
}
// Unity.Notifications.iOS.iOSNotificationWithUserInfo[] Unity.Notifications.iOS.iOSNotificationsWrapper::MarshalAndFreeNotificationDataArray(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* iOSNotificationsWrapper_MarshalAndFreeNotificationDataArray_m728E36B8447B7EF235AB8D72BBDAE956BD702AE6 (intptr_t ___ptr0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	{
		// if (count == 0 || ptr == IntPtr.Zero)
		int32_t L_0 = ___count1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		intptr_t L_1 = ___ptr0;
		bool L_2;
		L_2 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_3 = (bool)G_B3_0;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return null;
		V_4 = (iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC*)NULL;
		goto IL_00d1;
	}

IL_001e:
	{
		// var dataArray = new iOSNotificationWithUserInfo[count];
		int32_t L_4 = ___count1;
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_5 = (iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC*)(iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC*)SZArrayNew(iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		// var structSize = Marshal.SizeOf(typeof(iOSNotificationData));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Marshal_SizeOf_m8CD931EE1525CF3F1A3628F71285862BC74A4A92(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// var next = ptr;
		intptr_t L_9 = ___ptr0;
		V_2 = (intptr_t)L_9;
		// for (var i = 0; i < count; ++i)
		V_5 = 0;
		goto IL_00b6;
	}

IL_003c:
	{
		// dataArray[i].data = (iOSNotificationData)Marshal.PtrToStructure(next, typeof(iOSNotificationData));
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_10 = V_0;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		intptr_t L_12 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_15;
		L_15 = Marshal_PtrToStructure_mBB4D12265C6D3720CC85C120DB2E2E9351674AD4((intptr_t)L_12, L_14, /*hidden argument*/NULL);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_data_0(((*(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)((iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)UnBox(L_15, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var)))));
		// dataArray[i].userInfo = NSDictionaryToCs(dataArray[i].data.userInfo);
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_16 = V_0;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_18 = V_0;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_address_of_data_0();
		intptr_t L_21 = L_20->get_userInfo_10();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_22;
		L_22 = iOSNotificationsWrapper_NSDictionaryToCs_mB5F13AD34956A8A1A6E21E88B92FCF8997115156((intptr_t)L_21, /*hidden argument*/NULL);
		((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->set_userInfo_1(L_22);
		// dataArray[i].attachments = AttachmentsNSArrayToCs(dataArray[i].data.attachments);
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_23 = V_0;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_address_of_data_0();
		intptr_t L_28 = L_27->get_attachments_11();
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_29;
		L_29 = iOSNotificationsWrapper_AttachmentsNSArrayToCs_mF08902C04F6B255515765AA1D6B6A6B14CEB4919((intptr_t)L_28, /*hidden argument*/NULL);
		((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->set_attachments_2(L_29);
		// next = next + structSize;
		intptr_t L_30 = V_2;
		int32_t L_31 = V_1;
		intptr_t L_32;
		L_32 = IntPtr_op_Addition_m9A29705FE7EF0501FD9DB69925AA70734E66BC7D((intptr_t)L_30, L_31, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_32;
		// for (var i = 0; i < count; ++i)
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00b6:
	{
		// for (var i = 0; i < count; ++i)
		int32_t L_34 = V_5;
		int32_t L_35 = ___count1;
		V_6 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_6;
		if (L_36)
		{
			goto IL_003c;
		}
	}
	{
		// _FreeUnmanagediOSNotificationDataArray(ptr, count);
		intptr_t L_37 = ___ptr0;
		int32_t L_38 = ___count1;
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_mFAACEC35BA057EBCF8D73DB423B5273CB6A35BAE((intptr_t)L_37, L_38, /*hidden argument*/NULL);
		// return dataArray;
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_39 = V_0;
		V_4 = L_39;
		goto IL_00d1;
	}

IL_00d1:
	{
		// }
		iOSNotificationWithUserInfoU5BU5D_t14662A14AC6509CCCF2990E9B0C5CDA8F0CF83FC* L_40 = V_4;
		return L_40;
	}
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::CsDictionaryToObjC(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper_CsDictionaryToObjC_mF617FE581214F6529236E65804AC2D28AD3530E8 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___userInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (userInfo == null)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___userInfo0;
		V_1 = (bool)((((RuntimeObject*)(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return IntPtr.Zero;
		V_2 = (intptr_t)(0);
		goto IL_005d;
	}

IL_0011:
	{
		// IntPtr dict = IntPtr.Zero;
		V_0 = (intptr_t)(0);
		// foreach (var item in userInfo)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = ___userInfo0;
		NullCheck(L_2);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_3;
		L_3 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		V_3 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_0021:
		{
			// foreach (var item in userInfo)
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_4;
			L_4 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_3), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
			V_4 = L_4;
			// dict = _AddItemToNSDictionary(dict, item.Key, item.Value);
			intptr_t L_5 = V_0;
			String_t* L_6;
			L_6 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			String_t* L_7;
			L_7 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			intptr_t L_8;
			L_8 = iOSNotificationsWrapper__AddItemToNSDictionary_m9A154BF72E2F74BA3712A1674F7EC9313C81C3AE((intptr_t)L_5, L_6, L_7, /*hidden argument*/NULL);
			V_0 = (intptr_t)L_8;
		}

IL_003f:
		{
			// foreach (var item in userInfo)
			bool L_9;
			L_9 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0021;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_3), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		// return dict;
		intptr_t L_10 = V_0;
		V_2 = (intptr_t)L_10;
		goto IL_005d;
	}

IL_005d:
	{
		// }
		intptr_t L_11 = V_2;
		return (intptr_t)L_11;
	}
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::CsAttachmentsToObjc(System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper_CsAttachmentsToObjc_m9F7D5BBEFB2439DF49FA11F2E6853C7343DF0B36 (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * ___attachments0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4F098123B7F4D6295E91179C53FAC3375833F057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m491598D999088BC4951CCED617A1FD68465E8DBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAAE55B9576E035F422B79EDA328DF89F83815456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6A45B679BC1EECBB9AC64AC1C0D2F7064D5CAB1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m52AFB0DD1D38F1B2D39F62908902B818D97E7DF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  V_4;
	memset((&V_4), 0, sizeof(V_4));
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	String_t* V_7 = NULL;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B3_0 = 0;
	{
		// if (attachments == null || attachments.Count == 0)
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_0 = ___attachments0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_1 = ___attachments0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m52AFB0DD1D38F1B2D39F62908902B818D97E7DF7_inline(L_1, /*hidden argument*/List_1_get_Count_m52AFB0DD1D38F1B2D39F62908902B818D97E7DF7_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return IntPtr.Zero;
		V_2 = (intptr_t)(0);
		goto IL_00ab;
	}

IL_001f:
	{
		// var atts = IntPtr.Zero;
		V_0 = (intptr_t)(0);
		// foreach (var attachment in attachments)
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_4 = ___attachments0;
		NullCheck(L_4);
		Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE  L_5;
		L_5 = List_1_GetEnumerator_m6A45B679BC1EECBB9AC64AC1C0D2F7064D5CAB1E(L_4, /*hidden argument*/List_1_GetEnumerator_m6A45B679BC1EECBB9AC64AC1C0D2F7064D5CAB1E_RuntimeMethod_var);
		V_3 = L_5;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008d;
		}

IL_002f:
		{
			// foreach (var attachment in attachments)
			iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  L_6;
			L_6 = Enumerator_get_Current_mAAE55B9576E035F422B79EDA328DF89F83815456_inline((Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE *)(&V_3), /*hidden argument*/Enumerator_get_Current_mAAE55B9576E035F422B79EDA328DF89F83815456_RuntimeMethod_var);
			V_4 = L_6;
			// atts = _AddAttachmentToNSArray(atts, attachment.Id, attachment.Url, out error);
			intptr_t L_7 = V_0;
			String_t* L_8;
			L_8 = iOSNotificationAttachment_get_Id_m1B8437D2A337B7215D3A6C6BAF175A9ADA45253D_inline((iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 *)(&V_4), /*hidden argument*/NULL);
			String_t* L_9;
			L_9 = iOSNotificationAttachment_get_Url_m35E1E10007413B9CFFE9758836D0BB06BB50D438_inline((iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 *)(&V_4), /*hidden argument*/NULL);
			intptr_t L_10;
			L_10 = iOSNotificationsWrapper__AddAttachmentToNSArray_mDE2E1081FDC40EB3A8C72A562EA5FDF4215EF560((intptr_t)L_7, L_8, L_9, (intptr_t*)(&V_5), /*hidden argument*/NULL);
			V_0 = (intptr_t)L_10;
			// if (error != IntPtr.Zero)
			intptr_t L_11 = V_5;
			bool L_12;
			L_12 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_11, (intptr_t)(0), /*hidden argument*/NULL);
			V_6 = L_12;
			bool L_13 = V_6;
			if (!L_13)
			{
				goto IL_008c;
			}
		}

IL_0062:
		{
			// if (atts != IntPtr.Zero)
			intptr_t L_14 = V_0;
			bool L_15;
			L_15 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_14, (intptr_t)(0), /*hidden argument*/NULL);
			V_8 = L_15;
			bool L_16 = V_8;
			if (!L_16)
			{
				goto IL_007b;
			}
		}

IL_0074:
		{
			// _ReleaseNSObject(atts);
			intptr_t L_17 = V_0;
			iOSNotificationsWrapper__ReleaseNSObject_m212E0AEC9796670B0ED6D7450EACFD839D842E13((intptr_t)L_17, /*hidden argument*/NULL);
		}

IL_007b:
		{
			// var msg = _NSErrorToMessage(error);
			intptr_t L_18 = V_5;
			String_t* L_19;
			L_19 = iOSNotificationsWrapper__NSErrorToMessage_mA54C4C2355E1E53BA18915F38616C337230475F3((intptr_t)L_18, /*hidden argument*/NULL);
			V_7 = L_19;
			// throw new Exception(msg);
			String_t* L_20 = V_7;
			Exception_t * L_21 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_21, L_20, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationsWrapper_CsAttachmentsToObjc_m9F7D5BBEFB2439DF49FA11F2E6853C7343DF0B36_RuntimeMethod_var)));
		}

IL_008c:
		{
		}

IL_008d:
		{
			// foreach (var attachment in attachments)
			bool L_22;
			L_22 = Enumerator_MoveNext_m491598D999088BC4951CCED617A1FD68465E8DBF((Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m491598D999088BC4951CCED617A1FD68465E8DBF_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_002f;
			}
		}

IL_0096:
		{
			IL2CPP_LEAVE(0xA7, FINALLY_0098);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0098;
	}

FINALLY_0098:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4F098123B7F4D6295E91179C53FAC3375833F057((Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE *)(&V_3), /*hidden argument*/Enumerator_Dispose_m4F098123B7F4D6295E91179C53FAC3375833F057_RuntimeMethod_var);
		IL2CPP_END_FINALLY(152)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(152)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA7, IL_00a7)
	}

IL_00a7:
	{
		// return atts;
		intptr_t L_23 = V_0;
		V_2 = (intptr_t)L_23;
		goto IL_00ab;
	}

IL_00ab:
	{
		// }
		intptr_t L_24 = V_2;
		return (intptr_t)L_24;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Notifications.iOS.iOSNotificationsWrapper::NSDictionaryToCs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * iOSNotificationsWrapper_NSDictionaryToCs_mB5F13AD34956A8A1A6E21E88B92FCF8997115156 (intptr_t ___dict0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m17BF76EFE06EAF8269A3CC4341FE8B64BC0D0969_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_0 = NULL;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_2 = NULL;
	{
		// var ret = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		V_0 = L_0;
		// var handle = GCHandle.Alloc(ret);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = V_0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_2;
		L_2 = GCHandle_Alloc_mE8C4B1D393FE153622948BF355728FCF08C98EF1(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// _ReadNSDictionary(GCHandle.ToIntPtr(handle), dict, ReceiveNSDictionaryKeyValue);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = V_1;
		intptr_t L_4;
		L_4 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = ___dict0;
		ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * L_6 = (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 *)il2cpp_codegen_object_new(ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1_il2cpp_TypeInfo_var);
		ReceiveNSDictionaryKeyValueCallback__ctor_m4B65D4BA92D77AE03C50211EFDCA8B881ECEB5CA(L_6, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_ReceiveNSDictionaryKeyValue_m17BF76EFE06EAF8269A3CC4341FE8B64BC0D0969_RuntimeMethod_var), /*hidden argument*/NULL);
		iOSNotificationsWrapper__ReadNSDictionary_m8B68845A104CA8314D8F0EEBC2A4C117E261F5D0((intptr_t)L_4, (intptr_t)L_5, L_6, /*hidden argument*/NULL);
		// handle.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
		// return ret;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_7 = V_0;
		V_2 = L_7;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8 = V_2;
		return L_8;
	}
}
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationAttachment> Unity.Notifications.iOS.iOSNotificationsWrapper::AttachmentsNSArrayToCs(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * iOSNotificationsWrapper_AttachmentsNSArrayToCs_mF08902C04F6B255515765AA1D6B6A6B14CEB4919 (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDEA2F2369E63A9C4609035514ECB01A2F8EEBE55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mDCCB51142652FB705C10A9373913A49015092EB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * V_0 = NULL;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * V_3 = NULL;
	{
		// if (array == IntPtr.Zero)
		intptr_t L_0 = ___array0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		V_3 = (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C *)NULL;
		goto IL_0046;
	}

IL_0014:
	{
		// var ret = new List<iOSNotificationAttachment>();
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_3 = (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C *)il2cpp_codegen_object_new(List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C_il2cpp_TypeInfo_var);
		List_1__ctor_mDEA2F2369E63A9C4609035514ECB01A2F8EEBE55(L_3, /*hidden argument*/List_1__ctor_mDEA2F2369E63A9C4609035514ECB01A2F8EEBE55_RuntimeMethod_var);
		V_0 = L_3;
		// var handle = GCHandle.Alloc(ret);
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_4 = V_0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_5;
		L_5 = GCHandle_Alloc_mE8C4B1D393FE153622948BF355728FCF08C98EF1(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// _ReadAttachmentsNSArray(GCHandle.ToIntPtr(handle), array, ReceiveUNNotificationAttachment);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_6 = V_1;
		intptr_t L_7;
		L_7 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_6, /*hidden argument*/NULL);
		intptr_t L_8 = ___array0;
		ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A * L_9 = (ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A *)il2cpp_codegen_object_new(ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A_il2cpp_TypeInfo_var);
		ReceiveUNNotificationAttachmentCallback__ctor_mCCFFCAB4402283480FE41B572A38ADD01AE57617(L_9, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_ReceiveUNNotificationAttachment_mDCCB51142652FB705C10A9373913A49015092EB0_RuntimeMethod_var), /*hidden argument*/NULL);
		iOSNotificationsWrapper__ReadAttachmentsNSArray_m5C052EB0676A7EB39167CFAD45D3573616B83780((intptr_t)L_7, (intptr_t)L_8, L_9, /*hidden argument*/NULL);
		// handle.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_1), /*hidden argument*/NULL);
		// return ret;
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_10 = V_0;
		V_3 = L_10;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_11 = V_3;
		return L_11;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_SetApplicationBadge_m8BB6A22EEE222E9BA144388C21FAD7F852D24D82 (int32_t ___badge0, const RuntimeMethod* method)
{
	{
		// _SetApplicationBadge(badge);
		int32_t L_0 = ___badge0;
		iOSNotificationsWrapper__SetApplicationBadge_m7812ED294B75668B91289C61C97424EFF9CFCEC7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper_GetApplicationBadge_m95D5B0A18DFDD5CE8739D33BB68A2A58018B3074 (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return _GetApplicationBadge();
		int32_t L_0;
		L_0 = iOSNotificationsWrapper__GetApplicationBadge_m7D53F47440E3D622F5C1E8CC9046BE86F9242B12(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper_GetAppOpenedUsingNotification_m802E94A5D14BCA3BA703FD8405D70F2781868513 (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return _GetAppOpenedUsingNotification();
		bool L_0;
		L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4A91869C17130A44FFB8275C7B3D57F7F66D9B75(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationWithUserInfo> Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A  iOSNotificationsWrapper_GetLastNotificationData_m6F55B05385EE961C6BB33565E250FABAF0ABB813 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (_GetAppOpenedUsingNotification())
		bool L_0;
		L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_m4A91869C17130A44FFB8275C7B3D57F7F66D9B75(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a3;
		}
	}
	{
		// IntPtr ptr = _GetLastNotificationData();
		intptr_t L_2;
		L_2 = iOSNotificationsWrapper__GetLastNotificationData_m2F6EDD5C93023BDF31F2839D68BF209F18B5D4D1(/*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		// if (ptr != IntPtr.Zero)
		intptr_t L_3 = V_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_00a2;
		}
	}
	{
		// data.data = (iOSNotificationData)Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_6 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_9;
		L_9 = Marshal_PtrToStructure_mBB4D12265C6D3720CC85C120DB2E2E9351674AD4((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		(&V_3)->set_data_0(((*(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)((iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 *)UnBox(L_9, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var)))));
		// data.userInfo = NSDictionaryToCs(data.data.userInfo);
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_10 = V_3;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_11 = L_10.get_data_0();
		intptr_t L_12 = L_11.get_userInfo_10();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_13;
		L_13 = iOSNotificationsWrapper_NSDictionaryToCs_mB5F13AD34956A8A1A6E21E88B92FCF8997115156((intptr_t)L_12, /*hidden argument*/NULL);
		(&V_3)->set_userInfo_1(L_13);
		// data.data.userInfo = IntPtr.Zero;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_14 = (&V_3)->get_address_of_data_0();
		L_14->set_userInfo_10((intptr_t)(0));
		// data.attachments = AttachmentsNSArrayToCs(data.data.attachments);
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_15 = V_3;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  L_16 = L_15.get_data_0();
		intptr_t L_17 = L_16.get_attachments_11();
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_18;
		L_18 = iOSNotificationsWrapper_AttachmentsNSArrayToCs_mF08902C04F6B255515765AA1D6B6A6B14CEB4919((intptr_t)L_17, /*hidden argument*/NULL);
		(&V_3)->set_attachments_2(L_18);
		// data.data.attachments = IntPtr.Zero;
		iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 * L_19 = (&V_3)->get_address_of_data_0();
		L_19->set_attachments_11((intptr_t)(0));
		// _FreeUnmanagediOSNotificationDataArray(ptr, 1);
		intptr_t L_20 = V_1;
		iOSNotificationsWrapper__FreeUnmanagediOSNotificationDataArray_mFAACEC35BA057EBCF8D73DB423B5273CB6A35BAE((intptr_t)L_20, 1, /*hidden argument*/NULL);
		// return data;
		iOSNotificationWithUserInfo_t19F429915AFFB4E6A1CF092FA0F7041BF385B4E4  L_21 = V_3;
		Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF((&L_22), L_21, /*hidden argument*/Nullable_1__ctor_mFA0709C78CE07D51320689676A7FC54B4DFD7BFF_RuntimeMethod_var);
		V_4 = L_22;
		goto IL_00b1;
	}

IL_00a2:
	{
	}

IL_00a3:
	{
		// return null;
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A ));
		Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A  L_23 = V_5;
		V_4 = L_23;
		goto IL_00b1;
	}

IL_00b1:
	{
		// }
		Nullable_1_tDF33E153D60F6D7A7BC7DA38FB87BCCBFCCF385A  L_24 = V_4;
		return L_24;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::SetNotificationCategories(System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationCategory>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_SetNotificationCategories_m6E104DE6BE821573CA566E5A5A400C09AF279153 (RuntimeObject* ___categories0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD412F0CE5C91166E5AD153A4DD9B1DDB7C0A8972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m4B172709BA5195F9B5E3BA933FF0F219B3891251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m21C86306EDE2BA282B1C80169EA6B4D62429BD95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m469C9C901730E5AE4B72E50F1B3F959E1E4A56DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m0DCF9C6DB49CAA24A295155397007F77CCEF7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m43CBDA7EBE23CD948CEB5A61998934641888DD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1664B023733A5AAF8DC09D0B058F45871C82E354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m791E953E29C33E73940968C88B6D7748A3798BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tD293947962F568CBCB4BDE8BFE6D4A2299EB3DD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tED65D2A81EA00796AC146050D5B1B8914F81C8F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m70C4ABD3F9F97FE5FD942670F7E5AFB0076215A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * V_3 = NULL;
	iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* V_4 = NULL;
	int32_t V_5 = 0;
	iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * V_10 = NULL;
	intptr_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	intptr_t V_14;
	memset((&V_14), 0, sizeof(V_14));
	iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* V_15 = NULL;
	int32_t V_16 = 0;
	iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * V_17 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_18 = NULL;
	int32_t V_19 = 0;
	String_t* V_20 = NULL;
	Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4  V_21;
	memset((&V_21), 0, sizeof(V_21));
	KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA  V_22;
	memset((&V_22), 0, sizeof(V_22));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// var allActions = new Dictionary<string, IntPtr>();
		Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * L_0 = (Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 *)il2cpp_codegen_object_new(Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m21C86306EDE2BA282B1C80169EA6B4D62429BD95(L_0, /*hidden argument*/Dictionary_2__ctor_m21C86306EDE2BA282B1C80169EA6B4D62429BD95_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var category in categories)
		RuntimeObject* L_1 = ___categories0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationCategory>::GetEnumerator() */, IEnumerable_1_tD293947962F568CBCB4BDE8BFE6D4A2299EB3DD4_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0087;
		}

IL_0011:
		{
			// foreach (var category in categories)
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * L_4;
			L_4 = InterfaceFuncInvoker0< iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.Notifications.iOS.iOSNotificationCategory>::get_Current() */, IEnumerator_1_tED65D2A81EA00796AC146050D5B1B8914F81C8F1_il2cpp_TypeInfo_var, L_3);
			V_3 = L_4;
			// foreach (var action in category.Actions)
			iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * L_5 = V_3;
			NullCheck(L_5);
			iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* L_6;
			L_6 = iOSNotificationCategory_get_Actions_mF6C534453529EC6869CC5F59779CB5E11BD643E7(L_5, /*hidden argument*/NULL);
			V_4 = L_6;
			V_5 = 0;
			goto IL_007e;
		}

IL_0027:
		{
			// foreach (var action in category.Actions)
			iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* L_7 = V_4;
			int32_t L_8 = V_5;
			NullCheck(L_7);
			int32_t L_9 = L_8;
			iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			V_6 = L_10;
			// if (string.IsNullOrEmpty(action.Id))
			iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * L_11 = V_6;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = iOSNotificationAction_get_Id_m8FFEE9A273939945116A9818B267022F9AB64C9A_inline(L_11, /*hidden argument*/NULL);
			bool L_13;
			L_13 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_12, /*hidden argument*/NULL);
			V_7 = L_13;
			bool L_14 = V_7;
			if (!L_14)
			{
				goto IL_004c;
			}
		}

IL_0041:
		{
			// throw new ArgumentException("Action must have a valid and unique ID");
			ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_15 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
			ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3445424CCE31FF31906AAE9ADB0236D08C87E42B)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&iOSNotificationsWrapper_SetNotificationCategories_m6E104DE6BE821573CA566E5A5A400C09AF279153_RuntimeMethod_var)));
		}

IL_004c:
		{
			// if (!allActions.ContainsKey(action.Id))
			Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * L_16 = V_0;
			iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * L_17 = V_6;
			NullCheck(L_17);
			String_t* L_18;
			L_18 = iOSNotificationAction_get_Id_m8FFEE9A273939945116A9818B267022F9AB64C9A_inline(L_17, /*hidden argument*/NULL);
			NullCheck(L_16);
			bool L_19;
			L_19 = Dictionary_2_ContainsKey_mD412F0CE5C91166E5AD153A4DD9B1DDB7C0A8972(L_16, L_18, /*hidden argument*/Dictionary_2_ContainsKey_mD412F0CE5C91166E5AD153A4DD9B1DDB7C0A8972_RuntimeMethod_var);
			V_8 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
			bool L_20 = V_8;
			if (!L_20)
			{
				goto IL_0077;
			}
		}

IL_0062:
		{
			// allActions[action.Id] = action.CreateUNNotificationAction();
			Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * L_21 = V_0;
			iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * L_22 = V_6;
			NullCheck(L_22);
			String_t* L_23;
			L_23 = iOSNotificationAction_get_Id_m8FFEE9A273939945116A9818B267022F9AB64C9A_inline(L_22, /*hidden argument*/NULL);
			iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * L_24 = V_6;
			NullCheck(L_24);
			intptr_t L_25;
			L_25 = VirtFuncInvoker0< intptr_t >::Invoke(4 /* System.IntPtr Unity.Notifications.iOS.iOSNotificationAction::CreateUNNotificationAction() */, L_24);
			NullCheck(L_21);
			Dictionary_2_set_Item_m0DCF9C6DB49CAA24A295155397007F77CCEF7EA2(L_21, L_23, (intptr_t)L_25, /*hidden argument*/Dictionary_2_set_Item_m0DCF9C6DB49CAA24A295155397007F77CCEF7EA2_RuntimeMethod_var);
		}

IL_0077:
		{
			int32_t L_26 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		}

IL_007e:
		{
			// foreach (var action in category.Actions)
			int32_t L_27 = V_5;
			iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* L_28 = V_4;
			NullCheck(L_28);
			if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
			{
				goto IL_0027;
			}
		}

IL_0086:
		{
		}

IL_0087:
		{
			// foreach (var category in categories)
			RuntimeObject* L_29 = V_2;
			NullCheck(L_29);
			bool L_30;
			L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_0011;
			}
		}

IL_008f:
		{
			IL2CPP_LEAVE(0x9C, FINALLY_0091);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_31 = V_2;
			if (!L_31)
			{
				goto IL_009b;
			}
		}

IL_0094:
		{
			RuntimeObject* L_32 = V_2;
			NullCheck(L_32);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_32);
		}

IL_009b:
		{
			IL2CPP_END_FINALLY(145)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9C, IL_009c)
	}

IL_009c:
	{
		// IntPtr categorySet = IntPtr.Zero;
		V_1 = (intptr_t)(0);
		// foreach (var category in categories)
		RuntimeObject* L_33 = ___categories0;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.Notifications.iOS.iOSNotificationCategory>::GetEnumerator() */, IEnumerable_1_tD293947962F568CBCB4BDE8BFE6D4A2299EB3DD4_il2cpp_TypeInfo_var, L_33);
		V_9 = L_34;
	}

IL_00ab:
	try
	{ // begin try (depth: 1)
		{
			goto IL_017c;
		}

IL_00b0:
		{
			// foreach (var category in categories)
			RuntimeObject* L_35 = V_9;
			NullCheck(L_35);
			iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * L_36;
			L_36 = InterfaceFuncInvoker0< iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.Notifications.iOS.iOSNotificationCategory>::get_Current() */, IEnumerator_1_tED65D2A81EA00796AC146050D5B1B8914F81C8F1_il2cpp_TypeInfo_var, L_35);
			V_10 = L_36;
			// IntPtr actions = IntPtr.Zero;
			V_11 = (intptr_t)(0);
			// int count = category.Actions.Length;
			iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * L_37 = V_10;
			NullCheck(L_37);
			iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* L_38;
			L_38 = iOSNotificationCategory_get_Actions_mF6C534453529EC6869CC5F59779CB5E11BD643E7(L_37, /*hidden argument*/NULL);
			NullCheck(L_38);
			V_12 = ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)));
			// foreach (var action in category.Actions)
			iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * L_39 = V_10;
			NullCheck(L_39);
			iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* L_40;
			L_40 = iOSNotificationCategory_get_Actions_mF6C534453529EC6869CC5F59779CB5E11BD643E7(L_39, /*hidden argument*/NULL);
			V_15 = L_40;
			V_16 = 0;
			goto IL_0100;
		}

IL_00db:
		{
			// foreach (var action in category.Actions)
			iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* L_41 = V_15;
			int32_t L_42 = V_16;
			NullCheck(L_41);
			int32_t L_43 = L_42;
			iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
			V_17 = L_44;
			// actions = _AddActionToNSArray(actions, allActions[action.Id], count);
			intptr_t L_45 = V_11;
			Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * L_46 = V_0;
			iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * L_47 = V_17;
			NullCheck(L_47);
			String_t* L_48;
			L_48 = iOSNotificationAction_get_Id_m8FFEE9A273939945116A9818B267022F9AB64C9A_inline(L_47, /*hidden argument*/NULL);
			NullCheck(L_46);
			intptr_t L_49;
			L_49 = Dictionary_2_get_Item_m469C9C901730E5AE4B72E50F1B3F959E1E4A56DD(L_46, L_48, /*hidden argument*/Dictionary_2_get_Item_m469C9C901730E5AE4B72E50F1B3F959E1E4A56DD_RuntimeMethod_var);
			int32_t L_50 = V_12;
			intptr_t L_51;
			L_51 = iOSNotificationsWrapper__AddActionToNSArray_mFD325820BA9B587AFE5DC0052014FDFF16ABA5BA((intptr_t)L_45, (intptr_t)L_49, L_50, /*hidden argument*/NULL);
			V_11 = (intptr_t)L_51;
			int32_t L_52 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		}

IL_0100:
		{
			// foreach (var action in category.Actions)
			int32_t L_53 = V_16;
			iOSNotificationActionU5BU5D_tE3A823A01C8C3D107901392E3327C24F1F749F02* L_54 = V_15;
			NullCheck(L_54);
			if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
			{
				goto IL_00db;
			}
		}

IL_0108:
		{
			// IntPtr intentIdentifiers = IntPtr.Zero;
			V_13 = (intptr_t)(0);
			// count = category.IntentIdentifiers.Length;
			iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * L_55 = V_10;
			NullCheck(L_55);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56;
			L_56 = iOSNotificationCategory_get_IntentIdentifiers_m016611A5CD651F12DEAD07571500EF4136CA7C90(L_55, /*hidden argument*/NULL);
			NullCheck(L_56);
			V_12 = ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)));
			// foreach (var idr in category.IntentIdentifiers)
			iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * L_57 = V_10;
			NullCheck(L_57);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58;
			L_58 = iOSNotificationCategory_get_IntentIdentifiers_m016611A5CD651F12DEAD07571500EF4136CA7C90(L_57, /*hidden argument*/NULL);
			V_18 = L_58;
			V_19 = 0;
			goto IL_0143;
		}

IL_0129:
		{
			// foreach (var idr in category.IntentIdentifiers)
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = V_18;
			int32_t L_60 = V_19;
			NullCheck(L_59);
			int32_t L_61 = L_60;
			String_t* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
			V_20 = L_62;
			// intentIdentifiers = _AddStringToNSArray(intentIdentifiers, idr, count);
			intptr_t L_63 = V_13;
			String_t* L_64 = V_20;
			int32_t L_65 = V_12;
			intptr_t L_66;
			L_66 = iOSNotificationsWrapper__AddStringToNSArray_m642AE8BA78E406B55AC383F0114AFFC4844922C7((intptr_t)L_63, L_64, L_65, /*hidden argument*/NULL);
			V_13 = (intptr_t)L_66;
			int32_t L_67 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		}

IL_0143:
		{
			// foreach (var idr in category.IntentIdentifiers)
			int32_t L_68 = V_19;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_69 = V_18;
			NullCheck(L_69);
			if ((((int32_t)L_68) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length))))))
			{
				goto IL_0129;
			}
		}

IL_014b:
		{
			// var cat = _CreateUNNotificationCategory(category.Id, category.HiddenPreviewsBodyPlaceholder, category.SummaryFormat, (int)category.Options,
			//     actions, intentIdentifiers);
			iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * L_70 = V_10;
			NullCheck(L_70);
			String_t* L_71;
			L_71 = iOSNotificationCategory_get_Id_m4D902EFBB02F9DCD93D9CB24F8436DEB8BB28911_inline(L_70, /*hidden argument*/NULL);
			iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * L_72 = V_10;
			NullCheck(L_72);
			String_t* L_73;
			L_73 = iOSNotificationCategory_get_HiddenPreviewsBodyPlaceholder_mC0A7B14924799C5FEBF0D083F2883BA53674FFBB_inline(L_72, /*hidden argument*/NULL);
			iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * L_74 = V_10;
			NullCheck(L_74);
			String_t* L_75;
			L_75 = iOSNotificationCategory_get_SummaryFormat_m82F443308C442357C68FCCD6E97FE8408C40B1D4_inline(L_74, /*hidden argument*/NULL);
			iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * L_76 = V_10;
			NullCheck(L_76);
			int32_t L_77;
			L_77 = iOSNotificationCategory_get_Options_mEBA73C38D2D3B588CC19EBF141ED0293F76E9416_inline(L_76, /*hidden argument*/NULL);
			intptr_t L_78 = V_11;
			intptr_t L_79 = V_13;
			intptr_t L_80;
			L_80 = iOSNotificationsWrapper__CreateUNNotificationCategory_mFCB3CC7E861CEA364780C09A8882CF2D4CB8896C(L_71, L_73, L_75, L_77, (intptr_t)L_78, (intptr_t)L_79, /*hidden argument*/NULL);
			V_14 = (intptr_t)L_80;
			// categorySet = _AddCategoryToCategorySet(categorySet, cat);
			intptr_t L_81 = V_1;
			intptr_t L_82 = V_14;
			intptr_t L_83;
			L_83 = iOSNotificationsWrapper__AddCategoryToCategorySet_mCFAD4457A9E51E54B60FFB444BD1B3962617C0D9((intptr_t)L_81, (intptr_t)L_82, /*hidden argument*/NULL);
			V_1 = (intptr_t)L_83;
		}

IL_017c:
		{
			// foreach (var category in categories)
			RuntimeObject* L_84 = V_9;
			NullCheck(L_84);
			bool L_85;
			L_85 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_84);
			if (L_85)
			{
				goto IL_00b0;
			}
		}

IL_0188:
		{
			IL2CPP_LEAVE(0x197, FINALLY_018a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_018a;
	}

FINALLY_018a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_86 = V_9;
			if (!L_86)
			{
				goto IL_0196;
			}
		}

IL_018e:
		{
			RuntimeObject* L_87 = V_9;
			NullCheck(L_87);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_87);
		}

IL_0196:
		{
			IL2CPP_END_FINALLY(394)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(394)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x197, IL_0197)
	}

IL_0197:
	{
		// _SetNotificationCategories(categorySet);
		intptr_t L_88 = V_1;
		iOSNotificationsWrapper__SetNotificationCategories_m0E99574293B8F7E3E04B3F87F4B4A61450A60437((intptr_t)L_88, /*hidden argument*/NULL);
		// foreach (var act in allActions)
		Dictionary_2_t6E726CE403AD116F894C840BF7136AA3BC4727F1 * L_89 = V_0;
		NullCheck(L_89);
		Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4  L_90;
		L_90 = Dictionary_2_GetEnumerator_m4B172709BA5195F9B5E3BA933FF0F219B3891251(L_89, /*hidden argument*/Dictionary_2_GetEnumerator_m4B172709BA5195F9B5E3BA933FF0F219B3891251_RuntimeMethod_var);
		V_21 = L_90;
	}

IL_01a7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01bf;
		}

IL_01a9:
		{
			// foreach (var act in allActions)
			KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA  L_91;
			L_91 = Enumerator_get_Current_m791E953E29C33E73940968C88B6D7748A3798BDC_inline((Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4 *)(&V_21), /*hidden argument*/Enumerator_get_Current_m791E953E29C33E73940968C88B6D7748A3798BDC_RuntimeMethod_var);
			V_22 = L_91;
			// _ReleaseNSObject(act.Value);
			intptr_t L_92;
			L_92 = KeyValuePair_2_get_Value_m70C4ABD3F9F97FE5FD942670F7E5AFB0076215A6_inline((KeyValuePair_2_t8C12815047489BD1D033DF6C148A79C5E0AAACCA *)(&V_22), /*hidden argument*/KeyValuePair_2_get_Value_m70C4ABD3F9F97FE5FD942670F7E5AFB0076215A6_RuntimeMethod_var);
			iOSNotificationsWrapper__ReleaseNSObject_m212E0AEC9796670B0ED6D7450EACFD839D842E13((intptr_t)L_92, /*hidden argument*/NULL);
		}

IL_01bf:
		{
			// foreach (var act in allActions)
			bool L_93;
			L_93 = Enumerator_MoveNext_m1664B023733A5AAF8DC09D0B058F45871C82E354((Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4 *)(&V_21), /*hidden argument*/Enumerator_MoveNext_m1664B023733A5AAF8DC09D0B058F45871C82E354_RuntimeMethod_var);
			if (L_93)
			{
				goto IL_01a9;
			}
		}

IL_01c8:
		{
			IL2CPP_LEAVE(0x1D9, FINALLY_01ca);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ca;
	}

FINALLY_01ca:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m43CBDA7EBE23CD948CEB5A61998934641888DD63((Enumerator_t7C0CBD732D20BF55380E5EE9B446993DDF06AAC4 *)(&V_21), /*hidden argument*/Enumerator_Dispose_m43CBDA7EBE23CD948CEB5A61998934641888DD63_RuntimeMethod_var);
		IL2CPP_END_FINALLY(458)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(458)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1D9, IL_01d9)
	}

IL_01d9:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ctor_m5738C126099AB6A70D2945B63CFB1094BE3E653E (iOSNotificationsWrapper_t7F25BAC15ACBFD42D6A9CBA68861A72638CB5783 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m59620AF675D3C1FC07F000F69A3CBDAFC187CB75 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * L_0 = (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C *)il2cpp_codegen_object_new(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC41C252011128378380FB873DA6C375C4B8E35D4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC41C252011128378380FB873DA6C375C4B8E35D4 (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::<.cctor>b__38_0(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__38_0_m937C65F2062714E2D4607229E9731A3B412C2157 (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// private static event NotificationReceivedCallback s_OnNotificationReceived = delegate { };
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::<.cctor>b__38_1(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__38_1_m54778B1190F05B511CDBC01D4F7DCE50B769A218 (U3CU3Ec_t7E1C97E9D901D787223BBFE3F53DD077FC511F0C * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// private static event NotificationReceivedCallback s_OnRemoteNotificationReceived = delegate { };
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
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m6AE0F51AFB3D07273AD38F0D7C6193528E7D1961 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mCCF71E824463A5CF6863EDFB9FB650FE5784CACC (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___notification0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___notification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___notification0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___notification0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
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
						GenericInterfaceActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(targetMethod, targetThis, ___notification0);
					else
						GenericVirtActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(targetMethod, targetThis, ___notification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___notification0);
					else
						VirtActionInvoker1< iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___notification0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::BeginInvoke(Unity.Notifications.iOS.iOSNotification,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_m0488CEE5793DCF43C0E3CC91BDE3588678368527 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * ___notification0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___notification0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_m63776B1B0C6CC0CA5D5A08ECE31F4C53FBCB4A79 (NotificationReceivedCallback_tE693D427A068C61EBB3DD3CECEFA5D9CB80B5E97 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___data1' to native representation
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshaled_pinvoke ____data1_marshaled = {};
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke(___data1, ____data1_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(___request0, ____data1_marshaled);

	// Marshaling cleanup of parameter '___data1' native representation
	iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_marshal_pinvoke_cleanup(____data1_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_m868F99A8BEFAEC8EC4117FCDD67497341FEBDD74 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::Invoke(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_Invoke_m96AD87B0B5032082BF086D48B32A69D50195BEFF (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___request0, ___data1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___request0, ___data1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(targetMethod, targetThis, ___request0, ___data1);
					else
						GenericVirtActionInvoker2< intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(targetMethod, targetThis, ___request0, ___data1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___request0, ___data1);
					else
						VirtActionInvoker2< intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___request0, ___data1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___request0, ___data1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::BeginInvoke(System.IntPtr,Unity.Notifications.iOS.iOSAuthorizationRequestData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthorizationRequestCallback_BeginInvoke_m360935E0CE42141A8E11E2EDA9EA7D29C8A24683 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, intptr_t ___request0, iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6  ___data1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___request0);
	__d_args[1] = Box(iOSAuthorizationRequestData_t46778DFBA97AAF455E9083E2BC15E2FE6F5EB9B6_il2cpp_TypeInfo_var, &___data1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_EndInvoke_m08EAE13F515327EACD162DC939B0693282F545C0 (AuthorizationRequestCallback_tA1D3C80486C750EC3B6638B2C4B91540E393C4F3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___notificationData0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___notificationData0' to native representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshaled_pinvoke ____notificationData0_marshaled = {};
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke(___notificationData0, ____notificationData0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____notificationData0_marshaled);

	// Marshaling cleanup of parameter '___notificationData0' native representation
	iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_marshal_pinvoke_cleanup(____notificationData0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_mA1E99CE6E6538FA8F118BC8EC7200C8D677B515F (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m52E4634DA9E46A4D24800D2749D542B7A3A183F9 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___notificationData0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notificationData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notificationData0, targetMethod);
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
						GenericInterfaceActionInvoker1< iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  >::Invoke(targetMethod, targetThis, ___notificationData0);
					else
						GenericVirtActionInvoker1< iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  >::Invoke(targetMethod, targetThis, ___notificationData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___notificationData0);
					else
						VirtActionInvoker1< iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___notificationData0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___notificationData0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___notificationData0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::BeginInvoke(Unity.Notifications.iOS.iOSNotificationData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_mF9B216312C51391E4FC0A2F1810BE6F99FE2DA06 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074  ___notificationData0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(iOSNotificationData_t59408B0D12D0720DBB6AF7F0E9619E4880FDB074_il2cpp_TypeInfo_var, &___notificationData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_mCFBA6F33499ECC319794CCC3333D319D4351FE81 (NotificationReceivedCallback_tC633D2D5F84F66C03365DAA303A01CCE6E56DBC2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___key1' to native representation
	char* ____key1_marshaled = NULL;
	____key1_marshaled = il2cpp_codegen_marshal_string(___key1);

	// Marshaling of parameter '___value2' to native representation
	char* ____value2_marshaled = NULL;
	____value2_marshaled = il2cpp_codegen_marshal_string(___value2);

	// Native function invocation
	il2cppPInvokeFunc(___dict0, ____key1_marshaled, ____value2_marshaled);

	// Marshaling cleanup of parameter '___key1' native representation
	il2cpp_codegen_marshal_free(____key1_marshaled);
	____key1_marshaled = NULL;

	// Marshaling cleanup of parameter '___value2' native representation
	il2cpp_codegen_marshal_free(____value2_marshaled);
	____value2_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback__ctor_m4B65D4BA92D77AE03C50211EFDCA8B881ECEB5CA (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::Invoke(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback_Invoke_m5A38551B879697810FE56A323E5028B7A51BE6F1 (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___dict0, ___key1, ___value2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___dict0, ___key1, ___value2, targetMethod);
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
						GenericInterfaceActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___dict0, ___key1, ___value2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___dict0, ___key1, ___value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___dict0, ___key1, ___value2);
					else
						VirtActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___dict0, ___key1, ___value2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___dict0, ___key1, ___value2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::BeginInvoke(System.IntPtr,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReceiveNSDictionaryKeyValueCallback_BeginInvoke_m94F2BE43BACFF98761D15A8B65407AF3DDA3B2DD (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, intptr_t ___dict0, String_t* ___key1, String_t* ___value2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dict0);
	__d_args[1] = ___key1;
	__d_args[2] = ___value2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveNSDictionaryKeyValueCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNSDictionaryKeyValueCallback_EndInvoke_m9D7D3FA41F4595F1652EE2059907FFA0D275363B (ReceiveNSDictionaryKeyValueCallback_tFE096F9FEC88BA1C1B33D70A6D1AC54D1E6935A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A (ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A * __this, intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___id1' to native representation
	char* ____id1_marshaled = NULL;
	____id1_marshaled = il2cpp_codegen_marshal_string(___id1);

	// Marshaling of parameter '___url2' to native representation
	char* ____url2_marshaled = NULL;
	____url2_marshaled = il2cpp_codegen_marshal_string(___url2);

	// Native function invocation
	il2cppPInvokeFunc(___array0, ____id1_marshaled, ____url2_marshaled);

	// Marshaling cleanup of parameter '___id1' native representation
	il2cpp_codegen_marshal_free(____id1_marshaled);
	____id1_marshaled = NULL;

	// Marshaling cleanup of parameter '___url2' native representation
	il2cpp_codegen_marshal_free(____url2_marshaled);
	____url2_marshaled = NULL;

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveUNNotificationAttachmentCallback__ctor_mCCFFCAB4402283480FE41B572A38ADD01AE57617 (ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback::Invoke(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveUNNotificationAttachmentCallback_Invoke_m8973FCF66656AC51F57B86D3689D576A8302D086 (ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A * __this, intptr_t ___array0, String_t* ___id1, String_t* ___url2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___array0, ___id1, ___url2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___array0, ___id1, ___url2, targetMethod);
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
						GenericInterfaceActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___array0, ___id1, ___url2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___array0, ___id1, ___url2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___array0, ___id1, ___url2);
					else
						VirtActionInvoker3< intptr_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___array0, ___id1, ___url2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___array0, ___id1, ___url2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback::BeginInvoke(System.IntPtr,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReceiveUNNotificationAttachmentCallback_BeginInvoke_mF58F586F387FEFDB1BAE0604EA5878ADFDB080EA (ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A * __this, intptr_t ___array0, String_t* ___id1, String_t* ___url2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___array0);
	__d_args[1] = ___id1;
	__d_args[2] = ___url2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/ReceiveUNNotificationAttachmentCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveUNNotificationAttachmentCallback_EndInvoke_m166441021195419F2C6DF0194BA39766DBCA9CF9 (ReceiveUNNotificationAttachmentCallback_t89C143438A86F7D5B8DFFA187711BB8A748F5A5A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_m48972F26AAE37EAE2D337E87AEBC4DE40987626F_inline (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_UtcTime_m6D6EF46252C6198BB8379365E943A25D89616A69_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public bool UtcTime { get; set; }
		bool L_0 = __this->get_U3CUtcTimeU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Year_m8A0F301185923E277357D4EEE554EE673E1660C3_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CYearU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Month_m2AFF6F4F357F8297E262AA31AEA418A4C0FC4F89_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMonthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Day_m42898486914CB6EBB5B7AAD70B7981B21E929EA7_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CDayU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Hour_mA4304F009A3F9CA93B9715AE5D3BAB81E5045FB6_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CHourU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Minute_mD045386C9F63AC301048D5C2EBF479DD25C64397_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CMinuteU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  iOSNotificationCalendarTrigger_get_Second_m6EE7FF71AEA66769586E8559C2E7A11B2EC47E99_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3CSecondU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mE736C71557A7C086738EBD56C6D1936CE4200B34_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double iOSNotificationLocationTrigger_get_Latitude_m7FF6B3D8921E629467073919B8FE637C676306F6_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public double Latitude { get; set; }
		double L_0 = __this->get_U3CLatitudeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double iOSNotificationLocationTrigger_get_Longitude_m40A4E5D82529580699BBB7D0D399FE483F347372_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public double Longitude { get; set; }
		double L_0 = __this->get_U3CLongitudeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_mC842CDA7A8BE02A586FCE22413756402AE40C66A_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->get_U3CNotifyOnEntryU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_mF117ACA5EAD44C39991624CA17B5909508776A98_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->get_U3CNotifyOnExitU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_mD267EADF32C368187283E4B768C9EDF341B35E8F_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_Repeats_m38C493F8C90E10EEA49F87B65452D8DB21EA6B42_inline (iOSNotificationLocationTrigger_tC912C09CB8B026472349F3A4FBA914C9C087E605 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotification_set_Attachments_m1CF24E7DA6C06E6E1E7F023415604B4EABBFD741_inline (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * ___value0, const RuntimeMethod* method)
{
	{
		// public List<iOSNotificationAttachment> Attachments { get; set; }
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_0 = ___value0;
		__this->set_U3CAttachmentsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  iOSNotification_get_SoundVolume_m3D9788BEC01B11031FCE7021F4688072F8E7FE8F_inline (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	{
		// public float? SoundVolume { get; set; }
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_0 = __this->get_U3CSoundVolumeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * iOSNotification_get_Attachments_mFA2FB0000E8BD6D6FFA9B97C2F3835BF0AB7A89D_inline (iOSNotification_tA82BF3083789F3680FAB0B1C45535685643D8D25 * __this, const RuntimeMethod* method)
{
	{
		// public List<iOSNotificationAttachment> Attachments { get; set; }
		List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * L_0 = __this->get_U3CAttachmentsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Id_m8FFEE9A273939945116A9818B267022F9AB64C9A_inline (iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAction_get_Title_m9B860D8EC20777A0390D3868E2E79F6EC31647CC_inline (iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * __this, const RuntimeMethod* method)
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->get_U3CTitleU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationAction_get_Options_mAAB1E184E727E23D3C553A337BDEF6F58647E0E5_inline (iOSNotificationAction_t4C133E06D54C4D706ACC5E370AC8C3B2EE4D1729 * __this, const RuntimeMethod* method)
{
	{
		// public iOSNotificationActionOptions Options { get; set; }
		int32_t L_0 = __this->get_U3COptionsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Id_m1B8437D2A337B7215D3A6C6BAF175A9ADA45253D_inline (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Id_mE24B264C7720EC1D63778503DDECB1C28D99DEBB_inline (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationAttachment_get_Url_m35E1E10007413B9CFFE9758836D0BB06BB50D438_inline (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, const RuntimeMethod* method)
{
	{
		// public string Url { get; set; }
		String_t* L_0 = __this->get_U3CUrlU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationAttachment_set_Url_m18CC8994CE416B9CECC819391B4A3C3ADF91FDDD_inline (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Url { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUrlU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Year_m72F083C6925652471A793F83721247438D8F9950_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CYearU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Month_m6A4FE821F69215FB6B357B94F7EF074940D1B8A6_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CMonthU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Day_m3A8C0DEB5043AA5508019FA3A718CC2BBDA9F354_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CDayU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Hour_m2CBC30DBB39E7242C46EF9C0768B8082E6A41A11_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CHourU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Minute_mAAEA2870CAEDB70DED3269CDE1BA05887380DDD1_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CMinuteU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Second_mD3512EC69850049A146489592559FF0746674365_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value0, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___value0;
		__this->set_U3CSecondU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_UtcTime_m2BE645F9E24579A5CC2DF05AD4279937FA647C8E_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UtcTime { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUtcTimeU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationCalendarTrigger_set_Repeats_m7186E9769E79CF510A57105FCEFCC325A3E18F28_inline (iOSNotificationCalendarTrigger_t76FB215858918317C5688798905AC715A0898022 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m6171793E71519177BD5D31FD2EB3919063EF041D_inline (iOSNotificationTimeIntervalTrigger_t3EB6EB1F850230D9870E4D64477CF816275B8923 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_Id_m4D902EFBB02F9DCD93D9CB24F8436DEB8BB28911_inline (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_HiddenPreviewsBodyPlaceholder_mC0A7B14924799C5FEBF0D083F2883BA53674FFBB_inline (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method)
{
	{
		// public string HiddenPreviewsBodyPlaceholder { get; set; }
		String_t* L_0 = __this->get_U3CHiddenPreviewsBodyPlaceholderU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* iOSNotificationCategory_get_SummaryFormat_m82F443308C442357C68FCCD6E97FE8408C40B1D4_inline (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method)
{
	{
		// public string SummaryFormat { get; set; }
		String_t* L_0 = __this->get_U3CSummaryFormatU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t iOSNotificationCategory_get_Options_mEBA73C38D2D3B588CC19EBF141ED0293F76E9416_inline (iOSNotificationCategory_t1884E625CE485737DA3685D7C9629208D2ACF01F * __this, const RuntimeMethod* method)
{
	{
		// public iOSNotificationCategoryOptions Options { get; set; }
		int32_t L_0 = __this->get_U3COptionsU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m52AFB0DD1D38F1B2D39F62908902B818D97E7DF7_gshared_inline (List_1_tAEB19A26D0A03CFFCBE1547FEF3234120477418C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  Enumerator_get_Current_mAAE55B9576E035F422B79EDA328DF89F83815456_gshared_inline (Enumerator_t981D4805DB6AE70C9672BAB11FBE87F798035DCE * __this, const RuntimeMethod* method)
{
	{
		iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469  L_0 = (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 )__this->get_current_3();
		return (iOSNotificationAttachment_t37A4471D31A1C86B709282DEBE801B4C154B6469 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8  Enumerator_get_Current_mDD38489908E68C8998AC30B3FE2661BE1789C1D0_gshared_inline (Enumerator_t741639F98DE67308FC85DC78CF84C0180FE11C14 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8  L_0 = (KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8 )__this->get_current_3();
		return (KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Value_m0F02476F8A51CD2A362A4C5A14A6EF420668BC0D_gshared_inline (KeyValuePair_2_tB240266E51130B1787D14A384667BB023D3E2BE8 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_value_1();
		return (intptr_t)L_0;
	}
}
