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

// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.Object>
struct Dictionary_2_t55759EAEA6FDA8150669EBC46D74D3A9870624DF;
// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.String>
struct Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color>
struct IEqualityComparer_1_t53096CFF06DB4EE13B98B2D449749DE151CF1411;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Color,System.String>
struct KeyCollection_t352E39ADC7D90CAAC41A74DFBA477E675188AD6C;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Color,System.String>
struct ValueCollection_t1AF0EF22EC8092FB2AF0A2AAEDACE973E9B7AD21;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Color,System.String>[]
struct EntryU5BU5D_t777F2541A146C9E07D5E9A0EF33DCDE8D2552E73;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral67FD136B6612B476A4949C382A6F483B75712C4E;
IL2CPP_EXTERN_C String_t* _stringLiteral7609E533CB071C2184FDD0EFFA907D0215B2EBD8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAE11156C22E9E6FF2C7279134E2C1F7B9C5C1838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4C0A1E5204C717FDD36639613B78083006414B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m51F81E105D42FEB874DBEC796572DE7B0634E1E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m54BFF4DE6142468416D9EC71D4B672E4F8A250C1_RuntimeMethod_var;

struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t644BB6B53D86D16BB4F0D1428D3931A80244A656 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.String>
struct Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t777F2541A146C9E07D5E9A0EF33DCDE8D2552E73* ___entries_1;
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
	KeyCollection_t352E39ADC7D90CAAC41A74DFBA477E675188AD6C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1AF0EF22EC8092FB2AF0A2AAEDACE973E9B7AD21 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D, ___entries_1)); }
	inline EntryU5BU5D_t777F2541A146C9E07D5E9A0EF33DCDE8D2552E73* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t777F2541A146C9E07D5E9A0EF33DCDE8D2552E73** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t777F2541A146C9E07D5E9A0EF33DCDE8D2552E73* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D, ___keys_7)); }
	inline KeyCollection_t352E39ADC7D90CAAC41A74DFBA477E675188AD6C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t352E39ADC7D90CAAC41A74DFBA477E675188AD6C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t352E39ADC7D90CAAC41A74DFBA477E675188AD6C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D, ___values_8)); }
	inline ValueCollection_t1AF0EF22EC8092FB2AF0A2AAEDACE973E9B7AD21 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1AF0EF22EC8092FB2AF0A2AAEDACE973E9B7AD21 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1AF0EF22EC8092FB2AF0A2AAEDACE973E9B7AD21 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D, ____syncRoot_9)); }
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


// kokichi.DisableLogging.LogHelper
struct LogHelper_t0EC3A856C689B93F9410FF2D9BA13F2EADE9AE13  : public RuntimeObject
{
public:

public:
};


// kokichi.DisableLogging.LogToConsole
struct LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9  : public RuntimeObject
{
public:

public:
};

struct LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.String> kokichi.DisableLogging.LogToConsole::m_hexColorDict
	Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * ___m_hexColorDict_0;

public:
	inline static int32_t get_offset_of_m_hexColorDict_0() { return static_cast<int32_t>(offsetof(LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_StaticFields, ___m_hexColorDict_0)); }
	inline Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * get_m_hexColorDict_0() const { return ___m_hexColorDict_0; }
	inline Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D ** get_address_of_m_hexColorDict_0() { return &___m_hexColorDict_0; }
	inline void set_m_hexColorDict_0(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * value)
	{
		___m_hexColorDict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_hexColorDict_0), (void*)value);
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


// UnityEngine.DLog
struct DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72  : public RuntimeObject
{
public:

public:
};

struct DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields
{
public:
	// UnityEngine.Color UnityEngine.DLog::DEFAULT_COLOR
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___DEFAULT_COLOR_0;
	// System.Boolean UnityEngine.DLog::enableLogError
	bool ___enableLogError_1;
	// System.Boolean UnityEngine.DLog::enableLogInfo
	bool ___enableLogInfo_2;
	// System.Boolean UnityEngine.DLog::enableLogWarning
	bool ___enableLogWarning_3;
	// System.String UnityEngine.DLog::STR_NULL
	String_t* ___STR_NULL_4;

public:
	inline static int32_t get_offset_of_DEFAULT_COLOR_0() { return static_cast<int32_t>(offsetof(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields, ___DEFAULT_COLOR_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_DEFAULT_COLOR_0() const { return ___DEFAULT_COLOR_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_DEFAULT_COLOR_0() { return &___DEFAULT_COLOR_0; }
	inline void set_DEFAULT_COLOR_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___DEFAULT_COLOR_0 = value;
	}

	inline static int32_t get_offset_of_enableLogError_1() { return static_cast<int32_t>(offsetof(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields, ___enableLogError_1)); }
	inline bool get_enableLogError_1() const { return ___enableLogError_1; }
	inline bool* get_address_of_enableLogError_1() { return &___enableLogError_1; }
	inline void set_enableLogError_1(bool value)
	{
		___enableLogError_1 = value;
	}

	inline static int32_t get_offset_of_enableLogInfo_2() { return static_cast<int32_t>(offsetof(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields, ___enableLogInfo_2)); }
	inline bool get_enableLogInfo_2() const { return ___enableLogInfo_2; }
	inline bool* get_address_of_enableLogInfo_2() { return &___enableLogInfo_2; }
	inline void set_enableLogInfo_2(bool value)
	{
		___enableLogInfo_2 = value;
	}

	inline static int32_t get_offset_of_enableLogWarning_3() { return static_cast<int32_t>(offsetof(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields, ___enableLogWarning_3)); }
	inline bool get_enableLogWarning_3() const { return ___enableLogWarning_3; }
	inline bool* get_address_of_enableLogWarning_3() { return &___enableLogWarning_3; }
	inline void set_enableLogWarning_3(bool value)
	{
		___enableLogWarning_3 = value;
	}

	inline static int32_t get_offset_of_STR_NULL_4() { return static_cast<int32_t>(offsetof(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields, ___STR_NULL_4)); }
	inline String_t* get_STR_NULL_4() const { return ___STR_NULL_4; }
	inline String_t** get_address_of_STR_NULL_4() { return &___STR_NULL_4; }
	inline void set_STR_NULL_4(String_t* value)
	{
		___STR_NULL_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___STR_NULL_4), (void*)value);
	}
};


// UnityEngine.LogType
struct LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF5E5D0C0FEFBDA7F256586F2F47044716759CA0E_gshared (Dictionary_2_t55759EAEA6FDA8150669EBC46D74D3A9870624DF * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5CF6FCF930C6860E7B1ABFA9903ABF9960301382_gshared (Dictionary_2_t55759EAEA6FDA8150669EBC46D74D3A9870624DF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mA959173BD0F994851108A347A411F1B3F4968202_gshared (Dictionary_2_t55759EAEA6FDA8150669EBC46D74D3A9870624DF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m84FC777302F3384FA665339CCF29D608141C8522_gshared (Dictionary_2_t55759EAEA6FDA8150669EBC46D74D3A9870624DF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);

// System.Void UnityEngine.DLog::LogImpl(UnityEngine.LogType,System.Object,UnityEngine.Color,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogImpl_mF49E3CA09B146A5FD8EB90D3CD15D2B958E4B1A8 (int32_t ___logType0, RuntimeObject * ___obj1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context3, const RuntimeMethod* method);
// System.Boolean UnityEngine.DLog::CanLog(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLog_CanLog_m352D6E18EF978DF54E64F604EC1C10C5B4FE4871 (int32_t ___logType0, const RuntimeMethod* method);
// System.Void kokichi.DisableLogging.LogToConsole::LogImpl(UnityEngine.LogType,System.String,UnityEngine.Color,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogToConsole_LogImpl_m2B6224ECBD5C634301DEB55A60BB8812C7BD7D04 (int32_t ___logType0, String_t* ___message1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m6364CCD309A4A64D49115167E97154D40CF8F140 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_mF722D7BC5AEA4A29F875AE36F952E474E159181E (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_mB28F18C2D039DB69593A38902B30A3CCE6B1AAC1 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_mD8CAAC9E4B8C5C92A21D176E4AB2C521CFA0EF7F (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gray_mC7DF17400DA07010DDEAACD5551C7CF7A2A7C450 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_grey_m1BF078396B21EFF0353BE64DEB195ED3BD771D10 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_mA1ADC829484A5941FBC8F1BC1568002AA6FE57C2 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_magenta_m254AF827AFFE29AFB352B49319D77C42595F1A13 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.String>::.ctor()
inline void Dictionary_2__ctor_m54BFF4DE6142468416D9EC71D4B672E4F8A250C1 (Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D *, const RuntimeMethod*))Dictionary_2__ctor_mF5E5D0C0FEFBDA7F256586F2F47044716759CA0E_gshared)(__this, method);
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mEE89982A9DEE11045F656B816C694D99CF27EAB7 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.String kokichi.DisableLogging.LogHelper::ColorToHex(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogHelper_ColorToHex_m5AF34187EE37AA604B334E4849CBB934B2C72A5E (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m4C0A1E5204C717FDD36639613B78083006414B0F (Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))Dictionary_2_ContainsKey_m5CF6FCF930C6860E7B1ABFA9903ABF9960301382_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mAE11156C22E9E6FF2C7279134E2C1F7B9C5C1838 (Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , String_t*, const RuntimeMethod*))Dictionary_2_Add_mA959173BD0F994851108A347A411F1B3F4968202_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Inequality_m46DFB6C179BB4E0B3E2776240C804A10D79A5B08 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.String> kokichi.DisableLogging.LogToConsole::get_HexColorDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * LogToConsole_get_HexColorDict_m237F24995B8E4AD6C43ECAC47D2C5080657C98C1 (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.String>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m51F81E105D42FEB874DBEC796572DE7B0634E1E4 (Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m84FC777302F3384FA665339CCF29D608141C8522_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// System.String kokichi.DisableLogging.LogHelper::AddColorTag(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogHelper_AddColorTag_m29DDD689D28ABD623BCACDCDDE4CF48389DA6753 (String_t* ___s0, String_t* ___hexColor1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m494F184C7E314B19A4DDAE5E1ABB9106886ED86A (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8F0BF6D19FDEAA41F027A734D6EE2CA2E4BCA1B3 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void kokichi.DisableLogging.LogToConsole::InitHexColorDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogToConsole_InitHexColorDict_mE48FDD5EB437E2EB2B9DF29B3E6D6BBA4AE618FC (const RuntimeMethod* method);
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
// System.Boolean UnityEngine.DLog::CanLog(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DLog_CanLog_m352D6E18EF978DF54E64F604EC1C10C5B4FE4871 (int32_t ___logType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		bool L_0 = ((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->get_enableLogInfo_2();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___logType0;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		bool L_2 = ((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->get_enableLogWarning_3();
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = ___logType0;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		bool L_4 = ((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->get_enableLogError_1();
		bool L_5 = ((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->get_enableLogError_1();
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = ___logType0;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.DLog::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_Log_mDE5A0858B65C82F01F350AC649F9E7CAC02C141A (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->get_DEFAULT_COLOR_0();
		DLog_LogImpl_mF49E3CA09B146A5FD8EB90D3CD15D2B958E4B1A8(3, L_0, L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.DLog::Log(System.Object,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_Log_m154F227F0F6EA7ECE7D275FBE2E2798C98CA1262 (RuntimeObject * ___obj0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___color1;
		IL2CPP_RUNTIME_CLASS_INIT(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		DLog_LogImpl_mF49E3CA09B146A5FD8EB90D3CD15D2B958E4B1A8(3, L_0, L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.DLog::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogError_m99146C3A5D8E11DC41C7B4D692C4E7779869D002 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->get_DEFAULT_COLOR_0();
		DLog_LogImpl_mF49E3CA09B146A5FD8EB90D3CD15D2B958E4B1A8(0, L_0, L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.DLog::LogImpl(UnityEngine.LogType,System.Object,UnityEngine.Color,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog_LogImpl_mF49E3CA09B146A5FD8EB90D3CD15D2B958E4B1A8 (int32_t ___logType0, RuntimeObject * ___obj1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		int32_t L_0 = ___logType0;
		IL2CPP_RUNTIME_CLASS_INIT(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DLog_CanLog_m352D6E18EF978DF54E64F604EC1C10C5B4FE4871(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_2 = ___obj1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject * L_3 = ___obj1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		G_B4_0 = L_4;
		goto IL_0018;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		String_t* L_5 = ((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->get_STR_NULL_4();
		G_B4_0 = L_5;
	}

IL_0018:
	{
		V_0 = G_B4_0;
		int32_t L_6 = ___logType0;
		String_t* L_7 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = ___color2;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_9 = ___context3;
		LogToConsole_LogImpl_m2B6224ECBD5C634301DEB55A60BB8812C7BD7D04(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.DLog::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DLog__cctor_mBDB95C3024F20E25BAA27C02FE86BC30A7574C2C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->set_DEFAULT_COLOR_0(L_0);
		((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->set_enableLogError_1((bool)1);
		((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->set_enableLogInfo_2((bool)1);
		((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->set_enableLogWarning_3((bool)1);
		((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->set_STR_NULL_4(_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
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
// System.String kokichi.DisableLogging.LogHelper::AddColorTag(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogHelper_AddColorTag_m29DDD689D28ABD623BCACDCDDE4CF48389DA6753 (String_t* ___s0, String_t* ___hexColor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67FD136B6612B476A4949C382A6F483B75712C4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		String_t* L_1 = ___hexColor1;
		String_t* L_2;
		L_2 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral67FD136B6612B476A4949C382A6F483B75712C4E, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String kokichi.DisableLogging.LogHelper::ColorToHex(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogHelper_ColorToHex_m5AF34187EE37AA604B334E4849CBB934B2C72A5E (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7609E533CB071C2184FDD0EFFA907D0215B2EBD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t* L_0 = (&___c0)->get_address_of_r_1();
		String_t* L_1;
		L_1 = Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C((uint8_t*)L_0, _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, /*hidden argument*/NULL);
		uint8_t* L_2 = (&___c0)->get_address_of_g_2();
		String_t* L_3;
		L_3 = Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C((uint8_t*)L_2, _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, /*hidden argument*/NULL);
		uint8_t* L_4 = (&___c0)->get_address_of_b_3();
		String_t* L_5;
		L_5 = Byte_ToString_mABEF6F24915951FF4A4D87B389D8418B2638178C((uint8_t*)L_4, _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(_stringLiteral7609E533CB071C2184FDD0EFFA907D0215B2EBD8, L_1, L_3, L_5, /*hidden argument*/NULL);
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
// System.Void kokichi.DisableLogging.LogToConsole::InitHexColorDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogToConsole_InitHexColorDict_mE48FDD5EB437E2EB2B9DF29B3E6D6BBA4AE618FC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAE11156C22E9E6FF2C7279134E2C1F7B9C5C1838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4C0A1E5204C717FDD36639613B78083006414B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m54BFF4DE6142468416D9EC71D4B672E4F8A250C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_3 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_4 = NULL;
	int32_t V_5 = 0;
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		V_3 = L_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = V_3;
		NullCheck(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_red_m6364CCD309A4A64D49115167E97154D40CF8F140(/*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_3 = V_3;
		NullCheck(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_yellow_mF722D7BC5AEA4A29F875AE36F952E474E159181E(/*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_4;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_5 = V_3;
		NullCheck(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5(/*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_6;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_7 = V_3;
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_get_blue_mB28F18C2D039DB69593A38902B30A3CCE6B1AAC1(/*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_8;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_9 = V_3;
		NullCheck(L_9);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37(/*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))) = L_10;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = V_3;
		NullCheck(L_11);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_black_mD8CAAC9E4B8C5C92A21D176E4AB2C521CFA0EF7F(/*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))) = L_12;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_13 = V_3;
		NullCheck(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = Color_get_gray_mC7DF17400DA07010DDEAACD5551C7CF7A2A7C450(/*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))) = L_14;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_15 = V_3;
		NullCheck(L_15);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		L_16 = Color_get_grey_m1BF078396B21EFF0353BE64DEB195ED3BD771D10(/*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))) = L_16;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_17 = V_3;
		NullCheck(L_17);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_get_cyan_mA1ADC829484A5941FBC8F1BC1568002AA6FE57C2(/*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(8))) = L_18;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_19 = V_3;
		NullCheck(L_19);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color_get_magenta_m254AF827AFFE29AFB352B49319D77C42595F1A13(/*hidden argument*/NULL);
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9)))) = L_20;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_21 = V_3;
		V_0 = L_21;
		Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * L_22 = (Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D *)il2cpp_codegen_object_new(Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m54BFF4DE6142468416D9EC71D4B672E4F8A250C1(L_22, /*hidden argument*/Dictionary_2__ctor_m54BFF4DE6142468416D9EC71D4B672E4F8A250C1_RuntimeMethod_var);
		((LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_StaticFields*)il2cpp_codegen_static_fields_for(LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_il2cpp_TypeInfo_var))->set_m_hexColorDict_0(L_22);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_23 = V_0;
		V_4 = L_23;
		V_5 = 0;
		goto IL_0101;
	}

IL_00c7:
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26 = (*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))));
		V_1 = L_26;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27 = V_1;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_28;
		L_28 = Color32_op_Implicit_mEE89982A9DEE11045F656B816C694D99CF27EAB7(L_27, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = LogHelper_ColorToHex_m5AF34187EE37AA604B334E4849CBB934B2C72A5E(L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * L_30 = ((LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_StaticFields*)il2cpp_codegen_static_fields_for(LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_il2cpp_TypeInfo_var))->get_m_hexColorDict_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = V_1;
		NullCheck(L_30);
		bool L_32;
		L_32 = Dictionary_2_ContainsKey_m4C0A1E5204C717FDD36639613B78083006414B0F(L_30, L_31, /*hidden argument*/Dictionary_2_ContainsKey_m4C0A1E5204C717FDD36639613B78083006414B0F_RuntimeMethod_var);
		if (L_32)
		{
			goto IL_00fb;
		}
	}
	{
		Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * L_33 = ((LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_StaticFields*)il2cpp_codegen_static_fields_for(LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_il2cpp_TypeInfo_var))->get_m_hexColorDict_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34 = V_1;
		String_t* L_35 = V_2;
		NullCheck(L_33);
		Dictionary_2_Add_mAE11156C22E9E6FF2C7279134E2C1F7B9C5C1838(L_33, L_34, L_35, /*hidden argument*/Dictionary_2_Add_mAE11156C22E9E6FF2C7279134E2C1F7B9C5C1838_RuntimeMethod_var);
	}

IL_00fb:
	{
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_0101:
	{
		int32_t L_37 = V_5;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_38 = V_4;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_00c7;
		}
	}
	{
		return;
	}
}
// System.Void kokichi.DisableLogging.LogToConsole::LogImpl(UnityEngine.LogType,System.String,UnityEngine.Color,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogToConsole_LogImpl_m2B6224ECBD5C634301DEB55A60BB8812C7BD7D04 (int32_t ___logType0, String_t* ___message1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m51F81E105D42FEB874DBEC796572DE7B0634E1E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___color2;
		IL2CPP_RUNTIME_CLASS_INIT(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ((DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_StaticFields*)il2cpp_codegen_static_fields_for(DLog_t3FECD2C3CC99A649B4D6F6E5B332D0B2B2484E72_il2cpp_TypeInfo_var))->get_DEFAULT_COLOR_0();
		bool L_2;
		L_2 = Color_op_Inequality_m46DFB6C179BB4E0B3E2776240C804A10D79A5B08(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		V_0 = (String_t*)NULL;
		Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * L_3;
		L_3 = LogToConsole_get_HexColorDict_m237F24995B8E4AD6C43ECAC47D2C5080657C98C1(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ___color2;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m51F81E105D42FEB874DBEC796572DE7B0634E1E4(L_3, L_4, (String_t**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m51F81E105D42FEB874DBEC796572DE7B0634E1E4_RuntimeMethod_var);
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = ___color2;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_9;
		L_9 = Color32_op_Implicit_mEE89982A9DEE11045F656B816C694D99CF27EAB7(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = LogHelper_ColorToHex_m5AF34187EE37AA604B334E4849CBB934B2C72A5E(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0031:
	{
		String_t* L_11 = ___message1;
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = LogHelper_AddColorTag_m29DDD689D28ABD623BCACDCDDE4CF48389DA6753(L_11, L_12, /*hidden argument*/NULL);
		___message1 = L_13;
	}

IL_003a:
	{
		int32_t L_14 = ___logType0;
		V_1 = L_14;
		int32_t L_15 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)2)))
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_0056;
			}
		}
	}
	{
		goto IL_005e;
	}

IL_004e:
	{
		String_t* L_16 = ___message1;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_17 = ___context3;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(L_16, L_17, /*hidden argument*/NULL);
		return;
	}

IL_0056:
	{
		String_t* L_18 = ___message1;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_19 = ___context3;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_m494F184C7E314B19A4DDAE5E1ABB9106886ED86A(L_18, L_19, /*hidden argument*/NULL);
		return;
	}

IL_005e:
	{
		String_t* L_20 = ___message1;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_21 = ___context3;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8F0BF6D19FDEAA41F027A734D6EE2CA2E4BCA1B3(L_20, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.String> kokichi.DisableLogging.LogToConsole::get_HexColorDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * LogToConsole_get_HexColorDict_m237F24995B8E4AD6C43ECAC47D2C5080657C98C1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * L_0 = ((LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_StaticFields*)il2cpp_codegen_static_fields_for(LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_il2cpp_TypeInfo_var))->get_m_hexColorDict_0();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		LogToConsole_InitHexColorDict_mE48FDD5EB437E2EB2B9DF29B3E6D6BBA4AE618FC(/*hidden argument*/NULL);
	}

IL_000c:
	{
		Dictionary_2_t669A1952F0D93CF81AF863247D7E752B03DBDB4D * L_1 = ((LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_StaticFields*)il2cpp_codegen_static_fields_for(LogToConsole_tBC24AB1BACB97D10C7812D4944722D5AA08AB7B9_il2cpp_TypeInfo_var))->get_m_hexColorDict_0();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
