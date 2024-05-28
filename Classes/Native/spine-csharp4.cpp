#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>
struct ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90;
// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>
struct ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164;
// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36;
// Spine.ExposedList`1<System.Boolean>
struct ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A;
// Spine.ExposedList`1<Spine.IUpdatable>
struct ExposedList_1_t0CA5D3D70CF07167EB2D925649F0AD2B33D798CD;
// Spine.ExposedList`1<Spine.IkConstraint>
struct ExposedList_1_tCAAB4BEAA939FACFE777525D586DEA51E61B0994;
// Spine.ExposedList`1<System.Int32>
struct ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066;
// Spine.ExposedList`1<System.Object>
struct ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10;
// Spine.ExposedList`1<Spine.PathConstraint>
struct ExposedList_1_t59912CC3F7BA44303382359809C190D06B7FF0E9;
// Spine.ExposedList`1<Spine.PhysicsConstraint>
struct ExposedList_1_t8C928E368F0655E5E27D0C47170CAA9D1E59132F;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526;
// Spine.ExposedList`1<Spine.Slot>
struct ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC;
// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_tA3907AC2310205562829E46BC41A014268F91A7B;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t8248F6346C8A248FDA53F64E95ECC640F2E5ED3E;
// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// Spine.Pool`1<Spine.ExposedList`1<System.Int32>>
struct Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A;
// Spine.Pool`1<Spine.ExposedList`1<System.Single>>
struct Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9;
// Spine.Pool`1<System.Object>
struct Pool_1_t1267C3F2D6DCBF77E536D865BA56262DF11C0889;
// System.Collections.Generic.Stack`1<Spine.ExposedList`1<System.Int32>>
struct Stack_1_t2E827BF24387A89C987AA40783D29884A18673C9;
// System.Collections.Generic.Stack`1<Spine.ExposedList`1<System.Single>>
struct Stack_1_t5D9CF25B6DC2FE8F09EA4C5531F7683367F9C365;
// Spine.ExposedList`1<System.Int32>[]
struct ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54;
// Spine.ExposedList`1<System.Single>[]
struct ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// Spine.Bone[]
struct BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23;
// Spine.BoneData[]
struct BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Spine.Event[]
struct EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Spine.TransformConstraint[]
struct TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Spine.Animation
struct Animation_tE800D5597964656F48F303755E4C6C66462E8E90;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Spine.AtlasPage
struct AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6;
// Spine.AtlasRegion
struct AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485;
// Spine.Attachment
struct Attachment_tA85256BF51006C369687395955B6A6B51D432F21;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Spine.Bone
struct Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF;
// Spine.BoneData
struct BoneData_t48A671E6818E76905840CC122A96889DDCB92A51;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// Spine.ConstraintData
struct ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// Spine.CurveTimeline
struct CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476;
// Spine.CurveTimeline1
struct CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C;
// Spine.CurveTimeline2
struct CurveTimeline2_tFB55B7C974EAEFA2745C1F771B06A7A2334C4CF0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059;
// Spine.Event
struct Event_tAB253EC43580D8724548C638BAB02EBB587A7957;
// Spine.EventData
struct EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Spine.MeshAttachment
struct MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Spine.Sequence
struct Sequence_t62BE88F403AFB6787082DA884CBE641E9FFD2289;
// Spine.Skeleton
struct Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C;
// Spine.SkeletonData
struct SkeletonData_t2B4079A31FD40EF1A9968A9D256F7F2F126B4DFD;
// Spine.Skin
struct Skin_tD874A2056EDD885CCC069C91D8D8DD9EB2010FC5;
// Spine.Slot
struct Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635;
// Spine.SlotData
struct SlotData_tB7FE5D031A63C5C74789FB1DE209633A2517955E;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// Spine.TextureRegion
struct TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8;
// Spine.TrackEntry
struct TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D;
// Spine.TransformConstraint
struct TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4;
// Spine.TransformConstraintData
struct TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59;
// Spine.TransformConstraintTimeline
struct TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1;
// Spine.TranslateTimeline
struct TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5;
// Spine.TranslateXTimeline
struct TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5;
// Spine.TranslateYTimeline
struct TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31;
// Spine.Triangulator
struct Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B;
// System.Type
struct Type_t;
// Spine.VertexAttachment
struct VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB;
// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E;
// Spine.AnimationStateData/AnimationPairComparer
struct AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3;
// Spine.Atlas/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201;
// Spine.SkeletonBinary/LinkedMesh
struct LinkedMesh_tD96AA3EAD4BABE253958460A6243315E31F10AEF;
// Spine.SkeletonBinary/SkeletonInput
struct SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A;
// Spine.SkeletonBinary/Vertices
struct Vertices_tC5C45F508B1550DB3F5D2C4479C467CA6226B541;
// Spine.SkeletonJson/LinkedMesh
struct LinkedMesh_tD6A11DC5CA49564F8563B86EEDD422FE5B83108D;
// Spine.Skin/SkinKeyComparer
struct SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MathUtils_t7FEA8F9D49C516129B435137859E11B18CB1A37A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD68933FD1F96E1F39A8AE0B6E397B2AE58AF0B;
IL2CPP_EXTERN_C String_t* _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876;
IL2CPP_EXTERN_C String_t* _stringLiteral415B33E751EB342E42AB189D9404D56A96C6C393;
IL2CPP_EXTERN_C String_t* _stringLiteral541147A891EE1D27C9FE0F61836C41B2F605EB35;
IL2CPP_EXTERN_C String_t* _stringLiteral6DEF291FB4CA7727FF6BE1FE8CD7B4A1077EC673;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA4F9F858EE2EF30F389EC8CF7D073A6FC4149826;
IL2CPP_EXTERN_C String_t* _stringLiteralAABDB12A8673CF3F32247EDEEC8B9E68FE0BF8D2;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A0157A4D0640187967DD9595192830F6FC0E50;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m74071F617F8A507285FC1C9BA2910EA0977650B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBBA6DB2B2D16B8BA4F16C26C6131291F1A4F6AEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m823E28B14A613A855A575D0B28D1585C6A561AC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Add_m14CF5683F62E0C38A3A4AFF78EBAF4219049D497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Clear_m40B61D0D728CF9B427F957C4A8E7A4A364690255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Clear_mBC51B78D1DACC555F6F73D293AC8E6D6DC2FEC18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_GetEnumerator_m6B3B125259D95EEE250D3D250852F01AA647A8ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_RemoveAt_m0629ED8D156A78115171F2746A855438C3DBE81C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_RemoveAt_mABBDA48F0096E88AB0169B176320716F8EE471FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_m02755087651BB67AD2B2D4D758AE77AFD7DC440B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_m14B32DCD34440DA7239B82271DE3B75B3C510C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_m316DF0208BC8528788112ABDE3A956F6B176F5DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_m84177DC3659E1B9F2837C8ADDC017ADDA00B36A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_m7C7FBE91695216C54B23152A69A8EEB750808334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1__ctor_mEF3423A00009591979CA692DDE12CCC2FF4E8C26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonInput_GetVersionStringOld3X_m77C851E61EFF9375B2296C5B65C3AF749AD3CE91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonInput_GetVersionString_mEA6F595F8E5173425CFE97B948B1AB690270DB14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonInput_ReadSByte_m2F2B974C3FFA98A26FF7368DD0218D5A137AF38F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformConstraint__ctor_mA4853CDA24148AF06B19C2BC2956041F70587FAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54;
struct ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE;
struct BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>
struct ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90, ___Items_0)); }
	inline ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* get_Items_0() const { return ___Items_0; }
	inline ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90_StaticFields, ___EmptyArray_3)); }
	inline ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>
struct ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289, ___Items_0)); }
	inline ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* get_Items_0() const { return ___Items_0; }
	inline ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289_StaticFields, ___EmptyArray_3)); }
	inline ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164, ___Items_0)); }
	inline BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* get_Items_0() const { return ___Items_0; }
	inline BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164_StaticFields, ___EmptyArray_3)); }
	inline BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36, ___Items_0)); }
	inline BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* get_Items_0() const { return ___Items_0; }
	inline BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36_StaticFields, ___EmptyArray_3)); }
	inline BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(BoneDataU5BU5D_tAD4DEE7E0EBE569D3B625E73ABCB63C4A70B754C* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<System.Boolean>
struct ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E, ___Items_0)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_Items_0() const { return ___Items_0; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E_StaticFields, ___EmptyArray_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A, ___Items_0)); }
	inline EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* get_Items_0() const { return ___Items_0; }
	inline EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A_StaticFields, ___EmptyArray_3)); }
	inline EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(EventU5BU5D_t28EE828FCC854A33329829EBDD527551DE7A7D06* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<System.Int32>
struct ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066, ___Items_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Items_0() const { return ___Items_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_StaticFields, ___EmptyArray_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<System.Single>
struct ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526, ___Items_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Items_0() const { return ___Items_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526_StaticFields, ___EmptyArray_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F  : public RuntimeObject
{
public:
	// T[] Spine.ExposedList`1::Items
	TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F, ___Items_0)); }
	inline TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* get_Items_0() const { return ___Items_0; }
	inline TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}
};

struct ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F_StaticFields
{
public:
	// T[] Spine.ExposedList`1::EmptyArray
	TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F_StaticFields, ___EmptyArray_3)); }
	inline TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_3), (void*)value);
	}
};


// Spine.Pool`1<Spine.ExposedList`1<System.Int32>>
struct Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A  : public RuntimeObject
{
public:
	// System.Int32 Spine.Pool`1::max
	int32_t ___max_0;
	// System.Collections.Generic.Stack`1<T> Spine.Pool`1::freeObjects
	Stack_1_t2E827BF24387A89C987AA40783D29884A18673C9 * ___freeObjects_1;
	// System.Int32 Spine.Pool`1::<Peak>k__BackingField
	int32_t ___U3CPeakU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_max_0() { return static_cast<int32_t>(offsetof(Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A, ___max_0)); }
	inline int32_t get_max_0() const { return ___max_0; }
	inline int32_t* get_address_of_max_0() { return &___max_0; }
	inline void set_max_0(int32_t value)
	{
		___max_0 = value;
	}

	inline static int32_t get_offset_of_freeObjects_1() { return static_cast<int32_t>(offsetof(Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A, ___freeObjects_1)); }
	inline Stack_1_t2E827BF24387A89C987AA40783D29884A18673C9 * get_freeObjects_1() const { return ___freeObjects_1; }
	inline Stack_1_t2E827BF24387A89C987AA40783D29884A18673C9 ** get_address_of_freeObjects_1() { return &___freeObjects_1; }
	inline void set_freeObjects_1(Stack_1_t2E827BF24387A89C987AA40783D29884A18673C9 * value)
	{
		___freeObjects_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freeObjects_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPeakU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A, ___U3CPeakU3Ek__BackingField_2)); }
	inline int32_t get_U3CPeakU3Ek__BackingField_2() const { return ___U3CPeakU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPeakU3Ek__BackingField_2() { return &___U3CPeakU3Ek__BackingField_2; }
	inline void set_U3CPeakU3Ek__BackingField_2(int32_t value)
	{
		___U3CPeakU3Ek__BackingField_2 = value;
	}
};


// Spine.Pool`1<Spine.ExposedList`1<System.Single>>
struct Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9  : public RuntimeObject
{
public:
	// System.Int32 Spine.Pool`1::max
	int32_t ___max_0;
	// System.Collections.Generic.Stack`1<T> Spine.Pool`1::freeObjects
	Stack_1_t5D9CF25B6DC2FE8F09EA4C5531F7683367F9C365 * ___freeObjects_1;
	// System.Int32 Spine.Pool`1::<Peak>k__BackingField
	int32_t ___U3CPeakU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_max_0() { return static_cast<int32_t>(offsetof(Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9, ___max_0)); }
	inline int32_t get_max_0() const { return ___max_0; }
	inline int32_t* get_address_of_max_0() { return &___max_0; }
	inline void set_max_0(int32_t value)
	{
		___max_0 = value;
	}

	inline static int32_t get_offset_of_freeObjects_1() { return static_cast<int32_t>(offsetof(Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9, ___freeObjects_1)); }
	inline Stack_1_t5D9CF25B6DC2FE8F09EA4C5531F7683367F9C365 * get_freeObjects_1() const { return ___freeObjects_1; }
	inline Stack_1_t5D9CF25B6DC2FE8F09EA4C5531F7683367F9C365 ** get_address_of_freeObjects_1() { return &___freeObjects_1; }
	inline void set_freeObjects_1(Stack_1_t5D9CF25B6DC2FE8F09EA4C5531F7683367F9C365 * value)
	{
		___freeObjects_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freeObjects_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPeakU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9, ___U3CPeakU3Ek__BackingField_2)); }
	inline int32_t get_U3CPeakU3Ek__BackingField_2() const { return ___U3CPeakU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPeakU3Ek__BackingField_2() { return &___U3CPeakU3Ek__BackingField_2; }
	inline void set_U3CPeakU3Ek__BackingField_2(int32_t value)
	{
		___U3CPeakU3Ek__BackingField_2 = value;
	}
};


// Spine.Animation
struct Animation_tE800D5597964656F48F303755E4C6C66462E8E90  : public RuntimeObject
{
public:
	// System.String Spine.Animation::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.Timeline> Spine.Animation::timelines
	ExposedList_1_tA3907AC2310205562829E46BC41A014268F91A7B * ___timelines_1;
	// System.Collections.Generic.HashSet`1<System.String> Spine.Animation::timelineIds
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___timelineIds_2;
	// System.Single Spine.Animation::duration
	float ___duration_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Animation_tE800D5597964656F48F303755E4C6C66462E8E90, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_timelines_1() { return static_cast<int32_t>(offsetof(Animation_tE800D5597964656F48F303755E4C6C66462E8E90, ___timelines_1)); }
	inline ExposedList_1_tA3907AC2310205562829E46BC41A014268F91A7B * get_timelines_1() const { return ___timelines_1; }
	inline ExposedList_1_tA3907AC2310205562829E46BC41A014268F91A7B ** get_address_of_timelines_1() { return &___timelines_1; }
	inline void set_timelines_1(ExposedList_1_tA3907AC2310205562829E46BC41A014268F91A7B * value)
	{
		___timelines_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelines_1), (void*)value);
	}

	inline static int32_t get_offset_of_timelineIds_2() { return static_cast<int32_t>(offsetof(Animation_tE800D5597964656F48F303755E4C6C66462E8E90, ___timelineIds_2)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_timelineIds_2() const { return ___timelineIds_2; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_timelineIds_2() { return &___timelineIds_2; }
	inline void set_timelineIds_2(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___timelineIds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelineIds_2), (void*)value);
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(Animation_tE800D5597964656F48F303755E4C6C66462E8E90, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Spine.Attachment
struct Attachment_tA85256BF51006C369687395955B6A6B51D432F21  : public RuntimeObject
{
public:
	// System.String Spine.Attachment::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Attachment_tA85256BF51006C369687395955B6A6B51D432F21, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}
};


// Spine.ConstraintData
struct ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F  : public RuntimeObject
{
public:
	// System.String Spine.ConstraintData::name
	String_t* ___name_0;
	// System.Int32 Spine.ConstraintData::order
	int32_t ___order_1;
	// System.Boolean Spine.ConstraintData::skinRequired
	bool ___skinRequired_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_order_1() { return static_cast<int32_t>(offsetof(ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F, ___order_1)); }
	inline int32_t get_order_1() const { return ___order_1; }
	inline int32_t* get_address_of_order_1() { return &___order_1; }
	inline void set_order_1(int32_t value)
	{
		___order_1 = value;
	}

	inline static int32_t get_offset_of_skinRequired_2() { return static_cast<int32_t>(offsetof(ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F, ___skinRequired_2)); }
	inline bool get_skinRequired_2() const { return ___skinRequired_2; }
	inline bool* get_address_of_skinRequired_2() { return &___skinRequired_2; }
	inline void set_skinRequired_2(bool value)
	{
		___skinRequired_2 = value;
	}
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_56)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_59)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_60)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
	}
};


// Spine.Event
struct Event_tAB253EC43580D8724548C638BAB02EBB587A7957  : public RuntimeObject
{
public:
	// Spine.EventData Spine.Event::data
	EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5 * ___data_0;
	// System.Single Spine.Event::time
	float ___time_1;
	// System.Int32 Spine.Event::intValue
	int32_t ___intValue_2;
	// System.Single Spine.Event::floatValue
	float ___floatValue_3;
	// System.String Spine.Event::stringValue
	String_t* ___stringValue_4;
	// System.Single Spine.Event::volume
	float ___volume_5;
	// System.Single Spine.Event::balance
	float ___balance_6;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___data_0)); }
	inline EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5 * get_data_0() const { return ___data_0; }
	inline EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(EventData_tE551728B1B00610B27E05B1F8C5E64F2A42163E5 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_intValue_2() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___intValue_2)); }
	inline int32_t get_intValue_2() const { return ___intValue_2; }
	inline int32_t* get_address_of_intValue_2() { return &___intValue_2; }
	inline void set_intValue_2(int32_t value)
	{
		___intValue_2 = value;
	}

	inline static int32_t get_offset_of_floatValue_3() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___floatValue_3)); }
	inline float get_floatValue_3() const { return ___floatValue_3; }
	inline float* get_address_of_floatValue_3() { return &___floatValue_3; }
	inline void set_floatValue_3(float value)
	{
		___floatValue_3 = value;
	}

	inline static int32_t get_offset_of_stringValue_4() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___stringValue_4)); }
	inline String_t* get_stringValue_4() const { return ___stringValue_4; }
	inline String_t** get_address_of_stringValue_4() { return &___stringValue_4; }
	inline void set_stringValue_4(String_t* value)
	{
		___stringValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_volume_5() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___volume_5)); }
	inline float get_volume_5() const { return ___volume_5; }
	inline float* get_address_of_volume_5() { return &___volume_5; }
	inline void set_volume_5(float value)
	{
		___volume_5 = value;
	}

	inline static int32_t get_offset_of_balance_6() { return static_cast<int32_t>(offsetof(Event_tAB253EC43580D8724548C638BAB02EBB587A7957, ___balance_6)); }
	inline float get_balance_6() const { return ___balance_6; }
	inline float* get_address_of_balance_6() { return &___balance_6; }
	inline void set_balance_6(float value)
	{
		___balance_6 = value;
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


// Spine.Skeleton
struct Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C  : public RuntimeObject
{
public:
	// Spine.SkeletonData Spine.Skeleton::data
	SkeletonData_t2B4079A31FD40EF1A9968A9D256F7F2F126B4DFD * ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::bones
	ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * ___bones_1;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::slots
	ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * ___slots_2;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::drawOrder
	ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * ___drawOrder_3;
	// Spine.ExposedList`1<Spine.IkConstraint> Spine.Skeleton::ikConstraints
	ExposedList_1_tCAAB4BEAA939FACFE777525D586DEA51E61B0994 * ___ikConstraints_4;
	// Spine.ExposedList`1<Spine.TransformConstraint> Spine.Skeleton::transformConstraints
	ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F * ___transformConstraints_5;
	// Spine.ExposedList`1<Spine.PathConstraint> Spine.Skeleton::pathConstraints
	ExposedList_1_t59912CC3F7BA44303382359809C190D06B7FF0E9 * ___pathConstraints_6;
	// Spine.ExposedList`1<Spine.PhysicsConstraint> Spine.Skeleton::physicsConstraints
	ExposedList_1_t8C928E368F0655E5E27D0C47170CAA9D1E59132F * ___physicsConstraints_7;
	// Spine.ExposedList`1<Spine.IUpdatable> Spine.Skeleton::updateCache
	ExposedList_1_t0CA5D3D70CF07167EB2D925649F0AD2B33D798CD * ___updateCache_8;
	// Spine.Skin Spine.Skeleton::skin
	Skin_tD874A2056EDD885CCC069C91D8D8DD9EB2010FC5 * ___skin_9;
	// System.Single Spine.Skeleton::r
	float ___r_10;
	// System.Single Spine.Skeleton::g
	float ___g_11;
	// System.Single Spine.Skeleton::b
	float ___b_12;
	// System.Single Spine.Skeleton::a
	float ___a_13;
	// System.Single Spine.Skeleton::x
	float ___x_14;
	// System.Single Spine.Skeleton::y
	float ___y_15;
	// System.Single Spine.Skeleton::scaleX
	float ___scaleX_16;
	// System.Single Spine.Skeleton::time
	float ___time_17;
	// System.Single Spine.Skeleton::scaleY
	float ___scaleY_18;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___data_0)); }
	inline SkeletonData_t2B4079A31FD40EF1A9968A9D256F7F2F126B4DFD * get_data_0() const { return ___data_0; }
	inline SkeletonData_t2B4079A31FD40EF1A9968A9D256F7F2F126B4DFD ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(SkeletonData_t2B4079A31FD40EF1A9968A9D256F7F2F126B4DFD * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___bones_1)); }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_1), (void*)value);
	}

	inline static int32_t get_offset_of_slots_2() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___slots_2)); }
	inline ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * get_slots_2() const { return ___slots_2; }
	inline ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC ** get_address_of_slots_2() { return &___slots_2; }
	inline void set_slots_2(ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * value)
	{
		___slots_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slots_2), (void*)value);
	}

	inline static int32_t get_offset_of_drawOrder_3() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___drawOrder_3)); }
	inline ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * get_drawOrder_3() const { return ___drawOrder_3; }
	inline ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC ** get_address_of_drawOrder_3() { return &___drawOrder_3; }
	inline void set_drawOrder_3(ExposedList_1_tFC656F125F1D30427E8EBAD2273E135F07D41FEC * value)
	{
		___drawOrder_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drawOrder_3), (void*)value);
	}

	inline static int32_t get_offset_of_ikConstraints_4() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___ikConstraints_4)); }
	inline ExposedList_1_tCAAB4BEAA939FACFE777525D586DEA51E61B0994 * get_ikConstraints_4() const { return ___ikConstraints_4; }
	inline ExposedList_1_tCAAB4BEAA939FACFE777525D586DEA51E61B0994 ** get_address_of_ikConstraints_4() { return &___ikConstraints_4; }
	inline void set_ikConstraints_4(ExposedList_1_tCAAB4BEAA939FACFE777525D586DEA51E61B0994 * value)
	{
		___ikConstraints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ikConstraints_4), (void*)value);
	}

	inline static int32_t get_offset_of_transformConstraints_5() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___transformConstraints_5)); }
	inline ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F * get_transformConstraints_5() const { return ___transformConstraints_5; }
	inline ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F ** get_address_of_transformConstraints_5() { return &___transformConstraints_5; }
	inline void set_transformConstraints_5(ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F * value)
	{
		___transformConstraints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformConstraints_5), (void*)value);
	}

	inline static int32_t get_offset_of_pathConstraints_6() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___pathConstraints_6)); }
	inline ExposedList_1_t59912CC3F7BA44303382359809C190D06B7FF0E9 * get_pathConstraints_6() const { return ___pathConstraints_6; }
	inline ExposedList_1_t59912CC3F7BA44303382359809C190D06B7FF0E9 ** get_address_of_pathConstraints_6() { return &___pathConstraints_6; }
	inline void set_pathConstraints_6(ExposedList_1_t59912CC3F7BA44303382359809C190D06B7FF0E9 * value)
	{
		___pathConstraints_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathConstraints_6), (void*)value);
	}

	inline static int32_t get_offset_of_physicsConstraints_7() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___physicsConstraints_7)); }
	inline ExposedList_1_t8C928E368F0655E5E27D0C47170CAA9D1E59132F * get_physicsConstraints_7() const { return ___physicsConstraints_7; }
	inline ExposedList_1_t8C928E368F0655E5E27D0C47170CAA9D1E59132F ** get_address_of_physicsConstraints_7() { return &___physicsConstraints_7; }
	inline void set_physicsConstraints_7(ExposedList_1_t8C928E368F0655E5E27D0C47170CAA9D1E59132F * value)
	{
		___physicsConstraints_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsConstraints_7), (void*)value);
	}

	inline static int32_t get_offset_of_updateCache_8() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___updateCache_8)); }
	inline ExposedList_1_t0CA5D3D70CF07167EB2D925649F0AD2B33D798CD * get_updateCache_8() const { return ___updateCache_8; }
	inline ExposedList_1_t0CA5D3D70CF07167EB2D925649F0AD2B33D798CD ** get_address_of_updateCache_8() { return &___updateCache_8; }
	inline void set_updateCache_8(ExposedList_1_t0CA5D3D70CF07167EB2D925649F0AD2B33D798CD * value)
	{
		___updateCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateCache_8), (void*)value);
	}

	inline static int32_t get_offset_of_skin_9() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___skin_9)); }
	inline Skin_tD874A2056EDD885CCC069C91D8D8DD9EB2010FC5 * get_skin_9() const { return ___skin_9; }
	inline Skin_tD874A2056EDD885CCC069C91D8D8DD9EB2010FC5 ** get_address_of_skin_9() { return &___skin_9; }
	inline void set_skin_9(Skin_tD874A2056EDD885CCC069C91D8D8DD9EB2010FC5 * value)
	{
		___skin_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skin_9), (void*)value);
	}

	inline static int32_t get_offset_of_r_10() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___r_10)); }
	inline float get_r_10() const { return ___r_10; }
	inline float* get_address_of_r_10() { return &___r_10; }
	inline void set_r_10(float value)
	{
		___r_10 = value;
	}

	inline static int32_t get_offset_of_g_11() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___g_11)); }
	inline float get_g_11() const { return ___g_11; }
	inline float* get_address_of_g_11() { return &___g_11; }
	inline void set_g_11(float value)
	{
		___g_11 = value;
	}

	inline static int32_t get_offset_of_b_12() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___b_12)); }
	inline float get_b_12() const { return ___b_12; }
	inline float* get_address_of_b_12() { return &___b_12; }
	inline void set_b_12(float value)
	{
		___b_12 = value;
	}

	inline static int32_t get_offset_of_a_13() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___a_13)); }
	inline float get_a_13() const { return ___a_13; }
	inline float* get_address_of_a_13() { return &___a_13; }
	inline void set_a_13(float value)
	{
		___a_13 = value;
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___x_14)); }
	inline float get_x_14() const { return ___x_14; }
	inline float* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(float value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___y_15)); }
	inline float get_y_15() const { return ___y_15; }
	inline float* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(float value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_scaleX_16() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___scaleX_16)); }
	inline float get_scaleX_16() const { return ___scaleX_16; }
	inline float* get_address_of_scaleX_16() { return &___scaleX_16; }
	inline void set_scaleX_16(float value)
	{
		___scaleX_16 = value;
	}

	inline static int32_t get_offset_of_time_17() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___time_17)); }
	inline float get_time_17() const { return ___time_17; }
	inline float* get_address_of_time_17() { return &___time_17; }
	inline void set_time_17(float value)
	{
		___time_17 = value;
	}

	inline static int32_t get_offset_of_scaleY_18() { return static_cast<int32_t>(offsetof(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C, ___scaleY_18)); }
	inline float get_scaleY_18() const { return ___scaleY_18; }
	inline float* get_address_of_scaleY_18() { return &___scaleY_18; }
	inline void set_scaleY_18(float value)
	{
		___scaleY_18 = value;
	}
};


// Spine.Slot
struct Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635  : public RuntimeObject
{
public:
	// Spine.SlotData Spine.Slot::data
	SlotData_tB7FE5D031A63C5C74789FB1DE209633A2517955E * ___data_0;
	// Spine.Bone Spine.Slot::bone
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * ___bone_1;
	// System.Single Spine.Slot::r
	float ___r_2;
	// System.Single Spine.Slot::g
	float ___g_3;
	// System.Single Spine.Slot::b
	float ___b_4;
	// System.Single Spine.Slot::a
	float ___a_5;
	// System.Single Spine.Slot::r2
	float ___r2_6;
	// System.Single Spine.Slot::g2
	float ___g2_7;
	// System.Single Spine.Slot::b2
	float ___b2_8;
	// System.Boolean Spine.Slot::hasSecondColor
	bool ___hasSecondColor_9;
	// Spine.Attachment Spine.Slot::attachment
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment_10;
	// System.Int32 Spine.Slot::sequenceIndex
	int32_t ___sequenceIndex_11;
	// Spine.ExposedList`1<System.Single> Spine.Slot::deform
	ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___deform_12;
	// System.Int32 Spine.Slot::attachmentState
	int32_t ___attachmentState_13;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___data_0)); }
	inline SlotData_tB7FE5D031A63C5C74789FB1DE209633A2517955E * get_data_0() const { return ___data_0; }
	inline SlotData_tB7FE5D031A63C5C74789FB1DE209633A2517955E ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(SlotData_tB7FE5D031A63C5C74789FB1DE209633A2517955E * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_bone_1() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___bone_1)); }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * get_bone_1() const { return ___bone_1; }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF ** get_address_of_bone_1() { return &___bone_1; }
	inline void set_bone_1(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * value)
	{
		___bone_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bone_1), (void*)value);
	}

	inline static int32_t get_offset_of_r_2() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___r_2)); }
	inline float get_r_2() const { return ___r_2; }
	inline float* get_address_of_r_2() { return &___r_2; }
	inline void set_r_2(float value)
	{
		___r_2 = value;
	}

	inline static int32_t get_offset_of_g_3() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___g_3)); }
	inline float get_g_3() const { return ___g_3; }
	inline float* get_address_of_g_3() { return &___g_3; }
	inline void set_g_3(float value)
	{
		___g_3 = value;
	}

	inline static int32_t get_offset_of_b_4() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___b_4)); }
	inline float get_b_4() const { return ___b_4; }
	inline float* get_address_of_b_4() { return &___b_4; }
	inline void set_b_4(float value)
	{
		___b_4 = value;
	}

	inline static int32_t get_offset_of_a_5() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___a_5)); }
	inline float get_a_5() const { return ___a_5; }
	inline float* get_address_of_a_5() { return &___a_5; }
	inline void set_a_5(float value)
	{
		___a_5 = value;
	}

	inline static int32_t get_offset_of_r2_6() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___r2_6)); }
	inline float get_r2_6() const { return ___r2_6; }
	inline float* get_address_of_r2_6() { return &___r2_6; }
	inline void set_r2_6(float value)
	{
		___r2_6 = value;
	}

	inline static int32_t get_offset_of_g2_7() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___g2_7)); }
	inline float get_g2_7() const { return ___g2_7; }
	inline float* get_address_of_g2_7() { return &___g2_7; }
	inline void set_g2_7(float value)
	{
		___g2_7 = value;
	}

	inline static int32_t get_offset_of_b2_8() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___b2_8)); }
	inline float get_b2_8() const { return ___b2_8; }
	inline float* get_address_of_b2_8() { return &___b2_8; }
	inline void set_b2_8(float value)
	{
		___b2_8 = value;
	}

	inline static int32_t get_offset_of_hasSecondColor_9() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___hasSecondColor_9)); }
	inline bool get_hasSecondColor_9() const { return ___hasSecondColor_9; }
	inline bool* get_address_of_hasSecondColor_9() { return &___hasSecondColor_9; }
	inline void set_hasSecondColor_9(bool value)
	{
		___hasSecondColor_9 = value;
	}

	inline static int32_t get_offset_of_attachment_10() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___attachment_10)); }
	inline Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * get_attachment_10() const { return ___attachment_10; }
	inline Attachment_tA85256BF51006C369687395955B6A6B51D432F21 ** get_address_of_attachment_10() { return &___attachment_10; }
	inline void set_attachment_10(Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * value)
	{
		___attachment_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachment_10), (void*)value);
	}

	inline static int32_t get_offset_of_sequenceIndex_11() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___sequenceIndex_11)); }
	inline int32_t get_sequenceIndex_11() const { return ___sequenceIndex_11; }
	inline int32_t* get_address_of_sequenceIndex_11() { return &___sequenceIndex_11; }
	inline void set_sequenceIndex_11(int32_t value)
	{
		___sequenceIndex_11 = value;
	}

	inline static int32_t get_offset_of_deform_12() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___deform_12)); }
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * get_deform_12() const { return ___deform_12; }
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 ** get_address_of_deform_12() { return &___deform_12; }
	inline void set_deform_12(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * value)
	{
		___deform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deform_12), (void*)value);
	}

	inline static int32_t get_offset_of_attachmentState_13() { return static_cast<int32_t>(offsetof(Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635, ___attachmentState_13)); }
	inline int32_t get_attachmentState_13() const { return ___attachmentState_13; }
	inline int32_t* get_address_of_attachmentState_13() { return &___attachmentState_13; }
	inline void set_attachmentState_13(int32_t value)
	{
		___attachmentState_13 = value;
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


// Spine.TextureRegion
struct TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8  : public RuntimeObject
{
public:
	// System.Int32 Spine.TextureRegion::width
	int32_t ___width_0;
	// System.Int32 Spine.TextureRegion::height
	int32_t ___height_1;
	// System.Single Spine.TextureRegion::u
	float ___u_2;
	// System.Single Spine.TextureRegion::v
	float ___v_3;
	// System.Single Spine.TextureRegion::u2
	float ___u2_4;
	// System.Single Spine.TextureRegion::v2
	float ___v2_5;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_u_2() { return static_cast<int32_t>(offsetof(TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8, ___u_2)); }
	inline float get_u_2() const { return ___u_2; }
	inline float* get_address_of_u_2() { return &___u_2; }
	inline void set_u_2(float value)
	{
		___u_2 = value;
	}

	inline static int32_t get_offset_of_v_3() { return static_cast<int32_t>(offsetof(TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8, ___v_3)); }
	inline float get_v_3() const { return ___v_3; }
	inline float* get_address_of_v_3() { return &___v_3; }
	inline void set_v_3(float value)
	{
		___v_3 = value;
	}

	inline static int32_t get_offset_of_u2_4() { return static_cast<int32_t>(offsetof(TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8, ___u2_4)); }
	inline float get_u2_4() const { return ___u2_4; }
	inline float* get_address_of_u2_4() { return &___u2_4; }
	inline void set_u2_4(float value)
	{
		___u2_4 = value;
	}

	inline static int32_t get_offset_of_v2_5() { return static_cast<int32_t>(offsetof(TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8, ___v2_5)); }
	inline float get_v2_5() const { return ___v2_5; }
	inline float* get_address_of_v2_5() { return &___v2_5; }
	inline void set_v2_5(float value)
	{
		___v2_5 = value;
	}
};


// Spine.Timeline
struct Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0  : public RuntimeObject
{
public:
	// System.String[] Spine.Timeline::propertyIds
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___propertyIds_0;
	// System.Single[] Spine.Timeline::frames
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___frames_1;

public:
	inline static int32_t get_offset_of_propertyIds_0() { return static_cast<int32_t>(offsetof(Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0, ___propertyIds_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_propertyIds_0() const { return ___propertyIds_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_propertyIds_0() { return &___propertyIds_0; }
	inline void set_propertyIds_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___propertyIds_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyIds_0), (void*)value);
	}

	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0, ___frames_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_frames_1() const { return ___frames_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_1), (void*)value);
	}
};


// Spine.TransformConstraint
struct TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4  : public RuntimeObject
{
public:
	// Spine.TransformConstraintData Spine.TransformConstraint::data
	TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.TransformConstraint::bones
	ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * ___bones_1;
	// Spine.Bone Spine.TransformConstraint::target
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * ___target_2;
	// System.Single Spine.TransformConstraint::mixRotate
	float ___mixRotate_3;
	// System.Single Spine.TransformConstraint::mixX
	float ___mixX_4;
	// System.Single Spine.TransformConstraint::mixY
	float ___mixY_5;
	// System.Single Spine.TransformConstraint::mixScaleX
	float ___mixScaleX_6;
	// System.Single Spine.TransformConstraint::mixScaleY
	float ___mixScaleY_7;
	// System.Single Spine.TransformConstraint::mixShearY
	float ___mixShearY_8;
	// System.Boolean Spine.TransformConstraint::active
	bool ___active_9;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___data_0)); }
	inline TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * get_data_0() const { return ___data_0; }
	inline TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___bones_1)); }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * get_bones_1() const { return ___bones_1; }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 ** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___target_2)); }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * get_target_2() const { return ___target_2; }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_mixRotate_3() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixRotate_3)); }
	inline float get_mixRotate_3() const { return ___mixRotate_3; }
	inline float* get_address_of_mixRotate_3() { return &___mixRotate_3; }
	inline void set_mixRotate_3(float value)
	{
		___mixRotate_3 = value;
	}

	inline static int32_t get_offset_of_mixX_4() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixX_4)); }
	inline float get_mixX_4() const { return ___mixX_4; }
	inline float* get_address_of_mixX_4() { return &___mixX_4; }
	inline void set_mixX_4(float value)
	{
		___mixX_4 = value;
	}

	inline static int32_t get_offset_of_mixY_5() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixY_5)); }
	inline float get_mixY_5() const { return ___mixY_5; }
	inline float* get_address_of_mixY_5() { return &___mixY_5; }
	inline void set_mixY_5(float value)
	{
		___mixY_5 = value;
	}

	inline static int32_t get_offset_of_mixScaleX_6() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixScaleX_6)); }
	inline float get_mixScaleX_6() const { return ___mixScaleX_6; }
	inline float* get_address_of_mixScaleX_6() { return &___mixScaleX_6; }
	inline void set_mixScaleX_6(float value)
	{
		___mixScaleX_6 = value;
	}

	inline static int32_t get_offset_of_mixScaleY_7() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixScaleY_7)); }
	inline float get_mixScaleY_7() const { return ___mixScaleY_7; }
	inline float* get_address_of_mixScaleY_7() { return &___mixScaleY_7; }
	inline void set_mixScaleY_7(float value)
	{
		___mixScaleY_7 = value;
	}

	inline static int32_t get_offset_of_mixShearY_8() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___mixShearY_8)); }
	inline float get_mixShearY_8() const { return ___mixShearY_8; }
	inline float* get_address_of_mixShearY_8() { return &___mixShearY_8; }
	inline void set_mixShearY_8(float value)
	{
		___mixShearY_8 = value;
	}

	inline static int32_t get_offset_of_active_9() { return static_cast<int32_t>(offsetof(TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4, ___active_9)); }
	inline bool get_active_9() const { return ___active_9; }
	inline bool* get_address_of_active_9() { return &___active_9; }
	inline void set_active_9(bool value)
	{
		___active_9 = value;
	}
};


// Spine.Triangulator
struct Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B  : public RuntimeObject
{
public:
	// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>> Spine.Triangulator::convexPolygons
	ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * ___convexPolygons_0;
	// Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>> Spine.Triangulator::convexPolygonsIndices
	ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * ___convexPolygonsIndices_1;
	// Spine.ExposedList`1<System.Int32> Spine.Triangulator::indicesArray
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___indicesArray_2;
	// Spine.ExposedList`1<System.Boolean> Spine.Triangulator::isConcaveArray
	ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * ___isConcaveArray_3;
	// Spine.ExposedList`1<System.Int32> Spine.Triangulator::triangles
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___triangles_4;
	// Spine.Pool`1<Spine.ExposedList`1<System.Single>> Spine.Triangulator::polygonPool
	Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * ___polygonPool_5;
	// Spine.Pool`1<Spine.ExposedList`1<System.Int32>> Spine.Triangulator::polygonIndicesPool
	Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * ___polygonIndicesPool_6;

public:
	inline static int32_t get_offset_of_convexPolygons_0() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___convexPolygons_0)); }
	inline ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * get_convexPolygons_0() const { return ___convexPolygons_0; }
	inline ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 ** get_address_of_convexPolygons_0() { return &___convexPolygons_0; }
	inline void set_convexPolygons_0(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * value)
	{
		___convexPolygons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convexPolygons_0), (void*)value);
	}

	inline static int32_t get_offset_of_convexPolygonsIndices_1() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___convexPolygonsIndices_1)); }
	inline ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * get_convexPolygonsIndices_1() const { return ___convexPolygonsIndices_1; }
	inline ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 ** get_address_of_convexPolygonsIndices_1() { return &___convexPolygonsIndices_1; }
	inline void set_convexPolygonsIndices_1(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * value)
	{
		___convexPolygonsIndices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convexPolygonsIndices_1), (void*)value);
	}

	inline static int32_t get_offset_of_indicesArray_2() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___indicesArray_2)); }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * get_indicesArray_2() const { return ___indicesArray_2; }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 ** get_address_of_indicesArray_2() { return &___indicesArray_2; }
	inline void set_indicesArray_2(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * value)
	{
		___indicesArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indicesArray_2), (void*)value);
	}

	inline static int32_t get_offset_of_isConcaveArray_3() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___isConcaveArray_3)); }
	inline ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * get_isConcaveArray_3() const { return ___isConcaveArray_3; }
	inline ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E ** get_address_of_isConcaveArray_3() { return &___isConcaveArray_3; }
	inline void set_isConcaveArray_3(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * value)
	{
		___isConcaveArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isConcaveArray_3), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_4() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___triangles_4)); }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * get_triangles_4() const { return ___triangles_4; }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 ** get_address_of_triangles_4() { return &___triangles_4; }
	inline void set_triangles_4(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * value)
	{
		___triangles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_4), (void*)value);
	}

	inline static int32_t get_offset_of_polygonPool_5() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___polygonPool_5)); }
	inline Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * get_polygonPool_5() const { return ___polygonPool_5; }
	inline Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 ** get_address_of_polygonPool_5() { return &___polygonPool_5; }
	inline void set_polygonPool_5(Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * value)
	{
		___polygonPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygonPool_5), (void*)value);
	}

	inline static int32_t get_offset_of_polygonIndicesPool_6() { return static_cast<int32_t>(offsetof(Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B, ___polygonIndicesPool_6)); }
	inline Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * get_polygonIndicesPool_6() const { return ___polygonIndicesPool_6; }
	inline Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A ** get_address_of_polygonIndicesPool_6() { return &___polygonIndicesPool_6; }
	inline void set_polygonIndicesPool_6(Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * value)
	{
		___polygonIndicesPool_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygonIndicesPool_6), (void*)value);
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

// Spine.AnimationStateData/AnimationPairComparer
struct AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3  : public RuntimeObject
{
public:

public:
};

struct AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_StaticFields
{
public:
	// Spine.AnimationStateData/AnimationPairComparer Spine.AnimationStateData/AnimationPairComparer::Instance
	AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_StaticFields, ___Instance_0)); }
	inline AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * get_Instance_0() const { return ___Instance_0; }
	inline AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Spine.Atlas/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201  : public RuntimeObject
{
public:
	// Spine.AtlasPage Spine.Atlas/<>c__DisplayClass10_0::page
	AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * ___page_0;
	// System.String[] Spine.Atlas/<>c__DisplayClass10_0::entry
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___entry_1;
	// Spine.AtlasRegion Spine.Atlas/<>c__DisplayClass10_0::region
	AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * ___region_2;

public:
	inline static int32_t get_offset_of_page_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201, ___page_0)); }
	inline AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * get_page_0() const { return ___page_0; }
	inline AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 ** get_address_of_page_0() { return &___page_0; }
	inline void set_page_0(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * value)
	{
		___page_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___page_0), (void*)value);
	}

	inline static int32_t get_offset_of_entry_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201, ___entry_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_entry_1() const { return ___entry_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_entry_1() { return &___entry_1; }
	inline void set_entry_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___entry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entry_1), (void*)value);
	}

	inline static int32_t get_offset_of_region_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201, ___region_2)); }
	inline AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * get_region_2() const { return ___region_2; }
	inline AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 ** get_address_of_region_2() { return &___region_2; }
	inline void set_region_2(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * value)
	{
		___region_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___region_2), (void*)value);
	}
};


// Spine.SkeletonBinary/LinkedMesh
struct LinkedMesh_tD96AA3EAD4BABE253958460A6243315E31F10AEF  : public RuntimeObject
{
public:
	// System.String Spine.SkeletonBinary/LinkedMesh::parent
	String_t* ___parent_0;
	// System.Int32 Spine.SkeletonBinary/LinkedMesh::skinIndex
	int32_t ___skinIndex_1;
	// System.Int32 Spine.SkeletonBinary/LinkedMesh::slotIndex
	int32_t ___slotIndex_2;
	// Spine.MeshAttachment Spine.SkeletonBinary/LinkedMesh::mesh
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * ___mesh_3;
	// System.Boolean Spine.SkeletonBinary/LinkedMesh::inheritTimelines
	bool ___inheritTimelines_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(LinkedMesh_tD96AA3EAD4BABE253958460A6243315E31F10AEF, ___parent_0)); }
	inline String_t* get_parent_0() const { return ___parent_0; }
	inline String_t** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(String_t* value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_skinIndex_1() { return static_cast<int32_t>(offsetof(LinkedMesh_tD96AA3EAD4BABE253958460A6243315E31F10AEF, ___skinIndex_1)); }
	inline int32_t get_skinIndex_1() const { return ___skinIndex_1; }
	inline int32_t* get_address_of_skinIndex_1() { return &___skinIndex_1; }
	inline void set_skinIndex_1(int32_t value)
	{
		___skinIndex_1 = value;
	}

	inline static int32_t get_offset_of_slotIndex_2() { return static_cast<int32_t>(offsetof(LinkedMesh_tD96AA3EAD4BABE253958460A6243315E31F10AEF, ___slotIndex_2)); }
	inline int32_t get_slotIndex_2() const { return ___slotIndex_2; }
	inline int32_t* get_address_of_slotIndex_2() { return &___slotIndex_2; }
	inline void set_slotIndex_2(int32_t value)
	{
		___slotIndex_2 = value;
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(LinkedMesh_tD96AA3EAD4BABE253958460A6243315E31F10AEF, ___mesh_3)); }
	inline MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * get_mesh_3() const { return ___mesh_3; }
	inline MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_inheritTimelines_4() { return static_cast<int32_t>(offsetof(LinkedMesh_tD96AA3EAD4BABE253958460A6243315E31F10AEF, ___inheritTimelines_4)); }
	inline bool get_inheritTimelines_4() const { return ___inheritTimelines_4; }
	inline bool* get_address_of_inheritTimelines_4() { return &___inheritTimelines_4; }
	inline void set_inheritTimelines_4(bool value)
	{
		___inheritTimelines_4 = value;
	}
};


// Spine.SkeletonBinary/SkeletonInput
struct SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A  : public RuntimeObject
{
public:
	// System.Byte[] Spine.SkeletonBinary/SkeletonInput::chars
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___chars_0;
	// System.Byte[] Spine.SkeletonBinary/SkeletonInput::bytesBigEndian
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytesBigEndian_1;
	// System.String[] Spine.SkeletonBinary/SkeletonInput::strings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___strings_2;
	// System.IO.Stream Spine.SkeletonBinary/SkeletonInput::input
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input_3;

public:
	inline static int32_t get_offset_of_chars_0() { return static_cast<int32_t>(offsetof(SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A, ___chars_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_chars_0() const { return ___chars_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_chars_0() { return &___chars_0; }
	inline void set_chars_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___chars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chars_0), (void*)value);
	}

	inline static int32_t get_offset_of_bytesBigEndian_1() { return static_cast<int32_t>(offsetof(SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A, ___bytesBigEndian_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bytesBigEndian_1() const { return ___bytesBigEndian_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bytesBigEndian_1() { return &___bytesBigEndian_1; }
	inline void set_bytesBigEndian_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bytesBigEndian_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytesBigEndian_1), (void*)value);
	}

	inline static int32_t get_offset_of_strings_2() { return static_cast<int32_t>(offsetof(SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A, ___strings_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_strings_2() const { return ___strings_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_strings_2() { return &___strings_2; }
	inline void set_strings_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___strings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strings_2), (void*)value);
	}

	inline static int32_t get_offset_of_input_3() { return static_cast<int32_t>(offsetof(SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A, ___input_3)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_input_3() const { return ___input_3; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_input_3() { return &___input_3; }
	inline void set_input_3(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___input_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_3), (void*)value);
	}
};


// Spine.SkeletonBinary/Vertices
struct Vertices_tC5C45F508B1550DB3F5D2C4479C467CA6226B541  : public RuntimeObject
{
public:
	// System.Int32 Spine.SkeletonBinary/Vertices::length
	int32_t ___length_0;
	// System.Int32[] Spine.SkeletonBinary/Vertices::bones
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bones_1;
	// System.Single[] Spine.SkeletonBinary/Vertices::vertices
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___vertices_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(Vertices_tC5C45F508B1550DB3F5D2C4479C467CA6226B541, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_bones_1() { return static_cast<int32_t>(offsetof(Vertices_tC5C45F508B1550DB3F5D2C4479C467CA6226B541, ___bones_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_bones_1() const { return ___bones_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_bones_1() { return &___bones_1; }
	inline void set_bones_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___bones_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_1), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_2() { return static_cast<int32_t>(offsetof(Vertices_tC5C45F508B1550DB3F5D2C4479C467CA6226B541, ___vertices_2)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_vertices_2() const { return ___vertices_2; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_vertices_2() { return &___vertices_2; }
	inline void set_vertices_2(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___vertices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_2), (void*)value);
	}
};


// Spine.SkeletonJson/LinkedMesh
struct LinkedMesh_tD6A11DC5CA49564F8563B86EEDD422FE5B83108D  : public RuntimeObject
{
public:
	// System.String Spine.SkeletonJson/LinkedMesh::parent
	String_t* ___parent_0;
	// System.String Spine.SkeletonJson/LinkedMesh::skin
	String_t* ___skin_1;
	// System.Int32 Spine.SkeletonJson/LinkedMesh::slotIndex
	int32_t ___slotIndex_2;
	// Spine.MeshAttachment Spine.SkeletonJson/LinkedMesh::mesh
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * ___mesh_3;
	// System.Boolean Spine.SkeletonJson/LinkedMesh::inheritTimelines
	bool ___inheritTimelines_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(LinkedMesh_tD6A11DC5CA49564F8563B86EEDD422FE5B83108D, ___parent_0)); }
	inline String_t* get_parent_0() const { return ___parent_0; }
	inline String_t** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(String_t* value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_skin_1() { return static_cast<int32_t>(offsetof(LinkedMesh_tD6A11DC5CA49564F8563B86EEDD422FE5B83108D, ___skin_1)); }
	inline String_t* get_skin_1() const { return ___skin_1; }
	inline String_t** get_address_of_skin_1() { return &___skin_1; }
	inline void set_skin_1(String_t* value)
	{
		___skin_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skin_1), (void*)value);
	}

	inline static int32_t get_offset_of_slotIndex_2() { return static_cast<int32_t>(offsetof(LinkedMesh_tD6A11DC5CA49564F8563B86EEDD422FE5B83108D, ___slotIndex_2)); }
	inline int32_t get_slotIndex_2() const { return ___slotIndex_2; }
	inline int32_t* get_address_of_slotIndex_2() { return &___slotIndex_2; }
	inline void set_slotIndex_2(int32_t value)
	{
		___slotIndex_2 = value;
	}

	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(LinkedMesh_tD6A11DC5CA49564F8563B86EEDD422FE5B83108D, ___mesh_3)); }
	inline MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * get_mesh_3() const { return ___mesh_3; }
	inline MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_inheritTimelines_4() { return static_cast<int32_t>(offsetof(LinkedMesh_tD6A11DC5CA49564F8563B86EEDD422FE5B83108D, ___inheritTimelines_4)); }
	inline bool get_inheritTimelines_4() const { return ___inheritTimelines_4; }
	inline bool* get_address_of_inheritTimelines_4() { return &___inheritTimelines_4; }
	inline void set_inheritTimelines_4(bool value)
	{
		___inheritTimelines_4 = value;
	}
};


// Spine.Skin/SkinKeyComparer
struct SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764  : public RuntimeObject
{
public:

public:
};

struct SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_StaticFields
{
public:
	// Spine.Skin/SkinKeyComparer Spine.Skin/SkinKeyComparer::Instance
	SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_StaticFields, ___Instance_0)); }
	inline SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * get_Instance_0() const { return ___Instance_0; }
	inline SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Spine.ExposedList`1/Enumerator<Spine.BoneData>
struct Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1 
{
public:
	// Spine.ExposedList`1<T> Spine.ExposedList`1/Enumerator::l
	ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * ___l_0;
	// System.Int32 Spine.ExposedList`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 Spine.ExposedList`1/Enumerator::ver
	int32_t ___ver_2;
	// T Spine.ExposedList`1/Enumerator::current
	BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1, ___l_0)); }
	inline ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * get_l_0() const { return ___l_0; }
	inline ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1, ___current_3)); }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * get_current_3() const { return ___current_3; }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// Spine.ExposedList`1/Enumerator<System.Object>
struct Enumerator_tC6896AA292B9CC20C353DC252C60DD0B10A3620A 
{
public:
	// Spine.ExposedList`1<T> Spine.ExposedList`1/Enumerator::l
	ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * ___l_0;
	// System.Int32 Spine.ExposedList`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 Spine.ExposedList`1/Enumerator::ver
	int32_t ___ver_2;
	// T Spine.ExposedList`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_tC6896AA292B9CC20C353DC252C60DD0B10A3620A, ___l_0)); }
	inline ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * get_l_0() const { return ___l_0; }
	inline ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_tC6896AA292B9CC20C353DC252C60DD0B10A3620A, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_tC6896AA292B9CC20C353DC252C60DD0B10A3620A, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC6896AA292B9CC20C353DC252C60DD0B10A3620A, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// Spine.AtlasRegion
struct AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485  : public TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8
{
public:
	// Spine.AtlasPage Spine.AtlasRegion::page
	AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * ___page_6;
	// System.String Spine.AtlasRegion::name
	String_t* ___name_7;
	// System.Int32 Spine.AtlasRegion::x
	int32_t ___x_8;
	// System.Int32 Spine.AtlasRegion::y
	int32_t ___y_9;
	// System.Single Spine.AtlasRegion::offsetX
	float ___offsetX_10;
	// System.Single Spine.AtlasRegion::offsetY
	float ___offsetY_11;
	// System.Int32 Spine.AtlasRegion::originalWidth
	int32_t ___originalWidth_12;
	// System.Int32 Spine.AtlasRegion::originalHeight
	int32_t ___originalHeight_13;
	// System.Int32 Spine.AtlasRegion::degrees
	int32_t ___degrees_14;
	// System.Boolean Spine.AtlasRegion::rotate
	bool ___rotate_15;
	// System.Int32 Spine.AtlasRegion::index
	int32_t ___index_16;
	// System.String[] Spine.AtlasRegion::names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___names_17;
	// System.Int32[][] Spine.AtlasRegion::values
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___values_18;

public:
	inline static int32_t get_offset_of_page_6() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___page_6)); }
	inline AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * get_page_6() const { return ___page_6; }
	inline AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 ** get_address_of_page_6() { return &___page_6; }
	inline void set_page_6(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * value)
	{
		___page_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___page_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___x_8)); }
	inline int32_t get_x_8() const { return ___x_8; }
	inline int32_t* get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(int32_t value)
	{
		___x_8 = value;
	}

	inline static int32_t get_offset_of_y_9() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___y_9)); }
	inline int32_t get_y_9() const { return ___y_9; }
	inline int32_t* get_address_of_y_9() { return &___y_9; }
	inline void set_y_9(int32_t value)
	{
		___y_9 = value;
	}

	inline static int32_t get_offset_of_offsetX_10() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___offsetX_10)); }
	inline float get_offsetX_10() const { return ___offsetX_10; }
	inline float* get_address_of_offsetX_10() { return &___offsetX_10; }
	inline void set_offsetX_10(float value)
	{
		___offsetX_10 = value;
	}

	inline static int32_t get_offset_of_offsetY_11() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___offsetY_11)); }
	inline float get_offsetY_11() const { return ___offsetY_11; }
	inline float* get_address_of_offsetY_11() { return &___offsetY_11; }
	inline void set_offsetY_11(float value)
	{
		___offsetY_11 = value;
	}

	inline static int32_t get_offset_of_originalWidth_12() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___originalWidth_12)); }
	inline int32_t get_originalWidth_12() const { return ___originalWidth_12; }
	inline int32_t* get_address_of_originalWidth_12() { return &___originalWidth_12; }
	inline void set_originalWidth_12(int32_t value)
	{
		___originalWidth_12 = value;
	}

	inline static int32_t get_offset_of_originalHeight_13() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___originalHeight_13)); }
	inline int32_t get_originalHeight_13() const { return ___originalHeight_13; }
	inline int32_t* get_address_of_originalHeight_13() { return &___originalHeight_13; }
	inline void set_originalHeight_13(int32_t value)
	{
		___originalHeight_13 = value;
	}

	inline static int32_t get_offset_of_degrees_14() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___degrees_14)); }
	inline int32_t get_degrees_14() const { return ___degrees_14; }
	inline int32_t* get_address_of_degrees_14() { return &___degrees_14; }
	inline void set_degrees_14(int32_t value)
	{
		___degrees_14 = value;
	}

	inline static int32_t get_offset_of_rotate_15() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___rotate_15)); }
	inline bool get_rotate_15() const { return ___rotate_15; }
	inline bool* get_address_of_rotate_15() { return &___rotate_15; }
	inline void set_rotate_15(bool value)
	{
		___rotate_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}

	inline static int32_t get_offset_of_names_17() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___names_17)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_names_17() const { return ___names_17; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_names_17() { return &___names_17; }
	inline void set_names_17(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___names_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___names_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485, ___values_18)); }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* get_values_18() const { return ___values_18; }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// Spine.CurveTimeline
struct CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476  : public Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0
{
public:
	// System.Single[] Spine.CurveTimeline::curves
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___curves_6;

public:
	inline static int32_t get_offset_of_curves_6() { return static_cast<int32_t>(offsetof(CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476, ___curves_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_curves_6() const { return ___curves_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_curves_6() { return &___curves_6; }
	inline void set_curves_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___curves_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curves_6), (void*)value);
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


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// Spine.TransformConstraintData
struct TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59  : public ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F
{
public:
	// Spine.ExposedList`1<Spine.BoneData> Spine.TransformConstraintData::bones
	ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * ___bones_3;
	// Spine.BoneData Spine.TransformConstraintData::target
	BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * ___target_4;
	// System.Single Spine.TransformConstraintData::mixRotate
	float ___mixRotate_5;
	// System.Single Spine.TransformConstraintData::mixX
	float ___mixX_6;
	// System.Single Spine.TransformConstraintData::mixY
	float ___mixY_7;
	// System.Single Spine.TransformConstraintData::mixScaleX
	float ___mixScaleX_8;
	// System.Single Spine.TransformConstraintData::mixScaleY
	float ___mixScaleY_9;
	// System.Single Spine.TransformConstraintData::mixShearY
	float ___mixShearY_10;
	// System.Single Spine.TransformConstraintData::offsetRotation
	float ___offsetRotation_11;
	// System.Single Spine.TransformConstraintData::offsetX
	float ___offsetX_12;
	// System.Single Spine.TransformConstraintData::offsetY
	float ___offsetY_13;
	// System.Single Spine.TransformConstraintData::offsetScaleX
	float ___offsetScaleX_14;
	// System.Single Spine.TransformConstraintData::offsetScaleY
	float ___offsetScaleY_15;
	// System.Single Spine.TransformConstraintData::offsetShearY
	float ___offsetShearY_16;
	// System.Boolean Spine.TransformConstraintData::relative
	bool ___relative_17;
	// System.Boolean Spine.TransformConstraintData::local
	bool ___local_18;

public:
	inline static int32_t get_offset_of_bones_3() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___bones_3)); }
	inline ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * get_bones_3() const { return ___bones_3; }
	inline ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 ** get_address_of_bones_3() { return &___bones_3; }
	inline void set_bones_3(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * value)
	{
		___bones_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_3), (void*)value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___target_4)); }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * get_target_4() const { return ___target_4; }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_mixRotate_5() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixRotate_5)); }
	inline float get_mixRotate_5() const { return ___mixRotate_5; }
	inline float* get_address_of_mixRotate_5() { return &___mixRotate_5; }
	inline void set_mixRotate_5(float value)
	{
		___mixRotate_5 = value;
	}

	inline static int32_t get_offset_of_mixX_6() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixX_6)); }
	inline float get_mixX_6() const { return ___mixX_6; }
	inline float* get_address_of_mixX_6() { return &___mixX_6; }
	inline void set_mixX_6(float value)
	{
		___mixX_6 = value;
	}

	inline static int32_t get_offset_of_mixY_7() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixY_7)); }
	inline float get_mixY_7() const { return ___mixY_7; }
	inline float* get_address_of_mixY_7() { return &___mixY_7; }
	inline void set_mixY_7(float value)
	{
		___mixY_7 = value;
	}

	inline static int32_t get_offset_of_mixScaleX_8() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixScaleX_8)); }
	inline float get_mixScaleX_8() const { return ___mixScaleX_8; }
	inline float* get_address_of_mixScaleX_8() { return &___mixScaleX_8; }
	inline void set_mixScaleX_8(float value)
	{
		___mixScaleX_8 = value;
	}

	inline static int32_t get_offset_of_mixScaleY_9() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixScaleY_9)); }
	inline float get_mixScaleY_9() const { return ___mixScaleY_9; }
	inline float* get_address_of_mixScaleY_9() { return &___mixScaleY_9; }
	inline void set_mixScaleY_9(float value)
	{
		___mixScaleY_9 = value;
	}

	inline static int32_t get_offset_of_mixShearY_10() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___mixShearY_10)); }
	inline float get_mixShearY_10() const { return ___mixShearY_10; }
	inline float* get_address_of_mixShearY_10() { return &___mixShearY_10; }
	inline void set_mixShearY_10(float value)
	{
		___mixShearY_10 = value;
	}

	inline static int32_t get_offset_of_offsetRotation_11() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetRotation_11)); }
	inline float get_offsetRotation_11() const { return ___offsetRotation_11; }
	inline float* get_address_of_offsetRotation_11() { return &___offsetRotation_11; }
	inline void set_offsetRotation_11(float value)
	{
		___offsetRotation_11 = value;
	}

	inline static int32_t get_offset_of_offsetX_12() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetX_12)); }
	inline float get_offsetX_12() const { return ___offsetX_12; }
	inline float* get_address_of_offsetX_12() { return &___offsetX_12; }
	inline void set_offsetX_12(float value)
	{
		___offsetX_12 = value;
	}

	inline static int32_t get_offset_of_offsetY_13() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetY_13)); }
	inline float get_offsetY_13() const { return ___offsetY_13; }
	inline float* get_address_of_offsetY_13() { return &___offsetY_13; }
	inline void set_offsetY_13(float value)
	{
		___offsetY_13 = value;
	}

	inline static int32_t get_offset_of_offsetScaleX_14() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetScaleX_14)); }
	inline float get_offsetScaleX_14() const { return ___offsetScaleX_14; }
	inline float* get_address_of_offsetScaleX_14() { return &___offsetScaleX_14; }
	inline void set_offsetScaleX_14(float value)
	{
		___offsetScaleX_14 = value;
	}

	inline static int32_t get_offset_of_offsetScaleY_15() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetScaleY_15)); }
	inline float get_offsetScaleY_15() const { return ___offsetScaleY_15; }
	inline float* get_address_of_offsetScaleY_15() { return &___offsetScaleY_15; }
	inline void set_offsetScaleY_15(float value)
	{
		___offsetScaleY_15 = value;
	}

	inline static int32_t get_offset_of_offsetShearY_16() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___offsetShearY_16)); }
	inline float get_offsetShearY_16() const { return ___offsetShearY_16; }
	inline float* get_address_of_offsetShearY_16() { return &___offsetShearY_16; }
	inline void set_offsetShearY_16(float value)
	{
		___offsetShearY_16 = value;
	}

	inline static int32_t get_offset_of_relative_17() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___relative_17)); }
	inline bool get_relative_17() const { return ___relative_17; }
	inline bool* get_address_of_relative_17() { return &___relative_17; }
	inline void set_relative_17(bool value)
	{
		___relative_17 = value;
	}

	inline static int32_t get_offset_of_local_18() { return static_cast<int32_t>(offsetof(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59, ___local_18)); }
	inline bool get_local_18() const { return ___local_18; }
	inline bool* get_address_of_local_18() { return &___local_18; }
	inline void set_local_18(bool value)
	{
		___local_18 = value;
	}
};


// Spine.VertexAttachment
struct VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36  : public Attachment_tA85256BF51006C369687395955B6A6B51D432F21
{
public:
	// System.Int32 Spine.VertexAttachment::id
	int32_t ___id_3;
	// Spine.VertexAttachment Spine.VertexAttachment::timelineAttachment
	VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * ___timelineAttachment_4;
	// System.Int32[] Spine.VertexAttachment::bones
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bones_5;
	// System.Single[] Spine.VertexAttachment::vertices
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___vertices_6;
	// System.Int32 Spine.VertexAttachment::worldVerticesLength
	int32_t ___worldVerticesLength_7;

public:
	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_timelineAttachment_4() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36, ___timelineAttachment_4)); }
	inline VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * get_timelineAttachment_4() const { return ___timelineAttachment_4; }
	inline VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 ** get_address_of_timelineAttachment_4() { return &___timelineAttachment_4; }
	inline void set_timelineAttachment_4(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * value)
	{
		___timelineAttachment_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelineAttachment_4), (void*)value);
	}

	inline static int32_t get_offset_of_bones_5() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36, ___bones_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_bones_5() const { return ___bones_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_bones_5() { return &___bones_5; }
	inline void set_bones_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___bones_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bones_5), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36, ___vertices_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_vertices_6() const { return ___vertices_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_worldVerticesLength_7() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36, ___worldVerticesLength_7)); }
	inline int32_t get_worldVerticesLength_7() const { return ___worldVerticesLength_7; }
	inline int32_t* get_address_of_worldVerticesLength_7() { return &___worldVerticesLength_7; }
	inline void set_worldVerticesLength_7(int32_t value)
	{
		___worldVerticesLength_7 = value;
	}
};

struct VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields
{
public:
	// System.Int32 Spine.VertexAttachment::nextID
	int32_t ___nextID_1;
	// System.Object Spine.VertexAttachment::nextIdLock
	RuntimeObject * ___nextIdLock_2;

public:
	inline static int32_t get_offset_of_nextID_1() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields, ___nextID_1)); }
	inline int32_t get_nextID_1() const { return ___nextID_1; }
	inline int32_t* get_address_of_nextID_1() { return &___nextID_1; }
	inline void set_nextID_1(int32_t value)
	{
		___nextID_1 = value;
	}

	inline static int32_t get_offset_of_nextIdLock_2() { return static_cast<int32_t>(offsetof(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields, ___nextIdLock_2)); }
	inline RuntimeObject * get_nextIdLock_2() const { return ___nextIdLock_2; }
	inline RuntimeObject ** get_address_of_nextIdLock_2() { return &___nextIdLock_2; }
	inline void set_nextIdLock_2(RuntimeObject * value)
	{
		___nextIdLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextIdLock_2), (void*)value);
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t5D05F1A4C1EA298987A96B78E92D6FB0FF41656E 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t5D05F1A4C1EA298987A96B78E92D6FB0FF41656E__padding[20];
	};

public:
};


// Spine.AnimationStateData/AnimationPair
struct AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 
{
public:
	// Spine.Animation Spine.AnimationStateData/AnimationPair::a1
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a1_0;
	// Spine.Animation Spine.AnimationStateData/AnimationPair::a2
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a2_1;

public:
	inline static int32_t get_offset_of_a1_0() { return static_cast<int32_t>(offsetof(AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9, ___a1_0)); }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * get_a1_0() const { return ___a1_0; }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 ** get_address_of_a1_0() { return &___a1_0; }
	inline void set_a1_0(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * value)
	{
		___a1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a1_0), (void*)value);
	}

	inline static int32_t get_offset_of_a2_1() { return static_cast<int32_t>(offsetof(AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9, ___a2_1)); }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * get_a2_1() const { return ___a2_1; }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 ** get_address_of_a2_1() { return &___a2_1; }
	inline void set_a2_1(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * value)
	{
		___a2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a2_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.AnimationStateData/AnimationPair
struct AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_pinvoke
{
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a1_0;
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a2_1;
};
// Native definition for COM marshalling of Spine.AnimationStateData/AnimationPair
struct AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_com
{
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a1_0;
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a2_1;
};

// Spine.Skin/SkinEntry
struct SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 
{
public:
	// System.Int32 Spine.Skin/SkinEntry::slotIndex
	int32_t ___slotIndex_0;
	// System.String Spine.Skin/SkinEntry::name
	String_t* ___name_1;
	// Spine.Attachment Spine.Skin/SkinEntry::attachment
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment_2;

public:
	inline static int32_t get_offset_of_slotIndex_0() { return static_cast<int32_t>(offsetof(SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4, ___slotIndex_0)); }
	inline int32_t get_slotIndex_0() const { return ___slotIndex_0; }
	inline int32_t* get_address_of_slotIndex_0() { return &___slotIndex_0; }
	inline void set_slotIndex_0(int32_t value)
	{
		___slotIndex_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_attachment_2() { return static_cast<int32_t>(offsetof(SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4, ___attachment_2)); }
	inline Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * get_attachment_2() const { return ___attachment_2; }
	inline Attachment_tA85256BF51006C369687395955B6A6B51D432F21 ** get_address_of_attachment_2() { return &___attachment_2; }
	inline void set_attachment_2(Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * value)
	{
		___attachment_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachment_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.Skin/SkinEntry
struct SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_pinvoke
{
	int32_t ___slotIndex_0;
	char* ___name_1;
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment_2;
};
// Native definition for COM marshalling of Spine.Skin/SkinEntry
struct SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_com
{
	int32_t ___slotIndex_0;
	Il2CppChar* ___name_1;
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment_2;
};

// Spine.Skin/SkinKey
struct SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8 
{
public:
	// System.Int32 Spine.Skin/SkinKey::slotIndex
	int32_t ___slotIndex_0;
	// System.String Spine.Skin/SkinKey::name
	String_t* ___name_1;
	// System.Int32 Spine.Skin/SkinKey::hashCode
	int32_t ___hashCode_2;

public:
	inline static int32_t get_offset_of_slotIndex_0() { return static_cast<int32_t>(offsetof(SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8, ___slotIndex_0)); }
	inline int32_t get_slotIndex_0() const { return ___slotIndex_0; }
	inline int32_t* get_address_of_slotIndex_0() { return &___slotIndex_0; }
	inline void set_slotIndex_0(int32_t value)
	{
		___slotIndex_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_hashCode_2() { return static_cast<int32_t>(offsetof(SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8, ___hashCode_2)); }
	inline int32_t get_hashCode_2() const { return ___hashCode_2; }
	inline int32_t* get_address_of_hashCode_2() { return &___hashCode_2; }
	inline void set_hashCode_2(int32_t value)
	{
		___hashCode_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Spine.Skin/SkinKey
struct SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_pinvoke
{
	int32_t ___slotIndex_0;
	char* ___name_1;
	int32_t ___hashCode_2;
};
// Native definition for COM marshalling of Spine.Skin/SkinKey
struct SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_com
{
	int32_t ___slotIndex_0;
	Il2CppChar* ___name_1;
	int32_t ___hashCode_2;
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


// Spine.CurveTimeline1
struct CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C  : public CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476
{
public:

public:
};


// Spine.CurveTimeline2
struct CurveTimeline2_tFB55B7C974EAEFA2745C1F771B06A7A2334C4CF0  : public CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476
{
public:

public:
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

// Spine.Format
struct Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476 
{
public:
	// System.Int32 Spine.Format::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.Inherit
struct Inherit_t6D55BDDA598082AE5A71B44B9ECA1740416E2A07 
{
public:
	// System.Int32 Spine.Inherit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Inherit_t6D55BDDA598082AE5A71B44B9ECA1740416E2A07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.MeshAttachment
struct MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990  : public VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36
{
public:
	// Spine.TextureRegion Spine.MeshAttachment::region
	TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8 * ___region_8;
	// System.String Spine.MeshAttachment::path
	String_t* ___path_9;
	// System.Single[] Spine.MeshAttachment::regionUVs
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___regionUVs_10;
	// System.Single[] Spine.MeshAttachment::uvs
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___uvs_11;
	// System.Int32[] Spine.MeshAttachment::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_12;
	// System.Single Spine.MeshAttachment::r
	float ___r_13;
	// System.Single Spine.MeshAttachment::g
	float ___g_14;
	// System.Single Spine.MeshAttachment::b
	float ___b_15;
	// System.Single Spine.MeshAttachment::a
	float ___a_16;
	// System.Int32 Spine.MeshAttachment::hullLength
	int32_t ___hullLength_17;
	// Spine.MeshAttachment Spine.MeshAttachment::parentMesh
	MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * ___parentMesh_18;
	// Spine.Sequence Spine.MeshAttachment::sequence
	Sequence_t62BE88F403AFB6787082DA884CBE641E9FFD2289 * ___sequence_19;
	// System.Int32[] Spine.MeshAttachment::<Edges>k__BackingField
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CEdgesU3Ek__BackingField_20;
	// System.Single Spine.MeshAttachment::<Width>k__BackingField
	float ___U3CWidthU3Ek__BackingField_21;
	// System.Single Spine.MeshAttachment::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_region_8() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___region_8)); }
	inline TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8 * get_region_8() const { return ___region_8; }
	inline TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8 ** get_address_of_region_8() { return &___region_8; }
	inline void set_region_8(TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8 * value)
	{
		___region_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___region_8), (void*)value);
	}

	inline static int32_t get_offset_of_path_9() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___path_9)); }
	inline String_t* get_path_9() const { return ___path_9; }
	inline String_t** get_address_of_path_9() { return &___path_9; }
	inline void set_path_9(String_t* value)
	{
		___path_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_9), (void*)value);
	}

	inline static int32_t get_offset_of_regionUVs_10() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___regionUVs_10)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_regionUVs_10() const { return ___regionUVs_10; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_regionUVs_10() { return &___regionUVs_10; }
	inline void set_regionUVs_10(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___regionUVs_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regionUVs_10), (void*)value);
	}

	inline static int32_t get_offset_of_uvs_11() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___uvs_11)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_uvs_11() const { return ___uvs_11; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_uvs_11() { return &___uvs_11; }
	inline void set_uvs_11(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___uvs_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs_11), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_12() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___triangles_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_12() const { return ___triangles_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_12() { return &___triangles_12; }
	inline void set_triangles_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_12), (void*)value);
	}

	inline static int32_t get_offset_of_r_13() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___r_13)); }
	inline float get_r_13() const { return ___r_13; }
	inline float* get_address_of_r_13() { return &___r_13; }
	inline void set_r_13(float value)
	{
		___r_13 = value;
	}

	inline static int32_t get_offset_of_g_14() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___g_14)); }
	inline float get_g_14() const { return ___g_14; }
	inline float* get_address_of_g_14() { return &___g_14; }
	inline void set_g_14(float value)
	{
		___g_14 = value;
	}

	inline static int32_t get_offset_of_b_15() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___b_15)); }
	inline float get_b_15() const { return ___b_15; }
	inline float* get_address_of_b_15() { return &___b_15; }
	inline void set_b_15(float value)
	{
		___b_15 = value;
	}

	inline static int32_t get_offset_of_a_16() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___a_16)); }
	inline float get_a_16() const { return ___a_16; }
	inline float* get_address_of_a_16() { return &___a_16; }
	inline void set_a_16(float value)
	{
		___a_16 = value;
	}

	inline static int32_t get_offset_of_hullLength_17() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___hullLength_17)); }
	inline int32_t get_hullLength_17() const { return ___hullLength_17; }
	inline int32_t* get_address_of_hullLength_17() { return &___hullLength_17; }
	inline void set_hullLength_17(int32_t value)
	{
		___hullLength_17 = value;
	}

	inline static int32_t get_offset_of_parentMesh_18() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___parentMesh_18)); }
	inline MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * get_parentMesh_18() const { return ___parentMesh_18; }
	inline MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 ** get_address_of_parentMesh_18() { return &___parentMesh_18; }
	inline void set_parentMesh_18(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * value)
	{
		___parentMesh_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentMesh_18), (void*)value);
	}

	inline static int32_t get_offset_of_sequence_19() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___sequence_19)); }
	inline Sequence_t62BE88F403AFB6787082DA884CBE641E9FFD2289 * get_sequence_19() const { return ___sequence_19; }
	inline Sequence_t62BE88F403AFB6787082DA884CBE641E9FFD2289 ** get_address_of_sequence_19() { return &___sequence_19; }
	inline void set_sequence_19(Sequence_t62BE88F403AFB6787082DA884CBE641E9FFD2289 * value)
	{
		___sequence_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequence_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEdgesU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CEdgesU3Ek__BackingField_20)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CEdgesU3Ek__BackingField_20() const { return ___U3CEdgesU3Ek__BackingField_20; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CEdgesU3Ek__BackingField_20() { return &___U3CEdgesU3Ek__BackingField_20; }
	inline void set_U3CEdgesU3Ek__BackingField_20(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CEdgesU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEdgesU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CWidthU3Ek__BackingField_21)); }
	inline float get_U3CWidthU3Ek__BackingField_21() const { return ___U3CWidthU3Ek__BackingField_21; }
	inline float* get_address_of_U3CWidthU3Ek__BackingField_21() { return &___U3CWidthU3Ek__BackingField_21; }
	inline void set_U3CWidthU3Ek__BackingField_21(float value)
	{
		___U3CWidthU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990, ___U3CHeightU3Ek__BackingField_22)); }
	inline float get_U3CHeightU3Ek__BackingField_22() const { return ___U3CHeightU3Ek__BackingField_22; }
	inline float* get_address_of_U3CHeightU3Ek__BackingField_22() { return &___U3CHeightU3Ek__BackingField_22; }
	inline void set_U3CHeightU3Ek__BackingField_22(float value)
	{
		___U3CHeightU3Ek__BackingField_22 = value;
	}
};


// Spine.MixBlend
struct MixBlend_t28E5B5DF544AD1D5BF4CB8B5DE4CFE06E1E088D4 
{
public:
	// System.Int32 Spine.MixBlend::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixBlend_t28E5B5DF544AD1D5BF4CB8B5DE4CFE06E1E088D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.MixDirection
struct MixDirection_t8E8EE4CEE54214C559CE77C69FC659EA36193D0F 
{
public:
	// System.Int32 Spine.MixDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixDirection_t8E8EE4CEE54214C559CE77C69FC659EA36193D0F, ___value___2)); }
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


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.TextureFilter
struct TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07 
{
public:
	// System.Int32 Spine.TextureFilter::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.TextureWrap
struct TextureWrap_t581284225E734420BB341ACF572C0847869B84DC 
{
public:
	// System.Int32 Spine.TextureWrap::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrap_t581284225E734420BB341ACF572C0847869B84DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.TransformConstraintTimeline
struct TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1  : public CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476
{
public:
	// System.Int32 Spine.TransformConstraintTimeline::constraintIndex
	int32_t ___constraintIndex_14;

public:
	inline static int32_t get_offset_of_constraintIndex_14() { return static_cast<int32_t>(offsetof(TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1, ___constraintIndex_14)); }
	inline int32_t get_constraintIndex_14() const { return ___constraintIndex_14; }
	inline int32_t* get_address_of_constraintIndex_14() { return &___constraintIndex_14; }
	inline void set_constraintIndex_14(int32_t value)
	{
		___constraintIndex_14 = value;
	}
};


// Spine.EventQueue/EventType
struct EventType_t5B2FA95F8AB7D64FAE72624DCA9628F07A8C5A6B 
{
public:
	// System.Int32 Spine.EventQueue/EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t5B2FA95F8AB7D64FAE72624DCA9628F07A8C5A6B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SharpJson.Lexer/Token
struct Token_t729CF036B16F00E5FC4679596F96885FDC6F4252 
{
public:
	// System.Int32 SharpJson.Lexer/Token::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Token_t729CF036B16F00E5FC4679596F96885FDC6F4252, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.Skeleton/Physics
struct Physics_t989DCD9F82901BC9FF4144A1757984F8CF884E1F 
{
public:
	// System.Int32 Spine.Skeleton/Physics::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Physics_t989DCD9F82901BC9FF4144A1757984F8CF884E1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Spine.AtlasPage
struct AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6  : public RuntimeObject
{
public:
	// System.String Spine.AtlasPage::name
	String_t* ___name_0;
	// System.Int32 Spine.AtlasPage::width
	int32_t ___width_1;
	// System.Int32 Spine.AtlasPage::height
	int32_t ___height_2;
	// Spine.Format Spine.AtlasPage::format
	int32_t ___format_3;
	// Spine.TextureFilter Spine.AtlasPage::minFilter
	int32_t ___minFilter_4;
	// Spine.TextureFilter Spine.AtlasPage::magFilter
	int32_t ___magFilter_5;
	// Spine.TextureWrap Spine.AtlasPage::uWrap
	int32_t ___uWrap_6;
	// Spine.TextureWrap Spine.AtlasPage::vWrap
	int32_t ___vWrap_7;
	// System.Boolean Spine.AtlasPage::pma
	bool ___pma_8;
	// System.Object Spine.AtlasPage::rendererObject
	RuntimeObject * ___rendererObject_9;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_format_3() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___format_3)); }
	inline int32_t get_format_3() const { return ___format_3; }
	inline int32_t* get_address_of_format_3() { return &___format_3; }
	inline void set_format_3(int32_t value)
	{
		___format_3 = value;
	}

	inline static int32_t get_offset_of_minFilter_4() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___minFilter_4)); }
	inline int32_t get_minFilter_4() const { return ___minFilter_4; }
	inline int32_t* get_address_of_minFilter_4() { return &___minFilter_4; }
	inline void set_minFilter_4(int32_t value)
	{
		___minFilter_4 = value;
	}

	inline static int32_t get_offset_of_magFilter_5() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___magFilter_5)); }
	inline int32_t get_magFilter_5() const { return ___magFilter_5; }
	inline int32_t* get_address_of_magFilter_5() { return &___magFilter_5; }
	inline void set_magFilter_5(int32_t value)
	{
		___magFilter_5 = value;
	}

	inline static int32_t get_offset_of_uWrap_6() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___uWrap_6)); }
	inline int32_t get_uWrap_6() const { return ___uWrap_6; }
	inline int32_t* get_address_of_uWrap_6() { return &___uWrap_6; }
	inline void set_uWrap_6(int32_t value)
	{
		___uWrap_6 = value;
	}

	inline static int32_t get_offset_of_vWrap_7() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___vWrap_7)); }
	inline int32_t get_vWrap_7() const { return ___vWrap_7; }
	inline int32_t* get_address_of_vWrap_7() { return &___vWrap_7; }
	inline void set_vWrap_7(int32_t value)
	{
		___vWrap_7 = value;
	}

	inline static int32_t get_offset_of_pma_8() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___pma_8)); }
	inline bool get_pma_8() const { return ___pma_8; }
	inline bool* get_address_of_pma_8() { return &___pma_8; }
	inline void set_pma_8(bool value)
	{
		___pma_8 = value;
	}

	inline static int32_t get_offset_of_rendererObject_9() { return static_cast<int32_t>(offsetof(AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6, ___rendererObject_9)); }
	inline RuntimeObject * get_rendererObject_9() const { return ___rendererObject_9; }
	inline RuntimeObject ** get_address_of_rendererObject_9() { return &___rendererObject_9; }
	inline void set_rendererObject_9(RuntimeObject * value)
	{
		___rendererObject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rendererObject_9), (void*)value);
	}
};


// Spine.Bone
struct Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF  : public RuntimeObject
{
public:
	// Spine.BoneData Spine.Bone::data
	BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * ___data_1;
	// Spine.Skeleton Spine.Bone::skeleton
	Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton_2;
	// Spine.Bone Spine.Bone::parent
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * ___parent_3;
	// Spine.ExposedList`1<Spine.Bone> Spine.Bone::children
	ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * ___children_4;
	// System.Single Spine.Bone::x
	float ___x_5;
	// System.Single Spine.Bone::y
	float ___y_6;
	// System.Single Spine.Bone::rotation
	float ___rotation_7;
	// System.Single Spine.Bone::scaleX
	float ___scaleX_8;
	// System.Single Spine.Bone::scaleY
	float ___scaleY_9;
	// System.Single Spine.Bone::shearX
	float ___shearX_10;
	// System.Single Spine.Bone::shearY
	float ___shearY_11;
	// System.Single Spine.Bone::ax
	float ___ax_12;
	// System.Single Spine.Bone::ay
	float ___ay_13;
	// System.Single Spine.Bone::arotation
	float ___arotation_14;
	// System.Single Spine.Bone::ascaleX
	float ___ascaleX_15;
	// System.Single Spine.Bone::ascaleY
	float ___ascaleY_16;
	// System.Single Spine.Bone::ashearX
	float ___ashearX_17;
	// System.Single Spine.Bone::ashearY
	float ___ashearY_18;
	// System.Single Spine.Bone::a
	float ___a_19;
	// System.Single Spine.Bone::b
	float ___b_20;
	// System.Single Spine.Bone::worldX
	float ___worldX_21;
	// System.Single Spine.Bone::c
	float ___c_22;
	// System.Single Spine.Bone::d
	float ___d_23;
	// System.Single Spine.Bone::worldY
	float ___worldY_24;
	// Spine.Inherit Spine.Bone::inherit
	int32_t ___inherit_25;
	// System.Boolean Spine.Bone::sorted
	bool ___sorted_26;
	// System.Boolean Spine.Bone::active
	bool ___active_27;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___data_1)); }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * get_data_1() const { return ___data_1; }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_skeleton_2() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___skeleton_2)); }
	inline Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * get_skeleton_2() const { return ___skeleton_2; }
	inline Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C ** get_address_of_skeleton_2() { return &___skeleton_2; }
	inline void set_skeleton_2(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * value)
	{
		___skeleton_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeleton_2), (void*)value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___parent_3)); }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * get_parent_3() const { return ___parent_3; }
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_3), (void*)value);
	}

	inline static int32_t get_offset_of_children_4() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___children_4)); }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * get_children_4() const { return ___children_4; }
	inline ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 ** get_address_of_children_4() { return &___children_4; }
	inline void set_children_4(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * value)
	{
		___children_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___children_4), (void*)value);
	}

	inline static int32_t get_offset_of_x_5() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___x_5)); }
	inline float get_x_5() const { return ___x_5; }
	inline float* get_address_of_x_5() { return &___x_5; }
	inline void set_x_5(float value)
	{
		___x_5 = value;
	}

	inline static int32_t get_offset_of_y_6() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___y_6)); }
	inline float get_y_6() const { return ___y_6; }
	inline float* get_address_of_y_6() { return &___y_6; }
	inline void set_y_6(float value)
	{
		___y_6 = value;
	}

	inline static int32_t get_offset_of_rotation_7() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___rotation_7)); }
	inline float get_rotation_7() const { return ___rotation_7; }
	inline float* get_address_of_rotation_7() { return &___rotation_7; }
	inline void set_rotation_7(float value)
	{
		___rotation_7 = value;
	}

	inline static int32_t get_offset_of_scaleX_8() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___scaleX_8)); }
	inline float get_scaleX_8() const { return ___scaleX_8; }
	inline float* get_address_of_scaleX_8() { return &___scaleX_8; }
	inline void set_scaleX_8(float value)
	{
		___scaleX_8 = value;
	}

	inline static int32_t get_offset_of_scaleY_9() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___scaleY_9)); }
	inline float get_scaleY_9() const { return ___scaleY_9; }
	inline float* get_address_of_scaleY_9() { return &___scaleY_9; }
	inline void set_scaleY_9(float value)
	{
		___scaleY_9 = value;
	}

	inline static int32_t get_offset_of_shearX_10() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___shearX_10)); }
	inline float get_shearX_10() const { return ___shearX_10; }
	inline float* get_address_of_shearX_10() { return &___shearX_10; }
	inline void set_shearX_10(float value)
	{
		___shearX_10 = value;
	}

	inline static int32_t get_offset_of_shearY_11() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___shearY_11)); }
	inline float get_shearY_11() const { return ___shearY_11; }
	inline float* get_address_of_shearY_11() { return &___shearY_11; }
	inline void set_shearY_11(float value)
	{
		___shearY_11 = value;
	}

	inline static int32_t get_offset_of_ax_12() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ax_12)); }
	inline float get_ax_12() const { return ___ax_12; }
	inline float* get_address_of_ax_12() { return &___ax_12; }
	inline void set_ax_12(float value)
	{
		___ax_12 = value;
	}

	inline static int32_t get_offset_of_ay_13() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ay_13)); }
	inline float get_ay_13() const { return ___ay_13; }
	inline float* get_address_of_ay_13() { return &___ay_13; }
	inline void set_ay_13(float value)
	{
		___ay_13 = value;
	}

	inline static int32_t get_offset_of_arotation_14() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___arotation_14)); }
	inline float get_arotation_14() const { return ___arotation_14; }
	inline float* get_address_of_arotation_14() { return &___arotation_14; }
	inline void set_arotation_14(float value)
	{
		___arotation_14 = value;
	}

	inline static int32_t get_offset_of_ascaleX_15() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ascaleX_15)); }
	inline float get_ascaleX_15() const { return ___ascaleX_15; }
	inline float* get_address_of_ascaleX_15() { return &___ascaleX_15; }
	inline void set_ascaleX_15(float value)
	{
		___ascaleX_15 = value;
	}

	inline static int32_t get_offset_of_ascaleY_16() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ascaleY_16)); }
	inline float get_ascaleY_16() const { return ___ascaleY_16; }
	inline float* get_address_of_ascaleY_16() { return &___ascaleY_16; }
	inline void set_ascaleY_16(float value)
	{
		___ascaleY_16 = value;
	}

	inline static int32_t get_offset_of_ashearX_17() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ashearX_17)); }
	inline float get_ashearX_17() const { return ___ashearX_17; }
	inline float* get_address_of_ashearX_17() { return &___ashearX_17; }
	inline void set_ashearX_17(float value)
	{
		___ashearX_17 = value;
	}

	inline static int32_t get_offset_of_ashearY_18() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___ashearY_18)); }
	inline float get_ashearY_18() const { return ___ashearY_18; }
	inline float* get_address_of_ashearY_18() { return &___ashearY_18; }
	inline void set_ashearY_18(float value)
	{
		___ashearY_18 = value;
	}

	inline static int32_t get_offset_of_a_19() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___a_19)); }
	inline float get_a_19() const { return ___a_19; }
	inline float* get_address_of_a_19() { return &___a_19; }
	inline void set_a_19(float value)
	{
		___a_19 = value;
	}

	inline static int32_t get_offset_of_b_20() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___b_20)); }
	inline float get_b_20() const { return ___b_20; }
	inline float* get_address_of_b_20() { return &___b_20; }
	inline void set_b_20(float value)
	{
		___b_20 = value;
	}

	inline static int32_t get_offset_of_worldX_21() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___worldX_21)); }
	inline float get_worldX_21() const { return ___worldX_21; }
	inline float* get_address_of_worldX_21() { return &___worldX_21; }
	inline void set_worldX_21(float value)
	{
		___worldX_21 = value;
	}

	inline static int32_t get_offset_of_c_22() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___c_22)); }
	inline float get_c_22() const { return ___c_22; }
	inline float* get_address_of_c_22() { return &___c_22; }
	inline void set_c_22(float value)
	{
		___c_22 = value;
	}

	inline static int32_t get_offset_of_d_23() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___d_23)); }
	inline float get_d_23() const { return ___d_23; }
	inline float* get_address_of_d_23() { return &___d_23; }
	inline void set_d_23(float value)
	{
		___d_23 = value;
	}

	inline static int32_t get_offset_of_worldY_24() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___worldY_24)); }
	inline float get_worldY_24() const { return ___worldY_24; }
	inline float* get_address_of_worldY_24() { return &___worldY_24; }
	inline void set_worldY_24(float value)
	{
		___worldY_24 = value;
	}

	inline static int32_t get_offset_of_inherit_25() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___inherit_25)); }
	inline int32_t get_inherit_25() const { return ___inherit_25; }
	inline int32_t* get_address_of_inherit_25() { return &___inherit_25; }
	inline void set_inherit_25(int32_t value)
	{
		___inherit_25 = value;
	}

	inline static int32_t get_offset_of_sorted_26() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___sorted_26)); }
	inline bool get_sorted_26() const { return ___sorted_26; }
	inline bool* get_address_of_sorted_26() { return &___sorted_26; }
	inline void set_sorted_26(bool value)
	{
		___sorted_26 = value;
	}

	inline static int32_t get_offset_of_active_27() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF, ___active_27)); }
	inline bool get_active_27() const { return ___active_27; }
	inline bool* get_address_of_active_27() { return &___active_27; }
	inline void set_active_27(bool value)
	{
		___active_27 = value;
	}
};

struct Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF_StaticFields
{
public:
	// System.Boolean Spine.Bone::yDown
	bool ___yDown_0;

public:
	inline static int32_t get_offset_of_yDown_0() { return static_cast<int32_t>(offsetof(Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF_StaticFields, ___yDown_0)); }
	inline bool get_yDown_0() const { return ___yDown_0; }
	inline bool* get_address_of_yDown_0() { return &___yDown_0; }
	inline void set_yDown_0(bool value)
	{
		___yDown_0 = value;
	}
};


// Spine.BoneData
struct BoneData_t48A671E6818E76905840CC122A96889DDCB92A51  : public RuntimeObject
{
public:
	// System.Int32 Spine.BoneData::index
	int32_t ___index_0;
	// System.String Spine.BoneData::name
	String_t* ___name_1;
	// Spine.BoneData Spine.BoneData::parent
	BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * ___parent_2;
	// System.Single Spine.BoneData::length
	float ___length_3;
	// System.Single Spine.BoneData::x
	float ___x_4;
	// System.Single Spine.BoneData::y
	float ___y_5;
	// System.Single Spine.BoneData::rotation
	float ___rotation_6;
	// System.Single Spine.BoneData::scaleX
	float ___scaleX_7;
	// System.Single Spine.BoneData::scaleY
	float ___scaleY_8;
	// System.Single Spine.BoneData::shearX
	float ___shearX_9;
	// System.Single Spine.BoneData::shearY
	float ___shearY_10;
	// Spine.Inherit Spine.BoneData::inherit
	int32_t ___inherit_11;
	// System.Boolean Spine.BoneData::skinRequired
	bool ___skinRequired_12;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___parent_2)); }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * get_parent_2() const { return ___parent_2; }
	inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___length_3)); }
	inline float get_length_3() const { return ___length_3; }
	inline float* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(float value)
	{
		___length_3 = value;
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___x_4)); }
	inline float get_x_4() const { return ___x_4; }
	inline float* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(float value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_rotation_6() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___rotation_6)); }
	inline float get_rotation_6() const { return ___rotation_6; }
	inline float* get_address_of_rotation_6() { return &___rotation_6; }
	inline void set_rotation_6(float value)
	{
		___rotation_6 = value;
	}

	inline static int32_t get_offset_of_scaleX_7() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___scaleX_7)); }
	inline float get_scaleX_7() const { return ___scaleX_7; }
	inline float* get_address_of_scaleX_7() { return &___scaleX_7; }
	inline void set_scaleX_7(float value)
	{
		___scaleX_7 = value;
	}

	inline static int32_t get_offset_of_scaleY_8() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___scaleY_8)); }
	inline float get_scaleY_8() const { return ___scaleY_8; }
	inline float* get_address_of_scaleY_8() { return &___scaleY_8; }
	inline void set_scaleY_8(float value)
	{
		___scaleY_8 = value;
	}

	inline static int32_t get_offset_of_shearX_9() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___shearX_9)); }
	inline float get_shearX_9() const { return ___shearX_9; }
	inline float* get_address_of_shearX_9() { return &___shearX_9; }
	inline void set_shearX_9(float value)
	{
		___shearX_9 = value;
	}

	inline static int32_t get_offset_of_shearY_10() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___shearY_10)); }
	inline float get_shearY_10() const { return ___shearY_10; }
	inline float* get_address_of_shearY_10() { return &___shearY_10; }
	inline void set_shearY_10(float value)
	{
		___shearY_10 = value;
	}

	inline static int32_t get_offset_of_inherit_11() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___inherit_11)); }
	inline int32_t get_inherit_11() const { return ___inherit_11; }
	inline int32_t* get_address_of_inherit_11() { return &___inherit_11; }
	inline void set_inherit_11(int32_t value)
	{
		___inherit_11 = value;
	}

	inline static int32_t get_offset_of_skinRequired_12() { return static_cast<int32_t>(offsetof(BoneData_t48A671E6818E76905840CC122A96889DDCB92A51, ___skinRequired_12)); }
	inline bool get_skinRequired_12() const { return ___skinRequired_12; }
	inline bool* get_address_of_skinRequired_12() { return &___skinRequired_12; }
	inline void set_skinRequired_12(bool value)
	{
		___skinRequired_12 = value;
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Spine.TrackEntry
struct TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D  : public RuntimeObject
{
public:
	// Spine.Animation Spine.TrackEntry::animation
	Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___animation_0;
	// Spine.TrackEntry Spine.TrackEntry::previous
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___previous_1;
	// Spine.TrackEntry Spine.TrackEntry::next
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___next_2;
	// Spine.TrackEntry Spine.TrackEntry::mixingFrom
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___mixingFrom_3;
	// Spine.TrackEntry Spine.TrackEntry::mixingTo
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___mixingTo_4;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Start
	TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * ___Start_5;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Interrupt
	TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * ___Interrupt_6;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::End
	TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * ___End_7;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Dispose
	TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * ___Dispose_8;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Complete
	TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * ___Complete_9;
	// Spine.AnimationState/TrackEntryEventDelegate Spine.TrackEntry::Event
	TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * ___Event_10;
	// System.Int32 Spine.TrackEntry::trackIndex
	int32_t ___trackIndex_11;
	// System.Boolean Spine.TrackEntry::loop
	bool ___loop_12;
	// System.Boolean Spine.TrackEntry::holdPrevious
	bool ___holdPrevious_13;
	// System.Boolean Spine.TrackEntry::reverse
	bool ___reverse_14;
	// System.Boolean Spine.TrackEntry::shortestRotation
	bool ___shortestRotation_15;
	// System.Single Spine.TrackEntry::eventThreshold
	float ___eventThreshold_16;
	// System.Single Spine.TrackEntry::mixAttachmentThreshold
	float ___mixAttachmentThreshold_17;
	// System.Single Spine.TrackEntry::alphaAttachmentThreshold
	float ___alphaAttachmentThreshold_18;
	// System.Single Spine.TrackEntry::mixDrawOrderThreshold
	float ___mixDrawOrderThreshold_19;
	// System.Single Spine.TrackEntry::animationStart
	float ___animationStart_20;
	// System.Single Spine.TrackEntry::animationEnd
	float ___animationEnd_21;
	// System.Single Spine.TrackEntry::animationLast
	float ___animationLast_22;
	// System.Single Spine.TrackEntry::nextAnimationLast
	float ___nextAnimationLast_23;
	// System.Single Spine.TrackEntry::delay
	float ___delay_24;
	// System.Single Spine.TrackEntry::trackTime
	float ___trackTime_25;
	// System.Single Spine.TrackEntry::trackLast
	float ___trackLast_26;
	// System.Single Spine.TrackEntry::nextTrackLast
	float ___nextTrackLast_27;
	// System.Single Spine.TrackEntry::trackEnd
	float ___trackEnd_28;
	// System.Single Spine.TrackEntry::timeScale
	float ___timeScale_29;
	// System.Single Spine.TrackEntry::alpha
	float ___alpha_30;
	// System.Single Spine.TrackEntry::mixTime
	float ___mixTime_31;
	// System.Single Spine.TrackEntry::mixDuration
	float ___mixDuration_32;
	// System.Single Spine.TrackEntry::interruptAlpha
	float ___interruptAlpha_33;
	// System.Single Spine.TrackEntry::totalAlpha
	float ___totalAlpha_34;
	// Spine.MixBlend Spine.TrackEntry::mixBlend
	int32_t ___mixBlend_35;
	// Spine.ExposedList`1<System.Int32> Spine.TrackEntry::timelineMode
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___timelineMode_36;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.TrackEntry::timelineHoldMix
	ExposedList_1_t8248F6346C8A248FDA53F64E95ECC640F2E5ED3E * ___timelineHoldMix_37;
	// Spine.ExposedList`1<System.Single> Spine.TrackEntry::timelinesRotation
	ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___timelinesRotation_38;

public:
	inline static int32_t get_offset_of_animation_0() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___animation_0)); }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * get_animation_0() const { return ___animation_0; }
	inline Animation_tE800D5597964656F48F303755E4C6C66462E8E90 ** get_address_of_animation_0() { return &___animation_0; }
	inline void set_animation_0(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * value)
	{
		___animation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animation_0), (void*)value);
	}

	inline static int32_t get_offset_of_previous_1() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___previous_1)); }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * get_previous_1() const { return ___previous_1; }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D ** get_address_of_previous_1() { return &___previous_1; }
	inline void set_previous_1(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * value)
	{
		___previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previous_1), (void*)value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___next_2)); }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * get_next_2() const { return ___next_2; }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_2), (void*)value);
	}

	inline static int32_t get_offset_of_mixingFrom_3() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixingFrom_3)); }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * get_mixingFrom_3() const { return ___mixingFrom_3; }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D ** get_address_of_mixingFrom_3() { return &___mixingFrom_3; }
	inline void set_mixingFrom_3(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * value)
	{
		___mixingFrom_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixingFrom_3), (void*)value);
	}

	inline static int32_t get_offset_of_mixingTo_4() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixingTo_4)); }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * get_mixingTo_4() const { return ___mixingTo_4; }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D ** get_address_of_mixingTo_4() { return &___mixingTo_4; }
	inline void set_mixingTo_4(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * value)
	{
		___mixingTo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixingTo_4), (void*)value);
	}

	inline static int32_t get_offset_of_Start_5() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___Start_5)); }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * get_Start_5() const { return ___Start_5; }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB ** get_address_of_Start_5() { return &___Start_5; }
	inline void set_Start_5(TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * value)
	{
		___Start_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Start_5), (void*)value);
	}

	inline static int32_t get_offset_of_Interrupt_6() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___Interrupt_6)); }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * get_Interrupt_6() const { return ___Interrupt_6; }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB ** get_address_of_Interrupt_6() { return &___Interrupt_6; }
	inline void set_Interrupt_6(TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * value)
	{
		___Interrupt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Interrupt_6), (void*)value);
	}

	inline static int32_t get_offset_of_End_7() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___End_7)); }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * get_End_7() const { return ___End_7; }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB ** get_address_of_End_7() { return &___End_7; }
	inline void set_End_7(TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * value)
	{
		___End_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___End_7), (void*)value);
	}

	inline static int32_t get_offset_of_Dispose_8() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___Dispose_8)); }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * get_Dispose_8() const { return ___Dispose_8; }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB ** get_address_of_Dispose_8() { return &___Dispose_8; }
	inline void set_Dispose_8(TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * value)
	{
		___Dispose_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Dispose_8), (void*)value);
	}

	inline static int32_t get_offset_of_Complete_9() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___Complete_9)); }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * get_Complete_9() const { return ___Complete_9; }
	inline TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB ** get_address_of_Complete_9() { return &___Complete_9; }
	inline void set_Complete_9(TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * value)
	{
		___Complete_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Complete_9), (void*)value);
	}

	inline static int32_t get_offset_of_Event_10() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___Event_10)); }
	inline TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * get_Event_10() const { return ___Event_10; }
	inline TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E ** get_address_of_Event_10() { return &___Event_10; }
	inline void set_Event_10(TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * value)
	{
		___Event_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Event_10), (void*)value);
	}

	inline static int32_t get_offset_of_trackIndex_11() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___trackIndex_11)); }
	inline int32_t get_trackIndex_11() const { return ___trackIndex_11; }
	inline int32_t* get_address_of_trackIndex_11() { return &___trackIndex_11; }
	inline void set_trackIndex_11(int32_t value)
	{
		___trackIndex_11 = value;
	}

	inline static int32_t get_offset_of_loop_12() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___loop_12)); }
	inline bool get_loop_12() const { return ___loop_12; }
	inline bool* get_address_of_loop_12() { return &___loop_12; }
	inline void set_loop_12(bool value)
	{
		___loop_12 = value;
	}

	inline static int32_t get_offset_of_holdPrevious_13() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___holdPrevious_13)); }
	inline bool get_holdPrevious_13() const { return ___holdPrevious_13; }
	inline bool* get_address_of_holdPrevious_13() { return &___holdPrevious_13; }
	inline void set_holdPrevious_13(bool value)
	{
		___holdPrevious_13 = value;
	}

	inline static int32_t get_offset_of_reverse_14() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___reverse_14)); }
	inline bool get_reverse_14() const { return ___reverse_14; }
	inline bool* get_address_of_reverse_14() { return &___reverse_14; }
	inline void set_reverse_14(bool value)
	{
		___reverse_14 = value;
	}

	inline static int32_t get_offset_of_shortestRotation_15() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___shortestRotation_15)); }
	inline bool get_shortestRotation_15() const { return ___shortestRotation_15; }
	inline bool* get_address_of_shortestRotation_15() { return &___shortestRotation_15; }
	inline void set_shortestRotation_15(bool value)
	{
		___shortestRotation_15 = value;
	}

	inline static int32_t get_offset_of_eventThreshold_16() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___eventThreshold_16)); }
	inline float get_eventThreshold_16() const { return ___eventThreshold_16; }
	inline float* get_address_of_eventThreshold_16() { return &___eventThreshold_16; }
	inline void set_eventThreshold_16(float value)
	{
		___eventThreshold_16 = value;
	}

	inline static int32_t get_offset_of_mixAttachmentThreshold_17() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixAttachmentThreshold_17)); }
	inline float get_mixAttachmentThreshold_17() const { return ___mixAttachmentThreshold_17; }
	inline float* get_address_of_mixAttachmentThreshold_17() { return &___mixAttachmentThreshold_17; }
	inline void set_mixAttachmentThreshold_17(float value)
	{
		___mixAttachmentThreshold_17 = value;
	}

	inline static int32_t get_offset_of_alphaAttachmentThreshold_18() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___alphaAttachmentThreshold_18)); }
	inline float get_alphaAttachmentThreshold_18() const { return ___alphaAttachmentThreshold_18; }
	inline float* get_address_of_alphaAttachmentThreshold_18() { return &___alphaAttachmentThreshold_18; }
	inline void set_alphaAttachmentThreshold_18(float value)
	{
		___alphaAttachmentThreshold_18 = value;
	}

	inline static int32_t get_offset_of_mixDrawOrderThreshold_19() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixDrawOrderThreshold_19)); }
	inline float get_mixDrawOrderThreshold_19() const { return ___mixDrawOrderThreshold_19; }
	inline float* get_address_of_mixDrawOrderThreshold_19() { return &___mixDrawOrderThreshold_19; }
	inline void set_mixDrawOrderThreshold_19(float value)
	{
		___mixDrawOrderThreshold_19 = value;
	}

	inline static int32_t get_offset_of_animationStart_20() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___animationStart_20)); }
	inline float get_animationStart_20() const { return ___animationStart_20; }
	inline float* get_address_of_animationStart_20() { return &___animationStart_20; }
	inline void set_animationStart_20(float value)
	{
		___animationStart_20 = value;
	}

	inline static int32_t get_offset_of_animationEnd_21() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___animationEnd_21)); }
	inline float get_animationEnd_21() const { return ___animationEnd_21; }
	inline float* get_address_of_animationEnd_21() { return &___animationEnd_21; }
	inline void set_animationEnd_21(float value)
	{
		___animationEnd_21 = value;
	}

	inline static int32_t get_offset_of_animationLast_22() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___animationLast_22)); }
	inline float get_animationLast_22() const { return ___animationLast_22; }
	inline float* get_address_of_animationLast_22() { return &___animationLast_22; }
	inline void set_animationLast_22(float value)
	{
		___animationLast_22 = value;
	}

	inline static int32_t get_offset_of_nextAnimationLast_23() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___nextAnimationLast_23)); }
	inline float get_nextAnimationLast_23() const { return ___nextAnimationLast_23; }
	inline float* get_address_of_nextAnimationLast_23() { return &___nextAnimationLast_23; }
	inline void set_nextAnimationLast_23(float value)
	{
		___nextAnimationLast_23 = value;
	}

	inline static int32_t get_offset_of_delay_24() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___delay_24)); }
	inline float get_delay_24() const { return ___delay_24; }
	inline float* get_address_of_delay_24() { return &___delay_24; }
	inline void set_delay_24(float value)
	{
		___delay_24 = value;
	}

	inline static int32_t get_offset_of_trackTime_25() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___trackTime_25)); }
	inline float get_trackTime_25() const { return ___trackTime_25; }
	inline float* get_address_of_trackTime_25() { return &___trackTime_25; }
	inline void set_trackTime_25(float value)
	{
		___trackTime_25 = value;
	}

	inline static int32_t get_offset_of_trackLast_26() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___trackLast_26)); }
	inline float get_trackLast_26() const { return ___trackLast_26; }
	inline float* get_address_of_trackLast_26() { return &___trackLast_26; }
	inline void set_trackLast_26(float value)
	{
		___trackLast_26 = value;
	}

	inline static int32_t get_offset_of_nextTrackLast_27() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___nextTrackLast_27)); }
	inline float get_nextTrackLast_27() const { return ___nextTrackLast_27; }
	inline float* get_address_of_nextTrackLast_27() { return &___nextTrackLast_27; }
	inline void set_nextTrackLast_27(float value)
	{
		___nextTrackLast_27 = value;
	}

	inline static int32_t get_offset_of_trackEnd_28() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___trackEnd_28)); }
	inline float get_trackEnd_28() const { return ___trackEnd_28; }
	inline float* get_address_of_trackEnd_28() { return &___trackEnd_28; }
	inline void set_trackEnd_28(float value)
	{
		___trackEnd_28 = value;
	}

	inline static int32_t get_offset_of_timeScale_29() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___timeScale_29)); }
	inline float get_timeScale_29() const { return ___timeScale_29; }
	inline float* get_address_of_timeScale_29() { return &___timeScale_29; }
	inline void set_timeScale_29(float value)
	{
		___timeScale_29 = value;
	}

	inline static int32_t get_offset_of_alpha_30() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___alpha_30)); }
	inline float get_alpha_30() const { return ___alpha_30; }
	inline float* get_address_of_alpha_30() { return &___alpha_30; }
	inline void set_alpha_30(float value)
	{
		___alpha_30 = value;
	}

	inline static int32_t get_offset_of_mixTime_31() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixTime_31)); }
	inline float get_mixTime_31() const { return ___mixTime_31; }
	inline float* get_address_of_mixTime_31() { return &___mixTime_31; }
	inline void set_mixTime_31(float value)
	{
		___mixTime_31 = value;
	}

	inline static int32_t get_offset_of_mixDuration_32() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixDuration_32)); }
	inline float get_mixDuration_32() const { return ___mixDuration_32; }
	inline float* get_address_of_mixDuration_32() { return &___mixDuration_32; }
	inline void set_mixDuration_32(float value)
	{
		___mixDuration_32 = value;
	}

	inline static int32_t get_offset_of_interruptAlpha_33() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___interruptAlpha_33)); }
	inline float get_interruptAlpha_33() const { return ___interruptAlpha_33; }
	inline float* get_address_of_interruptAlpha_33() { return &___interruptAlpha_33; }
	inline void set_interruptAlpha_33(float value)
	{
		___interruptAlpha_33 = value;
	}

	inline static int32_t get_offset_of_totalAlpha_34() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___totalAlpha_34)); }
	inline float get_totalAlpha_34() const { return ___totalAlpha_34; }
	inline float* get_address_of_totalAlpha_34() { return &___totalAlpha_34; }
	inline void set_totalAlpha_34(float value)
	{
		___totalAlpha_34 = value;
	}

	inline static int32_t get_offset_of_mixBlend_35() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___mixBlend_35)); }
	inline int32_t get_mixBlend_35() const { return ___mixBlend_35; }
	inline int32_t* get_address_of_mixBlend_35() { return &___mixBlend_35; }
	inline void set_mixBlend_35(int32_t value)
	{
		___mixBlend_35 = value;
	}

	inline static int32_t get_offset_of_timelineMode_36() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___timelineMode_36)); }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * get_timelineMode_36() const { return ___timelineMode_36; }
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 ** get_address_of_timelineMode_36() { return &___timelineMode_36; }
	inline void set_timelineMode_36(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * value)
	{
		___timelineMode_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelineMode_36), (void*)value);
	}

	inline static int32_t get_offset_of_timelineHoldMix_37() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___timelineHoldMix_37)); }
	inline ExposedList_1_t8248F6346C8A248FDA53F64E95ECC640F2E5ED3E * get_timelineHoldMix_37() const { return ___timelineHoldMix_37; }
	inline ExposedList_1_t8248F6346C8A248FDA53F64E95ECC640F2E5ED3E ** get_address_of_timelineHoldMix_37() { return &___timelineHoldMix_37; }
	inline void set_timelineHoldMix_37(ExposedList_1_t8248F6346C8A248FDA53F64E95ECC640F2E5ED3E * value)
	{
		___timelineHoldMix_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelineHoldMix_37), (void*)value);
	}

	inline static int32_t get_offset_of_timelinesRotation_38() { return static_cast<int32_t>(offsetof(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D, ___timelinesRotation_38)); }
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * get_timelinesRotation_38() const { return ___timelinesRotation_38; }
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 ** get_address_of_timelinesRotation_38() { return &___timelinesRotation_38; }
	inline void set_timelinesRotation_38(ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * value)
	{
		___timelinesRotation_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timelinesRotation_38), (void*)value);
	}
};


// Spine.TranslateTimeline
struct TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5  : public CurveTimeline2_tFB55B7C974EAEFA2745C1F771B06A7A2334C4CF0
{
public:
	// System.Int32 Spine.TranslateTimeline::boneIndex
	int32_t ___boneIndex_10;

public:
	inline static int32_t get_offset_of_boneIndex_10() { return static_cast<int32_t>(offsetof(TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5, ___boneIndex_10)); }
	inline int32_t get_boneIndex_10() const { return ___boneIndex_10; }
	inline int32_t* get_address_of_boneIndex_10() { return &___boneIndex_10; }
	inline void set_boneIndex_10(int32_t value)
	{
		___boneIndex_10 = value;
	}
};


// Spine.TranslateXTimeline
struct TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5  : public CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C
{
public:
	// System.Int32 Spine.TranslateXTimeline::boneIndex
	int32_t ___boneIndex_9;

public:
	inline static int32_t get_offset_of_boneIndex_9() { return static_cast<int32_t>(offsetof(TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5, ___boneIndex_9)); }
	inline int32_t get_boneIndex_9() const { return ___boneIndex_9; }
	inline int32_t* get_address_of_boneIndex_9() { return &___boneIndex_9; }
	inline void set_boneIndex_9(int32_t value)
	{
		___boneIndex_9 = value;
	}
};


// Spine.TranslateYTimeline
struct TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31  : public CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C
{
public:
	// System.Int32 Spine.TranslateYTimeline::boneIndex
	int32_t ___boneIndex_9;

public:
	inline static int32_t get_offset_of_boneIndex_9() { return static_cast<int32_t>(offsetof(TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31, ___boneIndex_9)); }
	inline int32_t get_boneIndex_9() const { return ___boneIndex_9; }
	inline int32_t* get_address_of_boneIndex_9() { return &___boneIndex_9; }
	inline void set_boneIndex_9(int32_t value)
	{
		___boneIndex_9 = value;
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


// Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C 
{
public:
	// Spine.EventQueue/EventType Spine.EventQueue/EventQueueEntry::type
	int32_t ___type_0;
	// Spine.TrackEntry Spine.EventQueue/EventQueueEntry::entry
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___entry_1;
	// Spine.Event Spine.EventQueue/EventQueueEntry::e
	Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_entry_1() { return static_cast<int32_t>(offsetof(EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C, ___entry_1)); }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * get_entry_1() const { return ___entry_1; }
	inline TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D ** get_address_of_entry_1() { return &___entry_1; }
	inline void set_entry_1(TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * value)
	{
		___entry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entry_1), (void*)value);
	}

	inline static int32_t get_offset_of_e_2() { return static_cast<int32_t>(offsetof(EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C, ___e_2)); }
	inline Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * get_e_2() const { return ___e_2; }
	inline Event_tAB253EC43580D8724548C638BAB02EBB587A7957 ** get_address_of_e_2() { return &___e_2; }
	inline void set_e_2(Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * value)
	{
		___e_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___e_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_pinvoke
{
	int32_t ___type_0;
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___entry_1;
	Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e_2;
};
// Native definition for COM marshalling of Spine.EventQueue/EventQueueEntry
struct EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_com
{
	int32_t ___type_0;
	TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___entry_1;
	Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e_2;
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


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB  : public MulticastDelegate_t
{
public:

public:
};


// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Spine.Bone[]
struct BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * m_Items[1];

public:
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * value)
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
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// Spine.TransformConstraint[]
struct TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * m_Items[1];

public:
	inline TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// Spine.ExposedList`1<System.Single>[]
struct ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * m_Items[1];

public:
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Spine.ExposedList`1<System.Int32>[]
struct ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * m_Items[1];

public:
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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


// System.Void Spine.ExposedList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1__ctor_mFFE6EDA61CD5E083C09C3270D95F214371165497_gshared (ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * __this, const RuntimeMethod* method);
// Spine.ExposedList`1/Enumerator<T> Spine.ExposedList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC6896AA292B9CC20C353DC252C60DD0B10A3620A  ExposedList_1_GetEnumerator_m4F65011376170E742F6DA1207835883C0D47AF80_gshared (ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * __this, const RuntimeMethod* method);
// T Spine.ExposedList`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mE92D202EE8B610B117AC1F5117F66F1BE2DF3909_gshared (Enumerator_tC6896AA292B9CC20C353DC252C60DD0B10A3620A * __this, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Add_m4364CE9D5F725E9640B50171826E9EEE1E5E8927_gshared (ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean Spine.ExposedList`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m970BFCE0DF432E4453E68371E26115E3C91A1218_gshared (Enumerator_tC6896AA292B9CC20C353DC252C60DD0B10A3620A * __this, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m35A5BB9D567831387E7E8FFAF49BFEBF6AAC1A09_gshared (Enumerator_tC6896AA292B9CC20C353DC252C60DD0B10A3620A * __this, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, bool ___clearArray0, const RuntimeMethod* method);
// Spine.ExposedList`1<T> Spine.ExposedList`1<System.Int32>::Resize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___newSize0, const RuntimeMethod* method);
// Spine.ExposedList`1<T> Spine.ExposedList`1<System.Boolean>::Resize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42_gshared (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, int32_t ___newSize0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___min0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Boolean>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8_gshared (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Spine.Pool`1<System.Object>::Free(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1_Free_m14FD14CF2D5AD24F2BDAF926BFEC8BD24C29D378_gshared (Pool_1_t1267C3F2D6DCBF77E536D865BA56262DF11C0889 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Object>::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Clear_mDCFB798E72809948C224EC31C9C8EECF771D195E_gshared (ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * __this, bool ___clearArray0, const RuntimeMethod* method);
// T Spine.Pool`1<System.Object>::Obtain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Pool_1_Obtain_mCB782D765DAC2EB6E6E56B7321A64102D5A58DC7_gshared (Pool_1_t1267C3F2D6DCBF77E536D865BA56262DF11C0889 * __this, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Single>::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_gshared (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * __this, bool ___clearArray0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Single>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_gshared (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * __this, float ___item0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_RemoveAt_m50C8AA61CDCED70A8EE1FAF5FDD73F558952C56A_gshared (ExposedList_1_t96967D812A0363AD52B5EA4B217F488F8368BE10 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_gshared (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C_gshared (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, const RuntimeMethod* method);
// System.Void Spine.Pool`1<System.Object>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1__ctor_m8B2EFD1D9088A4E150064AF899EDF8BEC4716354_gshared (Pool_1_t1267C3F2D6DCBF77E536D865BA56262DF11C0889 * __this, int32_t ___initialCapacity0, int32_t ___max1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<Spine.Bone>::.ctor()
inline void ExposedList_1__ctor_m14B32DCD34440DA7239B82271DE3B75B3C510C7F (ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 *, const RuntimeMethod*))ExposedList_1__ctor_mFFE6EDA61CD5E083C09C3270D95F214371165497_gshared)(__this, method);
}
// Spine.ExposedList`1/Enumerator<T> Spine.ExposedList`1<Spine.BoneData>::GetEnumerator()
inline Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1  ExposedList_1_GetEnumerator_m6B3B125259D95EEE250D3D250852F01AA647A8ED (ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1  (*) (ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 *, const RuntimeMethod*))ExposedList_1_GetEnumerator_m4F65011376170E742F6DA1207835883C0D47AF80_gshared)(__this, method);
}
// T Spine.ExposedList`1/Enumerator<Spine.BoneData>::get_Current()
inline BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * Enumerator_get_Current_m823E28B14A613A855A575D0B28D1585C6A561AC8 (Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1 * __this, const RuntimeMethod* method)
{
	return ((  BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * (*) (Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1 *, const RuntimeMethod*))Enumerator_get_Current_mE92D202EE8B610B117AC1F5117F66F1BE2DF3909_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<Spine.Bone>::Add(T)
inline void ExposedList_1_Add_m14CF5683F62E0C38A3A4AFF78EBAF4219049D497 (ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * __this, Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * ___item0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 *, Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF *, const RuntimeMethod*))ExposedList_1_Add_m4364CE9D5F725E9640B50171826E9EEE1E5E8927_gshared)(__this, ___item0, method);
}
// System.Boolean Spine.ExposedList`1/Enumerator<Spine.BoneData>::MoveNext()
inline bool Enumerator_MoveNext_mBBA6DB2B2D16B8BA4F16C26C6131291F1A4F6AEF (Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1 *, const RuntimeMethod*))Enumerator_MoveNext_m970BFCE0DF432E4453E68371E26115E3C91A1218_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1/Enumerator<Spine.BoneData>::Dispose()
inline void Enumerator_Dispose_m74071F617F8A507285FC1C9BA2910EA0977650B0 (Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1 *, const RuntimeMethod*))Enumerator_Dispose_m35A5BB9D567831387E7E8FFAF49BFEBF6AAC1A09_gshared)(__this, method);
}
// System.Void Spine.TransformConstraint::.ctor(Spine.TransformConstraintData,Spine.Skeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint__ctor_mA4853CDA24148AF06B19C2BC2956041F70587FAE (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * ___data0, Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton1, const RuntimeMethod* method);
// System.Void Spine.TransformConstraint::ApplyRelativeLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_ApplyRelativeLocal_m8F7D3C7E661D97B6BBFBEF9A2C9BEA728CA2A925 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method);
// System.Void Spine.TransformConstraint::ApplyAbsoluteLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_ApplyAbsoluteLocal_m65A388BE147E0A0BC2E8BD5B8D89DEEFAF5871E8 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method);
// System.Void Spine.TransformConstraint::ApplyRelativeWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_ApplyRelativeWorld_m4391C035F875F714DB97465E9E3397A7707B7B35 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method);
// System.Void Spine.TransformConstraint::ApplyAbsoluteWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_ApplyAbsoluteWorld_mC178011B62C241AE4A699416B60FFF9D3D3A6616 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method);
// System.Single Spine.MathUtils::Atan2(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_Atan2_m1A65E2C02BD8BB1538F191E84AA984ECBE0CC492 (float ___y0, float ___x1, const RuntimeMethod* method);
// System.Single Spine.MathUtils::Cos(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_Cos_m7FD8701180B96271DE73E54281967B5C7A5E53E4 (float ___radians0, const RuntimeMethod* method);
// System.Single Spine.MathUtils::Sin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_Sin_m547E78E2309AC63CC700D6716411C7A812D4D8EB (float ___radians0, const RuntimeMethod* method);
// System.Void Spine.Bone::LocalToWorld(System.Single,System.Single,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone_LocalToWorld_mF3B234A2E0C45B3D1D69D737EC6F31F894134A59 (Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * __this, float ___localX0, float ___localY1, float* ___worldX2, float* ___worldY3, const RuntimeMethod* method);
// System.Void Spine.Bone::UpdateAppliedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone_UpdateAppliedTransform_m7DB7872AA503EB7CFBDF14FCE1FC5E71309EF575 (Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * __this, const RuntimeMethod* method);
// System.Void Spine.Bone::UpdateWorldTransform(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone_UpdateWorldTransform_mF60F460707A11A4D5C077C88F5383EABD462C7EC (Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * __this, float ___x0, float ___y1, float ___rotation2, float ___scaleX3, float ___scaleY4, float ___shearX5, float ___shearY6, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<Spine.BoneData>::.ctor()
inline void ExposedList_1__ctor_m316DF0208BC8528788112ABDE3A956F6B176F5DC (ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 *, const RuntimeMethod*))ExposedList_1__ctor_mFFE6EDA61CD5E083C09C3270D95F214371165497_gshared)(__this, method);
}
// System.Void Spine.ConstraintData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintData__ctor_mB5CE0EF68267D3BE4AAC43A4458DC4E0134DC4A9 (ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Spine.CurveTimeline::.ctor(System.Int32,System.Int32,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveTimeline__ctor_mAF5F864455A1B5677ED313F38348F08065180211 (CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___propertyIds2, const RuntimeMethod* method);
// System.Void Spine.TransformConstraintTimeline::GetCurveValue(System.Single&,System.Single&,System.Single&,System.Single&,System.Single&,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintTimeline_GetCurveValue_m85A5D2BA02B958467458B5F0A8797B44A48CB061 (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, float* ___rotate0, float* ___x1, float* ___y2, float* ___scaleX3, float* ___scaleY4, float* ___shearY5, float ___time6, const RuntimeMethod* method);
// System.Int32 Spine.Timeline::Search(System.Single[],System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Timeline_Search_m18C5EB43D85785CF57E7A586A03D3BC67640D1A4 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___frames0, float ___time1, int32_t ___step2, const RuntimeMethod* method);
// System.Single Spine.CurveTimeline::GetBezierValue(System.Single,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265 (CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476 * __this, float ___time0, int32_t ___frameIndex1, int32_t ___valueOffset2, int32_t ___i3, const RuntimeMethod* method);
// System.Void Spine.CurveTimeline2::.ctor(System.Int32,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveTimeline2__ctor_m0C19A32AE97CE563A5A6E27F60BB5E58F47F3177 (CurveTimeline2_tFB55B7C974EAEFA2745C1F771B06A7A2334C4CF0 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, String_t* ___propertyId12, String_t* ___propertyId23, const RuntimeMethod* method);
// System.Void Spine.TranslateTimeline::GetCurveValue(System.Single&,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateTimeline_GetCurveValue_m50513A5FB9ABBF0C20C603E408E9BC4EF5F1125A (TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5 * __this, float* ___x0, float* ___y1, float ___time2, const RuntimeMethod* method);
// System.Void Spine.CurveTimeline1::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveTimeline1__ctor_m84E1D0D574EFFE180622AB51E745C794285AB877 (CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C * __this, int32_t ___frameCount0, int32_t ___bezierCount1, String_t* ___propertyId2, const RuntimeMethod* method);
// System.Single Spine.CurveTimeline1::GetRelativeValue(System.Single,System.Single,Spine.MixBlend,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurveTimeline1_GetRelativeValue_m8A21ABDA8CE3A328825E651304859D92E20CF448 (CurveTimeline1_tEB53273FC1D90C28D2A2357D4BF937251AE1E18C * __this, float ___time0, float ___alpha1, int32_t ___blend2, float ___current3, float ___setup4, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::Clear(System.Boolean)
inline void ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, bool ___clearArray0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, bool, const RuntimeMethod*))ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_gshared)(__this, ___clearArray0, method);
}
// Spine.ExposedList`1<T> Spine.ExposedList`1<System.Int32>::Resize(System.Int32)
inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___newSize0, const RuntimeMethod* method)
{
	return ((  ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, int32_t, const RuntimeMethod*))ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A_gshared)(__this, ___newSize0, method);
}
// Spine.ExposedList`1<T> Spine.ExposedList`1<System.Boolean>::Resize(System.Int32)
inline ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42 (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, int32_t ___newSize0, const RuntimeMethod* method)
{
	return ((  ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * (*) (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E *, int32_t, const RuntimeMethod*))ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42_gshared)(__this, ___newSize0, method);
}
// System.Boolean Spine.Triangulator::IsConcave(System.Int32,System.Int32,System.Single[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_IsConcave_m4F6E621BB08285C80D265E56DD7C813F9748E0F4 (int32_t ___index0, int32_t ___vertexCount1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___vertices2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___indices3, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::EnsureCapacity(System.Int32)
inline void ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___min0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, int32_t, const RuntimeMethod*))ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A_gshared)(__this, ___min0, method);
}
// System.Boolean Spine.Triangulator::PositiveArea(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_PositiveArea_m0DA3F6EAED5BA8998E0A85070D2ED722BC9F5D1F (float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Int32>::Add(T)
inline void ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8 (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, int32_t, const RuntimeMethod*))ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_gshared)(__this, ___item0, method);
}
// System.Void Spine.ExposedList`1<System.Int32>::RemoveAt(System.Int32)
inline void ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13 (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, int32_t, const RuntimeMethod*))ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13_gshared)(__this, ___index0, method);
}
// System.Void Spine.ExposedList`1<System.Boolean>::RemoveAt(System.Int32)
inline void ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8 (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E *, int32_t, const RuntimeMethod*))ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8_gshared)(__this, ___index0, method);
}
// System.Void Spine.Pool`1<Spine.ExposedList`1<System.Single>>::Free(T)
inline void Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75 (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * __this, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 *, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *, const RuntimeMethod*))Pool_1_Free_m14FD14CF2D5AD24F2BDAF926BFEC8BD24C29D378_gshared)(__this, ___obj0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>::Clear(System.Boolean)
inline void ExposedList_1_Clear_mBC51B78D1DACC555F6F73D293AC8E6D6DC2FEC18 (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * __this, bool ___clearArray0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 *, bool, const RuntimeMethod*))ExposedList_1_Clear_mDCFB798E72809948C224EC31C9C8EECF771D195E_gshared)(__this, ___clearArray0, method);
}
// System.Void Spine.Pool`1<Spine.ExposedList`1<System.Int32>>::Free(T)
inline void Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805 (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * __this, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A *, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, const RuntimeMethod*))Pool_1_Free_m14FD14CF2D5AD24F2BDAF926BFEC8BD24C29D378_gshared)(__this, ___obj0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>::Clear(System.Boolean)
inline void ExposedList_1_Clear_m40B61D0D728CF9B427F957C4A8E7A4A364690255 (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * __this, bool ___clearArray0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 *, bool, const RuntimeMethod*))ExposedList_1_Clear_mDCFB798E72809948C224EC31C9C8EECF771D195E_gshared)(__this, ___clearArray0, method);
}
// T Spine.Pool`1<Spine.ExposedList`1<System.Int32>>::Obtain()
inline ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1 (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * __this, const RuntimeMethod* method)
{
	return ((  ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * (*) (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A *, const RuntimeMethod*))Pool_1_Obtain_mCB782D765DAC2EB6E6E56B7321A64102D5A58DC7_gshared)(__this, method);
}
// T Spine.Pool`1<Spine.ExposedList`1<System.Single>>::Obtain()
inline ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * __this, const RuntimeMethod* method)
{
	return ((  ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * (*) (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 *, const RuntimeMethod*))Pool_1_Obtain_mCB782D765DAC2EB6E6E56B7321A64102D5A58DC7_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<System.Single>::Clear(System.Boolean)
inline void ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847 (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * __this, bool ___clearArray0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *, bool, const RuntimeMethod*))ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_gshared)(__this, ___clearArray0, method);
}
// System.Int32 Spine.Triangulator::Winding(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Triangulator_Winding_mE21A851D3764F47B4F5A499A9CA85EAD2DE4E51A (float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, const RuntimeMethod* method);
// System.Void Spine.ExposedList`1<System.Single>::Add(T)
inline void ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *, float, const RuntimeMethod*))ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_gshared)(__this, ___item0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>::Add(T)
inline void ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576 (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * __this, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 *, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *, const RuntimeMethod*))ExposedList_1_Add_m4364CE9D5F725E9640B50171826E9EEE1E5E8927_gshared)(__this, ___item0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>::Add(T)
inline void ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * __this, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 *, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, const RuntimeMethod*))ExposedList_1_Add_m4364CE9D5F725E9640B50171826E9EEE1E5E8927_gshared)(__this, ___item0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>::RemoveAt(System.Int32)
inline void ExposedList_1_RemoveAt_mABBDA48F0096E88AB0169B176320716F8EE471FB (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 *, int32_t, const RuntimeMethod*))ExposedList_1_RemoveAt_m50C8AA61CDCED70A8EE1FAF5FDD73F558952C56A_gshared)(__this, ___index0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>::RemoveAt(System.Int32)
inline void ExposedList_1_RemoveAt_m0629ED8D156A78115171F2746A855438C3DBE81C (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 *, int32_t, const RuntimeMethod*))ExposedList_1_RemoveAt_m50C8AA61CDCED70A8EE1FAF5FDD73F558952C56A_gshared)(__this, ___index0, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>::.ctor()
inline void ExposedList_1__ctor_m02755087651BB67AD2B2D4D758AE77AFD7DC440B (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 *, const RuntimeMethod*))ExposedList_1__ctor_mFFE6EDA61CD5E083C09C3270D95F214371165497_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>::.ctor()
inline void ExposedList_1__ctor_m84177DC3659E1B9F2837C8ADDC017ADDA00B36A0 (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 *, const RuntimeMethod*))ExposedList_1__ctor_mFFE6EDA61CD5E083C09C3270D95F214371165497_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<System.Int32>::.ctor()
inline void ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2 (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *, const RuntimeMethod*))ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1<System.Boolean>::.ctor()
inline void ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * __this, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E *, const RuntimeMethod*))ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C_gshared)(__this, method);
}
// System.Void Spine.Pool`1<Spine.ExposedList`1<System.Single>>::.ctor(System.Int32,System.Int32)
inline void Pool_1__ctor_mEF3423A00009591979CA692DDE12CCC2FF4E8C26 (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * __this, int32_t ___initialCapacity0, int32_t ___max1, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 *, int32_t, int32_t, const RuntimeMethod*))Pool_1__ctor_m8B2EFD1D9088A4E150064AF899EDF8BEC4716354_gshared)(__this, ___initialCapacity0, ___max1, method);
}
// System.Void Spine.Pool`1<Spine.ExposedList`1<System.Int32>>::.ctor(System.Int32,System.Int32)
inline void Pool_1__ctor_m7C7FBE91695216C54B23152A69A8EEB750808334 (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * __this, int32_t ___initialCapacity0, int32_t ___max1, const RuntimeMethod* method)
{
	((  void (*) (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A *, int32_t, int32_t, const RuntimeMethod*))Pool_1__ctor_m8B2EFD1D9088A4E150064AF899EDF8BEC4716354_gshared)(__this, ___initialCapacity0, ___max1, method);
}
// System.Void Spine.Attachment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attachment__ctor_m25D4C3124669EB5D1A033934369C6C3ED9A60662 (Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Spine.Attachment::.ctor(Spine.Attachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attachment__ctor_mE9E97E24858D2B5348E79AFED66DB802A242E00F (Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * __this, Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___other0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m7EF35EEE2A8E2DC040222146974ADA2C3DACC229 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void Spine.AnimationStateData/AnimationPair::.ctor(Spine.Animation,Spine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPair__ctor_m74829679B461CA503FC742ED9C15CFAC3E011116 (AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * __this, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a10, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a21, const RuntimeMethod* method);
// System.String Spine.AnimationStateData/AnimationPair::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimationPair_ToString_mF05A63E1FCE6F3B07BFB840B7DD87B72C106B167 (AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * __this, const RuntimeMethod* method);
// System.Void Spine.AnimationStateData/AnimationPairComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPairComparer__ctor_m2EFAE31FB362D087220453C686F54320B56D03CC (AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205 (const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_mBF078678C6B2C5116261811AFBBFAE524D4D4BB4 (Type_t * ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Spine.EventQueue/EventQueueEntry::.ctor(Spine.EventQueue/EventType,Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventQueueEntry__ctor_m87A50C8A0670518D92C3D095B1D6019068B353EF (EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C * __this, int32_t ___eventType0, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry1, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e2, const RuntimeMethod* method);
// System.Void System.IO.EndOfStreamException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m2D2184E744B5B0762EA690CFD757F64E0BC6D539 (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * __this, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_mBF4B5469DEE140E388EAFDB65BF83DF55387A398 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int32 Spine.SkeletonBinary/SkeletonInput::ReadInt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, bool ___optimizePositive0, const RuntimeMethod* method);
// System.Void Spine.SkeletonBinary/SkeletonInput::ReadFully(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469 (const RuntimeMethod* method);
// System.Int64 Spine.SkeletonBinary/SkeletonInput::ReadLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SkeletonInput_ReadLong_m68876F3178280533715E950245B292E4CA86C9E2 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method);
// System.String Spine.SkeletonBinary/SkeletonInput::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_ReadString_m6428104EADD77A1F3E22A73038830C769B1F8381 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Char::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsDigit_m73245965734C419B757CC9828B24D8C185E0808D (Il2CppChar ___c0, const RuntimeMethod* method);
// System.String Spine.SkeletonBinary/SkeletonInput::GetVersionStringOld3X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_GetVersionStringOld3X_m77C851E61EFF9375B2296C5B65C3AF749AD3CE91 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Spine.Skin/SkinEntry::.ctor(System.Int32,System.String,Spine.Attachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinEntry__ctor_m1855C514A973635B0644A9DA0FA8CFEF7E54098E (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, int32_t ___slotIndex0, String_t* ___name1, Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment2, const RuntimeMethod* method);
// System.Int32 Spine.Skin/SkinEntry::get_SlotIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkinEntry_get_SlotIndex_m60F18BF0EF0A626BAD2703DDFF331C1AC354DAEF (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method);
// System.String Spine.Skin/SkinEntry::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkinEntry_get_Name_m5177BC3C9F82E943338843B4D1626EC2E9D4938B (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method);
// Spine.Attachment Spine.Skin/SkinEntry::get_Attachment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * SkinEntry_get_Attachment_m6574C605D1249A88A1B15385C94170914D120843 (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method);
// System.Void Spine.Skin/SkinKey::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A (SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8 * __this, int32_t ___slotIndex0, String_t* ___name1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mEE55908E87109DB4E5D5A05245332FB2A270F258 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void Spine.Skin/SkinKeyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinKeyComparer__ctor_m19150DFF69B53B377F62562BBB149C7FABC909A0 (SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.TransformConstraint::.ctor(Spine.TransformConstraintData,Spine.Skeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint__ctor_mA4853CDA24148AF06B19C2BC2956041F70587FAE (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * ___data0, Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m74071F617F8A507285FC1C9BA2910EA0977650B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBBA6DB2B2D16B8BA4F16C26C6131291F1A4F6AEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m823E28B14A613A855A575D0B28D1585C6A561AC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Add_m14CF5683F62E0C38A3A4AFF78EBAF4219049D497_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_GetEnumerator_m6B3B125259D95EEE250D3D250852F01AA647A8ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_m14B32DCD34440DA7239B82271DE3B75B3C510C7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// public TransformConstraint (TransformConstraintData data, Skeleton skeleton) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (data == null) throw new ArgumentNullException("data", "data cannot be null.");
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_0 = ___data0;
		V_0 = (bool)((((RuntimeObject*)(TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (data == null) throw new ArgumentNullException("data", "data cannot be null.");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD68933FD1F96E1F39A8AE0B6E397B2AE58AF0B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformConstraint__ctor_mA4853CDA24148AF06B19C2BC2956041F70587FAE_RuntimeMethod_var)));
	}

IL_0020:
	{
		// if (skeleton == null) throw new ArgumentNullException("skeleton", "skeleton cannot be null.");
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_3 = ___skeleton1;
		V_1 = (bool)((((RuntimeObject*)(Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// if (skeleton == null) throw new ArgumentNullException("skeleton", "skeleton cannot be null.");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAABDB12A8673CF3F32247EDEEC8B9E68FE0BF8D2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral541147A891EE1D27C9FE0F61836C41B2F605EB35)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformConstraint__ctor_mA4853CDA24148AF06B19C2BC2956041F70587FAE_RuntimeMethod_var)));
	}

IL_0038:
	{
		// this.data = data;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_6 = ___data0;
		__this->set_data_0(L_6);
		// bones = new ExposedList<Bone>();
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_7 = (ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 *)il2cpp_codegen_object_new(ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_m14B32DCD34440DA7239B82271DE3B75B3C510C7F(L_7, /*hidden argument*/ExposedList_1__ctor_m14B32DCD34440DA7239B82271DE3B75B3C510C7F_RuntimeMethod_var);
		__this->set_bones_1(L_7);
		// foreach (BoneData boneData in data.bones)
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_8 = ___data0;
		NullCheck(L_8);
		ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * L_9 = L_8->get_bones_3();
		NullCheck(L_9);
		Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1  L_10;
		L_10 = ExposedList_1_GetEnumerator_m6B3B125259D95EEE250D3D250852F01AA647A8ED(L_9, /*hidden argument*/ExposedList_1_GetEnumerator_m6B3B125259D95EEE250D3D250852F01AA647A8ED_RuntimeMethod_var);
		V_2 = L_10;
	}

IL_0057:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_0059:
		{
			// foreach (BoneData boneData in data.bones)
			BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_11;
			L_11 = Enumerator_get_Current_m823E28B14A613A855A575D0B28D1585C6A561AC8((Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m823E28B14A613A855A575D0B28D1585C6A561AC8_RuntimeMethod_var);
			V_3 = L_11;
			// bones.Add(skeleton.bones.Items[boneData.index]);
			ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_12 = __this->get_bones_1();
			Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_13 = ___skeleton1;
			NullCheck(L_13);
			ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_14 = L_13->get_bones_1();
			NullCheck(L_14);
			BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_15 = L_14->get_Items_0();
			BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_16 = V_3;
			NullCheck(L_16);
			int32_t L_17 = L_16->get_index_0();
			NullCheck(L_15);
			int32_t L_18 = L_17;
			Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			NullCheck(L_12);
			ExposedList_1_Add_m14CF5683F62E0C38A3A4AFF78EBAF4219049D497(L_12, L_19, /*hidden argument*/ExposedList_1_Add_m14CF5683F62E0C38A3A4AFF78EBAF4219049D497_RuntimeMethod_var);
		}

IL_007f:
		{
			// foreach (BoneData boneData in data.bones)
			bool L_20;
			L_20 = Enumerator_MoveNext_mBBA6DB2B2D16B8BA4F16C26C6131291F1A4F6AEF((Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mBBA6DB2B2D16B8BA4F16C26C6131291F1A4F6AEF_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0059;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x99, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m74071F617F8A507285FC1C9BA2910EA0977650B0((Enumerator_t369ADFEBB3ED18A6488D0F0F6FAB26A211EEF7C1 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m74071F617F8A507285FC1C9BA2910EA0977650B0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x99, IL_0099)
	}

IL_0099:
	{
		// target = skeleton.bones.Items[data.target.index];
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_21 = ___skeleton1;
		NullCheck(L_21);
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_22 = L_21->get_bones_1();
		NullCheck(L_22);
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_23 = L_22->get_Items_0();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_24 = ___data0;
		NullCheck(L_24);
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_25 = L_24->get_target_4();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_index_0();
		NullCheck(L_23);
		int32_t L_27 = L_26;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_28 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		__this->set_target_2(L_28);
		// mixRotate = data.mixRotate;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_29 = ___data0;
		NullCheck(L_29);
		float L_30 = L_29->get_mixRotate_5();
		__this->set_mixRotate_3(L_30);
		// mixX = data.mixX;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_31 = ___data0;
		NullCheck(L_31);
		float L_32 = L_31->get_mixX_6();
		__this->set_mixX_4(L_32);
		// mixY = data.mixY;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_33 = ___data0;
		NullCheck(L_33);
		float L_34 = L_33->get_mixY_7();
		__this->set_mixY_5(L_34);
		// mixScaleX = data.mixScaleX;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_35 = ___data0;
		NullCheck(L_35);
		float L_36 = L_35->get_mixScaleX_8();
		__this->set_mixScaleX_6(L_36);
		// mixScaleY = data.mixScaleY;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_37 = ___data0;
		NullCheck(L_37);
		float L_38 = L_37->get_mixScaleY_9();
		__this->set_mixScaleY_7(L_38);
		// mixShearY = data.mixShearY;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_39 = ___data0;
		NullCheck(L_39);
		float L_40 = L_39->get_mixShearY_10();
		__this->set_mixShearY_8(L_40);
		// }
		return;
	}
}
// System.Void Spine.TransformConstraint::.ctor(Spine.TransformConstraint,Spine.Skeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint__ctor_m13322E0B3B4607D1A9CB70342289EDF1A9A61465 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * ___constraint0, Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton1, const RuntimeMethod* method)
{
	{
		// : this(constraint.data, skeleton) {
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_0 = ___constraint0;
		NullCheck(L_0);
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_1 = L_0->get_data_0();
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_2 = ___skeleton1;
		TransformConstraint__ctor_mA4853CDA24148AF06B19C2BC2956041F70587FAE(__this, L_1, L_2, /*hidden argument*/NULL);
		// mixRotate = constraint.mixRotate;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_3 = ___constraint0;
		NullCheck(L_3);
		float L_4 = L_3->get_mixRotate_3();
		__this->set_mixRotate_3(L_4);
		// mixX = constraint.mixX;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_5 = ___constraint0;
		NullCheck(L_5);
		float L_6 = L_5->get_mixX_4();
		__this->set_mixX_4(L_6);
		// mixY = constraint.mixY;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_7 = ___constraint0;
		NullCheck(L_7);
		float L_8 = L_7->get_mixY_5();
		__this->set_mixY_5(L_8);
		// mixScaleX = constraint.mixScaleX;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_9 = ___constraint0;
		NullCheck(L_9);
		float L_10 = L_9->get_mixScaleX_6();
		__this->set_mixScaleX_6(L_10);
		// mixScaleY = constraint.mixScaleY;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_11 = ___constraint0;
		NullCheck(L_11);
		float L_12 = L_11->get_mixScaleY_7();
		__this->set_mixScaleY_7(L_12);
		// mixShearY = constraint.mixShearY;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_13 = ___constraint0;
		NullCheck(L_13);
		float L_14 = L_13->get_mixShearY_8();
		__this->set_mixShearY_8(L_14);
		// }
		return;
	}
}
// System.Void Spine.TransformConstraint::SetToSetupPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_SetToSetupPose_mCBE0029B668688C43ADAF9F8344E5A77CACD33BF (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * V_0 = NULL;
	{
		// TransformConstraintData data = this.data;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_0 = __this->get_data_0();
		V_0 = L_0;
		// mixRotate = data.mixRotate;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_1 = V_0;
		NullCheck(L_1);
		float L_2 = L_1->get_mixRotate_5();
		__this->set_mixRotate_3(L_2);
		// mixX = data.mixX;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_3 = V_0;
		NullCheck(L_3);
		float L_4 = L_3->get_mixX_6();
		__this->set_mixX_4(L_4);
		// mixY = data.mixY;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_5 = V_0;
		NullCheck(L_5);
		float L_6 = L_5->get_mixY_7();
		__this->set_mixY_5(L_6);
		// mixScaleX = data.mixScaleX;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_7 = V_0;
		NullCheck(L_7);
		float L_8 = L_7->get_mixScaleX_8();
		__this->set_mixScaleX_6(L_8);
		// mixScaleY = data.mixScaleY;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_9 = V_0;
		NullCheck(L_9);
		float L_10 = L_9->get_mixScaleY_9();
		__this->set_mixScaleY_7(L_10);
		// mixShearY = data.mixShearY;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_11 = V_0;
		NullCheck(L_11);
		float L_12 = L_11->get_mixShearY_10();
		__this->set_mixShearY_8(L_12);
		// }
		return;
	}
}
// System.Void Spine.TransformConstraint::Update(Spine.Skeleton/Physics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_Update_m765A328575E4FE0814D692D38B63A97EBC72D9D2 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, int32_t ___physics0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		// if (mixRotate == 0 && mixX == 0 && mixY == 0 && mixScaleX == 0 && mixScaleY == 0 && mixShearY == 0) return;
		float L_0 = __this->get_mixRotate_3();
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		float L_1 = __this->get_mixX_4();
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		float L_2 = __this->get_mixY_5();
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		float L_3 = __this->get_mixScaleX_6();
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		float L_4 = __this->get_mixScaleY_7();
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		float L_5 = __this->get_mixShearY_8();
		G_B7_0 = ((((float)L_5) == ((float)(0.0f)))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B7_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B7_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// if (mixRotate == 0 && mixX == 0 && mixY == 0 && mixScaleX == 0 && mixScaleY == 0 && mixShearY == 0) return;
		goto IL_00ab;
	}

IL_0058:
	{
		// if (data.local) {
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_7 = __this->get_data_0();
		NullCheck(L_7);
		bool L_8 = L_7->get_local_18();
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		// if (data.relative)
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_10 = __this->get_data_0();
		NullCheck(L_10);
		bool L_11 = L_10->get_relative_17();
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		// ApplyRelativeLocal();
		TransformConstraint_ApplyRelativeLocal_m8F7D3C7E661D97B6BBFBEF9A2C9BEA728CA2A925(__this, /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_0080:
	{
		// ApplyAbsoluteLocal();
		TransformConstraint_ApplyAbsoluteLocal_m65A388BE147E0A0BC2E8BD5B8D89DEEFAF5871E8(__this, /*hidden argument*/NULL);
	}

IL_0087:
	{
		goto IL_00ab;
	}

IL_008a:
	{
		// if (data.relative)
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_13 = __this->get_data_0();
		NullCheck(L_13);
		bool L_14 = L_13->get_relative_17();
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00a3;
		}
	}
	{
		// ApplyRelativeWorld();
		TransformConstraint_ApplyRelativeWorld_m4391C035F875F714DB97465E9E3397A7707B7B35(__this, /*hidden argument*/NULL);
		goto IL_00aa;
	}

IL_00a3:
	{
		// ApplyAbsoluteWorld();
		TransformConstraint_ApplyAbsoluteWorld_mC178011B62C241AE4A699416B60FFF9D3D3A6616(__this, /*hidden argument*/NULL);
	}

IL_00aa:
	{
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void Spine.TransformConstraint::ApplyAbsoluteWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_ApplyAbsoluteWorld_mC178011B62C241AE4A699416B60FFF9D3D3A6616 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_t7FEA8F9D49C516129B435137859E11B18CB1A37A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_7 = NULL;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_18 = NULL;
	bool V_19 = false;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	float V_26 = 0.0f;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	float V_30 = 0.0f;
	float V_31 = 0.0f;
	bool V_32 = false;
	float V_33 = 0.0f;
	bool V_34 = false;
	bool V_35 = false;
	float V_36 = 0.0f;
	bool V_37 = false;
	bool V_38 = false;
	float V_39 = 0.0f;
	float V_40 = 0.0f;
	float V_41 = 0.0f;
	float V_42 = 0.0f;
	float V_43 = 0.0f;
	bool V_44 = false;
	bool V_45 = false;
	bool V_46 = false;
	int32_t G_B3_0 = 0;
	float G_B6_0 = 0.0f;
	{
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_0 = __this->get_mixRotate_3();
		V_0 = L_0;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_1 = __this->get_mixX_4();
		V_1 = L_1;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_2 = __this->get_mixY_5();
		V_2 = L_2;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_3 = __this->get_mixScaleX_6();
		V_3 = L_3;
		// mixScaleY = this.mixScaleY, mixShearY = this.mixShearY;
		float L_4 = __this->get_mixScaleY_7();
		V_4 = L_4;
		// mixScaleY = this.mixScaleY, mixShearY = this.mixShearY;
		float L_5 = __this->get_mixShearY_8();
		V_5 = L_5;
		// bool translate = mixX != 0 || mixY != 0;
		float L_6 = V_1;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		float L_7 = V_2;
		G_B3_0 = ((((int32_t)((((float)L_7) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B3_0 = 1;
	}

IL_0043:
	{
		V_6 = (bool)G_B3_0;
		// Bone target = this.target;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_8 = __this->get_target_2();
		V_7 = L_8;
		// float ta = target.a, tb = target.b, tc = target.c, td = target.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_9 = V_7;
		NullCheck(L_9);
		float L_10 = L_9->get_a_19();
		V_8 = L_10;
		// float ta = target.a, tb = target.b, tc = target.c, td = target.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_11 = V_7;
		NullCheck(L_11);
		float L_12 = L_11->get_b_20();
		V_9 = L_12;
		// float ta = target.a, tb = target.b, tc = target.c, td = target.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_13 = V_7;
		NullCheck(L_13);
		float L_14 = L_13->get_c_22();
		V_10 = L_14;
		// float ta = target.a, tb = target.b, tc = target.c, td = target.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_15 = V_7;
		NullCheck(L_15);
		float L_16 = L_15->get_d_23();
		V_11 = L_16;
		// float degRadReflect = ta * td - tb * tc > 0 ? MathUtils.DegRad : -MathUtils.DegRad;
		float L_17 = V_8;
		float L_18 = V_11;
		float L_19 = V_9;
		float L_20 = V_10;
		if ((((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)), (float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20))))) > ((float)(0.0f))))
		{
			goto IL_008a;
		}
	}
	{
		G_B6_0 = (-0.0174532924f);
		goto IL_008f;
	}

IL_008a:
	{
		G_B6_0 = (0.0174532924f);
	}

IL_008f:
	{
		V_12 = G_B6_0;
		// float offsetRotation = data.offsetRotation * degRadReflect, offsetShearY = data.offsetShearY * degRadReflect;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_21 = __this->get_data_0();
		NullCheck(L_21);
		float L_22 = L_21->get_offsetRotation_11();
		float L_23 = V_12;
		V_13 = ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23));
		// float offsetRotation = data.offsetRotation * degRadReflect, offsetShearY = data.offsetShearY * degRadReflect;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_24 = __this->get_data_0();
		NullCheck(L_24);
		float L_25 = L_24->get_offsetShearY_16();
		float L_26 = V_12;
		V_14 = ((float)il2cpp_codegen_multiply((float)L_25, (float)L_26));
		// Bone[] bones = this.bones.Items;
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_27 = __this->get_bones_1();
		NullCheck(L_27);
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_28 = L_27->get_Items_0();
		V_15 = L_28;
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		V_16 = 0;
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_29 = __this->get_bones_1();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_Count_1();
		V_17 = L_30;
		goto IL_043c;
	}

IL_00d3:
	{
		// Bone bone = bones[i];
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_31 = V_15;
		int32_t L_32 = V_16;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_18 = L_34;
		// if (mixRotate != 0) {
		float L_35 = V_0;
		V_19 = (bool)((((int32_t)((((float)L_35) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_19;
		if (!L_36)
		{
			goto IL_01c1;
		}
	}
	{
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_37 = V_18;
		NullCheck(L_37);
		float L_38 = L_37->get_a_19();
		V_20 = L_38;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_39 = V_18;
		NullCheck(L_39);
		float L_40 = L_39->get_b_20();
		V_21 = L_40;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_41 = V_18;
		NullCheck(L_41);
		float L_42 = L_41->get_c_22();
		V_22 = L_42;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_43 = V_18;
		NullCheck(L_43);
		float L_44 = L_43->get_d_23();
		V_23 = L_44;
		// float r = MathUtils.Atan2(tc, ta) - MathUtils.Atan2(c, a) + offsetRotation;
		float L_45 = V_10;
		float L_46 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtils_t7FEA8F9D49C516129B435137859E11B18CB1A37A_il2cpp_TypeInfo_var);
		float L_47;
		L_47 = MathUtils_Atan2_m1A65E2C02BD8BB1538F191E84AA984ECBE0CC492(L_45, L_46, /*hidden argument*/NULL);
		float L_48 = V_22;
		float L_49 = V_20;
		float L_50;
		L_50 = MathUtils_Atan2_m1A65E2C02BD8BB1538F191E84AA984ECBE0CC492(L_48, L_49, /*hidden argument*/NULL);
		float L_51 = V_13;
		V_24 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_47, (float)L_50)), (float)L_51));
		// if (r > MathUtils.PI)
		float L_52 = V_24;
		V_27 = (bool)((((float)L_52) > ((float)(3.14159274f)))? 1 : 0);
		bool L_53 = V_27;
		if (!L_53)
		{
			goto IL_0147;
		}
	}
	{
		// r -= MathUtils.PI2;
		float L_54 = V_24;
		V_24 = ((float)il2cpp_codegen_subtract((float)L_54, (float)(6.28318548f)));
		goto IL_0160;
	}

IL_0147:
	{
		// else if (r < -MathUtils.PI) //
		float L_55 = V_24;
		V_28 = (bool)((((float)L_55) < ((float)(-3.14159274f)))? 1 : 0);
		bool L_56 = V_28;
		if (!L_56)
		{
			goto IL_0160;
		}
	}
	{
		// r += MathUtils.PI2;
		float L_57 = V_24;
		V_24 = ((float)il2cpp_codegen_add((float)L_57, (float)(6.28318548f)));
	}

IL_0160:
	{
		// r *= mixRotate;
		float L_58 = V_24;
		float L_59 = V_0;
		V_24 = ((float)il2cpp_codegen_multiply((float)L_58, (float)L_59));
		// float cos = MathUtils.Cos(r), sin = MathUtils.Sin(r);
		float L_60 = V_24;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtils_t7FEA8F9D49C516129B435137859E11B18CB1A37A_il2cpp_TypeInfo_var);
		float L_61;
		L_61 = MathUtils_Cos_m7FD8701180B96271DE73E54281967B5C7A5E53E4(L_60, /*hidden argument*/NULL);
		V_25 = L_61;
		// float cos = MathUtils.Cos(r), sin = MathUtils.Sin(r);
		float L_62 = V_24;
		float L_63;
		L_63 = MathUtils_Sin_m547E78E2309AC63CC700D6716411C7A812D4D8EB(L_62, /*hidden argument*/NULL);
		V_26 = L_63;
		// bone.a = cos * a - sin * c;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_64 = V_18;
		float L_65 = V_25;
		float L_66 = V_20;
		float L_67 = V_26;
		float L_68 = V_22;
		NullCheck(L_64);
		L_64->set_a_19(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_65, (float)L_66)), (float)((float)il2cpp_codegen_multiply((float)L_67, (float)L_68)))));
		// bone.b = cos * b - sin * d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_69 = V_18;
		float L_70 = V_25;
		float L_71 = V_21;
		float L_72 = V_26;
		float L_73 = V_23;
		NullCheck(L_69);
		L_69->set_b_20(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_70, (float)L_71)), (float)((float)il2cpp_codegen_multiply((float)L_72, (float)L_73)))));
		// bone.c = sin * a + cos * c;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_74 = V_18;
		float L_75 = V_26;
		float L_76 = V_20;
		float L_77 = V_25;
		float L_78 = V_22;
		NullCheck(L_74);
		L_74->set_c_22(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_75, (float)L_76)), (float)((float)il2cpp_codegen_multiply((float)L_77, (float)L_78)))));
		// bone.d = sin * b + cos * d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_79 = V_18;
		float L_80 = V_26;
		float L_81 = V_21;
		float L_82 = V_25;
		float L_83 = V_23;
		NullCheck(L_79);
		L_79->set_d_23(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_80, (float)L_81)), (float)((float)il2cpp_codegen_multiply((float)L_82, (float)L_83)))));
	}

IL_01c1:
	{
		// if (translate) {
		bool L_84 = V_6;
		V_29 = L_84;
		bool L_85 = V_29;
		if (!L_85)
		{
			goto IL_0221;
		}
	}
	{
		// target.LocalToWorld(data.offsetX, data.offsetY, out tx, out ty); //target.localToWorld(temp.set(data.offsetX, data.offsetY));
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_86 = V_7;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_87 = __this->get_data_0();
		NullCheck(L_87);
		float L_88 = L_87->get_offsetX_12();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_89 = __this->get_data_0();
		NullCheck(L_89);
		float L_90 = L_89->get_offsetY_13();
		NullCheck(L_86);
		Bone_LocalToWorld_mF3B234A2E0C45B3D1D69D737EC6F31F894134A59(L_86, L_88, L_90, (float*)(&V_30), (float*)(&V_31), /*hidden argument*/NULL);
		// bone.worldX += (tx - bone.worldX) * mixX;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_91 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_92 = L_91;
		NullCheck(L_92);
		float L_93 = L_92->get_worldX_21();
		float L_94 = V_30;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_95 = V_18;
		NullCheck(L_95);
		float L_96 = L_95->get_worldX_21();
		float L_97 = V_1;
		NullCheck(L_92);
		L_92->set_worldX_21(((float)il2cpp_codegen_add((float)L_93, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_94, (float)L_96)), (float)L_97)))));
		// bone.worldY += (ty - bone.worldY) * mixY;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_98 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_99 = L_98;
		NullCheck(L_99);
		float L_100 = L_99->get_worldY_24();
		float L_101 = V_31;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_102 = V_18;
		NullCheck(L_102);
		float L_103 = L_102->get_worldY_24();
		float L_104 = V_2;
		NullCheck(L_99);
		L_99->set_worldY_24(((float)il2cpp_codegen_add((float)L_100, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_101, (float)L_103)), (float)L_104)))));
	}

IL_0221:
	{
		// if (mixScaleX != 0) {
		float L_105 = V_3;
		V_32 = (bool)((((int32_t)((((float)L_105) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_106 = V_32;
		if (!L_106)
		{
			goto IL_02bc;
		}
	}
	{
		// float s = (float)Math.Sqrt(bone.a * bone.a + bone.c * bone.c);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_107 = V_18;
		NullCheck(L_107);
		float L_108 = L_107->get_a_19();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_109 = V_18;
		NullCheck(L_109);
		float L_110 = L_109->get_a_19();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_111 = V_18;
		NullCheck(L_111);
		float L_112 = L_111->get_c_22();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_113 = V_18;
		NullCheck(L_113);
		float L_114 = L_113->get_c_22();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_115;
		L_115 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_108, (float)L_110)), (float)((float)il2cpp_codegen_multiply((float)L_112, (float)L_114)))))));
		V_33 = ((float)((float)L_115));
		// if (s != 0) s = (s + ((float)Math.Sqrt(ta * ta + tc * tc) - s + data.offsetScaleX) * mixScaleX) / s;
		float L_116 = V_33;
		V_34 = (bool)((((int32_t)((((float)L_116) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_117 = V_34;
		if (!L_117)
		{
			goto IL_029b;
		}
	}
	{
		// if (s != 0) s = (s + ((float)Math.Sqrt(ta * ta + tc * tc) - s + data.offsetScaleX) * mixScaleX) / s;
		float L_118 = V_33;
		float L_119 = V_8;
		float L_120 = V_8;
		float L_121 = V_10;
		float L_122 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_123;
		L_123 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_119, (float)L_120)), (float)((float)il2cpp_codegen_multiply((float)L_121, (float)L_122)))))));
		float L_124 = V_33;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_125 = __this->get_data_0();
		NullCheck(L_125);
		float L_126 = L_125->get_offsetScaleX_14();
		float L_127 = V_3;
		float L_128 = V_33;
		V_33 = ((float)((float)((float)il2cpp_codegen_add((float)L_118, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_123)), (float)L_124)), (float)L_126)), (float)L_127))))/(float)L_128));
	}

IL_029b:
	{
		// bone.a *= s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_129 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_130 = L_129;
		NullCheck(L_130);
		float L_131 = L_130->get_a_19();
		float L_132 = V_33;
		NullCheck(L_130);
		L_130->set_a_19(((float)il2cpp_codegen_multiply((float)L_131, (float)L_132)));
		// bone.c *= s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_133 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_134 = L_133;
		NullCheck(L_134);
		float L_135 = L_134->get_c_22();
		float L_136 = V_33;
		NullCheck(L_134);
		L_134->set_c_22(((float)il2cpp_codegen_multiply((float)L_135, (float)L_136)));
	}

IL_02bc:
	{
		// if (mixScaleY != 0) {
		float L_137 = V_4;
		V_35 = (bool)((((int32_t)((((float)L_137) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_138 = V_35;
		if (!L_138)
		{
			goto IL_0359;
		}
	}
	{
		// float s = (float)Math.Sqrt(bone.b * bone.b + bone.d * bone.d);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_139 = V_18;
		NullCheck(L_139);
		float L_140 = L_139->get_b_20();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_141 = V_18;
		NullCheck(L_141);
		float L_142 = L_141->get_b_20();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_143 = V_18;
		NullCheck(L_143);
		float L_144 = L_143->get_d_23();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_145 = V_18;
		NullCheck(L_145);
		float L_146 = L_145->get_d_23();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_147;
		L_147 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_140, (float)L_142)), (float)((float)il2cpp_codegen_multiply((float)L_144, (float)L_146)))))));
		V_36 = ((float)((float)L_147));
		// if (s != 0) s = (s + ((float)Math.Sqrt(tb * tb + td * td) - s + data.offsetScaleY) * mixScaleY) / s;
		float L_148 = V_36;
		V_37 = (bool)((((int32_t)((((float)L_148) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_149 = V_37;
		if (!L_149)
		{
			goto IL_0338;
		}
	}
	{
		// if (s != 0) s = (s + ((float)Math.Sqrt(tb * tb + td * td) - s + data.offsetScaleY) * mixScaleY) / s;
		float L_150 = V_36;
		float L_151 = V_9;
		float L_152 = V_9;
		float L_153 = V_11;
		float L_154 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_155;
		L_155 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_151, (float)L_152)), (float)((float)il2cpp_codegen_multiply((float)L_153, (float)L_154)))))));
		float L_156 = V_36;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_157 = __this->get_data_0();
		NullCheck(L_157);
		float L_158 = L_157->get_offsetScaleY_15();
		float L_159 = V_4;
		float L_160 = V_36;
		V_36 = ((float)((float)((float)il2cpp_codegen_add((float)L_150, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_155)), (float)L_156)), (float)L_158)), (float)L_159))))/(float)L_160));
	}

IL_0338:
	{
		// bone.b *= s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_161 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_162 = L_161;
		NullCheck(L_162);
		float L_163 = L_162->get_b_20();
		float L_164 = V_36;
		NullCheck(L_162);
		L_162->set_b_20(((float)il2cpp_codegen_multiply((float)L_163, (float)L_164)));
		// bone.d *= s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_165 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_166 = L_165;
		NullCheck(L_166);
		float L_167 = L_166->get_d_23();
		float L_168 = V_36;
		NullCheck(L_166);
		L_166->set_d_23(((float)il2cpp_codegen_multiply((float)L_167, (float)L_168)));
	}

IL_0359:
	{
		// if (mixShearY > 0) {
		float L_169 = V_5;
		V_38 = (bool)((((float)L_169) > ((float)(0.0f)))? 1 : 0);
		bool L_170 = V_38;
		if (!L_170)
		{
			goto IL_042d;
		}
	}
	{
		// float b = bone.b, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_171 = V_18;
		NullCheck(L_171);
		float L_172 = L_171->get_b_20();
		V_39 = L_172;
		// float b = bone.b, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_173 = V_18;
		NullCheck(L_173);
		float L_174 = L_173->get_d_23();
		V_40 = L_174;
		// float by = MathUtils.Atan2(d, b);
		float L_175 = V_40;
		float L_176 = V_39;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtils_t7FEA8F9D49C516129B435137859E11B18CB1A37A_il2cpp_TypeInfo_var);
		float L_177;
		L_177 = MathUtils_Atan2_m1A65E2C02BD8BB1538F191E84AA984ECBE0CC492(L_175, L_176, /*hidden argument*/NULL);
		V_41 = L_177;
		// float r = MathUtils.Atan2(td, tb) - MathUtils.Atan2(tc, ta) - (by - MathUtils.Atan2(bone.c, bone.a));
		float L_178 = V_11;
		float L_179 = V_9;
		float L_180;
		L_180 = MathUtils_Atan2_m1A65E2C02BD8BB1538F191E84AA984ECBE0CC492(L_178, L_179, /*hidden argument*/NULL);
		float L_181 = V_10;
		float L_182 = V_8;
		float L_183;
		L_183 = MathUtils_Atan2_m1A65E2C02BD8BB1538F191E84AA984ECBE0CC492(L_181, L_182, /*hidden argument*/NULL);
		float L_184 = V_41;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_185 = V_18;
		NullCheck(L_185);
		float L_186 = L_185->get_c_22();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_187 = V_18;
		NullCheck(L_187);
		float L_188 = L_187->get_a_19();
		float L_189;
		L_189 = MathUtils_Atan2_m1A65E2C02BD8BB1538F191E84AA984ECBE0CC492(L_186, L_188, /*hidden argument*/NULL);
		V_42 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_180, (float)L_183)), (float)((float)il2cpp_codegen_subtract((float)L_184, (float)L_189))));
		// if (r > MathUtils.PI)
		float L_190 = V_42;
		V_44 = (bool)((((float)L_190) > ((float)(3.14159274f)))? 1 : 0);
		bool L_191 = V_44;
		if (!L_191)
		{
			goto IL_03d0;
		}
	}
	{
		// r -= MathUtils.PI2;
		float L_192 = V_42;
		V_42 = ((float)il2cpp_codegen_subtract((float)L_192, (float)(6.28318548f)));
		goto IL_03e9;
	}

IL_03d0:
	{
		// else if (r < -MathUtils.PI) //
		float L_193 = V_42;
		V_45 = (bool)((((float)L_193) < ((float)(-3.14159274f)))? 1 : 0);
		bool L_194 = V_45;
		if (!L_194)
		{
			goto IL_03e9;
		}
	}
	{
		// r += MathUtils.PI2;
		float L_195 = V_42;
		V_42 = ((float)il2cpp_codegen_add((float)L_195, (float)(6.28318548f)));
	}

IL_03e9:
	{
		// r = by + (r + offsetShearY) * mixShearY;
		float L_196 = V_41;
		float L_197 = V_42;
		float L_198 = V_14;
		float L_199 = V_5;
		V_42 = ((float)il2cpp_codegen_add((float)L_196, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_197, (float)L_198)), (float)L_199))));
		// float s = (float)Math.Sqrt(b * b + d * d);
		float L_200 = V_39;
		float L_201 = V_39;
		float L_202 = V_40;
		float L_203 = V_40;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_204;
		L_204 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_200, (float)L_201)), (float)((float)il2cpp_codegen_multiply((float)L_202, (float)L_203)))))));
		V_43 = ((float)((float)L_204));
		// bone.b = MathUtils.Cos(r) * s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_205 = V_18;
		float L_206 = V_42;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtils_t7FEA8F9D49C516129B435137859E11B18CB1A37A_il2cpp_TypeInfo_var);
		float L_207;
		L_207 = MathUtils_Cos_m7FD8701180B96271DE73E54281967B5C7A5E53E4(L_206, /*hidden argument*/NULL);
		float L_208 = V_43;
		NullCheck(L_205);
		L_205->set_b_20(((float)il2cpp_codegen_multiply((float)L_207, (float)L_208)));
		// bone.d = MathUtils.Sin(r) * s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_209 = V_18;
		float L_210 = V_42;
		float L_211;
		L_211 = MathUtils_Sin_m547E78E2309AC63CC700D6716411C7A812D4D8EB(L_210, /*hidden argument*/NULL);
		float L_212 = V_43;
		NullCheck(L_209);
		L_209->set_d_23(((float)il2cpp_codegen_multiply((float)L_211, (float)L_212)));
	}

IL_042d:
	{
		// bone.UpdateAppliedTransform();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_213 = V_18;
		NullCheck(L_213);
		Bone_UpdateAppliedTransform_m7DB7872AA503EB7CFBDF14FCE1FC5E71309EF575(L_213, /*hidden argument*/NULL);
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		int32_t L_214 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_214, (int32_t)1));
	}

IL_043c:
	{
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		int32_t L_215 = V_16;
		int32_t L_216 = V_17;
		V_46 = (bool)((((int32_t)L_215) < ((int32_t)L_216))? 1 : 0);
		bool L_217 = V_46;
		if (L_217)
		{
			goto IL_00d3;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Spine.TransformConstraint::ApplyRelativeWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_ApplyRelativeWorld_m4391C035F875F714DB97465E9E3397A7707B7B35 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathUtils_t7FEA8F9D49C516129B435137859E11B18CB1A37A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_7 = NULL;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_18 = NULL;
	bool V_19 = false;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	float V_26 = 0.0f;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	float V_30 = 0.0f;
	float V_31 = 0.0f;
	bool V_32 = false;
	float V_33 = 0.0f;
	bool V_34 = false;
	float V_35 = 0.0f;
	bool V_36 = false;
	float V_37 = 0.0f;
	float V_38 = 0.0f;
	float V_39 = 0.0f;
	float V_40 = 0.0f;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	int32_t G_B3_0 = 0;
	float G_B6_0 = 0.0f;
	{
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_0 = __this->get_mixRotate_3();
		V_0 = L_0;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_1 = __this->get_mixX_4();
		V_1 = L_1;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_2 = __this->get_mixY_5();
		V_2 = L_2;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_3 = __this->get_mixScaleX_6();
		V_3 = L_3;
		// mixScaleY = this.mixScaleY, mixShearY = this.mixShearY;
		float L_4 = __this->get_mixScaleY_7();
		V_4 = L_4;
		// mixScaleY = this.mixScaleY, mixShearY = this.mixShearY;
		float L_5 = __this->get_mixShearY_8();
		V_5 = L_5;
		// bool translate = mixX != 0 || mixY != 0;
		float L_6 = V_1;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		float L_7 = V_2;
		G_B3_0 = ((((int32_t)((((float)L_7) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B3_0 = 1;
	}

IL_0043:
	{
		V_6 = (bool)G_B3_0;
		// Bone target = this.target;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_8 = __this->get_target_2();
		V_7 = L_8;
		// float ta = target.a, tb = target.b, tc = target.c, td = target.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_9 = V_7;
		NullCheck(L_9);
		float L_10 = L_9->get_a_19();
		V_8 = L_10;
		// float ta = target.a, tb = target.b, tc = target.c, td = target.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_11 = V_7;
		NullCheck(L_11);
		float L_12 = L_11->get_b_20();
		V_9 = L_12;
		// float ta = target.a, tb = target.b, tc = target.c, td = target.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_13 = V_7;
		NullCheck(L_13);
		float L_14 = L_13->get_c_22();
		V_10 = L_14;
		// float ta = target.a, tb = target.b, tc = target.c, td = target.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_15 = V_7;
		NullCheck(L_15);
		float L_16 = L_15->get_d_23();
		V_11 = L_16;
		// float degRadReflect = ta * td - tb * tc > 0 ? MathUtils.DegRad : -MathUtils.DegRad;
		float L_17 = V_8;
		float L_18 = V_11;
		float L_19 = V_9;
		float L_20 = V_10;
		if ((((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)), (float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20))))) > ((float)(0.0f))))
		{
			goto IL_008a;
		}
	}
	{
		G_B6_0 = (-0.0174532924f);
		goto IL_008f;
	}

IL_008a:
	{
		G_B6_0 = (0.0174532924f);
	}

IL_008f:
	{
		V_12 = G_B6_0;
		// float offsetRotation = data.offsetRotation * degRadReflect, offsetShearY = data.offsetShearY * degRadReflect;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_21 = __this->get_data_0();
		NullCheck(L_21);
		float L_22 = L_21->get_offsetRotation_11();
		float L_23 = V_12;
		V_13 = ((float)il2cpp_codegen_multiply((float)L_22, (float)L_23));
		// float offsetRotation = data.offsetRotation * degRadReflect, offsetShearY = data.offsetShearY * degRadReflect;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_24 = __this->get_data_0();
		NullCheck(L_24);
		float L_25 = L_24->get_offsetShearY_16();
		float L_26 = V_12;
		V_14 = ((float)il2cpp_codegen_multiply((float)L_25, (float)L_26));
		// Bone[] bones = this.bones.Items;
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_27 = __this->get_bones_1();
		NullCheck(L_27);
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_28 = L_27->get_Items_0();
		V_15 = L_28;
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		V_16 = 0;
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_29 = __this->get_bones_1();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_Count_1();
		V_17 = L_30;
		goto IL_0399;
	}

IL_00d3:
	{
		// Bone bone = bones[i];
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_31 = V_15;
		int32_t L_32 = V_16;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_18 = L_34;
		// if (mixRotate != 0) {
		float L_35 = V_0;
		V_19 = (bool)((((int32_t)((((float)L_35) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_19;
		if (!L_36)
		{
			goto IL_01b7;
		}
	}
	{
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_37 = V_18;
		NullCheck(L_37);
		float L_38 = L_37->get_a_19();
		V_20 = L_38;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_39 = V_18;
		NullCheck(L_39);
		float L_40 = L_39->get_b_20();
		V_21 = L_40;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_41 = V_18;
		NullCheck(L_41);
		float L_42 = L_41->get_c_22();
		V_22 = L_42;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_43 = V_18;
		NullCheck(L_43);
		float L_44 = L_43->get_d_23();
		V_23 = L_44;
		// float r = MathUtils.Atan2(tc, ta) + offsetRotation;
		float L_45 = V_10;
		float L_46 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtils_t7FEA8F9D49C516129B435137859E11B18CB1A37A_il2cpp_TypeInfo_var);
		float L_47;
		L_47 = MathUtils_Atan2_m1A65E2C02BD8BB1538F191E84AA984ECBE0CC492(L_45, L_46, /*hidden argument*/NULL);
		float L_48 = V_13;
		V_24 = ((float)il2cpp_codegen_add((float)L_47, (float)L_48));
		// if (r > MathUtils.PI)
		float L_49 = V_24;
		V_27 = (bool)((((float)L_49) > ((float)(3.14159274f)))? 1 : 0);
		bool L_50 = V_27;
		if (!L_50)
		{
			goto IL_013d;
		}
	}
	{
		// r -= MathUtils.PI2;
		float L_51 = V_24;
		V_24 = ((float)il2cpp_codegen_subtract((float)L_51, (float)(6.28318548f)));
		goto IL_0156;
	}

IL_013d:
	{
		// else if (r < -MathUtils.PI) //
		float L_52 = V_24;
		V_28 = (bool)((((float)L_52) < ((float)(-3.14159274f)))? 1 : 0);
		bool L_53 = V_28;
		if (!L_53)
		{
			goto IL_0156;
		}
	}
	{
		// r += MathUtils.PI2;
		float L_54 = V_24;
		V_24 = ((float)il2cpp_codegen_add((float)L_54, (float)(6.28318548f)));
	}

IL_0156:
	{
		// r *= mixRotate;
		float L_55 = V_24;
		float L_56 = V_0;
		V_24 = ((float)il2cpp_codegen_multiply((float)L_55, (float)L_56));
		// float cos = MathUtils.Cos(r), sin = MathUtils.Sin(r);
		float L_57 = V_24;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtils_t7FEA8F9D49C516129B435137859E11B18CB1A37A_il2cpp_TypeInfo_var);
		float L_58;
		L_58 = MathUtils_Cos_m7FD8701180B96271DE73E54281967B5C7A5E53E4(L_57, /*hidden argument*/NULL);
		V_25 = L_58;
		// float cos = MathUtils.Cos(r), sin = MathUtils.Sin(r);
		float L_59 = V_24;
		float L_60;
		L_60 = MathUtils_Sin_m547E78E2309AC63CC700D6716411C7A812D4D8EB(L_59, /*hidden argument*/NULL);
		V_26 = L_60;
		// bone.a = cos * a - sin * c;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_61 = V_18;
		float L_62 = V_25;
		float L_63 = V_20;
		float L_64 = V_26;
		float L_65 = V_22;
		NullCheck(L_61);
		L_61->set_a_19(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_62, (float)L_63)), (float)((float)il2cpp_codegen_multiply((float)L_64, (float)L_65)))));
		// bone.b = cos * b - sin * d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_66 = V_18;
		float L_67 = V_25;
		float L_68 = V_21;
		float L_69 = V_26;
		float L_70 = V_23;
		NullCheck(L_66);
		L_66->set_b_20(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_67, (float)L_68)), (float)((float)il2cpp_codegen_multiply((float)L_69, (float)L_70)))));
		// bone.c = sin * a + cos * c;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_71 = V_18;
		float L_72 = V_26;
		float L_73 = V_20;
		float L_74 = V_25;
		float L_75 = V_22;
		NullCheck(L_71);
		L_71->set_c_22(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_72, (float)L_73)), (float)((float)il2cpp_codegen_multiply((float)L_74, (float)L_75)))));
		// bone.d = sin * b + cos * d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_76 = V_18;
		float L_77 = V_26;
		float L_78 = V_21;
		float L_79 = V_25;
		float L_80 = V_23;
		NullCheck(L_76);
		L_76->set_d_23(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_77, (float)L_78)), (float)((float)il2cpp_codegen_multiply((float)L_79, (float)L_80)))));
	}

IL_01b7:
	{
		// if (translate) {
		bool L_81 = V_6;
		V_29 = L_81;
		bool L_82 = V_29;
		if (!L_82)
		{
			goto IL_0207;
		}
	}
	{
		// target.LocalToWorld(data.offsetX, data.offsetY, out tx, out ty); //target.localToWorld(temp.set(data.offsetX, data.offsetY));
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_83 = V_7;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_84 = __this->get_data_0();
		NullCheck(L_84);
		float L_85 = L_84->get_offsetX_12();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_86 = __this->get_data_0();
		NullCheck(L_86);
		float L_87 = L_86->get_offsetY_13();
		NullCheck(L_83);
		Bone_LocalToWorld_mF3B234A2E0C45B3D1D69D737EC6F31F894134A59(L_83, L_85, L_87, (float*)(&V_30), (float*)(&V_31), /*hidden argument*/NULL);
		// bone.worldX += tx * mixX;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_88 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_89 = L_88;
		NullCheck(L_89);
		float L_90 = L_89->get_worldX_21();
		float L_91 = V_30;
		float L_92 = V_1;
		NullCheck(L_89);
		L_89->set_worldX_21(((float)il2cpp_codegen_add((float)L_90, (float)((float)il2cpp_codegen_multiply((float)L_91, (float)L_92)))));
		// bone.worldY += ty * mixY;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_93 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_94 = L_93;
		NullCheck(L_94);
		float L_95 = L_94->get_worldY_24();
		float L_96 = V_31;
		float L_97 = V_2;
		NullCheck(L_94);
		L_94->set_worldY_24(((float)il2cpp_codegen_add((float)L_95, (float)((float)il2cpp_codegen_multiply((float)L_96, (float)L_97)))));
	}

IL_0207:
	{
		// if (mixScaleX != 0) {
		float L_98 = V_3;
		V_32 = (bool)((((int32_t)((((float)L_98) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_32;
		if (!L_99)
		{
			goto IL_0268;
		}
	}
	{
		// float s = ((float)Math.Sqrt(ta * ta + tc * tc) - 1 + data.offsetScaleX) * mixScaleX + 1;
		float L_100 = V_8;
		float L_101 = V_8;
		float L_102 = V_10;
		float L_103 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_104;
		L_104 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_100, (float)L_101)), (float)((float)il2cpp_codegen_multiply((float)L_102, (float)L_103)))))));
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_105 = __this->get_data_0();
		NullCheck(L_105);
		float L_106 = L_105->get_offsetScaleX_14();
		float L_107 = V_3;
		V_33 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_104)), (float)(1.0f))), (float)L_106)), (float)L_107)), (float)(1.0f)));
		// bone.a *= s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_108 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_109 = L_108;
		NullCheck(L_109);
		float L_110 = L_109->get_a_19();
		float L_111 = V_33;
		NullCheck(L_109);
		L_109->set_a_19(((float)il2cpp_codegen_multiply((float)L_110, (float)L_111)));
		// bone.c *= s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_112 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_113 = L_112;
		NullCheck(L_113);
		float L_114 = L_113->get_c_22();
		float L_115 = V_33;
		NullCheck(L_113);
		L_113->set_c_22(((float)il2cpp_codegen_multiply((float)L_114, (float)L_115)));
	}

IL_0268:
	{
		// if (mixScaleY != 0) {
		float L_116 = V_4;
		V_34 = (bool)((((int32_t)((((float)L_116) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_117 = V_34;
		if (!L_117)
		{
			goto IL_02cb;
		}
	}
	{
		// float s = ((float)Math.Sqrt(tb * tb + td * td) - 1 + data.offsetScaleY) * mixScaleY + 1;
		float L_118 = V_9;
		float L_119 = V_9;
		float L_120 = V_11;
		float L_121 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_122;
		L_122 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_118, (float)L_119)), (float)((float)il2cpp_codegen_multiply((float)L_120, (float)L_121)))))));
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_123 = __this->get_data_0();
		NullCheck(L_123);
		float L_124 = L_123->get_offsetScaleY_15();
		float L_125 = V_4;
		V_35 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_122)), (float)(1.0f))), (float)L_124)), (float)L_125)), (float)(1.0f)));
		// bone.b *= s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_126 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_127 = L_126;
		NullCheck(L_127);
		float L_128 = L_127->get_b_20();
		float L_129 = V_35;
		NullCheck(L_127);
		L_127->set_b_20(((float)il2cpp_codegen_multiply((float)L_128, (float)L_129)));
		// bone.d *= s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_130 = V_18;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_131 = L_130;
		NullCheck(L_131);
		float L_132 = L_131->get_d_23();
		float L_133 = V_35;
		NullCheck(L_131);
		L_131->set_d_23(((float)il2cpp_codegen_multiply((float)L_132, (float)L_133)));
	}

IL_02cb:
	{
		// if (mixShearY > 0) {
		float L_134 = V_5;
		V_36 = (bool)((((float)L_134) > ((float)(0.0f)))? 1 : 0);
		bool L_135 = V_36;
		if (!L_135)
		{
			goto IL_038a;
		}
	}
	{
		// float r = MathUtils.Atan2(td, tb) - MathUtils.Atan2(tc, ta);
		float L_136 = V_11;
		float L_137 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtils_t7FEA8F9D49C516129B435137859E11B18CB1A37A_il2cpp_TypeInfo_var);
		float L_138;
		L_138 = MathUtils_Atan2_m1A65E2C02BD8BB1538F191E84AA984ECBE0CC492(L_136, L_137, /*hidden argument*/NULL);
		float L_139 = V_10;
		float L_140 = V_8;
		float L_141;
		L_141 = MathUtils_Atan2_m1A65E2C02BD8BB1538F191E84AA984ECBE0CC492(L_139, L_140, /*hidden argument*/NULL);
		V_37 = ((float)il2cpp_codegen_subtract((float)L_138, (float)L_141));
		// if (r > MathUtils.PI)
		float L_142 = V_37;
		V_41 = (bool)((((float)L_142) > ((float)(3.14159274f)))? 1 : 0);
		bool L_143 = V_41;
		if (!L_143)
		{
			goto IL_030e;
		}
	}
	{
		// r -= MathUtils.PI2;
		float L_144 = V_37;
		V_37 = ((float)il2cpp_codegen_subtract((float)L_144, (float)(6.28318548f)));
		goto IL_0327;
	}

IL_030e:
	{
		// else if (r < -MathUtils.PI) //
		float L_145 = V_37;
		V_42 = (bool)((((float)L_145) < ((float)(-3.14159274f)))? 1 : 0);
		bool L_146 = V_42;
		if (!L_146)
		{
			goto IL_0327;
		}
	}
	{
		// r += MathUtils.PI2;
		float L_147 = V_37;
		V_37 = ((float)il2cpp_codegen_add((float)L_147, (float)(6.28318548f)));
	}

IL_0327:
	{
		// float b = bone.b, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_148 = V_18;
		NullCheck(L_148);
		float L_149 = L_148->get_b_20();
		V_38 = L_149;
		// float b = bone.b, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_150 = V_18;
		NullCheck(L_150);
		float L_151 = L_150->get_d_23();
		V_39 = L_151;
		// r = MathUtils.Atan2(d, b) + (r - MathUtils.PI / 2 + offsetShearY) * mixShearY;
		float L_152 = V_39;
		float L_153 = V_38;
		IL2CPP_RUNTIME_CLASS_INIT(MathUtils_t7FEA8F9D49C516129B435137859E11B18CB1A37A_il2cpp_TypeInfo_var);
		float L_154;
		L_154 = MathUtils_Atan2_m1A65E2C02BD8BB1538F191E84AA984ECBE0CC492(L_152, L_153, /*hidden argument*/NULL);
		float L_155 = V_37;
		float L_156 = V_14;
		float L_157 = V_5;
		V_37 = ((float)il2cpp_codegen_add((float)L_154, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_155, (float)(1.57079637f))), (float)L_156)), (float)L_157))));
		// float s = (float)Math.Sqrt(b * b + d * d);
		float L_158 = V_38;
		float L_159 = V_38;
		float L_160 = V_39;
		float L_161 = V_39;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_162;
		L_162 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_158, (float)L_159)), (float)((float)il2cpp_codegen_multiply((float)L_160, (float)L_161)))))));
		V_40 = ((float)((float)L_162));
		// bone.b = MathUtils.Cos(r) * s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_163 = V_18;
		float L_164 = V_37;
		float L_165;
		L_165 = MathUtils_Cos_m7FD8701180B96271DE73E54281967B5C7A5E53E4(L_164, /*hidden argument*/NULL);
		float L_166 = V_40;
		NullCheck(L_163);
		L_163->set_b_20(((float)il2cpp_codegen_multiply((float)L_165, (float)L_166)));
		// bone.d = MathUtils.Sin(r) * s;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_167 = V_18;
		float L_168 = V_37;
		float L_169;
		L_169 = MathUtils_Sin_m547E78E2309AC63CC700D6716411C7A812D4D8EB(L_168, /*hidden argument*/NULL);
		float L_170 = V_40;
		NullCheck(L_167);
		L_167->set_d_23(((float)il2cpp_codegen_multiply((float)L_169, (float)L_170)));
	}

IL_038a:
	{
		// bone.UpdateAppliedTransform();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_171 = V_18;
		NullCheck(L_171);
		Bone_UpdateAppliedTransform_m7DB7872AA503EB7CFBDF14FCE1FC5E71309EF575(L_171, /*hidden argument*/NULL);
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		int32_t L_172 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_172, (int32_t)1));
	}

IL_0399:
	{
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		int32_t L_173 = V_16;
		int32_t L_174 = V_17;
		V_43 = (bool)((((int32_t)L_173) < ((int32_t)L_174))? 1 : 0);
		bool L_175 = V_43;
		if (L_175)
		{
			goto IL_00d3;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Spine.TransformConstraint::ApplyAbsoluteLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_ApplyAbsoluteLocal_m65A388BE147E0A0BC2E8BD5B8D89DEEFAF5871E8 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_6 = NULL;
	BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_10 = NULL;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_0 = __this->get_mixRotate_3();
		V_0 = L_0;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_1 = __this->get_mixX_4();
		V_1 = L_1;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_2 = __this->get_mixY_5();
		V_2 = L_2;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_3 = __this->get_mixScaleX_6();
		V_3 = L_3;
		// mixScaleY = this.mixScaleY, mixShearY = this.mixShearY;
		float L_4 = __this->get_mixScaleY_7();
		V_4 = L_4;
		// mixScaleY = this.mixScaleY, mixShearY = this.mixShearY;
		float L_5 = __this->get_mixShearY_8();
		V_5 = L_5;
		// Bone target = this.target;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_6 = __this->get_target_2();
		V_6 = L_6;
		// Bone[] bones = this.bones.Items;
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_7 = __this->get_bones_1();
		NullCheck(L_7);
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_8 = L_7->get_Items_0();
		V_7 = L_8;
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		V_8 = 0;
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_9 = __this->get_bones_1();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Count_1();
		V_9 = L_10;
		goto IL_01cb;
	}

IL_0057:
	{
		// Bone bone = bones[i];
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_11 = V_7;
		int32_t L_12 = V_8;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_10 = L_14;
		// float rotation = bone.arotation;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_15 = V_10;
		NullCheck(L_15);
		float L_16 = L_15->get_arotation_14();
		V_11 = L_16;
		// if (mixRotate != 0) rotation += (target.arotation - rotation + data.offsetRotation) * mixRotate;
		float L_17 = V_0;
		V_17 = (bool)((((int32_t)((((float)L_17) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_17;
		if (!L_18)
		{
			goto IL_0096;
		}
	}
	{
		// if (mixRotate != 0) rotation += (target.arotation - rotation + data.offsetRotation) * mixRotate;
		float L_19 = V_11;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_20 = V_6;
		NullCheck(L_20);
		float L_21 = L_20->get_arotation_14();
		float L_22 = V_11;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_23 = __this->get_data_0();
		NullCheck(L_23);
		float L_24 = L_23->get_offsetRotation_11();
		float L_25 = V_0;
		V_11 = ((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_22)), (float)L_24)), (float)L_25))));
	}

IL_0096:
	{
		// float x = bone.ax, y = bone.ay;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_26 = V_10;
		NullCheck(L_26);
		float L_27 = L_26->get_ax_12();
		V_12 = L_27;
		// float x = bone.ax, y = bone.ay;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_28 = V_10;
		NullCheck(L_28);
		float L_29 = L_28->get_ay_13();
		V_13 = L_29;
		// x += (target.ax - x + data.offsetX) * mixX;
		float L_30 = V_12;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_31 = V_6;
		NullCheck(L_31);
		float L_32 = L_31->get_ax_12();
		float L_33 = V_12;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_34 = __this->get_data_0();
		NullCheck(L_34);
		float L_35 = L_34->get_offsetX_12();
		float L_36 = V_1;
		V_12 = ((float)il2cpp_codegen_add((float)L_30, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_32, (float)L_33)), (float)L_35)), (float)L_36))));
		// y += (target.ay - y + data.offsetY) * mixY;
		float L_37 = V_13;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_38 = V_6;
		NullCheck(L_38);
		float L_39 = L_38->get_ay_13();
		float L_40 = V_13;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_41 = __this->get_data_0();
		NullCheck(L_41);
		float L_42 = L_41->get_offsetY_13();
		float L_43 = V_2;
		V_13 = ((float)il2cpp_codegen_add((float)L_37, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_39, (float)L_40)), (float)L_42)), (float)L_43))));
		// float scaleX = bone.ascaleX, scaleY = bone.ascaleY;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_44 = V_10;
		NullCheck(L_44);
		float L_45 = L_44->get_ascaleX_15();
		V_14 = L_45;
		// float scaleX = bone.ascaleX, scaleY = bone.ascaleY;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_46 = V_10;
		NullCheck(L_46);
		float L_47 = L_46->get_ascaleY_16();
		V_15 = L_47;
		// if (mixScaleX != 0 && scaleX != 0)
		float L_48 = V_3;
		if ((((float)L_48) == ((float)(0.0f))))
		{
			goto IL_010a;
		}
	}
	{
		float L_49 = V_14;
		G_B6_0 = ((((int32_t)((((float)L_49) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_010b;
	}

IL_010a:
	{
		G_B6_0 = 0;
	}

IL_010b:
	{
		V_18 = (bool)G_B6_0;
		bool L_50 = V_18;
		if (!L_50)
		{
			goto IL_0131;
		}
	}
	{
		// scaleX = (scaleX + (target.ascaleX - scaleX + data.offsetScaleX) * mixScaleX) / scaleX;
		float L_51 = V_14;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_52 = V_6;
		NullCheck(L_52);
		float L_53 = L_52->get_ascaleX_15();
		float L_54 = V_14;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_55 = __this->get_data_0();
		NullCheck(L_55);
		float L_56 = L_55->get_offsetScaleX_14();
		float L_57 = V_3;
		float L_58 = V_14;
		V_14 = ((float)((float)((float)il2cpp_codegen_add((float)L_51, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_53, (float)L_54)), (float)L_56)), (float)L_57))))/(float)L_58));
	}

IL_0131:
	{
		// if (mixScaleY != 0 && scaleY != 0)
		float L_59 = V_4;
		if ((((float)L_59) == ((float)(0.0f))))
		{
			goto IL_0148;
		}
	}
	{
		float L_60 = V_15;
		G_B11_0 = ((((int32_t)((((float)L_60) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0149;
	}

IL_0148:
	{
		G_B11_0 = 0;
	}

IL_0149:
	{
		V_19 = (bool)G_B11_0;
		bool L_61 = V_19;
		if (!L_61)
		{
			goto IL_0170;
		}
	}
	{
		// scaleY = (scaleY + (target.ascaleY - scaleY + data.offsetScaleY) * mixScaleY) / scaleY;
		float L_62 = V_15;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_63 = V_6;
		NullCheck(L_63);
		float L_64 = L_63->get_ascaleY_16();
		float L_65 = V_15;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_66 = __this->get_data_0();
		NullCheck(L_66);
		float L_67 = L_66->get_offsetScaleY_15();
		float L_68 = V_4;
		float L_69 = V_15;
		V_15 = ((float)((float)((float)il2cpp_codegen_add((float)L_62, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_64, (float)L_65)), (float)L_67)), (float)L_68))))/(float)L_69));
	}

IL_0170:
	{
		// float shearY = bone.ashearY;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_70 = V_10;
		NullCheck(L_70);
		float L_71 = L_70->get_ashearY_18();
		V_16 = L_71;
		// if (mixShearY != 0) shearY += (target.ashearY - shearY + data.offsetShearY) * mixShearY;
		float L_72 = V_5;
		V_20 = (bool)((((int32_t)((((float)L_72) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_73 = V_20;
		if (!L_73)
		{
			goto IL_01a9;
		}
	}
	{
		// if (mixShearY != 0) shearY += (target.ashearY - shearY + data.offsetShearY) * mixShearY;
		float L_74 = V_16;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_75 = V_6;
		NullCheck(L_75);
		float L_76 = L_75->get_ashearY_18();
		float L_77 = V_16;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_78 = __this->get_data_0();
		NullCheck(L_78);
		float L_79 = L_78->get_offsetShearY_16();
		float L_80 = V_5;
		V_16 = ((float)il2cpp_codegen_add((float)L_74, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_76, (float)L_77)), (float)L_79)), (float)L_80))));
	}

IL_01a9:
	{
		// bone.UpdateWorldTransform(x, y, rotation, scaleX, scaleY, bone.ashearX, shearY);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_81 = V_10;
		float L_82 = V_12;
		float L_83 = V_13;
		float L_84 = V_11;
		float L_85 = V_14;
		float L_86 = V_15;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_87 = V_10;
		NullCheck(L_87);
		float L_88 = L_87->get_ashearX_17();
		float L_89 = V_16;
		NullCheck(L_81);
		Bone_UpdateWorldTransform_mF60F460707A11A4D5C077C88F5383EABD462C7EC(L_81, L_82, L_83, L_84, L_85, L_86, L_88, L_89, /*hidden argument*/NULL);
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		int32_t L_90 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
	}

IL_01cb:
	{
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		int32_t L_91 = V_8;
		int32_t L_92 = V_9;
		V_21 = (bool)((((int32_t)L_91) < ((int32_t)L_92))? 1 : 0);
		bool L_93 = V_21;
		if (L_93)
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Spine.TransformConstraint::ApplyRelativeLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_ApplyRelativeLocal_m8F7D3C7E661D97B6BBFBEF9A2C9BEA728CA2A925 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_6 = NULL;
	BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_10 = NULL;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	bool V_17 = false;
	{
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_0 = __this->get_mixRotate_3();
		V_0 = L_0;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_1 = __this->get_mixX_4();
		V_1 = L_1;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_2 = __this->get_mixY_5();
		V_2 = L_2;
		// float mixRotate = this.mixRotate, mixX = this.mixX, mixY = this.mixY, mixScaleX = this.mixScaleX,
		float L_3 = __this->get_mixScaleX_6();
		V_3 = L_3;
		// mixScaleY = this.mixScaleY, mixShearY = this.mixShearY;
		float L_4 = __this->get_mixScaleY_7();
		V_4 = L_4;
		// mixScaleY = this.mixScaleY, mixShearY = this.mixShearY;
		float L_5 = __this->get_mixShearY_8();
		V_5 = L_5;
		// Bone target = this.target;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_6 = __this->get_target_2();
		V_6 = L_6;
		// Bone[] bones = this.bones.Items;
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_7 = __this->get_bones_1();
		NullCheck(L_7);
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_8 = L_7->get_Items_0();
		V_7 = L_8;
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		V_8 = 0;
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_9 = __this->get_bones_1();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Count_1();
		V_9 = L_10;
		goto IL_0155;
	}

IL_0057:
	{
		// Bone bone = bones[i];
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_11 = V_7;
		int32_t L_12 = V_8;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_10 = L_14;
		// float rotation = bone.arotation + (target.arotation + data.offsetRotation) * mixRotate;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_15 = V_10;
		NullCheck(L_15);
		float L_16 = L_15->get_arotation_14();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_17 = V_6;
		NullCheck(L_17);
		float L_18 = L_17->get_arotation_14();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_19 = __this->get_data_0();
		NullCheck(L_19);
		float L_20 = L_19->get_offsetRotation_11();
		float L_21 = V_0;
		V_11 = ((float)il2cpp_codegen_add((float)L_16, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_18, (float)L_20)), (float)L_21))));
		// float x = bone.ax + (target.ax + data.offsetX) * mixX;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_22 = V_10;
		NullCheck(L_22);
		float L_23 = L_22->get_ax_12();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_24 = V_6;
		NullCheck(L_24);
		float L_25 = L_24->get_ax_12();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_26 = __this->get_data_0();
		NullCheck(L_26);
		float L_27 = L_26->get_offsetX_12();
		float L_28 = V_1;
		V_12 = ((float)il2cpp_codegen_add((float)L_23, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_25, (float)L_27)), (float)L_28))));
		// float y = bone.ay + (target.ay + data.offsetY) * mixY;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_29 = V_10;
		NullCheck(L_29);
		float L_30 = L_29->get_ay_13();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_31 = V_6;
		NullCheck(L_31);
		float L_32 = L_31->get_ay_13();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_33 = __this->get_data_0();
		NullCheck(L_33);
		float L_34 = L_33->get_offsetY_13();
		float L_35 = V_2;
		V_13 = ((float)il2cpp_codegen_add((float)L_30, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_32, (float)L_34)), (float)L_35))));
		// float scaleX = bone.ascaleX * (((target.ascaleX - 1 + data.offsetScaleX) * mixScaleX) + 1);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_36 = V_10;
		NullCheck(L_36);
		float L_37 = L_36->get_ascaleX_15();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_38 = V_6;
		NullCheck(L_38);
		float L_39 = L_38->get_ascaleX_15();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_40 = __this->get_data_0();
		NullCheck(L_40);
		float L_41 = L_40->get_offsetScaleX_14();
		float L_42 = V_3;
		V_14 = ((float)il2cpp_codegen_multiply((float)L_37, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_39, (float)(1.0f))), (float)L_41)), (float)L_42)), (float)(1.0f)))));
		// float scaleY = bone.ascaleY * (((target.ascaleY - 1 + data.offsetScaleY) * mixScaleY) + 1);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_43 = V_10;
		NullCheck(L_43);
		float L_44 = L_43->get_ascaleY_16();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_45 = V_6;
		NullCheck(L_45);
		float L_46 = L_45->get_ascaleY_16();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_47 = __this->get_data_0();
		NullCheck(L_47);
		float L_48 = L_47->get_offsetScaleY_15();
		float L_49 = V_4;
		V_15 = ((float)il2cpp_codegen_multiply((float)L_44, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_46, (float)(1.0f))), (float)L_48)), (float)L_49)), (float)(1.0f)))));
		// float shearY = bone.ashearY + (target.ashearY + data.offsetShearY) * mixShearY;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_50 = V_10;
		NullCheck(L_50);
		float L_51 = L_50->get_ashearY_18();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_52 = V_6;
		NullCheck(L_52);
		float L_53 = L_52->get_ashearY_18();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_54 = __this->get_data_0();
		NullCheck(L_54);
		float L_55 = L_54->get_offsetShearY_16();
		float L_56 = V_5;
		V_16 = ((float)il2cpp_codegen_add((float)L_51, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_53, (float)L_55)), (float)L_56))));
		// bone.UpdateWorldTransform(x, y, rotation, scaleX, scaleY, bone.ashearX, shearY);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_57 = V_10;
		float L_58 = V_12;
		float L_59 = V_13;
		float L_60 = V_11;
		float L_61 = V_14;
		float L_62 = V_15;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_63 = V_10;
		NullCheck(L_63);
		float L_64 = L_63->get_ashearX_17();
		float L_65 = V_16;
		NullCheck(L_57);
		Bone_UpdateWorldTransform_mF60F460707A11A4D5C077C88F5383EABD462C7EC(L_57, L_58, L_59, L_60, L_61, L_62, L_64, L_65, /*hidden argument*/NULL);
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		int32_t L_66 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_0155:
	{
		// for (int i = 0, n = this.bones.Count; i < n; i++) {
		int32_t L_67 = V_8;
		int32_t L_68 = V_9;
		V_17 = (bool)((((int32_t)L_67) < ((int32_t)L_68))? 1 : 0);
		bool L_69 = V_17;
		if (L_69)
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// Spine.ExposedList`1<Spine.Bone> Spine.TransformConstraint::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * TransformConstraint_get_Bones_m157CF6EA00F5B8D1BE7F7FF90CCB0F93C8C43966 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * V_0 = NULL;
	{
		// public ExposedList<Bone> Bones { get { return bones; } }
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_0 = __this->get_bones_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public ExposedList<Bone> Bones { get { return bones; } }
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_1 = V_0;
		return L_1;
	}
}
// Spine.Bone Spine.TransformConstraint::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * TransformConstraint_get_Target_m023E434382C35F2EB309E5E3322BB8480FD1E1B0 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_0 = NULL;
	{
		// public Bone Target { get { return target; } set { target = value; } }
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_0 = __this->get_target_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Bone Target { get { return target; } set { target = value; } }
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraint::set_Target(Spine.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_set_Target_mCFBCAA4CC7EB59DB18FE146A1D373F5D0FEAFDEF (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * ___value0, const RuntimeMethod* method)
{
	{
		// public Bone Target { get { return target; } set { target = value; } }
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_0 = ___value0;
		__this->set_target_2(L_0);
		// public Bone Target { get { return target; } set { target = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraint::get_MixRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraint_get_MixRotate_mD2242F21E7347C1B19E2A87DB4EAAC1FC628E750 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixRotate { get { return mixRotate; } set { mixRotate = value; } }
		float L_0 = __this->get_mixRotate_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixRotate { get { return mixRotate; } set { mixRotate = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraint::set_MixRotate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_set_MixRotate_mDA44E7B7CB3A131654EBFBCDBE6A703943437E8B (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixRotate { get { return mixRotate; } set { mixRotate = value; } }
		float L_0 = ___value0;
		__this->set_mixRotate_3(L_0);
		// public float MixRotate { get { return mixRotate; } set { mixRotate = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraint::get_MixX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraint_get_MixX_mB1EC7C4F941CDE47AB4C38A141D579067F6C8A76 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixX { get { return mixX; } set { mixX = value; } }
		float L_0 = __this->get_mixX_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixX { get { return mixX; } set { mixX = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraint::set_MixX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_set_MixX_m7E8F327590FCF048DD8641AF461C0CBA7E9228E8 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixX { get { return mixX; } set { mixX = value; } }
		float L_0 = ___value0;
		__this->set_mixX_4(L_0);
		// public float MixX { get { return mixX; } set { mixX = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraint::get_MixY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraint_get_MixY_m127AD07A20667E6C8FA5C9B46BA5D22930BD3CF1 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixY { get { return mixY; } set { mixY = value; } }
		float L_0 = __this->get_mixY_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixY { get { return mixY; } set { mixY = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraint::set_MixY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_set_MixY_mDD59B822C8473C9FAE16F04F39E07EAF22E80A2F (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixY { get { return mixY; } set { mixY = value; } }
		float L_0 = ___value0;
		__this->set_mixY_5(L_0);
		// public float MixY { get { return mixY; } set { mixY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraint::get_MixScaleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraint_get_MixScaleX_mB63F6BF035EB5FE58B898DEA1A196CD0910E43B9 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixScaleX { get { return mixScaleX; } set { mixScaleX = value; } }
		float L_0 = __this->get_mixScaleX_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixScaleX { get { return mixScaleX; } set { mixScaleX = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraint::set_MixScaleX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_set_MixScaleX_m42DA8EB05C925F897BFEA6278F75064445807F55 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixScaleX { get { return mixScaleX; } set { mixScaleX = value; } }
		float L_0 = ___value0;
		__this->set_mixScaleX_6(L_0);
		// public float MixScaleX { get { return mixScaleX; } set { mixScaleX = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraint::get_MixScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraint_get_MixScaleY_mDD8A24BB5B948AAFACA22F42917B575A9BDF8D34 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixScaleY { get { return mixScaleY; } set { mixScaleY = value; } }
		float L_0 = __this->get_mixScaleY_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixScaleY { get { return mixScaleY; } set { mixScaleY = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraint::set_MixScaleY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_set_MixScaleY_m321BBA542743D9AA97325B0E8DB1DA30DDBB95F6 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixScaleY { get { return mixScaleY; } set { mixScaleY = value; } }
		float L_0 = ___value0;
		__this->set_mixScaleY_7(L_0);
		// public float MixScaleY { get { return mixScaleY; } set { mixScaleY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraint::get_MixShearY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraint_get_MixShearY_mB03F628E06CF2B1C70ED2B8D062899DFA07E0A26 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixShearY { get { return mixShearY; } set { mixShearY = value; } }
		float L_0 = __this->get_mixShearY_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixShearY { get { return mixShearY; } set { mixShearY = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraint::set_MixShearY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_set_MixShearY_m5FD63A9E7421A12DF7A7A10CA5DDCEA2DF3DDFFC (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixShearY { get { return mixShearY; } set { mixShearY = value; } }
		float L_0 = ___value0;
		__this->set_mixShearY_8(L_0);
		// public float MixShearY { get { return mixShearY; } set { mixShearY = value; } }
		return;
	}
}
// System.Boolean Spine.TransformConstraint::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformConstraint_get_Active_m1BA7D2749A5550EFA893494AEECF95E725547B66 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool Active { get { return active; } }
		bool L_0 = __this->get_active_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool Active { get { return active; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// Spine.TransformConstraintData Spine.TransformConstraint::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * TransformConstraint_get_Data_mD5A78CADB2EDE00B42456B266F6B2847FD39323B (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * V_0 = NULL;
	{
		// public TransformConstraintData Data { get { return data; } }
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_0 = __this->get_data_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public TransformConstraintData Data { get { return data; } }
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_1 = V_0;
		return L_1;
	}
}
// System.String Spine.TransformConstraint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransformConstraint_ToString_m6BD3AEEE247258C73B22A570A854FA79DB4F0925 (TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return data.name;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_0 = __this->get_data_0();
		NullCheck(L_0);
		String_t* L_1 = ((ConstraintData_t71BA8ACA83AC8927FE1FEDFAB6A24846C01D138F *)L_0)->get_name_0();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_2 = V_0;
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
// Spine.ExposedList`1<Spine.BoneData> Spine.TransformConstraintData::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * TransformConstraintData_get_Bones_m6BB8037D41EC56C5B5E49280876B5E9F6E1D47EB (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * V_0 = NULL;
	{
		// public ExposedList<BoneData> Bones { get { return bones; } }
		ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * L_0 = __this->get_bones_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public ExposedList<BoneData> Bones { get { return bones; } }
		ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * L_1 = V_0;
		return L_1;
	}
}
// Spine.BoneData Spine.TransformConstraintData::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * TransformConstraintData_get_Target_mDBB98350468322FE0D74377C66641920CCEDB16F (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * V_0 = NULL;
	{
		// public BoneData Target { get { return target; } set { target = value; } }
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_0 = __this->get_target_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public BoneData Target { get { return target; } set { target = value; } }
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_Target(Spine.BoneData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_Target_m6EF899BC555930BFABC48BB255B91EC72D5D7B78 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * ___value0, const RuntimeMethod* method)
{
	{
		// public BoneData Target { get { return target; } set { target = value; } }
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_0 = ___value0;
		__this->set_target_4(L_0);
		// public BoneData Target { get { return target; } set { target = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixRotate_m7C59527C6FFBF98533FE2C1727C8100600922CF5 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixRotate { get { return mixRotate; } set { mixRotate = value; } }
		float L_0 = __this->get_mixRotate_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixRotate { get { return mixRotate; } set { mixRotate = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_MixRotate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixRotate_m9C4A02740AE6E0A64D8BA0716E0BD2025A75B788 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixRotate { get { return mixRotate; } set { mixRotate = value; } }
		float L_0 = ___value0;
		__this->set_mixRotate_5(L_0);
		// public float MixRotate { get { return mixRotate; } set { mixRotate = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixX_mEAFC191733EA44FE0CDF6CB1EFE8F52FBFBB62B8 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixX { get { return mixX; } set { mixX = value; } }
		float L_0 = __this->get_mixX_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixX { get { return mixX; } set { mixX = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_MixX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixX_m46C5032F38E95C70BB432E57BC903FD75DDFCE94 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixX { get { return mixX; } set { mixX = value; } }
		float L_0 = ___value0;
		__this->set_mixX_6(L_0);
		// public float MixX { get { return mixX; } set { mixX = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixY_m87EF1B7DE34F62F91B260444E24C616005B89E08 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixY { get { return mixY; } set { mixY = value; } }
		float L_0 = __this->get_mixY_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixY { get { return mixY; } set { mixY = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_MixY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixY_mEF6CABEA43A2F144A1DA26C37CB605828F78B689 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixY { get { return mixY; } set { mixY = value; } }
		float L_0 = ___value0;
		__this->set_mixY_7(L_0);
		// public float MixY { get { return mixY; } set { mixY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixScaleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixScaleX_mD55C589353D015BBA91EE2B262741036CA62A4CA (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixScaleX { get { return mixScaleX; } set { mixScaleX = value; } }
		float L_0 = __this->get_mixScaleX_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixScaleX { get { return mixScaleX; } set { mixScaleX = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_MixScaleX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixScaleX_m8FCF4A14CB771F8498AAD4F6FDD5E6F8F4264135 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixScaleX { get { return mixScaleX; } set { mixScaleX = value; } }
		float L_0 = ___value0;
		__this->set_mixScaleX_8(L_0);
		// public float MixScaleX { get { return mixScaleX; } set { mixScaleX = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixScaleY_m9F720C2A646830B70A7943F8CA51837EAB153248 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixScaleY { get { return mixScaleY; } set { mixScaleY = value; } }
		float L_0 = __this->get_mixScaleY_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixScaleY { get { return mixScaleY; } set { mixScaleY = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_MixScaleY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixScaleY_mCC474F518D88A38D21542676ABEF00B71D3F0701 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixScaleY { get { return mixScaleY; } set { mixScaleY = value; } }
		float L_0 = ___value0;
		__this->set_mixScaleY_9(L_0);
		// public float MixScaleY { get { return mixScaleY; } set { mixScaleY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_MixShearY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_MixShearY_mDB418B51BF4E05CD338E965DDDE2214B64F09E20 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float MixShearY { get { return mixShearY; } set { mixShearY = value; } }
		float L_0 = __this->get_mixShearY_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MixShearY { get { return mixShearY; } set { mixShearY = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_MixShearY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_MixShearY_m5DE1B2FCA71BD80F12D3FCFCABF118EAFBAA51FE (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MixShearY { get { return mixShearY; } set { mixShearY = value; } }
		float L_0 = ___value0;
		__this->set_mixShearY_10(L_0);
		// public float MixShearY { get { return mixShearY; } set { mixShearY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetRotation_mF5F756B8B9D4F9E7A80FCCD13709C6A916AAB9FD (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float OffsetRotation { get { return offsetRotation; } set { offsetRotation = value; } }
		float L_0 = __this->get_offsetRotation_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float OffsetRotation { get { return offsetRotation; } set { offsetRotation = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetRotation_mDD03D3FB8667DA4B6F9F83CD89EEB9CF5B8EF0F7 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetRotation { get { return offsetRotation; } set { offsetRotation = value; } }
		float L_0 = ___value0;
		__this->set_offsetRotation_11(L_0);
		// public float OffsetRotation { get { return offsetRotation; } set { offsetRotation = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetX_mD99D5F119EF7EA41D1EAE1CDAFD60D9829C95D7A (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float OffsetX { get { return offsetX; } set { offsetX = value; } }
		float L_0 = __this->get_offsetX_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float OffsetX { get { return offsetX; } set { offsetX = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetX_m726017165F22C9D26416A796E02681C31DAF018D (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetX { get { return offsetX; } set { offsetX = value; } }
		float L_0 = ___value0;
		__this->set_offsetX_12(L_0);
		// public float OffsetX { get { return offsetX; } set { offsetX = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetY_m0E2C89D9812A0479CF41B0010AB073F64619B172 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float OffsetY { get { return offsetY; } set { offsetY = value; } }
		float L_0 = __this->get_offsetY_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float OffsetY { get { return offsetY; } set { offsetY = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetY_mE58B5CBB7786DE712577DEEC0E2EF421C4AAAF19 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetY { get { return offsetY; } set { offsetY = value; } }
		float L_0 = ___value0;
		__this->set_offsetY_13(L_0);
		// public float OffsetY { get { return offsetY; } set { offsetY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetScaleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetScaleX_mCE5B282876631F5DF0ECD758E68FC3245FD8BBC9 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float OffsetScaleX { get { return offsetScaleX; } set { offsetScaleX = value; } }
		float L_0 = __this->get_offsetScaleX_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float OffsetScaleX { get { return offsetScaleX; } set { offsetScaleX = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetScaleX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetScaleX_mB471C13E3E68FB399C31E02146F32FE623B51A9E (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetScaleX { get { return offsetScaleX; } set { offsetScaleX = value; } }
		float L_0 = ___value0;
		__this->set_offsetScaleX_14(L_0);
		// public float OffsetScaleX { get { return offsetScaleX; } set { offsetScaleX = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetScaleY_mB8738A1A15B2849A14D222E9556940AEA13F67FD (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float OffsetScaleY { get { return offsetScaleY; } set { offsetScaleY = value; } }
		float L_0 = __this->get_offsetScaleY_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float OffsetScaleY { get { return offsetScaleY; } set { offsetScaleY = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetScaleY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetScaleY_m7FAEB4258CA442D71FA5CE866EB66B6C850ECE0C (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetScaleY { get { return offsetScaleY; } set { offsetScaleY = value; } }
		float L_0 = ___value0;
		__this->set_offsetScaleY_15(L_0);
		// public float OffsetScaleY { get { return offsetScaleY; } set { offsetScaleY = value; } }
		return;
	}
}
// System.Single Spine.TransformConstraintData::get_OffsetShearY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformConstraintData_get_OffsetShearY_m2B097A07FC5174592A5DC980420E6D6D3DBD1898 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float OffsetShearY { get { return offsetShearY; } set { offsetShearY = value; } }
		float L_0 = __this->get_offsetShearY_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float OffsetShearY { get { return offsetShearY; } set { offsetShearY = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_OffsetShearY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_OffsetShearY_m68BC85090946E5995E9D2EC8B09084F2736D3D0B (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float OffsetShearY { get { return offsetShearY; } set { offsetShearY = value; } }
		float L_0 = ___value0;
		__this->set_offsetShearY_16(L_0);
		// public float OffsetShearY { get { return offsetShearY; } set { offsetShearY = value; } }
		return;
	}
}
// System.Boolean Spine.TransformConstraintData::get_Relative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformConstraintData_get_Relative_mD2E3E8BD9ACA4A8A1BE2ABFAA257EEF4D5CB0067 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool Relative { get { return relative; } set { relative = value; } }
		bool L_0 = __this->get_relative_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool Relative { get { return relative; } set { relative = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_Relative(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_Relative_m1AF0FF03B732AE113386728C67D07A74A3F1C8C7 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Relative { get { return relative; } set { relative = value; } }
		bool L_0 = ___value0;
		__this->set_relative_17(L_0);
		// public bool Relative { get { return relative; } set { relative = value; } }
		return;
	}
}
// System.Boolean Spine.TransformConstraintData::get_Local()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformConstraintData_get_Local_mEAC211830B1EB396098CD3EBF459C56682C740A8 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool Local { get { return local; } set { local = value; } }
		bool L_0 = __this->get_local_18();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool Local { get { return local; } set { local = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintData::set_Local(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData_set_Local_m6887A36051C35D4CFA614907A5A7A8FC3E62B4E3 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Local { get { return local; } set { local = value; } }
		bool L_0 = ___value0;
		__this->set_local_18(L_0);
		// public bool Local { get { return local; } set { local = value; } }
		return;
	}
}
// System.Void Spine.TransformConstraintData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintData__ctor_m56AE808E831480C2CDE76D94DC30C64324428579 (TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_m316DF0208BC8528788112ABDE3A956F6B176F5DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ExposedList<BoneData> bones = new ExposedList<BoneData>();
		ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 * L_0 = (ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36 *)il2cpp_codegen_object_new(ExposedList_1_t55FC025D5A735E30067A5D1CCB31D11EA181CF36_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_m316DF0208BC8528788112ABDE3A956F6B176F5DC(L_0, /*hidden argument*/ExposedList_1__ctor_m316DF0208BC8528788112ABDE3A956F6B176F5DC_RuntimeMethod_var);
		__this->set_bones_3(L_0);
		// public TransformConstraintData (string name) : base(name) {
		String_t* L_1 = ___name0;
		ConstraintData__ctor_mB5CE0EF68267D3BE4AAC43A4458DC4E0134DC4A9(__this, L_1, /*hidden argument*/NULL);
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
// System.Void Spine.TransformConstraintTimeline::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintTimeline__ctor_mC7D13D68722C307E79B17EDE4076A5A3E4CD903E (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, int32_t ___transformConstraintIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// : base(frameCount, bezierCount, (int)Property.TransformConstraint + "|" + transformConstraintIndex) {
		int32_t L_0 = ___frameCount0;
		int32_t L_1 = ___bezierCount1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		V_0 = ((int32_t)16);
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___transformConstraintIndex2), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_4, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		CurveTimeline__ctor_mAF5F864455A1B5677ED313F38348F08065180211(__this, L_0, L_1, L_3, /*hidden argument*/NULL);
		// constraintIndex = transformConstraintIndex;
		int32_t L_7 = ___transformConstraintIndex2;
		__this->set_constraintIndex_14(L_7);
		// }
		return;
	}
}
// System.Int32 Spine.TransformConstraintTimeline::get_FrameEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformConstraintTimeline_get_FrameEntries_mC7C43F3F6163022F1B9B016722E40EAB5E1627AC (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return ENTRIES;
		V_0 = 7;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 Spine.TransformConstraintTimeline::get_TransformConstraintIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformConstraintTimeline_get_TransformConstraintIndex_m42DD7662AB7B71B712357EEE8CA9E87420F7934F (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return constraintIndex;
		int32_t L_0 = __this->get_constraintIndex_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TransformConstraintTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintTimeline_SetFrame_m033D1AFDC86C3D44072143E006B8D51B8F49772B (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, int32_t ___frame0, float ___time1, float ___mixRotate2, float ___mixX3, float ___mixY4, float ___mixScaleX5, float ___mixScaleY6, float ___mixShearY7, const RuntimeMethod* method)
{
	{
		// frame *= ENTRIES;
		int32_t L_0 = ___frame0;
		___frame0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)7));
		// frames[frame] = time;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_2 = ___frame0;
		float L_3 = ___time1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (float)L_3);
		// frames[frame + ROTATE] = mixRotate;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_5 = ___frame0;
		float L_6 = ___mixRotate2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1))), (float)L_6);
		// frames[frame + X] = mixX;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_8 = ___frame0;
		float L_9 = ___mixX3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)2))), (float)L_9);
		// frames[frame + Y] = mixY;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_11 = ___frame0;
		float L_12 = ___mixY4;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)3))), (float)L_12);
		// frames[frame + SCALEX] = mixScaleX;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_14 = ___frame0;
		float L_15 = ___mixScaleX5;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)4))), (float)L_15);
		// frames[frame + SCALEY] = mixScaleY;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_17 = ___frame0;
		float L_18 = ___mixScaleY6;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)5))), (float)L_18);
		// frames[frame + SHEARY] = mixShearY;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_20 = ___frame0;
		float L_21 = ___mixShearY7;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)6))), (float)L_21);
		// }
		return;
	}
}
// System.Void Spine.TransformConstraintTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixBlend,Spine.MixDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintTimeline_Apply_m3A54DD5710F7F222DE43264E005891954DE4A9A1 (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A * ___firedEvents3, float ___alpha4, int32_t ___blend5, int32_t ___direction6, const RuntimeMethod* method)
{
	TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	bool V_8 = false;
	bool V_9 = false;
	TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * V_14 = NULL;
	{
		// TransformConstraint constraint = skeleton.transformConstraints.Items[constraintIndex];
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_0 = ___skeleton0;
		NullCheck(L_0);
		ExposedList_1_t56F73F3BF0C40E1C9EF32828CD09773498FDFB0F * L_1 = L_0->get_transformConstraints_5();
		NullCheck(L_1);
		TransformConstraintU5BU5D_tAAB40625ABA9CEE91FE93330DA53DA127EB7E446* L_2 = L_1->get_Items_0();
		int32_t L_3 = __this->get_constraintIndex_14();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (!constraint.active) return;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->get_active_9();
		V_8 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_0028;
		}
	}
	{
		// if (!constraint.active) return;
		goto IL_02d7;
	}

IL_0028:
	{
		// float[] frames = this.frames;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		V_1 = L_9;
		// if (time < frames[0]) {
		float L_10 = ___time2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		float L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_9 = (bool)((((float)L_10) < ((float)L_13))? 1 : 0);
		bool L_14 = V_9;
		if (!L_14)
		{
			goto IL_0170;
		}
	}
	{
		// TransformConstraintData data = constraint.data;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_15 = V_0;
		NullCheck(L_15);
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_16 = L_15->get_data_0();
		V_10 = L_16;
		// switch (blend) {
		int32_t L_17 = ___blend5;
		V_12 = L_17;
		int32_t L_18 = V_12;
		V_11 = L_18;
		int32_t L_19 = V_11;
		if (!L_19)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0055;
	}

IL_0055:
	{
		int32_t L_20 = V_11;
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_00b2;
		}
	}
	{
		goto IL_016b;
	}

IL_005f:
	{
		// constraint.mixRotate = data.mixRotate;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_21 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_22 = V_10;
		NullCheck(L_22);
		float L_23 = L_22->get_mixRotate_5();
		NullCheck(L_21);
		L_21->set_mixRotate_3(L_23);
		// constraint.mixX = data.mixX;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_24 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_25 = V_10;
		NullCheck(L_25);
		float L_26 = L_25->get_mixX_6();
		NullCheck(L_24);
		L_24->set_mixX_4(L_26);
		// constraint.mixY = data.mixY;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_27 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_28 = V_10;
		NullCheck(L_28);
		float L_29 = L_28->get_mixY_7();
		NullCheck(L_27);
		L_27->set_mixY_5(L_29);
		// constraint.mixScaleX = data.mixScaleX;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_30 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_31 = V_10;
		NullCheck(L_31);
		float L_32 = L_31->get_mixScaleX_8();
		NullCheck(L_30);
		L_30->set_mixScaleX_6(L_32);
		// constraint.mixScaleY = data.mixScaleY;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_33 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_34 = V_10;
		NullCheck(L_34);
		float L_35 = L_34->get_mixScaleY_9();
		NullCheck(L_33);
		L_33->set_mixScaleY_7(L_35);
		// constraint.mixShearY = data.mixShearY;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_36 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_37 = V_10;
		NullCheck(L_37);
		float L_38 = L_37->get_mixShearY_10();
		NullCheck(L_36);
		L_36->set_mixShearY_8(L_38);
		// return;
		goto IL_02d7;
	}

IL_00b2:
	{
		// constraint.mixRotate += (data.mixRotate - constraint.mixRotate) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_39 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_40 = L_39;
		NullCheck(L_40);
		float L_41 = L_40->get_mixRotate_3();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_42 = V_10;
		NullCheck(L_42);
		float L_43 = L_42->get_mixRotate_5();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_44 = V_0;
		NullCheck(L_44);
		float L_45 = L_44->get_mixRotate_3();
		float L_46 = ___alpha4;
		NullCheck(L_40);
		L_40->set_mixRotate_3(((float)il2cpp_codegen_add((float)L_41, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_43, (float)L_45)), (float)L_46)))));
		// constraint.mixX += (data.mixX - constraint.mixX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_47 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_48 = L_47;
		NullCheck(L_48);
		float L_49 = L_48->get_mixX_4();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_50 = V_10;
		NullCheck(L_50);
		float L_51 = L_50->get_mixX_6();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_52 = V_0;
		NullCheck(L_52);
		float L_53 = L_52->get_mixX_4();
		float L_54 = ___alpha4;
		NullCheck(L_48);
		L_48->set_mixX_4(((float)il2cpp_codegen_add((float)L_49, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_51, (float)L_53)), (float)L_54)))));
		// constraint.mixY += (data.mixY - constraint.mixY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_55 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_56 = L_55;
		NullCheck(L_56);
		float L_57 = L_56->get_mixY_5();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_58 = V_10;
		NullCheck(L_58);
		float L_59 = L_58->get_mixY_7();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_60 = V_0;
		NullCheck(L_60);
		float L_61 = L_60->get_mixY_5();
		float L_62 = ___alpha4;
		NullCheck(L_56);
		L_56->set_mixY_5(((float)il2cpp_codegen_add((float)L_57, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_59, (float)L_61)), (float)L_62)))));
		// constraint.mixScaleX += (data.mixScaleX - constraint.mixScaleX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_63 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_64 = L_63;
		NullCheck(L_64);
		float L_65 = L_64->get_mixScaleX_6();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_66 = V_10;
		NullCheck(L_66);
		float L_67 = L_66->get_mixScaleX_8();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_68 = V_0;
		NullCheck(L_68);
		float L_69 = L_68->get_mixScaleX_6();
		float L_70 = ___alpha4;
		NullCheck(L_64);
		L_64->set_mixScaleX_6(((float)il2cpp_codegen_add((float)L_65, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_67, (float)L_69)), (float)L_70)))));
		// constraint.mixScaleY += (data.mixScaleY - constraint.mixScaleY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_71 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_72 = L_71;
		NullCheck(L_72);
		float L_73 = L_72->get_mixScaleY_7();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_74 = V_10;
		NullCheck(L_74);
		float L_75 = L_74->get_mixScaleY_9();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_76 = V_0;
		NullCheck(L_76);
		float L_77 = L_76->get_mixScaleY_7();
		float L_78 = ___alpha4;
		NullCheck(L_72);
		L_72->set_mixScaleY_7(((float)il2cpp_codegen_add((float)L_73, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_75, (float)L_77)), (float)L_78)))));
		// constraint.mixShearY += (data.mixShearY - constraint.mixShearY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_79 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_80 = L_79;
		NullCheck(L_80);
		float L_81 = L_80->get_mixShearY_8();
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_82 = V_10;
		NullCheck(L_82);
		float L_83 = L_82->get_mixShearY_10();
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_84 = V_0;
		NullCheck(L_84);
		float L_85 = L_84->get_mixShearY_8();
		float L_86 = ___alpha4;
		NullCheck(L_80);
		L_80->set_mixShearY_8(((float)il2cpp_codegen_add((float)L_81, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_83, (float)L_85)), (float)L_86)))));
		// return;
		goto IL_02d7;
	}

IL_016b:
	{
		// return;
		goto IL_02d7;
	}

IL_0170:
	{
		// GetCurveValue(out rotate, out x, out y, out scaleX, out scaleY, out shearY, time);
		float L_87 = ___time2;
		TransformConstraintTimeline_GetCurveValue_m85A5D2BA02B958467458B5F0A8797B44A48CB061(__this, (float*)(&V_2), (float*)(&V_3), (float*)(&V_4), (float*)(&V_5), (float*)(&V_6), (float*)(&V_7), L_87, /*hidden argument*/NULL);
		// if (blend == MixBlend.Setup) {
		int32_t L_88 = ___blend5;
		V_13 = (bool)((((int32_t)L_88) == ((int32_t)0))? 1 : 0);
		bool L_89 = V_13;
		if (!L_89)
		{
			goto IL_0241;
		}
	}
	{
		// TransformConstraintData data = constraint.data;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_90 = V_0;
		NullCheck(L_90);
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_91 = L_90->get_data_0();
		V_14 = L_91;
		// constraint.mixRotate = data.mixRotate + (rotate - data.mixRotate) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_92 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_93 = V_14;
		NullCheck(L_93);
		float L_94 = L_93->get_mixRotate_5();
		float L_95 = V_2;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_96 = V_14;
		NullCheck(L_96);
		float L_97 = L_96->get_mixRotate_5();
		float L_98 = ___alpha4;
		NullCheck(L_92);
		L_92->set_mixRotate_3(((float)il2cpp_codegen_add((float)L_94, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_95, (float)L_97)), (float)L_98)))));
		// constraint.mixX = data.mixX + (x - data.mixX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_99 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_100 = V_14;
		NullCheck(L_100);
		float L_101 = L_100->get_mixX_6();
		float L_102 = V_3;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_103 = V_14;
		NullCheck(L_103);
		float L_104 = L_103->get_mixX_6();
		float L_105 = ___alpha4;
		NullCheck(L_99);
		L_99->set_mixX_4(((float)il2cpp_codegen_add((float)L_101, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_102, (float)L_104)), (float)L_105)))));
		// constraint.mixY = data.mixY + (y - data.mixY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_106 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_107 = V_14;
		NullCheck(L_107);
		float L_108 = L_107->get_mixY_7();
		float L_109 = V_4;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_110 = V_14;
		NullCheck(L_110);
		float L_111 = L_110->get_mixY_7();
		float L_112 = ___alpha4;
		NullCheck(L_106);
		L_106->set_mixY_5(((float)il2cpp_codegen_add((float)L_108, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_109, (float)L_111)), (float)L_112)))));
		// constraint.mixScaleX = data.mixScaleX + (scaleX - data.mixScaleX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_113 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_114 = V_14;
		NullCheck(L_114);
		float L_115 = L_114->get_mixScaleX_8();
		float L_116 = V_5;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_117 = V_14;
		NullCheck(L_117);
		float L_118 = L_117->get_mixScaleX_8();
		float L_119 = ___alpha4;
		NullCheck(L_113);
		L_113->set_mixScaleX_6(((float)il2cpp_codegen_add((float)L_115, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_116, (float)L_118)), (float)L_119)))));
		// constraint.mixScaleY = data.mixScaleY + (scaleY - data.mixScaleY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_120 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_121 = V_14;
		NullCheck(L_121);
		float L_122 = L_121->get_mixScaleY_9();
		float L_123 = V_6;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_124 = V_14;
		NullCheck(L_124);
		float L_125 = L_124->get_mixScaleY_9();
		float L_126 = ___alpha4;
		NullCheck(L_120);
		L_120->set_mixScaleY_7(((float)il2cpp_codegen_add((float)L_122, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_123, (float)L_125)), (float)L_126)))));
		// constraint.mixShearY = data.mixShearY + (shearY - data.mixShearY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_127 = V_0;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_128 = V_14;
		NullCheck(L_128);
		float L_129 = L_128->get_mixShearY_10();
		float L_130 = V_7;
		TransformConstraintData_t5B434A578868FB4E1BBBF29E3024FF07B5D0EF59 * L_131 = V_14;
		NullCheck(L_131);
		float L_132 = L_131->get_mixShearY_10();
		float L_133 = ___alpha4;
		NullCheck(L_127);
		L_127->set_mixShearY_8(((float)il2cpp_codegen_add((float)L_129, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_130, (float)L_132)), (float)L_133)))));
		goto IL_02d7;
	}

IL_0241:
	{
		// constraint.mixRotate += (rotate - constraint.mixRotate) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_134 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_135 = L_134;
		NullCheck(L_135);
		float L_136 = L_135->get_mixRotate_3();
		float L_137 = V_2;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_138 = V_0;
		NullCheck(L_138);
		float L_139 = L_138->get_mixRotate_3();
		float L_140 = ___alpha4;
		NullCheck(L_135);
		L_135->set_mixRotate_3(((float)il2cpp_codegen_add((float)L_136, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_137, (float)L_139)), (float)L_140)))));
		// constraint.mixX += (x - constraint.mixX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_141 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_142 = L_141;
		NullCheck(L_142);
		float L_143 = L_142->get_mixX_4();
		float L_144 = V_3;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_145 = V_0;
		NullCheck(L_145);
		float L_146 = L_145->get_mixX_4();
		float L_147 = ___alpha4;
		NullCheck(L_142);
		L_142->set_mixX_4(((float)il2cpp_codegen_add((float)L_143, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_144, (float)L_146)), (float)L_147)))));
		// constraint.mixY += (y - constraint.mixY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_148 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_149 = L_148;
		NullCheck(L_149);
		float L_150 = L_149->get_mixY_5();
		float L_151 = V_4;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_152 = V_0;
		NullCheck(L_152);
		float L_153 = L_152->get_mixY_5();
		float L_154 = ___alpha4;
		NullCheck(L_149);
		L_149->set_mixY_5(((float)il2cpp_codegen_add((float)L_150, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_151, (float)L_153)), (float)L_154)))));
		// constraint.mixScaleX += (scaleX - constraint.mixScaleX) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_155 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_156 = L_155;
		NullCheck(L_156);
		float L_157 = L_156->get_mixScaleX_6();
		float L_158 = V_5;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_159 = V_0;
		NullCheck(L_159);
		float L_160 = L_159->get_mixScaleX_6();
		float L_161 = ___alpha4;
		NullCheck(L_156);
		L_156->set_mixScaleX_6(((float)il2cpp_codegen_add((float)L_157, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_158, (float)L_160)), (float)L_161)))));
		// constraint.mixScaleY += (scaleY - constraint.mixScaleY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_162 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_163 = L_162;
		NullCheck(L_163);
		float L_164 = L_163->get_mixScaleY_7();
		float L_165 = V_6;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_166 = V_0;
		NullCheck(L_166);
		float L_167 = L_166->get_mixScaleY_7();
		float L_168 = ___alpha4;
		NullCheck(L_163);
		L_163->set_mixScaleY_7(((float)il2cpp_codegen_add((float)L_164, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_165, (float)L_167)), (float)L_168)))));
		// constraint.mixShearY += (shearY - constraint.mixShearY) * alpha;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_169 = V_0;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_170 = L_169;
		NullCheck(L_170);
		float L_171 = L_170->get_mixShearY_8();
		float L_172 = V_7;
		TransformConstraint_tC8D8761A400AEA22D56A6D4EDAD8D88356EFFAE4 * L_173 = V_0;
		NullCheck(L_173);
		float L_174 = L_173->get_mixShearY_8();
		float L_175 = ___alpha4;
		NullCheck(L_170);
		L_170->set_mixShearY_8(((float)il2cpp_codegen_add((float)L_171, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_172, (float)L_174)), (float)L_175)))));
	}

IL_02d7:
	{
		// }
		return;
	}
}
// System.Void Spine.TransformConstraintTimeline::GetCurveValue(System.Single&,System.Single&,System.Single&,System.Single&,System.Single&,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraintTimeline_GetCurveValue_m85A5D2BA02B958467458B5F0A8797B44A48CB061 (TransformConstraintTimeline_t72B4878905815289D7452FEE045C902E2CDEA6B1 * __this, float* ___rotate0, float* ___x1, float* ___y2, float* ___scaleX3, float* ___scaleY4, float* ___shearY5, float ___time6, const RuntimeMethod* method)
{
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// float[] frames = this.frames;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		V_0 = L_0;
		// int i = Search(frames, time, ENTRIES), curveType = (int)curves[i / ENTRIES];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = V_0;
		float L_2 = ___time6;
		int32_t L_3;
		L_3 = Timeline_Search_m18C5EB43D85785CF57E7A586A03D3BC67640D1A4(L_1, L_2, 7, /*hidden argument*/NULL);
		V_1 = L_3;
		// int i = Search(frames, time, ENTRIES), curveType = (int)curves[i / ENTRIES];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ((CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476 *)__this)->get_curves_6();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)((int32_t)L_5/(int32_t)7));
		float L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_7);
		// switch (curveType) {
		int32_t L_8 = V_2;
		V_6 = L_8;
		int32_t L_9 = V_6;
		V_5 = L_9;
		int32_t L_10 = V_5;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_11 = V_5;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_0120;
	}

IL_0038:
	{
		// float before = frames[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		// rotate = frames[i + ROTATE];
		float* L_16 = ___rotate0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		float L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		*((float*)L_16) = (float)L_20;
		// x = frames[i + X];
		float* L_21 = ___x1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2));
		float L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		*((float*)L_21) = (float)L_25;
		// y = frames[i + Y];
		float* L_26 = ___y2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = V_0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)3));
		float L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		*((float*)L_26) = (float)L_30;
		// scaleX = frames[i + SCALEX];
		float* L_31 = ___scaleX3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = V_0;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)4));
		float L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		*((float*)L_31) = (float)L_35;
		// scaleY = frames[i + SCALEY];
		float* L_36 = ___scaleY4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_37 = V_0;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)5));
		float L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		*((float*)L_36) = (float)L_40;
		// shearY = frames[i + SHEARY];
		float* L_41 = ___shearY5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42 = V_0;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)6));
		float L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		*((float*)L_41) = (float)L_45;
		// float t = (time - before) / (frames[i + ENTRIES] - before);
		float L_46 = ___time6;
		float L_47 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_48 = V_0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)7));
		float L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		float L_52 = V_3;
		V_4 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_46, (float)L_47))/(float)((float)il2cpp_codegen_subtract((float)L_51, (float)L_52))));
		// rotate += (frames[i + ENTRIES + ROTATE] - rotate) * t;
		float* L_53 = ___rotate0;
		float* L_54 = ___rotate0;
		float L_55 = *((float*)L_54);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_56 = V_0;
		int32_t L_57 = V_1;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)7)), (int32_t)1));
		float L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		float* L_60 = ___rotate0;
		float L_61 = *((float*)L_60);
		float L_62 = V_4;
		*((float*)L_53) = (float)((float)il2cpp_codegen_add((float)L_55, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_59, (float)L_61)), (float)L_62))));
		// x += (frames[i + ENTRIES + X] - x) * t;
		float* L_63 = ___x1;
		float* L_64 = ___x1;
		float L_65 = *((float*)L_64);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_66 = V_0;
		int32_t L_67 = V_1;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)7)), (int32_t)2));
		float L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		float* L_70 = ___x1;
		float L_71 = *((float*)L_70);
		float L_72 = V_4;
		*((float*)L_63) = (float)((float)il2cpp_codegen_add((float)L_65, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_69, (float)L_71)), (float)L_72))));
		// y += (frames[i + ENTRIES + Y] - y) * t;
		float* L_73 = ___y2;
		float* L_74 = ___y2;
		float L_75 = *((float*)L_74);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_76 = V_0;
		int32_t L_77 = V_1;
		NullCheck(L_76);
		int32_t L_78 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)7)), (int32_t)3));
		float L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		float* L_80 = ___y2;
		float L_81 = *((float*)L_80);
		float L_82 = V_4;
		*((float*)L_73) = (float)((float)il2cpp_codegen_add((float)L_75, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_79, (float)L_81)), (float)L_82))));
		// scaleX += (frames[i + ENTRIES + SCALEX] - scaleX) * t;
		float* L_83 = ___scaleX3;
		float* L_84 = ___scaleX3;
		float L_85 = *((float*)L_84);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_86 = V_0;
		int32_t L_87 = V_1;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)7)), (int32_t)4));
		float L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		float* L_90 = ___scaleX3;
		float L_91 = *((float*)L_90);
		float L_92 = V_4;
		*((float*)L_83) = (float)((float)il2cpp_codegen_add((float)L_85, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_89, (float)L_91)), (float)L_92))));
		// scaleY += (frames[i + ENTRIES + SCALEY] - scaleY) * t;
		float* L_93 = ___scaleY4;
		float* L_94 = ___scaleY4;
		float L_95 = *((float*)L_94);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_96 = V_0;
		int32_t L_97 = V_1;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)7)), (int32_t)5));
		float L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		float* L_100 = ___scaleY4;
		float L_101 = *((float*)L_100);
		float L_102 = V_4;
		*((float*)L_93) = (float)((float)il2cpp_codegen_add((float)L_95, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_99, (float)L_101)), (float)L_102))));
		// shearY += (frames[i + ENTRIES + SHEARY] - shearY) * t;
		float* L_103 = ___shearY5;
		float* L_104 = ___shearY5;
		float L_105 = *((float*)L_104);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_106 = V_0;
		int32_t L_107 = V_1;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)7)), (int32_t)6));
		float L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		float* L_110 = ___shearY5;
		float L_111 = *((float*)L_110);
		float L_112 = V_4;
		*((float*)L_103) = (float)((float)il2cpp_codegen_add((float)L_105, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_109, (float)L_111)), (float)L_112))));
		// break;
		goto IL_018e;
	}

IL_00f1:
	{
		// rotate = frames[i + ROTATE];
		float* L_113 = ___rotate0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_114 = V_0;
		int32_t L_115 = V_1;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
		float L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		*((float*)L_113) = (float)L_117;
		// x = frames[i + X];
		float* L_118 = ___x1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_119 = V_0;
		int32_t L_120 = V_1;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)2));
		float L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		*((float*)L_118) = (float)L_122;
		// y = frames[i + Y];
		float* L_123 = ___y2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_124 = V_0;
		int32_t L_125 = V_1;
		NullCheck(L_124);
		int32_t L_126 = ((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)3));
		float L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		*((float*)L_123) = (float)L_127;
		// scaleX = frames[i + SCALEX];
		float* L_128 = ___scaleX3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_129 = V_0;
		int32_t L_130 = V_1;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)4));
		float L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		*((float*)L_128) = (float)L_132;
		// scaleY = frames[i + SCALEY];
		float* L_133 = ___scaleY4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_134 = V_0;
		int32_t L_135 = V_1;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)5));
		float L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		*((float*)L_133) = (float)L_137;
		// shearY = frames[i + SHEARY];
		float* L_138 = ___shearY5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_139 = V_0;
		int32_t L_140 = V_1;
		NullCheck(L_139);
		int32_t L_141 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)6));
		float L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		*((float*)L_138) = (float)L_142;
		// break;
		goto IL_018e;
	}

IL_0120:
	{
		// rotate = GetBezierValue(time, i, ROTATE, curveType - BEZIER);
		float* L_143 = ___rotate0;
		float L_144 = ___time6;
		int32_t L_145 = V_1;
		int32_t L_146 = V_2;
		float L_147;
		L_147 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_144, L_145, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_146, (int32_t)2)), /*hidden argument*/NULL);
		*((float*)L_143) = (float)L_147;
		// x = GetBezierValue(time, i, X, curveType + BEZIER_SIZE - BEZIER);
		float* L_148 = ___x1;
		float L_149 = ___time6;
		int32_t L_150 = V_1;
		int32_t L_151 = V_2;
		float L_152;
		L_152 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_149, L_150, 2, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)((int32_t)18))), (int32_t)2)), /*hidden argument*/NULL);
		*((float*)L_148) = (float)L_152;
		// y = GetBezierValue(time, i, Y, curveType + BEZIER_SIZE * 2 - BEZIER);
		float* L_153 = ___y2;
		float L_154 = ___time6;
		int32_t L_155 = V_1;
		int32_t L_156 = V_2;
		float L_157;
		L_157 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_154, L_155, 3, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)((int32_t)36))), (int32_t)2)), /*hidden argument*/NULL);
		*((float*)L_153) = (float)L_157;
		// scaleX = GetBezierValue(time, i, SCALEX, curveType + BEZIER_SIZE * 3 - BEZIER);
		float* L_158 = ___scaleX3;
		float L_159 = ___time6;
		int32_t L_160 = V_1;
		int32_t L_161 = V_2;
		float L_162;
		L_162 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_159, L_160, 4, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)((int32_t)54))), (int32_t)2)), /*hidden argument*/NULL);
		*((float*)L_158) = (float)L_162;
		// scaleY = GetBezierValue(time, i, SCALEY, curveType + BEZIER_SIZE * 4 - BEZIER);
		float* L_163 = ___scaleY4;
		float L_164 = ___time6;
		int32_t L_165 = V_1;
		int32_t L_166 = V_2;
		float L_167;
		L_167 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_164, L_165, 5, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)((int32_t)72))), (int32_t)2)), /*hidden argument*/NULL);
		*((float*)L_163) = (float)L_167;
		// shearY = GetBezierValue(time, i, SHEARY, curveType + BEZIER_SIZE * 5 - BEZIER);
		float* L_168 = ___shearY5;
		float L_169 = ___time6;
		int32_t L_170 = V_1;
		int32_t L_171 = V_2;
		float L_172;
		L_172 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_169, L_170, 6, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)((int32_t)90))), (int32_t)2)), /*hidden argument*/NULL);
		*((float*)L_168) = (float)L_172;
		// break;
		goto IL_018e;
	}

IL_018e:
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
// System.Void Spine.TranslateTimeline::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateTimeline__ctor_m48AF31C4BF2F313F8D0BFA202DE1D811C65626DF (TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, int32_t ___boneIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// : base(frameCount, bezierCount, //
		//     (int)Property.X + "|" + boneIndex, //
		//     (int)Property.Y + "|" + boneIndex) {
		int32_t L_0 = ___frameCount0;
		int32_t L_1 = ___bezierCount1;
		V_0 = 1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___boneIndex2), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_2, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_3, /*hidden argument*/NULL);
		V_0 = 2;
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___boneIndex2), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_5, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_6, /*hidden argument*/NULL);
		CurveTimeline2__ctor_m0C19A32AE97CE563A5A6E27F60BB5E58F47F3177(__this, L_0, L_1, L_4, L_7, /*hidden argument*/NULL);
		// this.boneIndex = boneIndex;
		int32_t L_8 = ___boneIndex2;
		__this->set_boneIndex_10(L_8);
		// }
		return;
	}
}
// System.Int32 Spine.TranslateTimeline::get_BoneIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslateTimeline_get_BoneIndex_m1F225DDA0407FAFF41EC7BA0DD1F25DFF0D894D0 (TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return boneIndex;
		int32_t L_0 = __this->get_boneIndex_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TranslateTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixBlend,Spine.MixDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateTimeline_Apply_m18F19C9D1A61EFC492BBE3735F06082A8DD37F03 (TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5 * __this, Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A * ___firedEvents3, float ___alpha4, int32_t ___blend5, int32_t ___direction6, const RuntimeMethod* method)
{
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// Bone bone = skeleton.bones.Items[boneIndex];
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_0 = ___skeleton0;
		NullCheck(L_0);
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_1 = L_0->get_bones_1();
		NullCheck(L_1);
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_2 = L_1->get_Items_0();
		int32_t L_3 = __this->get_boneIndex_10();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (!bone.active) return;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->get_active_27();
		V_4 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0028;
		}
	}
	{
		// if (!bone.active) return;
		goto IL_0195;
	}

IL_0028:
	{
		// float[] frames = this.frames;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		V_1 = L_9;
		// if (time < frames[0]) {
		float L_10 = ___time2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		float L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = (bool)((((float)L_10) < ((float)L_13))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00c9;
		}
	}
	{
		// switch (blend) {
		int32_t L_15 = ___blend5;
		V_7 = L_15;
		int32_t L_16 = V_7;
		V_6 = L_16;
		int32_t L_17 = V_6;
		if (!L_17)
		{
			goto IL_0054;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		int32_t L_18 = V_6;
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_00c4;
	}

IL_0054:
	{
		// bone.x = bone.data.x;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_19 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_20 = V_0;
		NullCheck(L_20);
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_21 = L_20->get_data_1();
		NullCheck(L_21);
		float L_22 = L_21->get_x_4();
		NullCheck(L_19);
		L_19->set_x_5(L_22);
		// bone.y = bone.data.y;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_23 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_24 = V_0;
		NullCheck(L_24);
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_25 = L_24->get_data_1();
		NullCheck(L_25);
		float L_26 = L_25->get_y_5();
		NullCheck(L_23);
		L_23->set_y_6(L_26);
		// return;
		goto IL_0195;
	}

IL_007b:
	{
		// bone.x += (bone.data.x - bone.x) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_27 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_28 = L_27;
		NullCheck(L_28);
		float L_29 = L_28->get_x_5();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_30 = V_0;
		NullCheck(L_30);
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_31 = L_30->get_data_1();
		NullCheck(L_31);
		float L_32 = L_31->get_x_4();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_33 = V_0;
		NullCheck(L_33);
		float L_34 = L_33->get_x_5();
		float L_35 = ___alpha4;
		NullCheck(L_28);
		L_28->set_x_5(((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_32, (float)L_34)), (float)L_35)))));
		// bone.y += (bone.data.y - bone.y) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_36 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_37 = L_36;
		NullCheck(L_37);
		float L_38 = L_37->get_y_6();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_39 = V_0;
		NullCheck(L_39);
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_40 = L_39->get_data_1();
		NullCheck(L_40);
		float L_41 = L_40->get_y_5();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_42 = V_0;
		NullCheck(L_42);
		float L_43 = L_42->get_y_6();
		float L_44 = ___alpha4;
		NullCheck(L_37);
		L_37->set_y_6(((float)il2cpp_codegen_add((float)L_38, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_41, (float)L_43)), (float)L_44)))));
		// return;
		goto IL_0195;
	}

IL_00c4:
	{
		// return;
		goto IL_0195;
	}

IL_00c9:
	{
		// GetCurveValue(out x, out y, time); // note: reference implementation has code inlined
		float L_45 = ___time2;
		TranslateTimeline_GetCurveValue_m50513A5FB9ABBF0C20C603E408E9BC4EF5F1125A(__this, (float*)(&V_2), (float*)(&V_3), L_45, /*hidden argument*/NULL);
		// switch (blend) {
		int32_t L_46 = ___blend5;
		V_9 = L_46;
		int32_t L_47 = V_9;
		V_8 = L_47;
		int32_t L_48 = V_8;
		switch (L_48)
		{
			case 0:
			{
				goto IL_00f9;
			}
			case 1:
			{
				goto IL_0127;
			}
			case 2:
			{
				goto IL_0127;
			}
			case 3:
			{
				goto IL_0171;
			}
		}
	}
	{
		goto IL_0195;
	}

IL_00f9:
	{
		// bone.x = bone.data.x + x * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_49 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_50 = V_0;
		NullCheck(L_50);
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_51 = L_50->get_data_1();
		NullCheck(L_51);
		float L_52 = L_51->get_x_4();
		float L_53 = V_2;
		float L_54 = ___alpha4;
		NullCheck(L_49);
		L_49->set_x_5(((float)il2cpp_codegen_add((float)L_52, (float)((float)il2cpp_codegen_multiply((float)L_53, (float)L_54)))));
		// bone.y = bone.data.y + y * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_55 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_56 = V_0;
		NullCheck(L_56);
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_57 = L_56->get_data_1();
		NullCheck(L_57);
		float L_58 = L_57->get_y_5();
		float L_59 = V_3;
		float L_60 = ___alpha4;
		NullCheck(L_55);
		L_55->set_y_6(((float)il2cpp_codegen_add((float)L_58, (float)((float)il2cpp_codegen_multiply((float)L_59, (float)L_60)))));
		// break;
		goto IL_0195;
	}

IL_0127:
	{
		// bone.x += (bone.data.x + x - bone.x) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_61 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_62 = L_61;
		NullCheck(L_62);
		float L_63 = L_62->get_x_5();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_64 = V_0;
		NullCheck(L_64);
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_65 = L_64->get_data_1();
		NullCheck(L_65);
		float L_66 = L_65->get_x_4();
		float L_67 = V_2;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_68 = V_0;
		NullCheck(L_68);
		float L_69 = L_68->get_x_5();
		float L_70 = ___alpha4;
		NullCheck(L_62);
		L_62->set_x_5(((float)il2cpp_codegen_add((float)L_63, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_66, (float)L_67)), (float)L_69)), (float)L_70)))));
		// bone.y += (bone.data.y + y - bone.y) * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_71 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_72 = L_71;
		NullCheck(L_72);
		float L_73 = L_72->get_y_6();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_74 = V_0;
		NullCheck(L_74);
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_75 = L_74->get_data_1();
		NullCheck(L_75);
		float L_76 = L_75->get_y_5();
		float L_77 = V_3;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_78 = V_0;
		NullCheck(L_78);
		float L_79 = L_78->get_y_6();
		float L_80 = ___alpha4;
		NullCheck(L_72);
		L_72->set_y_6(((float)il2cpp_codegen_add((float)L_73, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_76, (float)L_77)), (float)L_79)), (float)L_80)))));
		// break;
		goto IL_0195;
	}

IL_0171:
	{
		// bone.x += x * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_81 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_82 = L_81;
		NullCheck(L_82);
		float L_83 = L_82->get_x_5();
		float L_84 = V_2;
		float L_85 = ___alpha4;
		NullCheck(L_82);
		L_82->set_x_5(((float)il2cpp_codegen_add((float)L_83, (float)((float)il2cpp_codegen_multiply((float)L_84, (float)L_85)))));
		// bone.y += y * alpha;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_86 = V_0;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_87 = L_86;
		NullCheck(L_87);
		float L_88 = L_87->get_y_6();
		float L_89 = V_3;
		float L_90 = ___alpha4;
		NullCheck(L_87);
		L_87->set_y_6(((float)il2cpp_codegen_add((float)L_88, (float)((float)il2cpp_codegen_multiply((float)L_89, (float)L_90)))));
		// break;
		goto IL_0195;
	}

IL_0195:
	{
		// }
		return;
	}
}
// System.Void Spine.TranslateTimeline::GetCurveValue(System.Single&,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateTimeline_GetCurveValue_m50513A5FB9ABBF0C20C603E408E9BC4EF5F1125A (TranslateTimeline_t681EC4DF87BDD6C1C37F02813D59275B8EAF02E5 * __this, float* ___x0, float* ___y1, float ___time2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// int i = Search(frames, time, ENTRIES), curveType = (int)curves[i / ENTRIES];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		float L_1 = ___time2;
		int32_t L_2;
		L_2 = Timeline_Search_m18C5EB43D85785CF57E7A586A03D3BC67640D1A4(L_0, L_1, 3, /*hidden argument*/NULL);
		V_0 = L_2;
		// int i = Search(frames, time, ENTRIES), curveType = (int)curves[i / ENTRIES];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ((CurveTimeline_t404E642BD4DFEEDB39DBCDC088B7F7E78FAE5476 *)__this)->get_curves_6();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)((int32_t)L_4/(int32_t)3));
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_6);
		// switch (curveType) {
		int32_t L_7 = V_1;
		V_5 = L_7;
		int32_t L_8 = V_5;
		V_4 = L_8;
		int32_t L_9 = V_4;
		if (!L_9)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0028;
	}

IL_0028:
	{
		int32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_008f;
		}
	}
	{
		goto IL_00a9;
	}

IL_002f:
	{
		// float before = frames[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		float L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// x = frames[i + VALUE1];
		float* L_15 = ___x0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		*((float*)L_15) = (float)L_19;
		// y = frames[i + VALUE2];
		float* L_20 = ___y1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)2));
		float L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		*((float*)L_20) = (float)L_24;
		// float t = (time - before) / (frames[i + ENTRIES] - before);
		float L_25 = ___time2;
		float L_26 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)3));
		float L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = V_2;
		V_3 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_25, (float)L_26))/(float)((float)il2cpp_codegen_subtract((float)L_30, (float)L_31))));
		// x += (frames[i + ENTRIES + VALUE1] - x) * t;
		float* L_32 = ___x0;
		float* L_33 = ___x0;
		float L_34 = *((float*)L_33);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)3)), (int32_t)1));
		float L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		float* L_39 = ___x0;
		float L_40 = *((float*)L_39);
		float L_41 = V_3;
		*((float*)L_32) = (float)((float)il2cpp_codegen_add((float)L_34, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_38, (float)L_40)), (float)L_41))));
		// y += (frames[i + ENTRIES + VALUE2] - y) * t;
		float* L_42 = ___y1;
		float* L_43 = ___y1;
		float L_44 = *((float*)L_43);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_45 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_46 = V_0;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)3)), (int32_t)2));
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		float* L_49 = ___y1;
		float L_50 = *((float*)L_49);
		float L_51 = V_3;
		*((float*)L_42) = (float)((float)il2cpp_codegen_add((float)L_44, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_48, (float)L_50)), (float)L_51))));
		// break;
		goto IL_00ca;
	}

IL_008f:
	{
		// x = frames[i + VALUE1];
		float* L_52 = ___x0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_53 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_54 = V_0;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		float L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		*((float*)L_52) = (float)L_56;
		// y = frames[i + VALUE2];
		float* L_57 = ___y1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_58 = ((Timeline_tD8AC6175D8B492C9CDB166AC1FBFEE28A474DAF0 *)__this)->get_frames_1();
		int32_t L_59 = V_0;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)2));
		float L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		*((float*)L_57) = (float)L_61;
		// break;
		goto IL_00ca;
	}

IL_00a9:
	{
		// x = GetBezierValue(time, i, VALUE1, curveType - BEZIER);
		float* L_62 = ___x0;
		float L_63 = ___time2;
		int32_t L_64 = V_0;
		int32_t L_65 = V_1;
		float L_66;
		L_66 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_63, L_64, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)2)), /*hidden argument*/NULL);
		*((float*)L_62) = (float)L_66;
		// y = GetBezierValue(time, i, VALUE2, curveType + BEZIER_SIZE - BEZIER);
		float* L_67 = ___y1;
		float L_68 = ___time2;
		int32_t L_69 = V_0;
		int32_t L_70 = V_1;
		float L_71;
		L_71 = CurveTimeline_GetBezierValue_m7F3F858D48DFBB2654FAB172AF39E25579AA8265(__this, L_68, L_69, 2, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)((int32_t)18))), (int32_t)2)), /*hidden argument*/NULL);
		*((float*)L_67) = (float)L_71;
		// break;
		goto IL_00ca;
	}

IL_00ca:
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
// System.Void Spine.TranslateXTimeline::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateXTimeline__ctor_m32B23E42D95560A963D55872BA1B3CC2E4F8075C (TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, int32_t ___boneIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// : base(frameCount, bezierCount, (int)Property.X + "|" + boneIndex) {
		int32_t L_0 = ___frameCount0;
		int32_t L_1 = ___bezierCount1;
		V_0 = 1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___boneIndex2), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_2, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_3, /*hidden argument*/NULL);
		CurveTimeline1__ctor_m84E1D0D574EFFE180622AB51E745C794285AB877(__this, L_0, L_1, L_4, /*hidden argument*/NULL);
		// this.boneIndex = boneIndex;
		int32_t L_5 = ___boneIndex2;
		__this->set_boneIndex_9(L_5);
		// }
		return;
	}
}
// System.Int32 Spine.TranslateXTimeline::get_BoneIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslateXTimeline_get_BoneIndex_m34E804A4315283728D1748B07BA514B82EAA1E84 (TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return boneIndex;
		int32_t L_0 = __this->get_boneIndex_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TranslateXTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixBlend,Spine.MixDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateXTimeline_Apply_m6A7A5DB964E643D3224D3E7312CE7B37EAE4FBBD (TranslateXTimeline_t359052D0CB61701970042CFD7A82575F4A2729F5 * __this, Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A * ___firedEvents3, float ___alpha4, int32_t ___blend5, int32_t ___direction6, const RuntimeMethod* method)
{
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_0 = NULL;
	bool V_1 = false;
	{
		// Bone bone = skeleton.bones.Items[boneIndex];
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_0 = ___skeleton0;
		NullCheck(L_0);
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_1 = L_0->get_bones_1();
		NullCheck(L_1);
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_2 = L_1->get_Items_0();
		int32_t L_3 = __this->get_boneIndex_9();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (bone.active) bone.x = GetRelativeValue(time, alpha, blend, bone.x, bone.data.x);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->get_active_27();
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// if (bone.active) bone.x = GetRelativeValue(time, alpha, blend, bone.x, bone.data.x);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_9 = V_0;
		float L_10 = ___time2;
		float L_11 = ___alpha4;
		int32_t L_12 = ___blend5;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_13 = V_0;
		NullCheck(L_13);
		float L_14 = L_13->get_x_5();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_15 = V_0;
		NullCheck(L_15);
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_16 = L_15->get_data_1();
		NullCheck(L_16);
		float L_17 = L_16->get_x_4();
		float L_18;
		L_18 = CurveTimeline1_GetRelativeValue_m8A21ABDA8CE3A328825E651304859D92E20CF448(__this, L_10, L_11, L_12, L_14, L_17, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_x_5(L_18);
	}

IL_0040:
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
// System.Void Spine.TranslateYTimeline::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateYTimeline__ctor_m83143164ED720E7F68A6155C5D98C1E5B136A3D7 (TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31 * __this, int32_t ___frameCount0, int32_t ___bezierCount1, int32_t ___boneIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// : base(frameCount, bezierCount, (int)Property.Y + "|" + boneIndex) {
		int32_t L_0 = ___frameCount0;
		int32_t L_1 = ___bezierCount1;
		V_0 = 2;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___boneIndex2), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_2, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, L_3, /*hidden argument*/NULL);
		CurveTimeline1__ctor_m84E1D0D574EFFE180622AB51E745C794285AB877(__this, L_0, L_1, L_4, /*hidden argument*/NULL);
		// this.boneIndex = boneIndex;
		int32_t L_5 = ___boneIndex2;
		__this->set_boneIndex_9(L_5);
		// }
		return;
	}
}
// System.Int32 Spine.TranslateYTimeline::get_BoneIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslateYTimeline_get_BoneIndex_mD400EA10BCF4140621B93CDE7FD1A1E9360B6645 (TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return boneIndex;
		int32_t L_0 = __this->get_boneIndex_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.TranslateYTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixBlend,Spine.MixDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateYTimeline_Apply_m88C7606BF0688BF3B0AC32D76001B7969FE68374 (TranslateYTimeline_t83C5029E5E77494698A95E1D6748CE3692AECF31 * __this, Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t8CEF7833102CD6D128DB4877B6641E863D85194A * ___firedEvents3, float ___alpha4, int32_t ___blend5, int32_t ___direction6, const RuntimeMethod* method)
{
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_0 = NULL;
	bool V_1 = false;
	{
		// Bone bone = skeleton.bones.Items[boneIndex];
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_0 = ___skeleton0;
		NullCheck(L_0);
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_1 = L_0->get_bones_1();
		NullCheck(L_1);
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_2 = L_1->get_Items_0();
		int32_t L_3 = __this->get_boneIndex_9();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (bone.active) bone.y = GetRelativeValue(time, alpha, blend, bone.y, bone.data.y);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->get_active_27();
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// if (bone.active) bone.y = GetRelativeValue(time, alpha, blend, bone.y, bone.data.y);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_9 = V_0;
		float L_10 = ___time2;
		float L_11 = ___alpha4;
		int32_t L_12 = ___blend5;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_13 = V_0;
		NullCheck(L_13);
		float L_14 = L_13->get_y_6();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_15 = V_0;
		NullCheck(L_15);
		BoneData_t48A671E6818E76905840CC122A96889DDCB92A51 * L_16 = L_15->get_data_1();
		NullCheck(L_16);
		float L_17 = L_16->get_y_5();
		float L_18;
		L_18 = CurveTimeline1_GetRelativeValue_m8A21ABDA8CE3A328825E651304859D92E20CF448(__this, L_10, L_11, L_12, L_14, L_17, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_y_6(L_18);
	}

IL_0040:
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
// Spine.ExposedList`1<System.Int32> Spine.Triangulator::Triangulate(Spine.ExposedList`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * Triangulator_Triangulate_m83E7E0037B5D8F16202645E5C1959AA777DE962E (Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B * __this, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___verticesArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	int32_t V_1 = 0;
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * V_2 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_3 = NULL;
	ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * V_4 = NULL;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* V_5 = NULL;
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	bool V_17 = false;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	float V_26 = 0.0f;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	float V_29 = 0.0f;
	float V_30 = 0.0f;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * V_42 = NULL;
	int32_t G_B33_0 = 0;
	{
		// float[] vertices = verticesArray.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_0 = ___verticesArray0;
		NullCheck(L_0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0->get_Items_0();
		V_0 = L_1;
		// int vertexCount = verticesArray.Count >> 1;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_2 = ___verticesArray0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_Count_1();
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)1));
		// ExposedList<int> indicesArray = this.indicesArray;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_4 = __this->get_indicesArray_2();
		V_2 = L_4;
		// indicesArray.Clear();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_5 = V_2;
		NullCheck(L_5);
		ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B(L_5, (bool)1, /*hidden argument*/ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		// int[] indices = indicesArray.Resize(vertexCount).Items;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_6 = V_2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_8;
		L_8 = ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A(L_6, L_7, /*hidden argument*/ExposedList_1_Resize_m87D63C372E64631877CF0C3F964DD144A742AF2A_RuntimeMethod_var);
		NullCheck(L_8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = L_8->get_Items_0();
		V_3 = L_9;
		// for (int i = 0; i < vertexCount; i++)
		V_7 = 0;
		goto IL_003e;
	}

IL_0032:
	{
		// indices[i] = i;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = V_3;
		int32_t L_11 = V_7;
		int32_t L_12 = V_7;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)L_12);
		// for (int i = 0; i < vertexCount; i++)
		int32_t L_13 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003e:
	{
		// for (int i = 0; i < vertexCount; i++)
		int32_t L_14 = V_7;
		int32_t L_15 = V_1;
		V_8 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_8;
		if (L_16)
		{
			goto IL_0032;
		}
	}
	{
		// ExposedList<bool> isConcaveArray = this.isConcaveArray;
		ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * L_17 = __this->get_isConcaveArray_3();
		V_4 = L_17;
		// bool[] isConcave = isConcaveArray.Resize(vertexCount).Items;
		ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * L_18 = V_4;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * L_20;
		L_20 = ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42(L_18, L_19, /*hidden argument*/ExposedList_1_Resize_m666C6341D5DC487C18356A856E93EF53AC33CB42_RuntimeMethod_var);
		NullCheck(L_20);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_21 = L_20->get_Items_0();
		V_5 = L_21;
		// for (int i = 0, n = vertexCount; i < n; ++i)
		V_9 = 0;
		// for (int i = 0, n = vertexCount; i < n; ++i)
		int32_t L_22 = V_1;
		V_10 = L_22;
		goto IL_007d;
	}

IL_0068:
	{
		// isConcave[i] = IsConcave(i, vertexCount, vertices, indices);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_23 = V_5;
		int32_t L_24 = V_9;
		int32_t L_25 = V_9;
		int32_t L_26 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = V_3;
		bool L_29;
		L_29 = Triangulator_IsConcave_m4F6E621BB08285C80D265E56DD7C813F9748E0F4(L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (bool)L_29);
		// for (int i = 0, n = vertexCount; i < n; ++i)
		int32_t L_30 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_007d:
	{
		// for (int i = 0, n = vertexCount; i < n; ++i)
		int32_t L_31 = V_9;
		int32_t L_32 = V_10;
		V_11 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_11;
		if (L_33)
		{
			goto IL_0068;
		}
	}
	{
		// ExposedList<int> triangles = this.triangles;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_34 = __this->get_triangles_4();
		V_6 = L_34;
		// triangles.Clear();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_35 = V_6;
		NullCheck(L_35);
		ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B(L_35, (bool)1, /*hidden argument*/ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		// triangles.EnsureCapacity(Math.Max(0, vertexCount - 2) << 2);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_36 = V_6;
		int32_t L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_36);
		ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A(L_36, ((int32_t)((int32_t)L_38<<(int32_t)2)), /*hidden argument*/ExposedList_1_EnsureCapacity_m51473D74740BFE47642E8A5FEF054C72D22FE11A_RuntimeMethod_var);
		goto IL_0276;
	}

IL_00b2:
	{
		// int previous = vertexCount - 1, i = 0, next = 1;
		int32_t L_39 = V_1;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
		// int previous = vertexCount - 1, i = 0, next = 1;
		V_13 = 0;
		// int previous = vertexCount - 1, i = 0, next = 1;
		V_14 = 1;
		goto IL_01f4;
	}

IL_00c3:
	{
		// if (!isConcave[i]) {
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_40 = V_5;
		int32_t L_41 = V_13;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		uint8_t L_43 = (uint8_t)(L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_17 = (bool)((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_17;
		if (!L_44)
		{
			goto IL_01b1;
		}
	}
	{
		// int p1 = indices[previous] << 1, p2 = indices[i] << 1, p3 = indices[next] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = V_3;
		int32_t L_46 = V_12;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_18 = ((int32_t)((int32_t)L_48<<(int32_t)1));
		// int p1 = indices[previous] << 1, p2 = indices[i] << 1, p3 = indices[next] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = V_3;
		int32_t L_50 = V_13;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_19 = ((int32_t)((int32_t)L_52<<(int32_t)1));
		// int p1 = indices[previous] << 1, p2 = indices[i] << 1, p3 = indices[next] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = V_3;
		int32_t L_54 = V_14;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_20 = ((int32_t)((int32_t)L_56<<(int32_t)1));
		// float p1x = vertices[p1], p1y = vertices[p1 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_57 = V_0;
		int32_t L_58 = V_18;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		float L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_21 = L_60;
		// float p1x = vertices[p1], p1y = vertices[p1 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_61 = V_0;
		int32_t L_62 = V_18;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		float L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_22 = L_64;
		// float p2x = vertices[p2], p2y = vertices[p2 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_65 = V_0;
		int32_t L_66 = V_19;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		float L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_23 = L_68;
		// float p2x = vertices[p2], p2y = vertices[p2 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_69 = V_0;
		int32_t L_70 = V_19;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		float L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_24 = L_72;
		// float p3x = vertices[p3], p3y = vertices[p3 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_73 = V_0;
		int32_t L_74 = V_20;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		float L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_25 = L_76;
		// float p3x = vertices[p3], p3y = vertices[p3 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_77 = V_0;
		int32_t L_78 = V_20;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		float L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_26 = L_80;
		// for (int ii = (next + 1) % vertexCount; ii != previous; ii = (ii + 1) % vertexCount) {
		int32_t L_81 = V_14;
		int32_t L_82 = V_1;
		V_27 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1))%(int32_t)L_82));
		goto IL_019d;
	}

IL_0122:
	{
		// if (!isConcave[ii]) continue;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_83 = V_5;
		int32_t L_84 = V_27;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		uint8_t L_86 = (uint8_t)(L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_31 = (bool)((((int32_t)L_86) == ((int32_t)0))? 1 : 0);
		bool L_87 = V_31;
		if (!L_87)
		{
			goto IL_0133;
		}
	}
	{
		// if (!isConcave[ii]) continue;
		goto IL_0195;
	}

IL_0133:
	{
		// int v = indices[ii] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_88 = V_3;
		int32_t L_89 = V_27;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		int32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_28 = ((int32_t)((int32_t)L_91<<(int32_t)1));
		// float vx = vertices[v], vy = vertices[v + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_92 = V_0;
		int32_t L_93 = V_28;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		float L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_29 = L_95;
		// float vx = vertices[v], vy = vertices[v + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_96 = V_0;
		int32_t L_97 = V_28;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		float L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_30 = L_99;
		// if (PositiveArea(p3x, p3y, p1x, p1y, vx, vy)) {
		float L_100 = V_25;
		float L_101 = V_26;
		float L_102 = V_21;
		float L_103 = V_22;
		float L_104 = V_29;
		float L_105 = V_30;
		bool L_106;
		L_106 = Triangulator_PositiveArea_m0DA3F6EAED5BA8998E0A85070D2ED722BC9F5D1F(L_100, L_101, L_102, L_103, L_104, L_105, /*hidden argument*/NULL);
		V_32 = L_106;
		bool L_107 = V_32;
		if (!L_107)
		{
			goto IL_0194;
		}
	}
	{
		// if (PositiveArea(p1x, p1y, p2x, p2y, vx, vy)) {
		float L_108 = V_21;
		float L_109 = V_22;
		float L_110 = V_23;
		float L_111 = V_24;
		float L_112 = V_29;
		float L_113 = V_30;
		bool L_114;
		L_114 = Triangulator_PositiveArea_m0DA3F6EAED5BA8998E0A85070D2ED722BC9F5D1F(L_108, L_109, L_110, L_111, L_112, L_113, /*hidden argument*/NULL);
		V_33 = L_114;
		bool L_115 = V_33;
		if (!L_115)
		{
			goto IL_0193;
		}
	}
	{
		// if (PositiveArea(p2x, p2y, p3x, p3y, vx, vy)) goto break_outer; // break outer;
		float L_116 = V_23;
		float L_117 = V_24;
		float L_118 = V_25;
		float L_119 = V_26;
		float L_120 = V_29;
		float L_121 = V_30;
		bool L_122;
		L_122 = Triangulator_PositiveArea_m0DA3F6EAED5BA8998E0A85070D2ED722BC9F5D1F(L_116, L_117, L_118, L_119, L_120, L_121, /*hidden argument*/NULL);
		V_34 = L_122;
		bool L_123 = V_34;
		if (!L_123)
		{
			goto IL_0192;
		}
	}
	{
		// if (PositiveArea(p2x, p2y, p3x, p3y, vx, vy)) goto break_outer; // break outer;
		goto IL_01b1;
	}

IL_0192:
	{
	}

IL_0193:
	{
	}

IL_0194:
	{
	}

IL_0195:
	{
		// for (int ii = (next + 1) % vertexCount; ii != previous; ii = (ii + 1) % vertexCount) {
		int32_t L_124 = V_27;
		int32_t L_125 = V_1;
		V_27 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1))%(int32_t)L_125));
	}

IL_019d:
	{
		// for (int ii = (next + 1) % vertexCount; ii != previous; ii = (ii + 1) % vertexCount) {
		int32_t L_126 = V_27;
		int32_t L_127 = V_12;
		V_35 = (bool)((((int32_t)((((int32_t)L_126) == ((int32_t)L_127))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_128 = V_35;
		if (L_128)
		{
			goto IL_0122;
		}
	}
	{
		// break;
		goto IL_01fc;
	}

IL_01b1:
	{
		// if (next == 0) {
		int32_t L_129 = V_14;
		V_36 = (bool)((((int32_t)L_129) == ((int32_t)0))? 1 : 0);
		bool L_130 = V_36;
		if (!L_130)
		{
			goto IL_01e3;
		}
	}
	{
	}

IL_01be:
	{
		// if (!isConcave[i]) break;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_131 = V_5;
		int32_t L_132 = V_13;
		NullCheck(L_131);
		int32_t L_133 = L_132;
		uint8_t L_134 = (uint8_t)(L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		V_37 = (bool)((((int32_t)L_134) == ((int32_t)0))? 1 : 0);
		bool L_135 = V_37;
		if (!L_135)
		{
			goto IL_01cf;
		}
	}
	{
		// if (!isConcave[i]) break;
		goto IL_01e1;
	}

IL_01cf:
	{
		// i--;
		int32_t L_136 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_136, (int32_t)1));
		// } while (i > 0);
		int32_t L_137 = V_13;
		V_38 = (bool)((((int32_t)L_137) > ((int32_t)0))? 1 : 0);
		bool L_138 = V_38;
		if (L_138)
		{
			goto IL_01be;
		}
	}

IL_01e1:
	{
		// break;
		goto IL_01fc;
	}

IL_01e3:
	{
		// previous = i;
		int32_t L_139 = V_13;
		V_12 = L_139;
		// i = next;
		int32_t L_140 = V_14;
		V_13 = L_140;
		// next = (next + 1) % vertexCount;
		int32_t L_141 = V_14;
		int32_t L_142 = V_1;
		V_14 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)1))%(int32_t)L_142));
	}

IL_01f4:
	{
		// while (true) {
		V_39 = (bool)1;
		goto IL_00c3;
	}

IL_01fc:
	{
		// triangles.Add(indices[(vertexCount + i - 1) % vertexCount]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_143 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_144 = V_3;
		int32_t L_145 = V_1;
		int32_t L_146 = V_13;
		int32_t L_147 = V_1;
		NullCheck(L_144);
		int32_t L_148 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)L_146)), (int32_t)1))%(int32_t)L_147));
		int32_t L_149 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		NullCheck(L_143);
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_143, L_149, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// triangles.Add(indices[i]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_150 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_151 = V_3;
		int32_t L_152 = V_13;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		int32_t L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_150);
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_150, L_154, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// triangles.Add(indices[(i + 1) % vertexCount]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_155 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_156 = V_3;
		int32_t L_157 = V_13;
		int32_t L_158 = V_1;
		NullCheck(L_156);
		int32_t L_159 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)1))%(int32_t)L_158));
		int32_t L_160 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_155);
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_155, L_160, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// indicesArray.RemoveAt(i);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_161 = V_2;
		int32_t L_162 = V_13;
		NullCheck(L_161);
		ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13(L_161, L_162, /*hidden argument*/ExposedList_1_RemoveAt_m74D0AC175C5B5B597106B9B6B37B6A51A8EF2B13_RuntimeMethod_var);
		// isConcaveArray.RemoveAt(i);
		ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * L_163 = V_4;
		int32_t L_164 = V_13;
		NullCheck(L_163);
		ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8(L_163, L_164, /*hidden argument*/ExposedList_1_RemoveAt_m315AA4921C74B8F80A3A354E0524085CAEF82AA8_RuntimeMethod_var);
		// vertexCount--;
		int32_t L_165 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_165, (int32_t)1));
		// int previousIndex = (vertexCount + i - 1) % vertexCount;
		int32_t L_166 = V_1;
		int32_t L_167 = V_13;
		int32_t L_168 = V_1;
		V_15 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)L_167)), (int32_t)1))%(int32_t)L_168));
		// int nextIndex = i == vertexCount ? 0 : i;
		int32_t L_169 = V_13;
		int32_t L_170 = V_1;
		if ((((int32_t)L_169) == ((int32_t)L_170)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_171 = V_13;
		G_B33_0 = L_171;
		goto IL_0255;
	}

IL_0254:
	{
		G_B33_0 = 0;
	}

IL_0255:
	{
		V_16 = G_B33_0;
		// isConcave[previousIndex] = IsConcave(previousIndex, vertexCount, vertices, indices);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_172 = V_5;
		int32_t L_173 = V_15;
		int32_t L_174 = V_15;
		int32_t L_175 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_176 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_177 = V_3;
		bool L_178;
		L_178 = Triangulator_IsConcave_m4F6E621BB08285C80D265E56DD7C813F9748E0F4(L_174, L_175, L_176, L_177, /*hidden argument*/NULL);
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(L_173), (bool)L_178);
		// isConcave[nextIndex] = IsConcave(nextIndex, vertexCount, vertices, indices);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_179 = V_5;
		int32_t L_180 = V_16;
		int32_t L_181 = V_16;
		int32_t L_182 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_183 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_184 = V_3;
		bool L_185;
		L_185 = Triangulator_IsConcave_m4F6E621BB08285C80D265E56DD7C813F9748E0F4(L_181, L_182, L_183, L_184, /*hidden argument*/NULL);
		NullCheck(L_179);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(L_180), (bool)L_185);
	}

IL_0276:
	{
		// while (vertexCount > 3) {
		int32_t L_186 = V_1;
		V_40 = (bool)((((int32_t)L_186) > ((int32_t)3))? 1 : 0);
		bool L_187 = V_40;
		if (L_187)
		{
			goto IL_00b2;
		}
	}
	{
		// if (vertexCount == 3) {
		int32_t L_188 = V_1;
		V_41 = (bool)((((int32_t)L_188) == ((int32_t)3))? 1 : 0);
		bool L_189 = V_41;
		if (!L_189)
		{
			goto IL_02b0;
		}
	}
	{
		// triangles.Add(indices[2]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_190 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_191 = V_3;
		NullCheck(L_191);
		int32_t L_192 = 2;
		int32_t L_193 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		NullCheck(L_190);
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_190, L_193, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// triangles.Add(indices[0]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_194 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_195 = V_3;
		NullCheck(L_195);
		int32_t L_196 = 0;
		int32_t L_197 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		NullCheck(L_194);
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_194, L_197, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// triangles.Add(indices[1]);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_198 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_199 = V_3;
		NullCheck(L_199);
		int32_t L_200 = 1;
		int32_t L_201 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_198);
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_198, L_201, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
	}

IL_02b0:
	{
		// return triangles;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_202 = V_6;
		V_42 = L_202;
		goto IL_02b6;
	}

IL_02b6:
	{
		// }
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_203 = V_42;
		return L_203;
	}
}
// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>> Spine.Triangulator::Decompose(Spine.ExposedList`1<System.Single>,Spine.ExposedList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * Triangulator_Decompose_m2B5975EFF42DF52CC3828602BC4B80C40344DEC5 (Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B * __this, ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * ___verticesArray0, ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * ___triangles1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_m40B61D0D728CF9B427F957C4A8E7A4A364690255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_Clear_mBC51B78D1DACC555F6F73D293AC8E6D6DC2FEC18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_RemoveAt_m0629ED8D156A78115171F2746A855438C3DBE81C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_RemoveAt_mABBDA48F0096E88AB0169B176320716F8EE471FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * V_1 = NULL;
	ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * V_2 = NULL;
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * V_3 = NULL;
	ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_28 = NULL;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_41 = NULL;
	float V_42 = 0.0f;
	float V_43 = 0.0f;
	float V_44 = 0.0f;
	float V_45 = 0.0f;
	float V_46 = 0.0f;
	float V_47 = 0.0f;
	float V_48 = 0.0f;
	float V_49 = 0.0f;
	int32_t V_50 = 0;
	bool V_51 = false;
	int32_t V_52 = 0;
	ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * V_53 = NULL;
	int32_t V_54 = 0;
	int32_t V_55 = 0;
	int32_t V_56 = 0;
	ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * V_57 = NULL;
	float V_58 = 0.0f;
	float V_59 = 0.0f;
	int32_t V_60 = 0;
	int32_t V_61 = 0;
	bool V_62 = false;
	bool V_63 = false;
	bool V_64 = false;
	bool V_65 = false;
	bool V_66 = false;
	bool V_67 = false;
	int32_t V_68 = 0;
	bool V_69 = false;
	bool V_70 = false;
	ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * V_71 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B39_0 = 0;
	{
		// float[] vertices = verticesArray.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_0 = ___verticesArray0;
		NullCheck(L_0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0->get_Items_0();
		V_0 = L_1;
		// ExposedList<ExposedList<float>> convexPolygons = this.convexPolygons;
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_2 = __this->get_convexPolygons_0();
		V_1 = L_2;
		// for (int i = 0, n = convexPolygons.Count; i < n; i++)
		V_8 = 0;
		// for (int i = 0, n = convexPolygons.Count; i < n; i++)
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_1();
		V_9 = L_4;
		goto IL_0037;
	}

IL_001c:
	{
		// polygonPool.Free(convexPolygons.Items[i]);
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_5 = __this->get_polygonPool_5();
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_6 = V_1;
		NullCheck(L_6);
		ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* L_7 = L_6->get_Items_0();
		int32_t L_8 = V_8;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_10 = (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75(L_5, L_10, /*hidden argument*/Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75_RuntimeMethod_var);
		// for (int i = 0, n = convexPolygons.Count; i < n; i++)
		int32_t L_11 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0, n = convexPolygons.Count; i < n; i++)
		int32_t L_12 = V_8;
		int32_t L_13 = V_9;
		V_10 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_10;
		if (L_14)
		{
			goto IL_001c;
		}
	}
	{
		// convexPolygons.Clear();
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_15 = V_1;
		NullCheck(L_15);
		ExposedList_1_Clear_mBC51B78D1DACC555F6F73D293AC8E6D6DC2FEC18(L_15, (bool)1, /*hidden argument*/ExposedList_1_Clear_mBC51B78D1DACC555F6F73D293AC8E6D6DC2FEC18_RuntimeMethod_var);
		// ExposedList<ExposedList<int>> convexPolygonsIndices = this.convexPolygonsIndices;
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_16 = __this->get_convexPolygonsIndices_1();
		V_2 = L_16;
		// for (int i = 0, n = convexPolygonsIndices.Count; i < n; i++)
		V_11 = 0;
		// for (int i = 0, n = convexPolygonsIndices.Count; i < n; i++)
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_Count_1();
		V_12 = L_18;
		goto IL_007a;
	}

IL_005f:
	{
		// polygonIndicesPool.Free(convexPolygonsIndices.Items[i]);
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_19 = __this->get_polygonIndicesPool_6();
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_20 = V_2;
		NullCheck(L_20);
		ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* L_21 = L_20->get_Items_0();
		int32_t L_22 = V_11;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_24 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805(L_19, L_24, /*hidden argument*/Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805_RuntimeMethod_var);
		// for (int i = 0, n = convexPolygonsIndices.Count; i < n; i++)
		int32_t L_25 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_007a:
	{
		// for (int i = 0, n = convexPolygonsIndices.Count; i < n; i++)
		int32_t L_26 = V_11;
		int32_t L_27 = V_12;
		V_13 = (bool)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_13;
		if (L_28)
		{
			goto IL_005f;
		}
	}
	{
		// convexPolygonsIndices.Clear();
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_29 = V_2;
		NullCheck(L_29);
		ExposedList_1_Clear_m40B61D0D728CF9B427F957C4A8E7A4A364690255(L_29, (bool)1, /*hidden argument*/ExposedList_1_Clear_m40B61D0D728CF9B427F957C4A8E7A4A364690255_RuntimeMethod_var);
		// ExposedList<int> polygonIndices = polygonIndicesPool.Obtain();
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_30 = __this->get_polygonIndicesPool_6();
		NullCheck(L_30);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_31;
		L_31 = Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1(L_30, /*hidden argument*/Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1_RuntimeMethod_var);
		V_3 = L_31;
		// polygonIndices.Clear();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_32 = V_3;
		NullCheck(L_32);
		ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B(L_32, (bool)1, /*hidden argument*/ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		// ExposedList<float> polygon = polygonPool.Obtain();
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_33 = __this->get_polygonPool_5();
		NullCheck(L_33);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_34;
		L_34 = Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB(L_33, /*hidden argument*/Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB_RuntimeMethod_var);
		V_4 = L_34;
		// polygon.Clear();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_35 = V_4;
		NullCheck(L_35);
		ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847(L_35, (bool)1, /*hidden argument*/ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_RuntimeMethod_var);
		// int fanBaseIndex = -1, lastWinding = 0;
		V_5 = (-1);
		// int fanBaseIndex = -1, lastWinding = 0;
		V_6 = 0;
		// int[] trianglesItems = triangles.Items;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_36 = ___triangles1;
		NullCheck(L_36);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = L_36->get_Items_0();
		V_7 = L_37;
		// for (int i = 0, n = triangles.Count; i < n; i += 3) {
		V_14 = 0;
		// for (int i = 0, n = triangles.Count; i < n; i += 3) {
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_38 = ___triangles1;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_Count_1();
		V_15 = L_39;
		goto IL_02b0;
	}

IL_00d6:
	{
		// int t1 = trianglesItems[i] << 1, t2 = trianglesItems[i + 1] << 1, t3 = trianglesItems[i + 2] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = V_7;
		int32_t L_41 = V_14;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_16 = ((int32_t)((int32_t)L_43<<(int32_t)1));
		// int t1 = trianglesItems[i] << 1, t2 = trianglesItems[i + 1] << 1, t3 = trianglesItems[i + 2] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = V_7;
		int32_t L_45 = V_14;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_17 = ((int32_t)((int32_t)L_47<<(int32_t)1));
		// int t1 = trianglesItems[i] << 1, t2 = trianglesItems[i + 1] << 1, t3 = trianglesItems[i + 2] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = V_7;
		int32_t L_49 = V_14;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)2));
		int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_18 = ((int32_t)((int32_t)L_51<<(int32_t)1));
		// float x1 = vertices[t1], y1 = vertices[t1 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_52 = V_0;
		int32_t L_53 = V_16;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		float L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_19 = L_55;
		// float x1 = vertices[t1], y1 = vertices[t1 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_56 = V_0;
		int32_t L_57 = V_16;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		float L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_20 = L_59;
		// float x2 = vertices[t2], y2 = vertices[t2 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_60 = V_0;
		int32_t L_61 = V_17;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		float L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_21 = L_63;
		// float x2 = vertices[t2], y2 = vertices[t2 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_64 = V_0;
		int32_t L_65 = V_17;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		float L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_22 = L_67;
		// float x3 = vertices[t3], y3 = vertices[t3 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_68 = V_0;
		int32_t L_69 = V_18;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		float L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_23 = L_71;
		// float x3 = vertices[t3], y3 = vertices[t3 + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_72 = V_0;
		int32_t L_73 = V_18;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
		float L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_24 = L_75;
		// bool merged = false;
		V_25 = (bool)0;
		// if (fanBaseIndex == t1) {
		int32_t L_76 = V_5;
		int32_t L_77 = V_16;
		V_26 = (bool)((((int32_t)L_76) == ((int32_t)L_77))? 1 : 0);
		bool L_78 = V_26;
		if (!L_78)
		{
			goto IL_01bf;
		}
	}
	{
		// int o = polygon.Count - 4;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_79 = V_4;
		NullCheck(L_79);
		int32_t L_80 = L_79->get_Count_1();
		V_27 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)4));
		// float[] p = polygon.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_81 = V_4;
		NullCheck(L_81);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_82 = L_81->get_Items_0();
		V_28 = L_82;
		// int winding1 = Winding(p[o], p[o + 1], p[o + 2], p[o + 3], x3, y3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_83 = V_28;
		int32_t L_84 = V_27;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		float L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_87 = V_28;
		int32_t L_88 = V_27;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
		float L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_91 = V_28;
		int32_t L_92 = V_27;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)2));
		float L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_95 = V_28;
		int32_t L_96 = V_27;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)3));
		float L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		float L_99 = V_23;
		float L_100 = V_24;
		int32_t L_101;
		L_101 = Triangulator_Winding_mE21A851D3764F47B4F5A499A9CA85EAD2DE4E51A(L_86, L_90, L_94, L_98, L_99, L_100, /*hidden argument*/NULL);
		V_29 = L_101;
		// int winding2 = Winding(x3, y3, p[0], p[1], p[2], p[3]);
		float L_102 = V_23;
		float L_103 = V_24;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_104 = V_28;
		NullCheck(L_104);
		int32_t L_105 = 0;
		float L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_107 = V_28;
		NullCheck(L_107);
		int32_t L_108 = 1;
		float L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_110 = V_28;
		NullCheck(L_110);
		int32_t L_111 = 2;
		float L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_113 = V_28;
		NullCheck(L_113);
		int32_t L_114 = 3;
		float L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		int32_t L_116;
		L_116 = Triangulator_Winding_mE21A851D3764F47B4F5A499A9CA85EAD2DE4E51A(L_102, L_103, L_106, L_109, L_112, L_115, /*hidden argument*/NULL);
		V_30 = L_116;
		// if (winding1 == lastWinding && winding2 == lastWinding) {
		int32_t L_117 = V_29;
		int32_t L_118 = V_6;
		if ((!(((uint32_t)L_117) == ((uint32_t)L_118))))
		{
			goto IL_0195;
		}
	}
	{
		int32_t L_119 = V_30;
		int32_t L_120 = V_6;
		G_B11_0 = ((((int32_t)L_119) == ((int32_t)L_120))? 1 : 0);
		goto IL_0196;
	}

IL_0195:
	{
		G_B11_0 = 0;
	}

IL_0196:
	{
		V_31 = (bool)G_B11_0;
		bool L_121 = V_31;
		if (!L_121)
		{
			goto IL_01be;
		}
	}
	{
		// polygon.Add(x3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_122 = V_4;
		float L_123 = V_23;
		NullCheck(L_122);
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_122, L_123, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(y3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_124 = V_4;
		float L_125 = V_24;
		NullCheck(L_124);
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_124, L_125, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygonIndices.Add(t3);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_126 = V_3;
		int32_t L_127 = V_18;
		NullCheck(L_126);
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_126, L_127, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// merged = true;
		V_25 = (bool)1;
	}

IL_01be:
	{
	}

IL_01bf:
	{
		// if (!merged) {
		bool L_128 = V_25;
		V_32 = (bool)((((int32_t)L_128) == ((int32_t)0))? 1 : 0);
		bool L_129 = V_32;
		if (!L_129)
		{
			goto IL_02a9;
		}
	}
	{
		// if (polygon.Count > 0) {
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_130 = V_4;
		NullCheck(L_130);
		int32_t L_131 = L_130->get_Count_1();
		V_33 = (bool)((((int32_t)L_131) > ((int32_t)0))? 1 : 0);
		bool L_132 = V_33;
		if (!L_132)
		{
			goto IL_01f3;
		}
	}
	{
		// convexPolygons.Add(polygon);
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_133 = V_1;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_134 = V_4;
		NullCheck(L_133);
		ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576(L_133, L_134, /*hidden argument*/ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576_RuntimeMethod_var);
		// convexPolygonsIndices.Add(polygonIndices);
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_135 = V_2;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_136 = V_3;
		NullCheck(L_135);
		ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A(L_135, L_136, /*hidden argument*/ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A_RuntimeMethod_var);
		goto IL_0210;
	}

IL_01f3:
	{
		// polygonPool.Free(polygon);
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_137 = __this->get_polygonPool_5();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_138 = V_4;
		NullCheck(L_137);
		Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75(L_137, L_138, /*hidden argument*/Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75_RuntimeMethod_var);
		// polygonIndicesPool.Free(polygonIndices);
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_139 = __this->get_polygonIndicesPool_6();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_140 = V_3;
		NullCheck(L_139);
		Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805(L_139, L_140, /*hidden argument*/Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805_RuntimeMethod_var);
	}

IL_0210:
	{
		// polygon = polygonPool.Obtain();
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_141 = __this->get_polygonPool_5();
		NullCheck(L_141);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_142;
		L_142 = Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB(L_141, /*hidden argument*/Pool_1_Obtain_m30E900D977A82966F61786948EEFD33E110C06FB_RuntimeMethod_var);
		V_4 = L_142;
		// polygon.Clear();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_143 = V_4;
		NullCheck(L_143);
		ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847(L_143, (bool)1, /*hidden argument*/ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_RuntimeMethod_var);
		// polygon.Add(x1);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_144 = V_4;
		float L_145 = V_19;
		NullCheck(L_144);
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_144, L_145, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(y1);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_146 = V_4;
		float L_147 = V_20;
		NullCheck(L_146);
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_146, L_147, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(x2);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_148 = V_4;
		float L_149 = V_21;
		NullCheck(L_148);
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_148, L_149, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(y2);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_150 = V_4;
		float L_151 = V_22;
		NullCheck(L_150);
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_150, L_151, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(x3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_152 = V_4;
		float L_153 = V_23;
		NullCheck(L_152);
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_152, L_153, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(y3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_154 = V_4;
		float L_155 = V_24;
		NullCheck(L_154);
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_154, L_155, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygonIndices = polygonIndicesPool.Obtain();
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_156 = __this->get_polygonIndicesPool_6();
		NullCheck(L_156);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_157;
		L_157 = Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1(L_156, /*hidden argument*/Pool_1_Obtain_mCD31B8A93DC6FACE13671D18D42170131A686CF1_RuntimeMethod_var);
		V_3 = L_157;
		// polygonIndices.Clear();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_158 = V_3;
		NullCheck(L_158);
		ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B(L_158, (bool)1, /*hidden argument*/ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		// polygonIndices.Add(t1);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_159 = V_3;
		int32_t L_160 = V_16;
		NullCheck(L_159);
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_159, L_160, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// polygonIndices.Add(t2);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_161 = V_3;
		int32_t L_162 = V_17;
		NullCheck(L_161);
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_161, L_162, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// polygonIndices.Add(t3);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_163 = V_3;
		int32_t L_164 = V_18;
		NullCheck(L_163);
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_163, L_164, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// lastWinding = Winding(x1, y1, x2, y2, x3, y3);
		float L_165 = V_19;
		float L_166 = V_20;
		float L_167 = V_21;
		float L_168 = V_22;
		float L_169 = V_23;
		float L_170 = V_24;
		int32_t L_171;
		L_171 = Triangulator_Winding_mE21A851D3764F47B4F5A499A9CA85EAD2DE4E51A(L_165, L_166, L_167, L_168, L_169, L_170, /*hidden argument*/NULL);
		V_6 = L_171;
		// fanBaseIndex = t1;
		int32_t L_172 = V_16;
		V_5 = L_172;
	}

IL_02a9:
	{
		// for (int i = 0, n = triangles.Count; i < n; i += 3) {
		int32_t L_173 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)3));
	}

IL_02b0:
	{
		// for (int i = 0, n = triangles.Count; i < n; i += 3) {
		int32_t L_174 = V_14;
		int32_t L_175 = V_15;
		V_34 = (bool)((((int32_t)L_174) < ((int32_t)L_175))? 1 : 0);
		bool L_176 = V_34;
		if (L_176)
		{
			goto IL_00d6;
		}
	}
	{
		// if (polygon.Count > 0) {
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_177 = V_4;
		NullCheck(L_177);
		int32_t L_178 = L_177->get_Count_1();
		V_35 = (bool)((((int32_t)L_178) > ((int32_t)0))? 1 : 0);
		bool L_179 = V_35;
		if (!L_179)
		{
			goto IL_02e2;
		}
	}
	{
		// convexPolygons.Add(polygon);
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_180 = V_1;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_181 = V_4;
		NullCheck(L_180);
		ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576(L_180, L_181, /*hidden argument*/ExposedList_1_Add_m9CE0A2C0C8C7E99FB44E2D206DB6FAF36BB3C576_RuntimeMethod_var);
		// convexPolygonsIndices.Add(polygonIndices);
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_182 = V_2;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_183 = V_3;
		NullCheck(L_182);
		ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A(L_182, L_183, /*hidden argument*/ExposedList_1_Add_m94D79351365A6FA9EBD26A3CA00D4839BE613B6A_RuntimeMethod_var);
	}

IL_02e2:
	{
		// for (int i = 0, n = convexPolygons.Count; i < n; i++) {
		V_36 = 0;
		// for (int i = 0, n = convexPolygons.Count; i < n; i++) {
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_184 = V_1;
		NullCheck(L_184);
		int32_t L_185 = L_184->get_Count_1();
		V_37 = L_185;
		goto IL_04e0;
	}

IL_02f2:
	{
		// polygonIndices = convexPolygonsIndices.Items[i];
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_186 = V_2;
		NullCheck(L_186);
		ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* L_187 = L_186->get_Items_0();
		int32_t L_188 = V_36;
		NullCheck(L_187);
		int32_t L_189 = L_188;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_190 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)(L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		V_3 = L_190;
		// if (polygonIndices.Count == 0) continue;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_191 = V_3;
		NullCheck(L_191);
		int32_t L_192 = L_191->get_Count_1();
		V_51 = (bool)((((int32_t)L_192) == ((int32_t)0))? 1 : 0);
		bool L_193 = V_51;
		if (!L_193)
		{
			goto IL_0311;
		}
	}
	{
		// if (polygonIndices.Count == 0) continue;
		goto IL_04da;
	}

IL_0311:
	{
		// int firstIndex = polygonIndices.Items[0];
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_194 = V_3;
		NullCheck(L_194);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_195 = L_194->get_Items_0();
		NullCheck(L_195);
		int32_t L_196 = 0;
		int32_t L_197 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		V_38 = L_197;
		// int lastIndex = polygonIndices.Items[polygonIndices.Count - 1];
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_198 = V_3;
		NullCheck(L_198);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_199 = L_198->get_Items_0();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_200 = V_3;
		NullCheck(L_200);
		int32_t L_201 = L_200->get_Count_1();
		NullCheck(L_199);
		int32_t L_202 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_201, (int32_t)1));
		int32_t L_203 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		V_39 = L_203;
		// polygon = convexPolygons.Items[i];
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_204 = V_1;
		NullCheck(L_204);
		ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* L_205 = L_204->get_Items_0();
		int32_t L_206 = V_36;
		NullCheck(L_205);
		int32_t L_207 = L_206;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_208 = (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *)(L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		V_4 = L_208;
		// int o = polygon.Count - 4;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_209 = V_4;
		NullCheck(L_209);
		int32_t L_210 = L_209->get_Count_1();
		V_40 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_210, (int32_t)4));
		// float[] p = polygon.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_211 = V_4;
		NullCheck(L_211);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_212 = L_211->get_Items_0();
		V_41 = L_212;
		// float prevPrevX = p[o], prevPrevY = p[o + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_213 = V_41;
		int32_t L_214 = V_40;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		float L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		V_42 = L_216;
		// float prevPrevX = p[o], prevPrevY = p[o + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_217 = V_41;
		int32_t L_218 = V_40;
		NullCheck(L_217);
		int32_t L_219 = ((int32_t)il2cpp_codegen_add((int32_t)L_218, (int32_t)1));
		float L_220 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		V_43 = L_220;
		// float prevX = p[o + 2], prevY = p[o + 3];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_221 = V_41;
		int32_t L_222 = V_40;
		NullCheck(L_221);
		int32_t L_223 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, (int32_t)2));
		float L_224 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		V_44 = L_224;
		// float prevX = p[o + 2], prevY = p[o + 3];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_225 = V_41;
		int32_t L_226 = V_40;
		NullCheck(L_225);
		int32_t L_227 = ((int32_t)il2cpp_codegen_add((int32_t)L_226, (int32_t)3));
		float L_228 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		V_45 = L_228;
		// float firstX = p[0], firstY = p[1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_229 = V_41;
		NullCheck(L_229);
		int32_t L_230 = 0;
		float L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		V_46 = L_231;
		// float firstX = p[0], firstY = p[1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_232 = V_41;
		NullCheck(L_232);
		int32_t L_233 = 1;
		float L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		V_47 = L_234;
		// float secondX = p[2], secondY = p[3];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_235 = V_41;
		NullCheck(L_235);
		int32_t L_236 = 2;
		float L_237 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		V_48 = L_237;
		// float secondX = p[2], secondY = p[3];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_238 = V_41;
		NullCheck(L_238);
		int32_t L_239 = 3;
		float L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		V_49 = L_240;
		// int winding = Winding(prevPrevX, prevPrevY, prevX, prevY, firstX, firstY);
		float L_241 = V_42;
		float L_242 = V_43;
		float L_243 = V_44;
		float L_244 = V_45;
		float L_245 = V_46;
		float L_246 = V_47;
		int32_t L_247;
		L_247 = Triangulator_Winding_mE21A851D3764F47B4F5A499A9CA85EAD2DE4E51A(L_241, L_242, L_243, L_244, L_245, L_246, /*hidden argument*/NULL);
		V_50 = L_247;
		// for (int ii = 0; ii < n; ii++) {
		V_52 = 0;
		goto IL_04ca;
	}

IL_03a0:
	{
		// if (ii == i) continue;
		int32_t L_248 = V_52;
		int32_t L_249 = V_36;
		V_62 = (bool)((((int32_t)L_248) == ((int32_t)L_249))? 1 : 0);
		bool L_250 = V_62;
		if (!L_250)
		{
			goto IL_03b2;
		}
	}
	{
		// if (ii == i) continue;
		goto IL_04c4;
	}

IL_03b2:
	{
		// ExposedList<int> otherIndices = convexPolygonsIndices.Items[ii];
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_251 = V_2;
		NullCheck(L_251);
		ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* L_252 = L_251->get_Items_0();
		int32_t L_253 = V_52;
		NullCheck(L_252);
		int32_t L_254 = L_253;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_255 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)(L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		V_53 = L_255;
		// if (otherIndices.Count != 3) continue;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_256 = V_53;
		NullCheck(L_256);
		int32_t L_257 = L_256->get_Count_1();
		V_63 = (bool)((((int32_t)((((int32_t)L_257) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_258 = V_63;
		if (!L_258)
		{
			goto IL_03d5;
		}
	}
	{
		// if (otherIndices.Count != 3) continue;
		goto IL_04c4;
	}

IL_03d5:
	{
		// int otherFirstIndex = otherIndices.Items[0];
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_259 = V_53;
		NullCheck(L_259);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_260 = L_259->get_Items_0();
		NullCheck(L_260);
		int32_t L_261 = 0;
		int32_t L_262 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		V_54 = L_262;
		// int otherSecondIndex = otherIndices.Items[1];
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_263 = V_53;
		NullCheck(L_263);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_264 = L_263->get_Items_0();
		NullCheck(L_264);
		int32_t L_265 = 1;
		int32_t L_266 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		V_55 = L_266;
		// int otherLastIndex = otherIndices.Items[2];
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_267 = V_53;
		NullCheck(L_267);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_268 = L_267->get_Items_0();
		NullCheck(L_268);
		int32_t L_269 = 2;
		int32_t L_270 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		V_56 = L_270;
		// ExposedList<float> otherPoly = convexPolygons.Items[ii];
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_271 = V_1;
		NullCheck(L_271);
		ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* L_272 = L_271->get_Items_0();
		int32_t L_273 = V_52;
		NullCheck(L_272);
		int32_t L_274 = L_273;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_275 = (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *)(L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		V_57 = L_275;
		// float x3 = otherPoly.Items[otherPoly.Count - 2], y3 = otherPoly.Items[otherPoly.Count - 1];
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_276 = V_57;
		NullCheck(L_276);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_277 = L_276->get_Items_0();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_278 = V_57;
		NullCheck(L_278);
		int32_t L_279 = L_278->get_Count_1();
		NullCheck(L_277);
		int32_t L_280 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_279, (int32_t)2));
		float L_281 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		V_58 = L_281;
		// float x3 = otherPoly.Items[otherPoly.Count - 2], y3 = otherPoly.Items[otherPoly.Count - 1];
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_282 = V_57;
		NullCheck(L_282);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_283 = L_282->get_Items_0();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_284 = V_57;
		NullCheck(L_284);
		int32_t L_285 = L_284->get_Count_1();
		NullCheck(L_283);
		int32_t L_286 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_285, (int32_t)1));
		float L_287 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		V_59 = L_287;
		// if (otherFirstIndex != firstIndex || otherSecondIndex != lastIndex) continue;
		int32_t L_288 = V_54;
		int32_t L_289 = V_38;
		if ((!(((uint32_t)L_288) == ((uint32_t)L_289))))
		{
			goto IL_0438;
		}
	}
	{
		int32_t L_290 = V_55;
		int32_t L_291 = V_39;
		G_B34_0 = ((((int32_t)((((int32_t)L_290) == ((int32_t)L_291))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0439;
	}

IL_0438:
	{
		G_B34_0 = 1;
	}

IL_0439:
	{
		V_64 = (bool)G_B34_0;
		bool L_292 = V_64;
		if (!L_292)
		{
			goto IL_0444;
		}
	}
	{
		// if (otherFirstIndex != firstIndex || otherSecondIndex != lastIndex) continue;
		goto IL_04c4;
	}

IL_0444:
	{
		// int winding1 = Winding(prevPrevX, prevPrevY, prevX, prevY, x3, y3);
		float L_293 = V_42;
		float L_294 = V_43;
		float L_295 = V_44;
		float L_296 = V_45;
		float L_297 = V_58;
		float L_298 = V_59;
		int32_t L_299;
		L_299 = Triangulator_Winding_mE21A851D3764F47B4F5A499A9CA85EAD2DE4E51A(L_293, L_294, L_295, L_296, L_297, L_298, /*hidden argument*/NULL);
		V_60 = L_299;
		// int winding2 = Winding(x3, y3, firstX, firstY, secondX, secondY);
		float L_300 = V_58;
		float L_301 = V_59;
		float L_302 = V_46;
		float L_303 = V_47;
		float L_304 = V_48;
		float L_305 = V_49;
		int32_t L_306;
		L_306 = Triangulator_Winding_mE21A851D3764F47B4F5A499A9CA85EAD2DE4E51A(L_300, L_301, L_302, L_303, L_304, L_305, /*hidden argument*/NULL);
		V_61 = L_306;
		// if (winding1 == winding && winding2 == winding) {
		int32_t L_307 = V_60;
		int32_t L_308 = V_50;
		if ((!(((uint32_t)L_307) == ((uint32_t)L_308))))
		{
			goto IL_0478;
		}
	}
	{
		int32_t L_309 = V_61;
		int32_t L_310 = V_50;
		G_B39_0 = ((((int32_t)L_309) == ((int32_t)L_310))? 1 : 0);
		goto IL_0479;
	}

IL_0478:
	{
		G_B39_0 = 0;
	}

IL_0479:
	{
		V_65 = (bool)G_B39_0;
		bool L_311 = V_65;
		if (!L_311)
		{
			goto IL_04c3;
		}
	}
	{
		// otherPoly.Clear();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_312 = V_57;
		NullCheck(L_312);
		ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847(L_312, (bool)1, /*hidden argument*/ExposedList_1_Clear_m56FD9B006AFA6C0C3B822A2460ED52D4FA72D847_RuntimeMethod_var);
		// otherIndices.Clear();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_313 = V_53;
		NullCheck(L_313);
		ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B(L_313, (bool)1, /*hidden argument*/ExposedList_1_Clear_m9E1BE8027151460EB7E0FAB390B2846D15BA302B_RuntimeMethod_var);
		// polygon.Add(x3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_314 = V_4;
		float L_315 = V_58;
		NullCheck(L_314);
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_314, L_315, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygon.Add(y3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_316 = V_4;
		float L_317 = V_59;
		NullCheck(L_316);
		ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B(L_316, L_317, /*hidden argument*/ExposedList_1_Add_m5B673948ABFBB0479F3A81270A22A4295AEF619B_RuntimeMethod_var);
		// polygonIndices.Add(otherLastIndex);
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_318 = V_3;
		int32_t L_319 = V_56;
		NullCheck(L_318);
		ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8(L_318, L_319, /*hidden argument*/ExposedList_1_Add_m65591272902D94AFAE294B4CDF30A465AA2274F8_RuntimeMethod_var);
		// prevPrevX = prevX;
		float L_320 = V_44;
		V_42 = L_320;
		// prevPrevY = prevY;
		float L_321 = V_45;
		V_43 = L_321;
		// prevX = x3;
		float L_322 = V_58;
		V_44 = L_322;
		// prevY = y3;
		float L_323 = V_59;
		V_45 = L_323;
		// ii = 0;
		V_52 = 0;
	}

IL_04c3:
	{
	}

IL_04c4:
	{
		// for (int ii = 0; ii < n; ii++) {
		int32_t L_324 = V_52;
		V_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_324, (int32_t)1));
	}

IL_04ca:
	{
		// for (int ii = 0; ii < n; ii++) {
		int32_t L_325 = V_52;
		int32_t L_326 = V_37;
		V_66 = (bool)((((int32_t)L_325) < ((int32_t)L_326))? 1 : 0);
		bool L_327 = V_66;
		if (L_327)
		{
			goto IL_03a0;
		}
	}
	{
	}

IL_04da:
	{
		// for (int i = 0, n = convexPolygons.Count; i < n; i++) {
		int32_t L_328 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_328, (int32_t)1));
	}

IL_04e0:
	{
		// for (int i = 0, n = convexPolygons.Count; i < n; i++) {
		int32_t L_329 = V_36;
		int32_t L_330 = V_37;
		V_67 = (bool)((((int32_t)L_329) < ((int32_t)L_330))? 1 : 0);
		bool L_331 = V_67;
		if (L_331)
		{
			goto IL_02f2;
		}
	}
	{
		// for (int i = convexPolygons.Count - 1; i >= 0; i--) {
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_332 = V_1;
		NullCheck(L_332);
		int32_t L_333 = L_332->get_Count_1();
		V_68 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_333, (int32_t)1));
		goto IL_0557;
	}

IL_04fb:
	{
		// polygon = convexPolygons.Items[i];
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_334 = V_1;
		NullCheck(L_334);
		ExposedList_1U5BU5D_tE723A0FFD1A0C77B17CCA09F9BE2EA1B09561CFE* L_335 = L_334->get_Items_0();
		int32_t L_336 = V_68;
		NullCheck(L_335);
		int32_t L_337 = L_336;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_338 = (ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 *)(L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		V_4 = L_338;
		// if (polygon.Count == 0) {
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_339 = V_4;
		NullCheck(L_339);
		int32_t L_340 = L_339->get_Count_1();
		V_69 = (bool)((((int32_t)L_340) == ((int32_t)0))? 1 : 0);
		bool L_341 = V_69;
		if (!L_341)
		{
			goto IL_0550;
		}
	}
	{
		// convexPolygons.RemoveAt(i);
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_342 = V_1;
		int32_t L_343 = V_68;
		NullCheck(L_342);
		ExposedList_1_RemoveAt_mABBDA48F0096E88AB0169B176320716F8EE471FB(L_342, L_343, /*hidden argument*/ExposedList_1_RemoveAt_mABBDA48F0096E88AB0169B176320716F8EE471FB_RuntimeMethod_var);
		// polygonPool.Free(polygon);
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_344 = __this->get_polygonPool_5();
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_345 = V_4;
		NullCheck(L_344);
		Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75(L_344, L_345, /*hidden argument*/Pool_1_Free_mA877966FCAD605DAFF16CD72619CE9B5A0160A75_RuntimeMethod_var);
		// polygonIndices = convexPolygonsIndices.Items[i];
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_346 = V_2;
		NullCheck(L_346);
		ExposedList_1U5BU5D_tC7922C1CF6C272D1AC5CB95D7C39664D0F12FF54* L_347 = L_346->get_Items_0();
		int32_t L_348 = V_68;
		NullCheck(L_347);
		int32_t L_349 = L_348;
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_350 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)(L_347)->GetAt(static_cast<il2cpp_array_size_t>(L_349));
		V_3 = L_350;
		// convexPolygonsIndices.RemoveAt(i);
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_351 = V_2;
		int32_t L_352 = V_68;
		NullCheck(L_351);
		ExposedList_1_RemoveAt_m0629ED8D156A78115171F2746A855438C3DBE81C(L_351, L_352, /*hidden argument*/ExposedList_1_RemoveAt_m0629ED8D156A78115171F2746A855438C3DBE81C_RuntimeMethod_var);
		// polygonIndicesPool.Free(polygonIndices);
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_353 = __this->get_polygonIndicesPool_6();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_354 = V_3;
		NullCheck(L_353);
		Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805(L_353, L_354, /*hidden argument*/Pool_1_Free_m8AD43187DBD866A8B28F74E7FD9A90D7A5834805_RuntimeMethod_var);
	}

IL_0550:
	{
		// for (int i = convexPolygons.Count - 1; i >= 0; i--) {
		int32_t L_355 = V_68;
		V_68 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_355, (int32_t)1));
	}

IL_0557:
	{
		// for (int i = convexPolygons.Count - 1; i >= 0; i--) {
		int32_t L_356 = V_68;
		V_70 = (bool)((((int32_t)((((int32_t)L_356) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_357 = V_70;
		if (L_357)
		{
			goto IL_04fb;
		}
	}
	{
		// return convexPolygons;
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_358 = V_1;
		V_71 = L_358;
		goto IL_056a;
	}

IL_056a:
	{
		// }
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_359 = V_71;
		return L_359;
	}
}
// System.Boolean Spine.Triangulator::IsConcave(System.Int32,System.Int32,System.Single[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_IsConcave_m4F6E621BB08285C80D265E56DD7C813F9748E0F4 (int32_t ___index0, int32_t ___vertexCount1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___vertices2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___indices3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// int previous = indices[(vertexCount + index - 1) % vertexCount] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___indices3;
		int32_t L_1 = ___vertexCount1;
		int32_t L_2 = ___index0;
		int32_t L_3 = ___vertexCount1;
		NullCheck(L_0);
		int32_t L_4 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (int32_t)1))%(int32_t)L_3));
		int32_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)((int32_t)L_5<<(int32_t)1));
		// int current = indices[index] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ___indices3;
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)((int32_t)L_9<<(int32_t)1));
		// int next = indices[(index + 1) % vertexCount] << 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = ___indices3;
		int32_t L_11 = ___index0;
		int32_t L_12 = ___vertexCount1;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1))%(int32_t)L_12));
		int32_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = ((int32_t)((int32_t)L_14<<(int32_t)1));
		// return !PositiveArea(vertices[previous], vertices[previous + 1], vertices[current], vertices[current + 1], vertices[next],
		//     vertices[next + 1]);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = ___vertices2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		float L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = ___vertices2;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		float L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_23 = ___vertices2;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = ___vertices2;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		float L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = ___vertices2;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		float L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = ___vertices2;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		float L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		bool L_39;
		L_39 = Triangulator_PositiveArea_m0DA3F6EAED5BA8998E0A85070D2ED722BC9F5D1F(L_18, L_22, L_26, L_30, L_34, L_38, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		goto IL_0040;
	}

IL_0040:
	{
		// }
		bool L_40 = V_3;
		return L_40;
	}
}
// System.Boolean Spine.Triangulator::PositiveArea(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangulator_PositiveArea_m0DA3F6EAED5BA8998E0A85070D2ED722BC9F5D1F (float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return p1x * (p3y - p2y) + p2x * (p1y - p3y) + p3x * (p2y - p1y) >= 0;
		float L_0 = ___p1x0;
		float L_1 = ___p3y5;
		float L_2 = ___p2y3;
		float L_3 = ___p2x2;
		float L_4 = ___p1y1;
		float L_5 = ___p3y5;
		float L_6 = ___p3x4;
		float L_7 = ___p2y3;
		float L_8 = ___p1y1;
		V_0 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)))), (float)((float)il2cpp_codegen_multiply((float)L_3, (float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)))))), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8))))))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0022:
	{
		// }
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Int32 Spine.Triangulator::Winding(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Triangulator_Winding_mE21A851D3764F47B4F5A499A9CA85EAD2DE4E51A (float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// float px = p2x - p1x, py = p2y - p1y;
		float L_0 = ___p2x2;
		float L_1 = ___p1x0;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1));
		// float px = p2x - p1x, py = p2y - p1y;
		float L_2 = ___p2y3;
		float L_3 = ___p1y1;
		V_1 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3));
		// return p3x * py - p3y * px + px * p1y - p1x * py >= 0 ? 1 : -1;
		float L_4 = ___p3x4;
		float L_5 = V_1;
		float L_6 = ___p3y5;
		float L_7 = V_0;
		float L_8 = V_0;
		float L_9 = ___p1y1;
		float L_10 = ___p1x0;
		float L_11 = V_1;
		if ((((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) >= ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
	}

IL_0025:
	{
		V_2 = G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		int32_t L_12 = V_2;
		return L_12;
	}
}
// System.Void Spine.Triangulator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangulator__ctor_m3FCDADA414AE8407D5D1CCDDB036C394A07FADED (Triangulator_tB8EB2546BA4C75A44FDEEC203E67023C07FBBE8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_m02755087651BB67AD2B2D4D758AE77AFD7DC440B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_m84177DC3659E1B9F2837C8ADDC017ADDA00B36A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1__ctor_m7C7FBE91695216C54B23152A69A8EEB750808334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1__ctor_mEF3423A00009591979CA692DDE12CCC2FF4E8C26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly ExposedList<ExposedList<float>> convexPolygons = new ExposedList<ExposedList<float>>();
		ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 * L_0 = (ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289 *)il2cpp_codegen_object_new(ExposedList_1_tFAEEFBED9EABAD893C31C789759FD1BA692F0289_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_m02755087651BB67AD2B2D4D758AE77AFD7DC440B(L_0, /*hidden argument*/ExposedList_1__ctor_m02755087651BB67AD2B2D4D758AE77AFD7DC440B_RuntimeMethod_var);
		__this->set_convexPolygons_0(L_0);
		// private readonly ExposedList<ExposedList<int>> convexPolygonsIndices = new ExposedList<ExposedList<int>>();
		ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 * L_1 = (ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90 *)il2cpp_codegen_object_new(ExposedList_1_tE018626AD135D00E2FCAF5578BADE795F5CCDC90_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_m84177DC3659E1B9F2837C8ADDC017ADDA00B36A0(L_1, /*hidden argument*/ExposedList_1__ctor_m84177DC3659E1B9F2837C8ADDC017ADDA00B36A0_RuntimeMethod_var);
		__this->set_convexPolygonsIndices_1(L_1);
		// private readonly ExposedList<int> indicesArray = new ExposedList<int>();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_2 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)il2cpp_codegen_object_new(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2(L_2, /*hidden argument*/ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_RuntimeMethod_var);
		__this->set_indicesArray_2(L_2);
		// private readonly ExposedList<bool> isConcaveArray = new ExposedList<bool>();
		ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E * L_3 = (ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E *)il2cpp_codegen_object_new(ExposedList_1_tAA9A80412EB5EC236EBA9FC15B2BD9A61915AE7E_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C(L_3, /*hidden argument*/ExposedList_1__ctor_mB0F2F25C8D7C8DA90320D609A4DC4857D9ECC79C_RuntimeMethod_var);
		__this->set_isConcaveArray_3(L_3);
		// private readonly ExposedList<int> triangles = new ExposedList<int>();
		ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 * L_4 = (ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066 *)il2cpp_codegen_object_new(ExposedList_1_tEB071484A7B70681ADB6BD9522EFC630CA5C5066_il2cpp_TypeInfo_var);
		ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2(L_4, /*hidden argument*/ExposedList_1__ctor_m9BB5379A9A5D0484D07AE68B3215F94B8093DFD2_RuntimeMethod_var);
		__this->set_triangles_4(L_4);
		// private readonly Pool<ExposedList<float>> polygonPool = new Pool<ExposedList<float>>();
		Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 * L_5 = (Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9 *)il2cpp_codegen_object_new(Pool_1_tEBC6CCDAC2A4D2FDEE1A4FC452D0D72D0F4142B9_il2cpp_TypeInfo_var);
		Pool_1__ctor_mEF3423A00009591979CA692DDE12CCC2FF4E8C26(L_5, ((int32_t)16), ((int32_t)2147483647LL), /*hidden argument*/Pool_1__ctor_mEF3423A00009591979CA692DDE12CCC2FF4E8C26_RuntimeMethod_var);
		__this->set_polygonPool_5(L_5);
		// private readonly Pool<ExposedList<int>> polygonIndicesPool = new Pool<ExposedList<int>>();
		Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A * L_6 = (Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A *)il2cpp_codegen_object_new(Pool_1_t5CA90CE7EBA311405CE9C8F1E0C4DDFE861C384A_il2cpp_TypeInfo_var);
		Pool_1__ctor_m7C7FBE91695216C54B23152A69A8EEB750808334(L_6, ((int32_t)16), ((int32_t)2147483647LL), /*hidden argument*/Pool_1__ctor_m7C7FBE91695216C54B23152A69A8EEB750808334_RuntimeMethod_var);
		__this->set_polygonIndicesPool_6(L_6);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 Spine.VertexAttachment::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttachment_get_Id_m365B2BB369C3DD42CD90FD0979BBBBC6569406CD (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int Id { get { return id; } }
		int32_t L_0 = __this->get_id_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int Id { get { return id; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32[] Spine.VertexAttachment::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* VertexAttachment_get_Bones_m7E130D69DEA0AC57C8223B646EEF05DAEEF7B6B7 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, const RuntimeMethod* method)
{
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	{
		// public int[] Bones { get { return bones; } set { bones = value; } }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_bones_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int[] Bones { get { return bones; } set { bones = value; } }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.VertexAttachment::set_Bones(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_Bones_m902729F45F017DFBC75D561C45ADAD673799DF91 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// public int[] Bones { get { return bones; } set { bones = value; } }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_bones_5(L_0);
		// public int[] Bones { get { return bones; } set { bones = value; } }
		return;
	}
}
// System.Single[] Spine.VertexAttachment::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* VertexAttachment_get_Vertices_m07A5BCBA8C77ED433DB7BCCAF20FA01B02DF669B (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, const RuntimeMethod* method)
{
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_vertices_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.VertexAttachment::set_Vertices(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_Vertices_mFA737547B603D0D8C9638209103D8CE501F6F0E3 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___value0, const RuntimeMethod* method)
{
	{
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___value0;
		__this->set_vertices_6(L_0);
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		return;
	}
}
// System.Int32 Spine.VertexAttachment::get_WorldVerticesLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexAttachment_get_WorldVerticesLength_mEC4F4AC0F819118C902E639646330C241ACDDB43 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		int32_t L_0 = __this->get_worldVerticesLength_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.VertexAttachment::set_WorldVerticesLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_WorldVerticesLength_m44E85EEB7DE97F64FFE5AF017829A32A9775CE5A (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		int32_t L_0 = ___value0;
		__this->set_worldVerticesLength_7(L_0);
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		return;
	}
}
// Spine.VertexAttachment Spine.VertexAttachment::get_TimelineAttachment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * VertexAttachment_get_TimelineAttachment_mF292E42C2F4EA57360007040050A46E17E95DBC7 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, const RuntimeMethod* method)
{
	VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * V_0 = NULL;
	{
		// public VertexAttachment TimelineAttachment { get { return timelineAttachment; } set { timelineAttachment = value; } }
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_0 = __this->get_timelineAttachment_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public VertexAttachment TimelineAttachment { get { return timelineAttachment; } set { timelineAttachment = value; } }
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Spine.VertexAttachment::set_TimelineAttachment(Spine.VertexAttachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_set_TimelineAttachment_m02D383946602EF96B560B24AD54D3AD5E155513E (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * ___value0, const RuntimeMethod* method)
{
	{
		// public VertexAttachment TimelineAttachment { get { return timelineAttachment; } set { timelineAttachment = value; } }
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_0 = ___value0;
		__this->set_timelineAttachment_4(L_0);
		// public VertexAttachment TimelineAttachment { get { return timelineAttachment; } set { timelineAttachment = value; } }
		return;
	}
}
// System.Void Spine.VertexAttachment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment__ctor_m99772032B6C4B9797DB94A9A19F23E79770F8B99 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// : base(name) {
		String_t* L_0 = ___name0;
		Attachment__ctor_m25D4C3124669EB5D1A033934369C6C3ED9A60662(__this, L_0, /*hidden argument*/NULL);
		// lock (VertexAttachment.nextIdLock) {
		IL2CPP_RUNTIME_CLASS_INIT(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->get_nextIdLock_2();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
		// id = VertexAttachment.nextID++;
		IL2CPP_RUNTIME_CLASS_INIT(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var);
		int32_t L_3 = ((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->get_nextID_1();
		int32_t L_4 = L_3;
		((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->set_nextID_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		__this->set_id_3(L_4);
		IL2CPP_LEAVE(0x3C, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_003b;
			}
		}

IL_0034:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1(L_6, /*hidden argument*/NULL);
		}

IL_003b:
		{
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		// timelineAttachment = this;
		__this->set_timelineAttachment_4(__this);
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::.ctor(Spine.VertexAttachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment__ctor_m9969B0099AEAEC9D460A4B601F5306A5BB0D721C (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// : base(other) {
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_0 = ___other0;
		Attachment__ctor_mE9E97E24858D2B5348E79AFED66DB802A242E00F(__this, L_0, /*hidden argument*/NULL);
		// lock (VertexAttachment.nextIdLock) {
		IL2CPP_RUNTIME_CLASS_INIT(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->get_nextIdLock_2();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
		// id = VertexAttachment.nextID++;
		IL2CPP_RUNTIME_CLASS_INIT(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var);
		int32_t L_3 = ((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->get_nextID_1();
		int32_t L_4 = L_3;
		((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->set_nextID_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		__this->set_id_3(L_4);
		IL2CPP_LEAVE(0x3C, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_003b;
			}
		}

IL_0034:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1(L_6, /*hidden argument*/NULL);
		}

IL_003b:
		{
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		// timelineAttachment = other.timelineAttachment;
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_7 = ___other0;
		NullCheck(L_7);
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_8 = L_7->get_timelineAttachment_4();
		__this->set_timelineAttachment_4(L_8);
		// if (other.bones != null) {
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_9 = ___other0;
		NullCheck(L_9);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = L_9->get_bones_5();
		V_2 = (bool)((!(((RuntimeObject*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		// bones = new int[other.bones.Length];
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_12 = ___other0;
		NullCheck(L_12);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = L_12->get_bones_5();
		NullCheck(L_13);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))));
		__this->set_bones_5(L_14);
		// Array.Copy(other.bones, 0, bones, 0, bones.Length);
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_15 = ___other0;
		NullCheck(L_15);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = L_15->get_bones_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = __this->get_bones_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = __this->get_bones_5();
		NullCheck(L_18);
		Array_Copy_m7EF35EEE2A8E2DC040222146974ADA2C3DACC229((RuntimeArray *)(RuntimeArray *)L_16, 0, (RuntimeArray *)(RuntimeArray *)L_17, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))), /*hidden argument*/NULL);
		goto IL_008f;
	}

IL_0088:
	{
		// bones = null;
		__this->set_bones_5((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
	}

IL_008f:
	{
		// if (other.vertices != null) {
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_19 = ___other0;
		NullCheck(L_19);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = L_19->get_vertices_6();
		V_3 = (bool)((!(((RuntimeObject*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_20) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00cf;
		}
	}
	{
		// vertices = new float[other.vertices.Length];
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_22 = ___other0;
		NullCheck(L_22);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_23 = L_22->get_vertices_6();
		NullCheck(L_23);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))));
		__this->set_vertices_6(L_24);
		// Array.Copy(other.vertices, 0, vertices, 0, vertices.Length);
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_25 = ___other0;
		NullCheck(L_25);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_26 = L_25->get_vertices_6();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = __this->get_vertices_6();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_28 = __this->get_vertices_6();
		NullCheck(L_28);
		Array_Copy_m7EF35EEE2A8E2DC040222146974ADA2C3DACC229((RuntimeArray *)(RuntimeArray *)L_26, 0, (RuntimeArray *)(RuntimeArray *)L_27, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))), /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_00cf:
	{
		// vertices = null;
		__this->set_vertices_6((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL);
	}

IL_00d6:
	{
		// worldVerticesLength = other.worldVerticesLength;
		VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * L_29 = ___other0;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_worldVerticesLength_7();
		__this->set_worldVerticesLength_7(L_30);
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_ComputeWorldVertices_mE046CB9D561B56BCA91979DE43363D97237C92BE (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * ___slot0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___worldVertices1, const RuntimeMethod* method)
{
	{
		// ComputeWorldVertices(slot, 0, worldVerticesLength, worldVertices, 0);
		Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * L_0 = ___slot0;
		int32_t L_1 = __this->get_worldVerticesLength_7();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___worldVertices1;
		VirtActionInvoker6< Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 *, int32_t, int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, int32_t, int32_t >::Invoke(5 /* System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Int32,System.Int32,System.Single[],System.Int32,System.Int32) */, __this, L_0, 0, L_1, L_2, 0, 2);
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Int32,System.Int32,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_ComputeWorldVertices_m7D8E0D678752C843E1A901B8EF2899F5C583C0B3 (VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36 * __this, Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * ___slot0, int32_t ___start1, int32_t ___count2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___worldVertices3, int32_t ___offset4, int32_t ___stride5, const RuntimeMethod* method)
{
	ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* V_5 = NULL;
	bool V_6 = false;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_7 = NULL;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	float V_26 = 0.0f;
	float V_27 = 0.0f;
	int32_t V_28 = 0;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_29 = NULL;
	float V_30 = 0.0f;
	float V_31 = 0.0f;
	float V_32 = 0.0f;
	bool V_33 = false;
	bool V_34 = false;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_35 = NULL;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	float V_39 = 0.0f;
	float V_40 = 0.0f;
	int32_t V_41 = 0;
	Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * V_42 = NULL;
	float V_43 = 0.0f;
	float V_44 = 0.0f;
	float V_45 = 0.0f;
	bool V_46 = false;
	bool V_47 = false;
	{
		// count = offset + (count >> 1) * stride;
		int32_t L_0 = ___offset4;
		int32_t L_1 = ___count2;
		int32_t L_2 = ___stride5;
		___count2 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_1>>(int32_t)1)), (int32_t)L_2))));
		// ExposedList<float> deformArray = slot.deform;
		Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * L_3 = ___slot0;
		NullCheck(L_3);
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_4 = L_3->get_deform_12();
		V_0 = L_4;
		// float[] vertices = this.vertices;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = __this->get_vertices_6();
		V_1 = L_5;
		// int[] bones = this.bones;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_bones_5();
		V_2 = L_6;
		// if (bones == null) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = V_2;
		V_6 = (bool)((((RuntimeObject*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_8 = V_6;
		if (!L_8)
		{
			goto IL_00e1;
		}
	}
	{
		// if (deformArray.Count > 0) vertices = deformArray.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Count_1();
		V_14 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		bool L_11 = V_14;
		if (!L_11)
		{
			goto IL_0045;
		}
	}
	{
		// if (deformArray.Count > 0) vertices = deformArray.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_12 = V_0;
		NullCheck(L_12);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = L_12->get_Items_0();
		V_1 = L_13;
	}

IL_0045:
	{
		// Bone bone = slot.bone;
		Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * L_14 = ___slot0;
		NullCheck(L_14);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_15 = L_14->get_bone_1();
		V_7 = L_15;
		// float x = bone.worldX, y = bone.worldY;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_16 = V_7;
		NullCheck(L_16);
		float L_17 = L_16->get_worldX_21();
		V_8 = L_17;
		// float x = bone.worldX, y = bone.worldY;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_18 = V_7;
		NullCheck(L_18);
		float L_19 = L_18->get_worldY_24();
		V_9 = L_19;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_20 = V_7;
		NullCheck(L_20);
		float L_21 = L_20->get_a_19();
		V_10 = L_21;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_22 = V_7;
		NullCheck(L_22);
		float L_23 = L_22->get_b_20();
		V_11 = L_23;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_24 = V_7;
		NullCheck(L_24);
		float L_25 = L_24->get_c_22();
		V_12 = L_25;
		// float a = bone.a, b = bone.b, c = bone.c, d = bone.d;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_26 = V_7;
		NullCheck(L_26);
		float L_27 = L_26->get_d_23();
		V_13 = L_27;
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_28 = ___start1;
		V_15 = L_28;
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_29 = ___offset4;
		V_16 = L_29;
		goto IL_00d1;
	}

IL_008c:
	{
		// float vx = vertices[vv], vy = vertices[vv + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_30 = V_1;
		int32_t L_31 = V_15;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		float L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_17 = L_33;
		// float vx = vertices[vv], vy = vertices[vv + 1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_34 = V_1;
		int32_t L_35 = V_15;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		float L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_18 = L_37;
		// worldVertices[w] = vx * a + vy * b + x;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_38 = ___worldVertices3;
		int32_t L_39 = V_16;
		float L_40 = V_17;
		float L_41 = V_10;
		float L_42 = V_18;
		float L_43 = V_11;
		float L_44 = V_8;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_40, (float)L_41)), (float)((float)il2cpp_codegen_multiply((float)L_42, (float)L_43)))), (float)L_44)));
		// worldVertices[w + 1] = vx * c + vy * d + y;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_45 = ___worldVertices3;
		int32_t L_46 = V_16;
		float L_47 = V_17;
		float L_48 = V_12;
		float L_49 = V_18;
		float L_50 = V_13;
		float L_51 = V_9;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1))), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_47, (float)L_48)), (float)((float)il2cpp_codegen_multiply((float)L_49, (float)L_50)))), (float)L_51)));
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_52 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)2));
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_53 = V_16;
		int32_t L_54 = ___stride5;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54));
	}

IL_00d1:
	{
		// for (int vv = start, w = offset; w < count; vv += 2, w += stride) {
		int32_t L_55 = V_16;
		int32_t L_56 = ___count2;
		V_19 = (bool)((((int32_t)L_55) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_19;
		if (L_57)
		{
			goto IL_008c;
		}
	}
	{
		// return;
		goto IL_0313;
	}

IL_00e1:
	{
		// int v = 0, skip = 0;
		V_3 = 0;
		// int v = 0, skip = 0;
		V_4 = 0;
		// for (int i = 0; i < start; i += 2) {
		V_20 = 0;
		goto IL_0106;
	}

IL_00eb:
	{
		// int n = bones[v];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_58 = V_2;
		int32_t L_59 = V_3;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_21 = L_61;
		// v += n + 1;
		int32_t L_62 = V_3;
		int32_t L_63 = V_21;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1))));
		// skip += n;
		int32_t L_64 = V_4;
		int32_t L_65 = V_21;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_65));
		// for (int i = 0; i < start; i += 2) {
		int32_t L_66 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)2));
	}

IL_0106:
	{
		// for (int i = 0; i < start; i += 2) {
		int32_t L_67 = V_20;
		int32_t L_68 = ___start1;
		V_22 = (bool)((((int32_t)L_67) < ((int32_t)L_68))? 1 : 0);
		bool L_69 = V_22;
		if (L_69)
		{
			goto IL_00eb;
		}
	}
	{
		// Bone[] skeletonBones = slot.bone.skeleton.bones.Items;
		Slot_t754D2EC8AE03CF765F34A909762BE4E533BEF635 * L_70 = ___slot0;
		NullCheck(L_70);
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_71 = L_70->get_bone_1();
		NullCheck(L_71);
		Skeleton_tA4F63D1CB185D30296FA5323E1DA8B993E21293C * L_72 = L_71->get_skeleton_2();
		NullCheck(L_72);
		ExposedList_1_t4F66E6448150D0CAC1BD8C1A4810A7CEB844B164 * L_73 = L_72->get_bones_1();
		NullCheck(L_73);
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_74 = L_73->get_Items_0();
		V_5 = L_74;
		// if (deformArray.Count == 0) {
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_75 = V_0;
		NullCheck(L_75);
		int32_t L_76 = L_75->get_Count_1();
		V_23 = (bool)((((int32_t)L_76) == ((int32_t)0))? 1 : 0);
		bool L_77 = V_23;
		if (!L_77)
		{
			goto IL_0215;
		}
	}
	{
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_78 = ___offset4;
		V_24 = L_78;
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_79 = V_4;
		V_25 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_79, (int32_t)3));
		goto IL_0201;
	}

IL_014a:
	{
		// float wx = 0, wy = 0;
		V_26 = (0.0f);
		// float wx = 0, wy = 0;
		V_27 = (0.0f);
		// int n = bones[v++];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_80 = V_2;
		int32_t L_81 = V_3;
		int32_t L_82 = L_81;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
		NullCheck(L_80);
		int32_t L_83 = L_82;
		int32_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_28 = L_84;
		// n += v;
		int32_t L_85 = V_28;
		int32_t L_86 = V_3;
		V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)L_86));
		goto IL_01de;
	}

IL_016a:
	{
		// Bone bone = skeletonBones[bones[v]];
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_87 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_88 = V_2;
		int32_t L_89 = V_3;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		int32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_87);
		int32_t L_92 = L_91;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_93 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_29 = L_93;
		// float vx = vertices[b], vy = vertices[b + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_94 = V_1;
		int32_t L_95 = V_25;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		float L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		V_30 = L_97;
		// float vx = vertices[b], vy = vertices[b + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_98 = V_1;
		int32_t L_99 = V_25;
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
		float L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_31 = L_101;
		// float vx = vertices[b], vy = vertices[b + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_102 = V_1;
		int32_t L_103 = V_25;
		NullCheck(L_102);
		int32_t L_104 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)2));
		float L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		V_32 = L_105;
		// wx += (vx * bone.a + vy * bone.b + bone.worldX) * weight;
		float L_106 = V_26;
		float L_107 = V_30;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_108 = V_29;
		NullCheck(L_108);
		float L_109 = L_108->get_a_19();
		float L_110 = V_31;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_111 = V_29;
		NullCheck(L_111);
		float L_112 = L_111->get_b_20();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_113 = V_29;
		NullCheck(L_113);
		float L_114 = L_113->get_worldX_21();
		float L_115 = V_32;
		V_26 = ((float)il2cpp_codegen_add((float)L_106, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_107, (float)L_109)), (float)((float)il2cpp_codegen_multiply((float)L_110, (float)L_112)))), (float)L_114)), (float)L_115))));
		// wy += (vx * bone.c + vy * bone.d + bone.worldY) * weight;
		float L_116 = V_27;
		float L_117 = V_30;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_118 = V_29;
		NullCheck(L_118);
		float L_119 = L_118->get_c_22();
		float L_120 = V_31;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_121 = V_29;
		NullCheck(L_121);
		float L_122 = L_121->get_d_23();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_123 = V_29;
		NullCheck(L_123);
		float L_124 = L_123->get_worldY_24();
		float L_125 = V_32;
		V_27 = ((float)il2cpp_codegen_add((float)L_116, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_117, (float)L_119)), (float)((float)il2cpp_codegen_multiply((float)L_120, (float)L_122)))), (float)L_124)), (float)L_125))));
		// for (; v < n; v++, b += 3) {
		int32_t L_126 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
		// for (; v < n; v++, b += 3) {
		int32_t L_127 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)3));
	}

IL_01de:
	{
		// for (; v < n; v++, b += 3) {
		int32_t L_128 = V_3;
		int32_t L_129 = V_28;
		V_33 = (bool)((((int32_t)L_128) < ((int32_t)L_129))? 1 : 0);
		bool L_130 = V_33;
		if (L_130)
		{
			goto IL_016a;
		}
	}
	{
		// worldVertices[w] = wx;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_131 = ___worldVertices3;
		int32_t L_132 = V_24;
		float L_133 = V_26;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(L_132), (float)L_133);
		// worldVertices[w + 1] = wy;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_134 = ___worldVertices3;
		int32_t L_135 = V_24;
		float L_136 = V_27;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1))), (float)L_136);
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_137 = V_24;
		int32_t L_138 = ___stride5;
		V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)L_138));
	}

IL_0201:
	{
		// for (int w = offset, b = skip * 3; w < count; w += stride) {
		int32_t L_139 = V_24;
		int32_t L_140 = ___count2;
		V_34 = (bool)((((int32_t)L_139) < ((int32_t)L_140))? 1 : 0);
		bool L_141 = V_34;
		if (L_141)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_0313;
	}

IL_0215:
	{
		// float[] deform = deformArray.Items;
		ExposedList_1_t9F8622C73EB60A6882B2968C1C0F1706D574F526 * L_142 = V_0;
		NullCheck(L_142);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_143 = L_142->get_Items_0();
		V_35 = L_143;
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_144 = ___offset4;
		V_36 = L_144;
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_145 = V_4;
		V_37 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_145, (int32_t)3));
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_146 = V_4;
		V_38 = ((int32_t)((int32_t)L_146<<(int32_t)1));
		goto IL_0304;
	}

IL_0233:
	{
		// float wx = 0, wy = 0;
		V_39 = (0.0f);
		// float wx = 0, wy = 0;
		V_40 = (0.0f);
		// int n = bones[v++];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_147 = V_2;
		int32_t L_148 = V_3;
		int32_t L_149 = L_148;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)1));
		NullCheck(L_147);
		int32_t L_150 = L_149;
		int32_t L_151 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		V_41 = L_151;
		// n += v;
		int32_t L_152 = V_41;
		int32_t L_153 = V_3;
		V_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)L_153));
		goto IL_02de;
	}

IL_0256:
	{
		// Bone bone = skeletonBones[bones[v]];
		BoneU5BU5D_t77D01946B97A0778AD79515B28F1C30BDBED3A23* L_154 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_155 = V_2;
		int32_t L_156 = V_3;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		int32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		NullCheck(L_154);
		int32_t L_159 = L_158;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_160 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		V_42 = L_160;
		// float vx = vertices[b] + deform[f], vy = vertices[b + 1] + deform[f + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_161 = V_1;
		int32_t L_162 = V_37;
		NullCheck(L_161);
		int32_t L_163 = L_162;
		float L_164 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_165 = V_35;
		int32_t L_166 = V_38;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		float L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		V_43 = ((float)il2cpp_codegen_add((float)L_164, (float)L_168));
		// float vx = vertices[b] + deform[f], vy = vertices[b + 1] + deform[f + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_169 = V_1;
		int32_t L_170 = V_37;
		NullCheck(L_169);
		int32_t L_171 = ((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)1));
		float L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_173 = V_35;
		int32_t L_174 = V_38;
		NullCheck(L_173);
		int32_t L_175 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
		float L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		V_44 = ((float)il2cpp_codegen_add((float)L_172, (float)L_176));
		// float vx = vertices[b] + deform[f], vy = vertices[b + 1] + deform[f + 1], weight = vertices[b + 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_177 = V_1;
		int32_t L_178 = V_37;
		NullCheck(L_177);
		int32_t L_179 = ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)2));
		float L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		V_45 = L_180;
		// wx += (vx * bone.a + vy * bone.b + bone.worldX) * weight;
		float L_181 = V_39;
		float L_182 = V_43;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_183 = V_42;
		NullCheck(L_183);
		float L_184 = L_183->get_a_19();
		float L_185 = V_44;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_186 = V_42;
		NullCheck(L_186);
		float L_187 = L_186->get_b_20();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_188 = V_42;
		NullCheck(L_188);
		float L_189 = L_188->get_worldX_21();
		float L_190 = V_45;
		V_39 = ((float)il2cpp_codegen_add((float)L_181, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_182, (float)L_184)), (float)((float)il2cpp_codegen_multiply((float)L_185, (float)L_187)))), (float)L_189)), (float)L_190))));
		// wy += (vx * bone.c + vy * bone.d + bone.worldY) * weight;
		float L_191 = V_40;
		float L_192 = V_43;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_193 = V_42;
		NullCheck(L_193);
		float L_194 = L_193->get_c_22();
		float L_195 = V_44;
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_196 = V_42;
		NullCheck(L_196);
		float L_197 = L_196->get_d_23();
		Bone_t6DA0B82485BED2E4EEE864AAD607EEBDC2F98AAF * L_198 = V_42;
		NullCheck(L_198);
		float L_199 = L_198->get_worldY_24();
		float L_200 = V_45;
		V_40 = ((float)il2cpp_codegen_add((float)L_191, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_192, (float)L_194)), (float)((float)il2cpp_codegen_multiply((float)L_195, (float)L_197)))), (float)L_199)), (float)L_200))));
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_201 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_201, (int32_t)1));
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_202 = V_37;
		V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_202, (int32_t)3));
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_203 = V_38;
		V_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_203, (int32_t)2));
	}

IL_02de:
	{
		// for (; v < n; v++, b += 3, f += 2) {
		int32_t L_204 = V_3;
		int32_t L_205 = V_41;
		V_46 = (bool)((((int32_t)L_204) < ((int32_t)L_205))? 1 : 0);
		bool L_206 = V_46;
		if (L_206)
		{
			goto IL_0256;
		}
	}
	{
		// worldVertices[w] = wx;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_207 = ___worldVertices3;
		int32_t L_208 = V_36;
		float L_209 = V_39;
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(L_208), (float)L_209);
		// worldVertices[w + 1] = wy;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_210 = ___worldVertices3;
		int32_t L_211 = V_36;
		float L_212 = V_40;
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_211, (int32_t)1))), (float)L_212);
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_213 = V_36;
		int32_t L_214 = ___stride5;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_213, (int32_t)L_214));
	}

IL_0304:
	{
		// for (int w = offset, b = skip * 3, f = skip << 1; w < count; w += stride) {
		int32_t L_215 = V_36;
		int32_t L_216 = ___count2;
		V_47 = (bool)((((int32_t)L_215) < ((int32_t)L_216))? 1 : 0);
		bool L_217 = V_47;
		if (L_217)
		{
			goto IL_0233;
		}
	}
	{
	}

IL_0313:
	{
		// }
		return;
	}
}
// System.Void Spine.VertexAttachment::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment__cctor_m0359F516165B3B0D3B6E451B99E1AA09273456E9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int nextID = 0;
		((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->set_nextID_1(0);
		// static readonly Object nextIdLock = new Object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_StaticFields*)il2cpp_codegen_static_fields_for(VertexAttachment_t9CE5B53FEDF378FFCADECD92F0ABF5F1DFDFFF36_il2cpp_TypeInfo_var))->set_nextIdLock_2(L_0);
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
// System.Void Spine.AnimationState/TrackEntryDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate__ctor_m5F931DA2A3726E2F71C9EB806A75264F2556B28C (TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.AnimationState/TrackEntryDelegate::Invoke(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate_Invoke_mD30F8BAAFDB3B08D813CE67962C9239969E63570 (TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * __this, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___trackEntry0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___trackEntry0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___trackEntry0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___trackEntry0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, targetMethod);
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
						GenericInterfaceActionInvoker1< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * >::Invoke(targetMethod, targetThis, ___trackEntry0);
					else
						GenericVirtActionInvoker1< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * >::Invoke(targetMethod, targetThis, ___trackEntry0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___trackEntry0);
					else
						VirtActionInvoker1< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___trackEntry0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___trackEntry0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.AnimationState/TrackEntryDelegate::BeginInvoke(Spine.TrackEntry,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackEntryDelegate_BeginInvoke_m4828159942238D91055853BE22CFA27DC46412E7 (TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * __this, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___trackEntry0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Spine.AnimationState/TrackEntryDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate_EndInvoke_mFCA56D69E9A20B9510FDB29C6BAA15CEABD8FFE8 (TrackEntryDelegate_tE20D505FE9CFC9735D82442FC79C9929AC558EDB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Spine.AnimationState/TrackEntryEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate__ctor_mC5B3EC14B70B0563D3B6F092E075690F174F9C1E (TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Spine.AnimationState/TrackEntryEventDelegate::Invoke(Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate_Invoke_mE5B89E1D81981A0F3E0AE6A91202504498232DAB (TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * __this, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry0, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(targetMethod, ___trackEntry0, ___e1);
					else
						GenericVirtActionInvoker1< Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(targetMethod, ___trackEntry0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___trackEntry0, ___e1);
					else
						VirtActionInvoker1< Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___trackEntry0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___trackEntry0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(targetMethod, targetThis, ___trackEntry0, ___e1);
					else
						GenericVirtActionInvoker2< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(targetMethod, targetThis, ___trackEntry0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___trackEntry0, ___e1);
					else
						VirtActionInvoker2< TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___trackEntry0, ___e1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___trackEntry0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D *, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___trackEntry0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Spine.AnimationState/TrackEntryEventDelegate::BeginInvoke(Spine.TrackEntry,Spine.Event,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackEntryEventDelegate_BeginInvoke_m48DED27CB7F6800B122F492DA1EC3F40EE768E46 (TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * __this, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry0, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___trackEntry0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Spine.AnimationState/TrackEntryEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate_EndInvoke_m0476F457AC29E9CFC62CA331D1A4402F3CAC9F32 (TrackEntryEventDelegate_tF5188922CE4C62057833CF70701CB67AD0460A2E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_pinvoke(const AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9& unmarshaled, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_pinvoke_back(const AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_pinvoke& marshaled, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9& unmarshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_pinvoke_cleanup(AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_com(const AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9& unmarshaled, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_com& marshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_com_back(const AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_com& marshaled, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9& unmarshaled)
{
	Exception_t* ___a1_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'a1' of type 'AnimationPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___a1_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.AnimationStateData/AnimationPair
IL2CPP_EXTERN_C void AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshal_com_cleanup(AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9_marshaled_com& marshaled)
{
}
// System.Void Spine.AnimationStateData/AnimationPair::.ctor(Spine.Animation,Spine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPair__ctor_m74829679B461CA503FC742ED9C15CFAC3E011116 (AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * __this, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a10, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a21, const RuntimeMethod* method)
{
	{
		// this.a1 = a1;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_0 = ___a10;
		__this->set_a1_0(L_0);
		// this.a2 = a2;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_1 = ___a21;
		__this->set_a2_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPair__ctor_m74829679B461CA503FC742ED9C15CFAC3E011116_AdjustorThunk (RuntimeObject * __this, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a10, Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * ___a21, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * _thisAdjusted = reinterpret_cast<AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 *>(__this + _offset);
	AnimationPair__ctor_m74829679B461CA503FC742ED9C15CFAC3E011116(_thisAdjusted, ___a10, ___a21, method);
}
// System.String Spine.AnimationStateData/AnimationPair::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimationPair_ToString_mF05A63E1FCE6F3B07BFB840B7DD87B72C106B167 (AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return a1.name + "->" + a2.name;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_0 = __this->get_a1_0();
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_2 = __this->get_a2_1();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_0();
		String_t* L_4;
		L_4 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_1, _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* AnimationPair_ToString_mF05A63E1FCE6F3B07BFB840B7DD87B72C106B167_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 * _thisAdjusted = reinterpret_cast<AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AnimationPair_ToString_mF05A63E1FCE6F3B07BFB840B7DD87B72C106B167(_thisAdjusted, method);
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
// System.Boolean Spine.AnimationStateData/AnimationPairComparer::System.Collections.Generic.IEqualityComparer<Spine.AnimationStateData.AnimationPair>.Equals(Spine.AnimationStateData/AnimationPair,Spine.AnimationStateData/AnimationPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPairComparer_System_Collections_Generic_IEqualityComparerU3CSpine_AnimationStateData_AnimationPairU3E_Equals_m6218E99A946B90A355BA5A746886444800E321BE (AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * __this, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  ___x0, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  ___y1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return ReferenceEquals(x.a1, y.a1) && ReferenceEquals(x.a2, y.a2);
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_0 = ___x0;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_1 = L_0.get_a1_0();
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_2 = ___y1;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_3 = L_2.get_a1_0();
		if ((!(((RuntimeObject*)(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 *)L_1) == ((RuntimeObject*)(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 *)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_4 = ___x0;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_5 = L_4.get_a2_1();
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_6 = ___y1;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_7 = L_6.get_a2_1();
		G_B3_0 = ((((RuntimeObject*)(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 *)L_5) == ((RuntimeObject*)(Animation_tE800D5597964656F48F303755E4C6C66462E8E90 *)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Spine.AnimationStateData/AnimationPairComparer::System.Collections.Generic.IEqualityComparer<Spine.AnimationStateData.AnimationPair>.GetHashCode(Spine.AnimationStateData/AnimationPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationPairComparer_System_Collections_Generic_IEqualityComparerU3CSpine_AnimationStateData_AnimationPairU3E_GetHashCode_mB082D2D8D732EEF8F6A36F254D53E003BF3A397B (AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * __this, AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  ___obj0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int h1 = obj.a1.GetHashCode();
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_0 = ___obj0;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_1 = L_0.get_a1_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = L_2;
		// return (((h1 << 5) + h1) ^ obj.a2.GetHashCode());
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		AnimationPair_t2A53EA37F4B1C93E6BBB0F04E2632819498E92E9  L_5 = ___obj0;
		Animation_tE800D5597964656F48F303755E4C6C66462E8E90 * L_6 = L_5.get_a2_1();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_3<<(int32_t)5)), (int32_t)L_4))^(int32_t)L_7));
		goto IL_0021;
	}

IL_0021:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void Spine.AnimationStateData/AnimationPairComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPairComparer__ctor_m2EFAE31FB362D087220453C686F54320B56D03CC (AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spine.AnimationStateData/AnimationPairComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPairComparer__cctor_mC0E757D403602585462656F44B24C0EF520DE2D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly AnimationPairComparer Instance = new AnimationPairComparer();
		AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 * L_0 = (AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3 *)il2cpp_codegen_object_new(AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_il2cpp_TypeInfo_var);
		AnimationPairComparer__ctor_m2EFAE31FB362D087220453C686F54320B56D03CC(L_0, /*hidden argument*/NULL);
		((AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPairComparer_tCF4856346F6E3F6713561B39646846CE27877BE3_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// System.Void Spine.Atlas/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mEEE7C5686211B46E447F923937752EC687104306 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__0_mF9C9A41AEB458A3C7D391773F8792E35400FD3D2 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// page.width = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_0 = __this->get_page_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		NullCheck(L_1);
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_width_1(L_5);
		// page.height = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_6 = __this->get_page_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		NullCheck(L_7);
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_height_2(L_11);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__1_m1407DF7013AD944C10C7D41C39407FF53E2E4888 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// page.format = (Format)Enum.Parse(typeof(Format), entry[1], false);
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_0 = __this->get_page_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_1, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get_entry_1();
		NullCheck(L_3);
		int32_t L_4 = 1;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = Enum_Parse_mBF078678C6B2C5116261811AFBBFAE524D4D4BB4(L_2, L_5, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_format_3(((*(int32_t*)((int32_t*)UnBox(L_6, Format_t8F8D5883A235562BAA8B3B43ABA6A4FDE251B476_il2cpp_TypeInfo_var)))));
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__2_m778967ADFD442AA9C16544FD562C90C3F0822C25 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// page.minFilter = (TextureFilter)Enum.Parse(typeof(TextureFilter), entry[1], false);
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_0 = __this->get_page_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_1, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get_entry_1();
		NullCheck(L_3);
		int32_t L_4 = 1;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = Enum_Parse_mBF078678C6B2C5116261811AFBBFAE524D4D4BB4(L_2, L_5, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_minFilter_4(((*(int32_t*)((int32_t*)UnBox(L_6, TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_il2cpp_TypeInfo_var)))));
		// page.magFilter = (TextureFilter)Enum.Parse(typeof(TextureFilter), entry[2], false);
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_7 = __this->get_page_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_8, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = __this->get_entry_1();
		NullCheck(L_10);
		int32_t L_11 = 2;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		RuntimeObject * L_13;
		L_13 = Enum_Parse_mBF078678C6B2C5116261811AFBBFAE524D4D4BB4(L_9, L_12, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_magFilter_5(((*(int32_t*)((int32_t*)UnBox(L_13, TextureFilter_t3692D7DCDF68DB64AE7D5A1BEF324F2ACFEC1B07_il2cpp_TypeInfo_var)))));
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__3_mF8A211A0B0AA9840AC82B77140957BCD49110584 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (entry[1].IndexOf('x') != -1) page.uWrap = TextureWrap.Repeat;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_entry_1();
		NullCheck(L_0);
		int32_t L_1 = 1;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_2, ((int32_t)120), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// if (entry[1].IndexOf('x') != -1) page.uWrap = TextureWrap.Repeat;
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_5 = __this->get_page_0();
		NullCheck(L_5);
		L_5->set_uWrap_6(2);
	}

IL_0026:
	{
		// if (entry[1].IndexOf('y') != -1) page.vWrap = TextureWrap.Repeat;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = __this->get_entry_1();
		NullCheck(L_6);
		int32_t L_7 = 1;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_8, ((int32_t)121), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		// if (entry[1].IndexOf('y') != -1) page.vWrap = TextureWrap.Repeat;
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_11 = __this->get_page_0();
		NullCheck(L_11);
		L_11->set_vWrap_7(2);
	}

IL_004b:
	{
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__4_mB8D73B910CC6D0235141D2EB97B860719955BD8E (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// page.pma = entry[1] == "true";
		AtlasPage_t8A12ACC89F843E7F1869ADA9D82221D8298850F6 * L_0 = __this->get_page_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		NullCheck(L_1);
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_3, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_pma_8(L_4);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__5_m969FEA9B00127702267722EF3754E76BFB0F1BD0 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.x = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		NullCheck(L_1);
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_x_8(L_5);
		// region.y = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		NullCheck(L_7);
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_y_9(L_11);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__6_m5AF674C8AEBCA8780BF603C1998ECE6439389254 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.width = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		NullCheck(L_1);
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		((TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8 *)L_0)->set_width_0(L_5);
		// region.height = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		NullCheck(L_7);
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		((TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8 *)L_6)->set_height_1(L_11);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__7_m445DCBCC3CAE07F776942FE2259DE5AED8D09593 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.x = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		NullCheck(L_1);
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_x_8(L_5);
		// region.y = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		NullCheck(L_7);
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_y_9(L_11);
		// region.width = int.Parse(entry[3], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_12 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = __this->get_entry_1();
		NullCheck(L_13);
		int32_t L_14 = 3;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_16;
		L_16 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_17;
		L_17 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		((TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8 *)L_12)->set_width_0(L_17);
		// region.height = int.Parse(entry[4], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_18 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = __this->get_entry_1();
		NullCheck(L_19);
		int32_t L_20 = 4;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_22;
		L_22 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		((TextureRegion_t66E56430751E85C527E19D7FEE661334225C97F8 *)L_18)->set_height_1(L_23);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__8_m655A71B51C91087B9AD8C0A7C349BF7ECB455ABF (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.offsetX = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		NullCheck(L_1);
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_offsetX_10(((float)((float)L_5)));
		// region.offsetY = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		NullCheck(L_7);
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_offsetY_11(((float)((float)L_11)));
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__9_m78EDB6D3094FA8C65BC639CAABD53BFC0E0AF3E7 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.originalWidth = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		NullCheck(L_1);
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_originalWidth_12(L_5);
		// region.originalHeight = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		NullCheck(L_7);
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_originalHeight_13(L_11);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__10_m650F1A7FD26A66F5AE61699606908899F3EF210F (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.offsetX = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		NullCheck(L_1);
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_offsetX_10(((float)((float)L_5)));
		// region.offsetY = int.Parse(entry[2], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = __this->get_entry_1();
		NullCheck(L_7);
		int32_t L_8 = 2;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_offsetY_11(((float)((float)L_11)));
		// region.originalWidth = int.Parse(entry[3], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_12 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = __this->get_entry_1();
		NullCheck(L_13);
		int32_t L_14 = 3;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_16;
		L_16 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_17;
		L_17 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_originalWidth_12(L_17);
		// region.originalHeight = int.Parse(entry[4], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_18 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = __this->get_entry_1();
		NullCheck(L_19);
		int32_t L_20 = 4;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_22;
		L_22 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_originalHeight_13(L_23);
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__11_m02B4A8488DBD465EEB5D6BF2ABDBA122A0B836CC (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// string value = entry[1];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_entry_1();
		NullCheck(L_0);
		int32_t L_1 = 1;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		// if (value == "true")
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_3, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// region.degrees = 90;
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_6 = __this->get_region_2();
		NullCheck(L_6);
		L_6->set_degrees_14(((int32_t)90));
		goto IL_004d;
	}

IL_0028:
	{
		// else if (value != "false")
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE(L_7, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// region.degrees = int.Parse(value, CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_10 = __this->get_region_2();
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_12;
		L_12 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_13;
		L_13 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_degrees_14(L_13);
	}

IL_004d:
	{
		// });
		return;
	}
}
// System.Void Spine.Atlas/<>c__DisplayClass10_0::<.ctor>b__12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3C_ctorU3Eb__12_m6768EA279E2D340AA7134A109A81DB1511487A46 (U3CU3Ec__DisplayClass10_0_tBF5C29B31A8B06822C307D01647CD4603254F201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// region.index = int.Parse(entry[1], CultureInfo.InvariantCulture);
		AtlasRegion_t82875C2D00A27CA4974B4D3529484CA9F57F8485 * L_0 = __this->get_region_2();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_entry_1();
		NullCheck(L_1);
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m4F33B01E3645FB4492B4D34CBC6A8F59AA044449(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_index_16(L_5);
		// });
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
// Conversion methods for marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_pinvoke(const EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C& unmarshaled, EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_pinvoke_back(const EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_pinvoke& marshaled, EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C& unmarshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_pinvoke_cleanup(EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_com(const EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C& unmarshaled, EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_com& marshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_com_back(const EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_com& marshaled, EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C& unmarshaled)
{
	Exception_t* ___entry_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'entry' of type 'EventQueueEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___entry_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.EventQueue/EventQueueEntry
IL2CPP_EXTERN_C void EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshal_com_cleanup(EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C_marshaled_com& marshaled)
{
}
// System.Void Spine.EventQueue/EventQueueEntry::.ctor(Spine.EventQueue/EventType,Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventQueueEntry__ctor_m87A50C8A0670518D92C3D095B1D6019068B353EF (EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C * __this, int32_t ___eventType0, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry1, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e2, const RuntimeMethod* method)
{
	{
		// this.type = eventType;
		int32_t L_0 = ___eventType0;
		__this->set_type_0(L_0);
		// this.entry = trackEntry;
		TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * L_1 = ___trackEntry1;
		__this->set_entry_1(L_1);
		// this.e = e;
		Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * L_2 = ___e2;
		__this->set_e_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EventQueueEntry__ctor_m87A50C8A0670518D92C3D095B1D6019068B353EF_AdjustorThunk (RuntimeObject * __this, int32_t ___eventType0, TrackEntry_t8B6FF31E96FE5CFBE3B92DC9E4FB33766342A20D * ___trackEntry1, Event_tAB253EC43580D8724548C638BAB02EBB587A7957 * ___e2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C * _thisAdjusted = reinterpret_cast<EventQueueEntry_tD0E6A9858C87415E513F4E6E71399D827FF4424C *>(__this + _offset);
	EventQueueEntry__ctor_m87A50C8A0670518D92C3D095B1D6019068B353EF(_thisAdjusted, ___eventType0, ___trackEntry1, ___e2, method);
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
// System.Void Spine.SkeletonBinary/LinkedMesh::.ctor(Spine.MeshAttachment,System.Int32,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedMesh__ctor_mCA55C957A1907D18DB2B3905E68220C0A40FF69B (LinkedMesh_tD96AA3EAD4BABE253958460A6243315E31F10AEF * __this, MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * ___mesh0, int32_t ___skinIndex1, int32_t ___slotIndex2, String_t* ___parent3, bool ___inheritTimelines4, const RuntimeMethod* method)
{
	{
		// public LinkedMesh (MeshAttachment mesh, int skinIndex, int slotIndex, string parent, bool inheritTimelines) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.mesh = mesh;
		MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * L_0 = ___mesh0;
		__this->set_mesh_3(L_0);
		// this.skinIndex = skinIndex;
		int32_t L_1 = ___skinIndex1;
		__this->set_skinIndex_1(L_1);
		// this.slotIndex = slotIndex;
		int32_t L_2 = ___slotIndex2;
		__this->set_slotIndex_2(L_2);
		// this.parent = parent;
		String_t* L_3 = ___parent3;
		__this->set_parent_0(L_3);
		// this.inheritTimelines = inheritTimelines;
		bool L_4 = ___inheritTimelines4;
		__this->set_inheritTimelines_4(L_4);
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
// System.Void Spine.SkeletonBinary/SkeletonInput::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonInput__ctor_m7A0195347A9B03D704A44A06840CB4DD429173BD (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private byte[] chars = new byte[32];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->set_chars_0(L_0);
		// private byte[] bytesBigEndian = new byte[8];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set_bytesBigEndian_1(L_1);
		// public SkeletonInput (Stream input) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.input = input;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___input0;
		__this->set_input_3(L_2);
		// }
		return;
	}
}
// System.Int32 Spine.SkeletonBinary/SkeletonInput::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonInput_Read_mF28E841CA4EEE701B56836AECD62E4511CCF77BF (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte Spine.SkeletonBinary/SkeletonInput::ReadUByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SkeletonInput_ReadUByte_mE700B28EDC7358E9E8757414A006966D08B2638E (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// return (byte)input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = (uint8_t)((int32_t)((uint8_t)L_1));
		goto IL_0010;
	}

IL_0010:
	{
		// }
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// System.SByte Spine.SkeletonBinary/SkeletonInput::ReadSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t SkeletonInput_ReadSByte_m2F2B974C3FFA98A26FF7368DD0218D5A137AF38F (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int8_t V_2 = 0x0;
	{
		// int value = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = L_1;
		// if (value == -1) throw new EndOfStreamException();
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// if (value == -1) throw new EndOfStreamException();
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_4 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m2D2184E744B5B0762EA690CFD757F64E0BC6D539(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonInput_ReadSByte_m2F2B974C3FFA98A26FF7368DD0218D5A137AF38F_RuntimeMethod_var)));
	}

IL_001b:
	{
		// return (sbyte)value;
		int32_t L_5 = V_0;
		V_2 = ((int8_t)((int8_t)L_5));
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int8_t L_6 = V_2;
		return L_6;
	}
}
// System.Boolean Spine.SkeletonBinary/SkeletonInput::ReadBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkeletonInput_ReadBoolean_m28BC7971B2EEEF78C4B33DA120A68350EDD1279F (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return input.ReadByte() != 0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Single Spine.SkeletonBinary/SkeletonInput::ReadFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkeletonInput_ReadFloat_m47B12E43AB5945BE9954C489E0B41CFC02220928 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// input.Read(bytesBigEndian, 0, 4);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_bytesBigEndian_1();
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, 4);
		// chars[3] = bytesBigEndian[0];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_bytesBigEndian_1();
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_6);
		// chars[2] = bytesBigEndian[1];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_bytesBigEndian_1();
		NullCheck(L_8);
		int32_t L_9 = 1;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_10);
		// chars[1] = bytesBigEndian[2];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_bytesBigEndian_1();
		NullCheck(L_12);
		int32_t L_13 = 2;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_14);
		// chars[0] = bytesBigEndian[3];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_chars_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_bytesBigEndian_1();
		NullCheck(L_16);
		int32_t L_17 = 3;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_18);
		// return BitConverter.ToSingle(chars, 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = __this->get_chars_0();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		float L_20;
		L_20 = BitConverter_ToSingle_mBF4B5469DEE140E388EAFDB65BF83DF55387A398(L_19, 0, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		float L_21 = V_0;
		return L_21;
	}
}
// System.Int32 Spine.SkeletonBinary/SkeletonInput::ReadInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonInput_ReadInt_m8EE35FA72291FB896C274728EF894E6064844F47 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// input.Read(bytesBigEndian, 0, 4);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_bytesBigEndian_1();
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, 4);
		// return (bytesBigEndian[0] << 24)
		//     + (bytesBigEndian[1] << 16)
		//     + (bytesBigEndian[2] << 8)
		//     + bytesBigEndian[3];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_bytesBigEndian_1();
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_bytesBigEndian_1();
		NullCheck(L_6);
		int32_t L_7 = 1;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_bytesBigEndian_1();
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_bytesBigEndian_1();
		NullCheck(L_12);
		int32_t L_13 = 3;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_8<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_11<<(int32_t)8)))), (int32_t)L_14));
		goto IL_0043;
	}

IL_0043:
	{
		// }
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int64 Spine.SkeletonBinary/SkeletonInput::ReadLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SkeletonInput_ReadLong_m68876F3178280533715E950245B292E4CA86C9E2 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		// input.Read(bytesBigEndian, 0, 8);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_bytesBigEndian_1();
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, 8);
		// return ((long)(bytesBigEndian[0]) << 56)
		//     + ((long)(bytesBigEndian[1]) << 48)
		//     + ((long)(bytesBigEndian[2]) << 40)
		//     + ((long)(bytesBigEndian[3]) << 32)
		//     + ((long)(bytesBigEndian[4]) << 24)
		//     + ((long)(bytesBigEndian[5]) << 16)
		//     + ((long)(bytesBigEndian[6]) << 8)
		//     + (long)(bytesBigEndian[7]);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_bytesBigEndian_1();
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_bytesBigEndian_1();
		NullCheck(L_6);
		int32_t L_7 = 1;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_bytesBigEndian_1();
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_bytesBigEndian_1();
		NullCheck(L_12);
		int32_t L_13 = 3;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_bytesBigEndian_1();
		NullCheck(L_15);
		int32_t L_16 = 4;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_bytesBigEndian_1();
		NullCheck(L_18);
		int32_t L_19 = 5;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_bytesBigEndian_1();
		NullCheck(L_21);
		int32_t L_22 = 6;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = __this->get_bytesBigEndian_1();
		NullCheck(L_24);
		int32_t L_25 = 7;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_5))<<(int32_t)((int32_t)56))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_8))<<(int32_t)((int32_t)48))))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_11))<<(int32_t)((int32_t)40))))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_14))<<(int32_t)((int32_t)32))))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_17))<<(int32_t)((int32_t)24))))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_20))<<(int32_t)((int32_t)16))))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_23))<<(int32_t)8)))), (int64_t)((int64_t)((uint64_t)L_26))));
		goto IL_007b;
	}

IL_007b:
	{
		// }
		int64_t L_27 = V_0;
		return L_27;
	}
}
// System.Int32 Spine.SkeletonBinary/SkeletonInput::ReadInt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, bool ___optimizePositive0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t G_B11_0 = 0;
	{
		// int b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = L_1;
		// int result = b & 0x7F;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)L_2&(int32_t)((int32_t)127)));
		// if ((b & 0x80) != 0) {
		int32_t L_3 = V_0;
		V_2 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_00ac;
		}
	}
	{
		// b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = __this->get_input_3();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_5);
		V_0 = L_6;
		// result |= (b & 0x7F) << 7;
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		V_1 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)127)))<<(int32_t)7))));
		// if ((b & 0x80) != 0) {
		int32_t L_9 = V_0;
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ab;
		}
	}
	{
		// b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = __this->get_input_3();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_11);
		V_0 = L_12;
		// result |= (b & 0x7F) << 14;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_1 = ((int32_t)((int32_t)L_13|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)14)))));
		// if ((b & 0x80) != 0) {
		int32_t L_15 = V_0;
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_00aa;
		}
	}
	{
		// b = input.ReadByte();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_17 = __this->get_input_3();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_17);
		V_0 = L_18;
		// result |= (b & 0x7F) << 21;
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		V_1 = ((int32_t)((int32_t)L_19|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)21)))));
		// if ((b & 0x80) != 0) result |= (input.ReadByte() & 0x7F) << 28;
		int32_t L_21 = V_0;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_00a9;
		}
	}
	{
		// if ((b & 0x80) != 0) result |= (input.ReadByte() & 0x7F) << 28;
		int32_t L_23 = V_1;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_24 = __this->get_input_3();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_24);
		V_1 = ((int32_t)((int32_t)L_23|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)28)))));
	}

IL_00a9:
	{
	}

IL_00aa:
	{
	}

IL_00ab:
	{
	}

IL_00ac:
	{
		// return optimizePositive ? result : ((result >> 1) ^ -(result & 1));
		bool L_26 = ___optimizePositive0;
		if (L_26)
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_1;
		G_B11_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27>>(int32_t)1))^(int32_t)((-((int32_t)((int32_t)L_28&(int32_t)1))))));
		goto IL_00ba;
	}

IL_00b9:
	{
		int32_t L_29 = V_1;
		G_B11_0 = L_29;
	}

IL_00ba:
	{
		V_6 = G_B11_0;
		goto IL_00be;
	}

IL_00be:
	{
		// }
		int32_t L_30 = V_6;
		return L_30;
	}
}
// System.String Spine.SkeletonBinary/SkeletonInput::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_ReadString_m6428104EADD77A1F3E22A73038830C769B1F8381 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	bool V_5 = false;
	{
		// int byteCount = ReadInt(true);
		int32_t L_0;
		L_0 = SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543(__this, (bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		// switch (byteCount) {
		int32_t L_1 = V_0;
		V_3 = L_1;
		int32_t L_2 = V_3;
		V_2 = L_2;
		int32_t L_3 = V_2;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0026;
	}

IL_0018:
	{
		// return null;
		V_4 = (String_t*)NULL;
		goto IL_005f;
	}

IL_001d:
	{
		// return "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_005f;
	}

IL_0026:
	{
		// byteCount--;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		// byte[] buffer = this.chars;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_chars_0();
		V_1 = L_6;
		// if (buffer.Length < byteCount) buffer = new byte[byteCount];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = V_0;
		V_5 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		// if (buffer.Length < byteCount) buffer = new byte[byteCount];
		int32_t L_10 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_1 = L_11;
	}

IL_0044:
	{
		// ReadFully(buffer, 0, byteCount);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_1;
		int32_t L_13 = V_0;
		SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF(__this, L_12, 0, L_13, /*hidden argument*/NULL);
		// return System.Text.Encoding.UTF8.GetString(buffer, 0, byteCount);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_14;
		L_14 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_1;
		int32_t L_16 = V_0;
		NullCheck(L_14);
		String_t* L_17;
		L_17 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, L_16);
		V_4 = L_17;
		goto IL_005f;
	}

IL_005f:
	{
		// }
		String_t* L_18 = V_4;
		return L_18;
	}
}
// System.String Spine.SkeletonBinary/SkeletonInput::ReadStringRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_ReadStringRef_m0A1430D0BA1705802D292DB9C49F1A126F9CDF09 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// int index = ReadInt(true);
		int32_t L_0;
		L_0 = SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543(__this, (bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		// return index == 0 ? null : strings[index - 1];
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get_strings_2();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = L_5;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0019:
	{
		V_1 = G_B3_0;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void Spine.SkeletonBinary/SkeletonInput::ReadFully(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_002f;
	}

IL_0003:
	{
		// int count = input.Read(buffer, offset, length);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		// if (count <= 0) throw new EndOfStreamException();
		int32_t L_5 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		// if (count <= 0) throw new EndOfStreamException();
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_7 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m2D2184E744B5B0762EA690CFD757F64E0BC6D539(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF_RuntimeMethod_var)));
	}

IL_0024:
	{
		// offset += count;
		int32_t L_8 = ___offset1;
		int32_t L_9 = V_0;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		// length -= count;
		int32_t L_10 = ___length2;
		int32_t L_11 = V_0;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11));
	}

IL_002f:
	{
		// while (length > 0) {
		int32_t L_12 = ___length2;
		V_2 = (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0003;
		}
	}
	{
		// }
		return;
	}
}
// System.String Spine.SkeletonBinary/SkeletonInput::GetVersionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_GetVersionString_mEA6F595F8E5173425CFE97B948B1AB690270DB14 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	Exception_t * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// long initialPosition = input.Position;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_input_3();
			NullCheck(L_0);
			int64_t L_1;
			L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
			V_0 = L_1;
			// ReadLong(); // long hash
			int64_t L_2;
			L_2 = SkeletonInput_ReadLong_m68876F3178280533715E950245B292E4CA86C9E2(__this, /*hidden argument*/NULL);
			// long stringPosition = input.Position;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = __this->get_input_3();
			NullCheck(L_3);
			int64_t L_4;
			L_4 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
			V_1 = L_4;
			// int stringByteCount = ReadInt(true);
			int32_t L_5;
			L_5 = SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543(__this, (bool)1, /*hidden argument*/NULL);
			V_2 = L_5;
			// input.Position = stringPosition;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = __this->get_input_3();
			int64_t L_7 = V_1;
			NullCheck(L_6);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_6, L_7);
			// if (stringByteCount <= 13) {
			int32_t L_8 = V_2;
			V_3 = (bool)((((int32_t)((((int32_t)L_8) > ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0065;
			}
		}

IL_0042:
		{
			// string version = ReadString();
			String_t* L_10;
			L_10 = SkeletonInput_ReadString_m6428104EADD77A1F3E22A73038830C769B1F8381(__this, /*hidden argument*/NULL);
			V_4 = L_10;
			// if (char.IsDigit(version[0]))
			String_t* L_11 = V_4;
			NullCheck(L_11);
			Il2CppChar L_12;
			L_12 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_11, 0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
			bool L_13;
			L_13 = Char_IsDigit_m73245965734C419B757CC9828B24D8C185E0808D(L_12, /*hidden argument*/NULL);
			V_5 = L_13;
			bool L_14 = V_5;
			if (!L_14)
			{
				goto IL_0064;
			}
		}

IL_005e:
		{
			// return version;
			String_t* L_15 = V_4;
			V_6 = L_15;
			goto IL_00a2;
		}

IL_0064:
		{
		}

IL_0065:
		{
			// input.Position = initialPosition;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_16 = __this->get_input_3();
			int64_t L_17 = V_0;
			NullCheck(L_16);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_16, L_17);
			// return GetVersionStringOld3X();
			String_t* L_18;
			L_18 = SkeletonInput_GetVersionStringOld3X_m77C851E61EFF9375B2296C5B65C3AF749AD3CE91(__this, /*hidden argument*/NULL);
			V_6 = L_18;
			goto IL_00a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007c;
		}
		throw e;
	}

CATCH_007c:
	{ // begin catch(System.Exception)
		{
			// } catch (Exception e) {
			V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// throw new ArgumentException("Stream does not contain valid binary Skeleton Data.\n" + e, "input");
			Exception_t * L_19 = V_7;
			Exception_t * L_20 = L_19;
			G_B7_0 = L_20;
			G_B7_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4F9F858EE2EF30F389EC8CF7D073A6FC4149826));
			if (L_20)
			{
				G_B8_0 = L_20;
				G_B8_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4F9F858EE2EF30F389EC8CF7D073A6FC4149826));
				goto IL_008d;
			}
		}

IL_0089:
		{
			G_B9_0 = ((String_t*)(NULL));
			G_B9_1 = G_B7_1;
			goto IL_0092;
		}

IL_008d:
		{
			NullCheck(G_B8_0);
			String_t* L_21;
			L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
			G_B9_0 = L_21;
			G_B9_1 = G_B8_1;
		}

IL_0092:
		{
			String_t* L_22;
			L_22 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(G_B9_1, G_B9_0, /*hidden argument*/NULL);
			ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_23 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
			ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_23, L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonInput_GetVersionString_mEA6F595F8E5173425CFE97B948B1AB690270DB14_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_00a2:
	{
		// }
		String_t* L_24 = V_6;
		return L_24;
	}
}
// System.String Spine.SkeletonBinary/SkeletonInput::GetVersionStringOld3X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeletonInput_GetVersionStringOld3X_m77C851E61EFF9375B2296C5B65C3AF749AD3CE91 (SkeletonInput_tD0B7F3FDB991A3A0D0563BAD64BF45984FC8DC6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t G_B5_0 = 0;
	{
		// int byteCount = ReadInt(true);
		int32_t L_0;
		L_0 = SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543(__this, (bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (byteCount > 1) input.Position += byteCount - 1;
		int32_t L_1 = V_0;
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// if (byteCount > 1) input.Position += byteCount - 1;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = __this->get_input_3();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = L_3;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_4);
		int32_t L_6 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, ((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))))));
	}

IL_0028:
	{
		// byteCount = ReadInt(true);
		int32_t L_7;
		L_7 = SkeletonInput_ReadInt_m3DABE27E31071D6040DF41DD2A613D3CD48FB543(__this, (bool)1, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (byteCount > 1 && byteCount <= 13) {
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_9) > ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B5_0 = 0;
	}

IL_003f:
	{
		V_2 = (bool)G_B5_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		// byteCount--;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		// byte[] buffer = new byte[byteCount];
		int32_t L_12 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_3 = L_13;
		// ReadFully(buffer, 0, byteCount);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_3;
		int32_t L_15 = V_0;
		SkeletonInput_ReadFully_m0C4DC8DA2A372732B0E514A341EC75E0079FAFBF(__this, L_14, 0, L_15, /*hidden argument*/NULL);
		// return System.Text.Encoding.UTF8.GetString(buffer, 0, byteCount);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_16;
		L_16 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_3;
		int32_t L_18 = V_0;
		NullCheck(L_16);
		String_t* L_19;
		L_19 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_16, L_17, 0, L_18);
		V_4 = L_19;
		goto IL_0075;
	}

IL_006a:
	{
		// throw new ArgumentException("Stream does not contain valid binary Skeleton Data.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_20 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DEF291FB4CA7727FF6BE1FE8CD7B4A1077EC673)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonInput_GetVersionStringOld3X_m77C851E61EFF9375B2296C5B65C3AF749AD3CE91_RuntimeMethod_var)));
	}

IL_0075:
	{
		// }
		String_t* L_21 = V_4;
		return L_21;
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
// System.Void Spine.SkeletonBinary/Vertices::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertices__ctor_m57085B6AA84433AABF60423732301C26E34F9C77 (Vertices_tC5C45F508B1550DB3F5D2C4479C467CA6226B541 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Spine.SkeletonJson/LinkedMesh::.ctor(Spine.MeshAttachment,System.String,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedMesh__ctor_m306C41000F6CF70F23B32FFE5E8FAAE4A15D80BC (LinkedMesh_tD6A11DC5CA49564F8563B86EEDD422FE5B83108D * __this, MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * ___mesh0, String_t* ___skin1, int32_t ___slotIndex2, String_t* ___parent3, bool ___inheritTimelines4, const RuntimeMethod* method)
{
	{
		// public LinkedMesh (MeshAttachment mesh, string skin, int slotIndex, string parent, bool inheritTimelines) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.mesh = mesh;
		MeshAttachment_t928FE10280A3D4F1648B7D18B42C04515C08F990 * L_0 = ___mesh0;
		__this->set_mesh_3(L_0);
		// this.skin = skin;
		String_t* L_1 = ___skin1;
		__this->set_skin_1(L_1);
		// this.slotIndex = slotIndex;
		int32_t L_2 = ___slotIndex2;
		__this->set_slotIndex_2(L_2);
		// this.parent = parent;
		String_t* L_3 = ___parent3;
		__this->set_parent_0(L_3);
		// this.inheritTimelines = inheritTimelines;
		bool L_4 = ___inheritTimelines4;
		__this->set_inheritTimelines_4(L_4);
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
// Conversion methods for marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_pinvoke(const SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4& unmarshaled, SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_pinvoke_back(const SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_pinvoke& marshaled, SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4& unmarshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_pinvoke_cleanup(SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_com(const SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4& unmarshaled, SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_com& marshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_com_back(const SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_com& marshaled, SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4& unmarshaled)
{
	Exception_t* ___attachment_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'attachment' of type 'SkinEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___attachment_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Skin/SkinEntry
IL2CPP_EXTERN_C void SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshal_com_cleanup(SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4_marshaled_com& marshaled)
{
}
// System.Void Spine.Skin/SkinEntry::.ctor(System.Int32,System.String,Spine.Attachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinEntry__ctor_m1855C514A973635B0644A9DA0FA8CFEF7E54098E (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, int32_t ___slotIndex0, String_t* ___name1, Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment2, const RuntimeMethod* method)
{
	{
		// this.slotIndex = slotIndex;
		int32_t L_0 = ___slotIndex0;
		__this->set_slotIndex_0(L_0);
		// this.name = name;
		String_t* L_1 = ___name1;
		__this->set_name_1(L_1);
		// this.attachment = attachment;
		Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * L_2 = ___attachment2;
		__this->set_attachment_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SkinEntry__ctor_m1855C514A973635B0644A9DA0FA8CFEF7E54098E_AdjustorThunk (RuntimeObject * __this, int32_t ___slotIndex0, String_t* ___name1, Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * ___attachment2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * _thisAdjusted = reinterpret_cast<SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 *>(__this + _offset);
	SkinEntry__ctor_m1855C514A973635B0644A9DA0FA8CFEF7E54098E(_thisAdjusted, ___slotIndex0, ___name1, ___attachment2, method);
}
// System.Int32 Spine.Skin/SkinEntry::get_SlotIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkinEntry_get_SlotIndex_m60F18BF0EF0A626BAD2703DDFF331C1AC354DAEF (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return slotIndex;
		int32_t L_0 = __this->get_slotIndex_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t SkinEntry_get_SlotIndex_m60F18BF0EF0A626BAD2703DDFF331C1AC354DAEF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * _thisAdjusted = reinterpret_cast<SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SkinEntry_get_SlotIndex_m60F18BF0EF0A626BAD2703DDFF331C1AC354DAEF(_thisAdjusted, method);
	return _returnValue;
}
// System.String Spine.Skin/SkinEntry::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkinEntry_get_Name_m5177BC3C9F82E943338843B4D1626EC2E9D4938B (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return name;
		String_t* L_0 = __this->get_name_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* SkinEntry_get_Name_m5177BC3C9F82E943338843B4D1626EC2E9D4938B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * _thisAdjusted = reinterpret_cast<SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SkinEntry_get_Name_m5177BC3C9F82E943338843B4D1626EC2E9D4938B(_thisAdjusted, method);
	return _returnValue;
}
// Spine.Attachment Spine.Skin/SkinEntry::get_Attachment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * SkinEntry_get_Attachment_m6574C605D1249A88A1B15385C94170914D120843 (SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * __this, const RuntimeMethod* method)
{
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * V_0 = NULL;
	{
		// return attachment;
		Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * L_0 = __this->get_attachment_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * SkinEntry_get_Attachment_m6574C605D1249A88A1B15385C94170914D120843_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 * _thisAdjusted = reinterpret_cast<SkinEntry_t4112F7EB8FA7FAC2011F2139F5C251CEE83393C4 *>(__this + _offset);
	Attachment_tA85256BF51006C369687395955B6A6B51D432F21 * _returnValue;
	_returnValue = SkinEntry_get_Attachment_m6574C605D1249A88A1B15385C94170914D120843(_thisAdjusted, method);
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
// Conversion methods for marshalling of: Spine.Skin/SkinKey
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_pinvoke(const SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8& unmarshaled, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_pinvoke& marshaled)
{
	marshaled.___slotIndex_0 = unmarshaled.get_slotIndex_0();
	marshaled.___name_1 = il2cpp_codegen_marshal_string(unmarshaled.get_name_1());
	marshaled.___hashCode_2 = unmarshaled.get_hashCode_2();
}
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_pinvoke_back(const SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_pinvoke& marshaled, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8& unmarshaled)
{
	int32_t unmarshaled_slotIndex_temp_0 = 0;
	unmarshaled_slotIndex_temp_0 = marshaled.___slotIndex_0;
	unmarshaled.set_slotIndex_0(unmarshaled_slotIndex_temp_0);
	unmarshaled.set_name_1(il2cpp_codegen_marshal_string_result(marshaled.___name_1));
	int32_t unmarshaled_hashCode_temp_2 = 0;
	unmarshaled_hashCode_temp_2 = marshaled.___hashCode_2;
	unmarshaled.set_hashCode_2(unmarshaled_hashCode_temp_2);
}
// Conversion method for clean up from marshalling of: Spine.Skin/SkinKey
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_pinvoke_cleanup(SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_1);
	marshaled.___name_1 = NULL;
}
// Conversion methods for marshalling of: Spine.Skin/SkinKey
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_com(const SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8& unmarshaled, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_com& marshaled)
{
	marshaled.___slotIndex_0 = unmarshaled.get_slotIndex_0();
	marshaled.___name_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_1());
	marshaled.___hashCode_2 = unmarshaled.get_hashCode_2();
}
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_com_back(const SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_com& marshaled, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8& unmarshaled)
{
	int32_t unmarshaled_slotIndex_temp_0 = 0;
	unmarshaled_slotIndex_temp_0 = marshaled.___slotIndex_0;
	unmarshaled.set_slotIndex_0(unmarshaled_slotIndex_temp_0);
	unmarshaled.set_name_1(il2cpp_codegen_marshal_bstring_result(marshaled.___name_1));
	int32_t unmarshaled_hashCode_temp_2 = 0;
	unmarshaled_hashCode_temp_2 = marshaled.___hashCode_2;
	unmarshaled.set_hashCode_2(unmarshaled_hashCode_temp_2);
}
// Conversion method for clean up from marshalling of: Spine.Skin/SkinKey
IL2CPP_EXTERN_C void SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshal_com_cleanup(SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_1);
	marshaled.___name_1 = NULL;
}
// System.Void Spine.Skin/SkinKey::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A (SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8 * __this, int32_t ___slotIndex0, String_t* ___name1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (slotIndex < 0) throw new ArgumentException("slotIndex must be >= 0.");
		int32_t L_0 = ___slotIndex0;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (slotIndex < 0) throw new ArgumentException("slotIndex must be >= 0.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral415B33E751EB342E42AB189D9404D56A96C6C393)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (name == null) throw new ArgumentNullException("name", "name cannot be null");
		String_t* L_3 = ___name1;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// if (name == null) throw new ArgumentNullException("name", "name cannot be null");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5A0157A4D0640187967DD9595192830F6FC0E50)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A_RuntimeMethod_var)));
	}

IL_002c:
	{
		// this.slotIndex = slotIndex;
		int32_t L_6 = ___slotIndex0;
		__this->set_slotIndex_0(L_6);
		// this.name = name;
		String_t* L_7 = ___name1;
		__this->set_name_1(L_7);
		// this.hashCode = name.GetHashCode() + slotIndex * 37;
		String_t* L_8 = ___name1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		int32_t L_10 = ___slotIndex0;
		__this->set_hashCode_2(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)((int32_t)37))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A_AdjustorThunk (RuntimeObject * __this, int32_t ___slotIndex0, String_t* ___name1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8 * _thisAdjusted = reinterpret_cast<SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8 *>(__this + _offset);
	SkinKey__ctor_m186DE323903429C9B364961256244CAB324D0A4A(_thisAdjusted, ___slotIndex0, ___name1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Spine.Skin/SkinKeyComparer::System.Collections.Generic.IEqualityComparer<Spine.Skin.SkinKey>.Equals(Spine.Skin/SkinKey,Spine.Skin/SkinKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkinKeyComparer_System_Collections_Generic_IEqualityComparerU3CSpine_Skin_SkinKeyU3E_Equals_mD4B53C0CB7538022F10EA07373420C9FD54C7AD4 (SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * __this, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  ___e10, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  ___e21, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return e1.slotIndex == e2.slotIndex && string.Equals(e1.name, e2.name, StringComparison.Ordinal);
		SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  L_0 = ___e10;
		int32_t L_1 = L_0.get_slotIndex_0();
		SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  L_2 = ___e21;
		int32_t L_3 = L_2.get_slotIndex_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0023;
		}
	}
	{
		SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  L_4 = ___e10;
		String_t* L_5 = L_4.get_name_1();
		SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  L_6 = ___e21;
		String_t* L_7 = L_6.get_name_1();
		bool L_8;
		L_8 = String_Equals_mEE55908E87109DB4E5D5A05245332FB2A270F258(L_5, L_7, 4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_8));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Int32 Spine.Skin/SkinKeyComparer::System.Collections.Generic.IEqualityComparer<Spine.Skin.SkinKey>.GetHashCode(Spine.Skin/SkinKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkinKeyComparer_System_Collections_Generic_IEqualityComparerU3CSpine_Skin_SkinKeyU3E_GetHashCode_mDE8AEC95949B1D03BC73C526F367448C6B1F4525 (SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * __this, SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  ___e0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return e.hashCode;
		SkinKey_t375635E838ECDEB11B7C69698A0DECC8C37075E8  L_0 = ___e0;
		int32_t L_1 = L_0.get_hashCode_2();
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Spine.Skin/SkinKeyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinKeyComparer__ctor_m19150DFF69B53B377F62562BBB149C7FABC909A0 (SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spine.Skin/SkinKeyComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinKeyComparer__cctor_m85FF419ED021304607BCE112787F197F3AF5387A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly SkinKeyComparer Instance = new SkinKeyComparer();
		SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 * L_0 = (SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764 *)il2cpp_codegen_object_new(SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_il2cpp_TypeInfo_var);
		SkinKeyComparer__ctor_m19150DFF69B53B377F62562BBB149C7FABC909A0(L_0, /*hidden argument*/NULL);
		((SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_StaticFields*)il2cpp_codegen_static_fields_for(SkinKeyComparer_t4F9D27D9EB27FB8A643889C17AD3E9682592B764_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
