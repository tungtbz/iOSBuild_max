#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean UnityEngine.DLog::CanLog(UnityEngine.LogType)
extern void DLog_CanLog_m352D6E18EF978DF54E64F604EC1C10C5B4FE4871 (void);
// 0x00000002 System.Void UnityEngine.DLog::Log(System.Object)
extern void DLog_Log_mDE5A0858B65C82F01F350AC649F9E7CAC02C141A (void);
// 0x00000003 System.Void UnityEngine.DLog::Log(System.Object,UnityEngine.Color)
extern void DLog_Log_m154F227F0F6EA7ECE7D275FBE2E2798C98CA1262 (void);
// 0x00000004 System.Void UnityEngine.DLog::LogError(System.Object)
extern void DLog_LogError_m99146C3A5D8E11DC41C7B4D692C4E7779869D002 (void);
// 0x00000005 System.Void UnityEngine.DLog::LogImpl(UnityEngine.LogType,System.Object,UnityEngine.Color,UnityEngine.Object)
extern void DLog_LogImpl_mF49E3CA09B146A5FD8EB90D3CD15D2B958E4B1A8 (void);
// 0x00000006 System.Void UnityEngine.DLog::.cctor()
extern void DLog__cctor_mBDB95C3024F20E25BAA27C02FE86BC30A7574C2C (void);
// 0x00000007 System.String kokichi.DisableLogging.LogHelper::AddColorTag(System.String,System.String)
extern void LogHelper_AddColorTag_m29DDD689D28ABD623BCACDCDDE4CF48389DA6753 (void);
// 0x00000008 System.String kokichi.DisableLogging.LogHelper::ColorToHex(UnityEngine.Color32)
extern void LogHelper_ColorToHex_m5AF34187EE37AA604B334E4849CBB934B2C72A5E (void);
// 0x00000009 System.Void kokichi.DisableLogging.LogToConsole::InitHexColorDict()
extern void LogToConsole_InitHexColorDict_mE48FDD5EB437E2EB2B9DF29B3E6D6BBA4AE618FC (void);
// 0x0000000A System.Void kokichi.DisableLogging.LogToConsole::LogImpl(UnityEngine.LogType,System.String,UnityEngine.Color,UnityEngine.Object)
extern void LogToConsole_LogImpl_m2B6224ECBD5C634301DEB55A60BB8812C7BD7D04 (void);
// 0x0000000B System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.String> kokichi.DisableLogging.LogToConsole::get_HexColorDict()
extern void LogToConsole_get_HexColorDict_m237F24995B8E4AD6C43ECAC47D2C5080657C98C1 (void);
static Il2CppMethodPointer s_methodPointers[11] = 
{
	DLog_CanLog_m352D6E18EF978DF54E64F604EC1C10C5B4FE4871,
	DLog_Log_mDE5A0858B65C82F01F350AC649F9E7CAC02C141A,
	DLog_Log_m154F227F0F6EA7ECE7D275FBE2E2798C98CA1262,
	DLog_LogError_m99146C3A5D8E11DC41C7B4D692C4E7779869D002,
	DLog_LogImpl_mF49E3CA09B146A5FD8EB90D3CD15D2B958E4B1A8,
	DLog__cctor_mBDB95C3024F20E25BAA27C02FE86BC30A7574C2C,
	LogHelper_AddColorTag_m29DDD689D28ABD623BCACDCDDE4CF48389DA6753,
	LogHelper_ColorToHex_m5AF34187EE37AA604B334E4849CBB934B2C72A5E,
	LogToConsole_InitHexColorDict_mE48FDD5EB437E2EB2B9DF29B3E6D6BBA4AE618FC,
	LogToConsole_LogImpl_m2B6224ECBD5C634301DEB55A60BB8812C7BD7D04,
	LogToConsole_get_HexColorDict_m237F24995B8E4AD6C43ECAC47D2C5080657C98C1,
};
static const int32_t s_InvokerIndices[11] = 
{
	12080,
	12708,
	11843,
	12708,
	10724,
	12915,
	11626,
	12256,
	12915,
	10724,
	12872,
};
extern const CustomAttributesCacheGenerator g_Logger_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Logger_CodeGenModule;
const Il2CppCodeGenModule g_Logger_CodeGenModule = 
{
	"Logger.dll",
	11,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Logger_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
