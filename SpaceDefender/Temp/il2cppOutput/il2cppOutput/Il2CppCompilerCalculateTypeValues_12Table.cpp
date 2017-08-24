#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t1417072358;
// UnityEngine.Application/LogCallback
struct LogCallback_t2226546501;
// UnityEngine.Events.UnityAction
struct UnityAction_t3467849802;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t328472698;
// UnityEngine.ILogger
struct ILogger_t2731480428;
// UnityEngine.Gyroscope
struct Gyroscope_t1138814202;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t2002291249;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1071459100;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t2510798306;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t2128070635;
// UnityEngine.Transform
struct Transform_t337161473;
// System.Char[]
struct CharU5BU5D_t1543044620;
// System.Void
struct Void_t1046261912;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1323899958;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t2172851866;
// UnityEngine.Display[]
struct DisplayU5BU5D_t2837821543;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t3145644448;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t1563141617;
// System.AsyncCallback
struct AsyncCallback_t1962123760;
// UnityEngine.Camera
struct Camera_t2032113953;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t2624629847;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t2604685970;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef APPLICATION_T358611671_H
#define APPLICATION_T358611671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t358611671  : public RuntimeObject
{
public:

public:
};

struct Application_t358611671_StaticFields
{
public:
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_t1417072358 * ___lowMemory_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t2226546501 * ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t2226546501 * ___s_LogCallbackHandlerThreaded_2;
	// UnityEngine.Events.UnityAction UnityEngine.Application::onBeforeRender
	UnityAction_t3467849802 * ___onBeforeRender_3;

public:
	inline static int32_t get_offset_of_lowMemory_0() { return static_cast<int32_t>(offsetof(Application_t358611671_StaticFields, ___lowMemory_0)); }
	inline LowMemoryCallback_t1417072358 * get_lowMemory_0() const { return ___lowMemory_0; }
	inline LowMemoryCallback_t1417072358 ** get_address_of_lowMemory_0() { return &___lowMemory_0; }
	inline void set_lowMemory_0(LowMemoryCallback_t1417072358 * value)
	{
		___lowMemory_0 = value;
		Il2CppCodeGenWriteBarrier((&___lowMemory_0), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandler_1() { return static_cast<int32_t>(offsetof(Application_t358611671_StaticFields, ___s_LogCallbackHandler_1)); }
	inline LogCallback_t2226546501 * get_s_LogCallbackHandler_1() const { return ___s_LogCallbackHandler_1; }
	inline LogCallback_t2226546501 ** get_address_of_s_LogCallbackHandler_1() { return &___s_LogCallbackHandler_1; }
	inline void set_s_LogCallbackHandler_1(LogCallback_t2226546501 * value)
	{
		___s_LogCallbackHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandler_1), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_2() { return static_cast<int32_t>(offsetof(Application_t358611671_StaticFields, ___s_LogCallbackHandlerThreaded_2)); }
	inline LogCallback_t2226546501 * get_s_LogCallbackHandlerThreaded_2() const { return ___s_LogCallbackHandlerThreaded_2; }
	inline LogCallback_t2226546501 ** get_address_of_s_LogCallbackHandlerThreaded_2() { return &___s_LogCallbackHandlerThreaded_2; }
	inline void set_s_LogCallbackHandlerThreaded_2(LogCallback_t2226546501 * value)
	{
		___s_LogCallbackHandlerThreaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandlerThreaded_2), value);
	}

	inline static int32_t get_offset_of_onBeforeRender_3() { return static_cast<int32_t>(offsetof(Application_t358611671_StaticFields, ___onBeforeRender_3)); }
	inline UnityAction_t3467849802 * get_onBeforeRender_3() const { return ___onBeforeRender_3; }
	inline UnityAction_t3467849802 ** get_address_of_onBeforeRender_3() { return &___onBeforeRender_3; }
	inline void set_onBeforeRender_3(UnityAction_t3467849802 * value)
	{
		___onBeforeRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onBeforeRender_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATION_T358611671_H
#ifndef YIELDINSTRUCTION_T4110824712_H
#define YIELDINSTRUCTION_T4110824712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t4110824712  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t4110824712_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t4110824712_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T4110824712_H
#ifndef HOSTDATA_T254599681_H
#define HOSTDATA_T254599681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HostData
struct  HostData_t254599681  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.HostData::m_Nat
	int32_t ___m_Nat_0;
	// System.String UnityEngine.HostData::m_GameType
	String_t* ___m_GameType_1;
	// System.String UnityEngine.HostData::m_GameName
	String_t* ___m_GameName_2;
	// System.Int32 UnityEngine.HostData::m_ConnectedPlayers
	int32_t ___m_ConnectedPlayers_3;
	// System.Int32 UnityEngine.HostData::m_PlayerLimit
	int32_t ___m_PlayerLimit_4;
	// System.String[] UnityEngine.HostData::m_IP
	StringU5BU5D_t328472698* ___m_IP_5;
	// System.Int32 UnityEngine.HostData::m_Port
	int32_t ___m_Port_6;
	// System.Int32 UnityEngine.HostData::m_PasswordProtected
	int32_t ___m_PasswordProtected_7;
	// System.String UnityEngine.HostData::m_Comment
	String_t* ___m_Comment_8;
	// System.String UnityEngine.HostData::m_GUID
	String_t* ___m_GUID_9;

public:
	inline static int32_t get_offset_of_m_Nat_0() { return static_cast<int32_t>(offsetof(HostData_t254599681, ___m_Nat_0)); }
	inline int32_t get_m_Nat_0() const { return ___m_Nat_0; }
	inline int32_t* get_address_of_m_Nat_0() { return &___m_Nat_0; }
	inline void set_m_Nat_0(int32_t value)
	{
		___m_Nat_0 = value;
	}

	inline static int32_t get_offset_of_m_GameType_1() { return static_cast<int32_t>(offsetof(HostData_t254599681, ___m_GameType_1)); }
	inline String_t* get_m_GameType_1() const { return ___m_GameType_1; }
	inline String_t** get_address_of_m_GameType_1() { return &___m_GameType_1; }
	inline void set_m_GameType_1(String_t* value)
	{
		___m_GameType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameType_1), value);
	}

	inline static int32_t get_offset_of_m_GameName_2() { return static_cast<int32_t>(offsetof(HostData_t254599681, ___m_GameName_2)); }
	inline String_t* get_m_GameName_2() const { return ___m_GameName_2; }
	inline String_t** get_address_of_m_GameName_2() { return &___m_GameName_2; }
	inline void set_m_GameName_2(String_t* value)
	{
		___m_GameName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameName_2), value);
	}

	inline static int32_t get_offset_of_m_ConnectedPlayers_3() { return static_cast<int32_t>(offsetof(HostData_t254599681, ___m_ConnectedPlayers_3)); }
	inline int32_t get_m_ConnectedPlayers_3() const { return ___m_ConnectedPlayers_3; }
	inline int32_t* get_address_of_m_ConnectedPlayers_3() { return &___m_ConnectedPlayers_3; }
	inline void set_m_ConnectedPlayers_3(int32_t value)
	{
		___m_ConnectedPlayers_3 = value;
	}

	inline static int32_t get_offset_of_m_PlayerLimit_4() { return static_cast<int32_t>(offsetof(HostData_t254599681, ___m_PlayerLimit_4)); }
	inline int32_t get_m_PlayerLimit_4() const { return ___m_PlayerLimit_4; }
	inline int32_t* get_address_of_m_PlayerLimit_4() { return &___m_PlayerLimit_4; }
	inline void set_m_PlayerLimit_4(int32_t value)
	{
		___m_PlayerLimit_4 = value;
	}

	inline static int32_t get_offset_of_m_IP_5() { return static_cast<int32_t>(offsetof(HostData_t254599681, ___m_IP_5)); }
	inline StringU5BU5D_t328472698* get_m_IP_5() const { return ___m_IP_5; }
	inline StringU5BU5D_t328472698** get_address_of_m_IP_5() { return &___m_IP_5; }
	inline void set_m_IP_5(StringU5BU5D_t328472698* value)
	{
		___m_IP_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_IP_5), value);
	}

	inline static int32_t get_offset_of_m_Port_6() { return static_cast<int32_t>(offsetof(HostData_t254599681, ___m_Port_6)); }
	inline int32_t get_m_Port_6() const { return ___m_Port_6; }
	inline int32_t* get_address_of_m_Port_6() { return &___m_Port_6; }
	inline void set_m_Port_6(int32_t value)
	{
		___m_Port_6 = value;
	}

	inline static int32_t get_offset_of_m_PasswordProtected_7() { return static_cast<int32_t>(offsetof(HostData_t254599681, ___m_PasswordProtected_7)); }
	inline int32_t get_m_PasswordProtected_7() const { return ___m_PasswordProtected_7; }
	inline int32_t* get_address_of_m_PasswordProtected_7() { return &___m_PasswordProtected_7; }
	inline void set_m_PasswordProtected_7(int32_t value)
	{
		___m_PasswordProtected_7 = value;
	}

	inline static int32_t get_offset_of_m_Comment_8() { return static_cast<int32_t>(offsetof(HostData_t254599681, ___m_Comment_8)); }
	inline String_t* get_m_Comment_8() const { return ___m_Comment_8; }
	inline String_t** get_address_of_m_Comment_8() { return &___m_Comment_8; }
	inline void set_m_Comment_8(String_t* value)
	{
		___m_Comment_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Comment_8), value);
	}

	inline static int32_t get_offset_of_m_GUID_9() { return static_cast<int32_t>(offsetof(HostData_t254599681, ___m_GUID_9)); }
	inline String_t* get_m_GUID_9() const { return ___m_GUID_9; }
	inline String_t** get_address_of_m_GUID_9() { return &___m_GUID_9; }
	inline void set_m_GUID_9(String_t* value)
	{
		___m_GUID_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_GUID_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HostData
struct HostData_t254599681_marshaled_pinvoke
{
	int32_t ___m_Nat_0;
	char* ___m_GameType_1;
	char* ___m_GameName_2;
	int32_t ___m_ConnectedPlayers_3;
	int32_t ___m_PlayerLimit_4;
	char** ___m_IP_5;
	int32_t ___m_Port_6;
	int32_t ___m_PasswordProtected_7;
	char* ___m_Comment_8;
	char* ___m_GUID_9;
};
// Native definition for COM marshalling of UnityEngine.HostData
struct HostData_t254599681_marshaled_com
{
	int32_t ___m_Nat_0;
	Il2CppChar* ___m_GameType_1;
	Il2CppChar* ___m_GameName_2;
	int32_t ___m_ConnectedPlayers_3;
	int32_t ___m_PlayerLimit_4;
	Il2CppChar** ___m_IP_5;
	int32_t ___m_Port_6;
	int32_t ___m_PasswordProtected_7;
	Il2CppChar* ___m_Comment_8;
	Il2CppChar* ___m_GUID_9;
};
#endif // HOSTDATA_T254599681_H
#ifndef TIME_T4261647313_H
#define TIME_T4261647313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Time
struct  Time_t4261647313  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIME_T4261647313_H
#ifndef DEBUG_T2771728586_H
#define DEBUG_T2771728586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t2771728586  : public RuntimeObject
{
public:

public:
};

struct Debug_t2771728586_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t2771728586_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Logger_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T2771728586_H
#ifndef DEBUGLOGHANDLER_T2772284691_H
#define DEBUGLOGHANDLER_T2772284691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t2772284691  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T2772284691_H
#ifndef CURSOR_T3538589887_H
#define CURSOR_T3538589887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cursor
struct  Cursor_t3538589887  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSOR_T3538589887_H
#ifndef GYROSCOPE_T1138814202_H
#define GYROSCOPE_T1138814202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t1138814202  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T1138814202_H
#ifndef INPUT_T2752151377_H
#define INPUT_T2752151377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t2752151377  : public RuntimeObject
{
public:

public:
};

struct Input_t2752151377_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t1138814202 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t2752151377_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t1138814202 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t1138814202 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t1138814202 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T2752151377_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_T3238822492_H
#define UNHANDLEDEXCEPTIONHANDLER_T3238822492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t3238822492  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t3238822492_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t2002291249 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t3238822492_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t2002291249 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t2002291249 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t2002291249 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T3238822492_H
#ifndef SCENEMANAGER_T1833798965_H
#define SCENEMANAGER_T1833798965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t1833798965  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t1833798965_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t1071459100 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t2510798306 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t2128070635 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t1833798965_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t1071459100 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t1071459100 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t1071459100 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t1833798965_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t2510798306 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t2510798306 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t2510798306 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t1833798965_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t2128070635 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t2128070635 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t2128070635 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T1833798965_H
#ifndef DATAUTILITY_T42298254_H
#define DATAUTILITY_T42298254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprites.DataUtility
struct  DataUtility_t42298254  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAUTILITY_T42298254_H
#ifndef ENUMERATOR_T2446269932_H
#define ENUMERATOR_T2446269932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t2446269932  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_t337161473 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t2446269932, ___outer_0)); }
	inline Transform_t337161473 * get_outer_0() const { return ___outer_0; }
	inline Transform_t337161473 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_t337161473 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t2446269932, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2446269932_H
#ifndef CUSTOMYIELDINSTRUCTION_T4027198701_H
#define CUSTOMYIELDINSTRUCTION_T4027198701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4027198701  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T4027198701_H
#ifndef ATTRIBUTE_T3193222758_H
#define ATTRIBUTE_T3193222758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3193222758  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3193222758_H
#ifndef VALUETYPE_T2688987215_H
#define VALUETYPE_T2688987215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2688987215  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2688987215_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2688987215_marshaled_com
{
};
#endif // VALUETYPE_T2688987215_H
#ifndef TEXTWRITER_T560255767_H
#define TEXTWRITER_T560255767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t560255767  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t1543044620* ___CoreNewLine_0;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t560255767, ___CoreNewLine_0)); }
	inline CharU5BU5D_t1543044620* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t1543044620** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t1543044620* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}
};

struct TextWriter_t560255767_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t560255767 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t560255767_StaticFields, ___Null_1)); }
	inline TextWriter_t560255767 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t560255767 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t560255767 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T560255767_H
#ifndef RANDOM_T4116706993_H
#define RANDOM_T4116706993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Random
struct  Random_t4116706993  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T4116706993_H
#ifndef RESOURCES_T354835959_H
#define RESOURCES_T354835959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t354835959  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T354835959_H
#ifndef SYSTEMINFO_T756891181_H
#define SYSTEMINFO_T756891181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SystemInfo
struct  SystemInfo_t756891181  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMINFO_T756891181_H
#ifndef SCREEN_T2460618659_H
#define SCREEN_T2460618659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Screen
struct  Screen_t2460618659  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN_T2460618659_H
#ifndef LAYERMASK_T1937774371_H
#define LAYERMASK_T1937774371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t1937774371 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t1937774371, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T1937774371_H
#ifndef SORTINGLAYER_T1379903567_H
#define SORTINGLAYER_T1379903567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SortingLayer
struct  SortingLayer_t1379903567 
{
public:
	// System.Int32 UnityEngine.SortingLayer::m_Id
	int32_t ___m_Id_0;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(SortingLayer_t1379903567, ___m_Id_0)); }
	inline int32_t get_m_Id_0() const { return ___m_Id_0; }
	inline int32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(int32_t value)
	{
		___m_Id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGLAYER_T1379903567_H
#ifndef MATHF_T556681048_H
#define MATHF_T556681048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t556681048 
{
public:

public:
};

struct Mathf_t556681048_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t556681048_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T556681048_H
#ifndef KEYFRAME_T3415412268_H
#define KEYFRAME_T3415412268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t3415412268 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t3415412268, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t3415412268, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t3415412268, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t3415412268, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T3415412268_H
#ifndef QUATERNION_T777646635_H
#define QUATERNION_T777646635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t777646635 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t777646635, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t777646635, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t777646635, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t777646635, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t777646635_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t777646635  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t777646635_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t777646635  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t777646635 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t777646635  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T777646635_H
#ifndef TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1441372505_H
#define TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1441372505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
struct  TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505 
{
public:
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::keyboardType
	uint32_t ___keyboardType_0;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::autocorrection
	uint32_t ___autocorrection_1;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::multiline
	uint32_t ___multiline_2;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::secure
	uint32_t ___secure_3;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::alert
	uint32_t ___alert_4;

public:
	inline static int32_t get_offset_of_keyboardType_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505, ___keyboardType_0)); }
	inline uint32_t get_keyboardType_0() const { return ___keyboardType_0; }
	inline uint32_t* get_address_of_keyboardType_0() { return &___keyboardType_0; }
	inline void set_keyboardType_0(uint32_t value)
	{
		___keyboardType_0 = value;
	}

	inline static int32_t get_offset_of_autocorrection_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505, ___autocorrection_1)); }
	inline uint32_t get_autocorrection_1() const { return ___autocorrection_1; }
	inline uint32_t* get_address_of_autocorrection_1() { return &___autocorrection_1; }
	inline void set_autocorrection_1(uint32_t value)
	{
		___autocorrection_1 = value;
	}

	inline static int32_t get_offset_of_multiline_2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505, ___multiline_2)); }
	inline uint32_t get_multiline_2() const { return ___multiline_2; }
	inline uint32_t* get_address_of_multiline_2() { return &___multiline_2; }
	inline void set_multiline_2(uint32_t value)
	{
		___multiline_2 = value;
	}

	inline static int32_t get_offset_of_secure_3() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505, ___secure_3)); }
	inline uint32_t get_secure_3() const { return ___secure_3; }
	inline uint32_t* get_address_of_secure_3() { return &___secure_3; }
	inline void set_secure_3(uint32_t value)
	{
		___secure_3 = value;
	}

	inline static int32_t get_offset_of_alert_4() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505, ___alert_4)); }
	inline uint32_t get_alert_4() const { return ___alert_4; }
	inline uint32_t* get_address_of_alert_4() { return &___alert_4; }
	inline void set_alert_4(uint32_t value)
	{
		___alert_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1441372505_H
#ifndef NETWORKPLAYER_T3919199607_H
#define NETWORKPLAYER_T3919199607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkPlayer
struct  NetworkPlayer_t3919199607 
{
public:
	// System.Int32 UnityEngine.NetworkPlayer::index
	int32_t ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(NetworkPlayer_t3919199607, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKPLAYER_T3919199607_H
#ifndef UNITYLOGWRITER_T4001418429_H
#define UNITYLOGWRITER_T4001418429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityLogWriter
struct  UnityLogWriter_t4001418429  : public TextWriter_t560255767
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYLOGWRITER_T4001418429_H
#ifndef NETWORKVIEWID_T687822152_H
#define NETWORKVIEWID_T687822152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkViewID
struct  NetworkViewID_t687822152 
{
public:
	// System.Int32 UnityEngine.NetworkViewID::a
	int32_t ___a_0;
	// System.Int32 UnityEngine.NetworkViewID::b
	int32_t ___b_1;
	// System.Int32 UnityEngine.NetworkViewID::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(NetworkViewID_t687822152, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(NetworkViewID_t687822152, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(NetworkViewID_t687822152, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEWID_T687822152_H
#ifndef MATRIX4X4_T969314238_H
#define MATRIX4X4_T969314238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t969314238 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t969314238_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t969314238  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t969314238  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t969314238  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t969314238 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t969314238  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t969314238_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t969314238  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t969314238 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t969314238  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T969314238_H
#ifndef VECTOR3_T3135004533_H
#define VECTOR3_T3135004533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3135004533 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3135004533, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3135004533, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3135004533, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3135004533_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3135004533  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3135004533  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3135004533  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3135004533  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3135004533  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3135004533  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3135004533  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3135004533  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3135004533  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3135004533  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3135004533_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3135004533  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3135004533 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3135004533  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3135004533_StaticFields, ___oneVector_5)); }
	inline Vector3_t3135004533  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3135004533 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3135004533  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3135004533_StaticFields, ___upVector_6)); }
	inline Vector3_t3135004533  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3135004533 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3135004533  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3135004533_StaticFields, ___downVector_7)); }
	inline Vector3_t3135004533  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3135004533 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3135004533  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3135004533_StaticFields, ___leftVector_8)); }
	inline Vector3_t3135004533  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3135004533 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3135004533  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3135004533_StaticFields, ___rightVector_9)); }
	inline Vector3_t3135004533  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3135004533 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3135004533  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3135004533_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3135004533  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3135004533 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3135004533  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3135004533_StaticFields, ___backVector_11)); }
	inline Vector3_t3135004533  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3135004533 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3135004533  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3135004533_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3135004533  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3135004533 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3135004533  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3135004533_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3135004533  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3135004533 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3135004533  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3135004533_H
#ifndef RPC_T367493858_H
#define RPC_T367493858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RPC
struct  RPC_t367493858  : public Attribute_t3193222758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RPC_T367493858_H
#ifndef VECTOR2_T220132401_H
#define VECTOR2_T220132401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t220132401 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t220132401, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t220132401, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t220132401_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t220132401  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t220132401  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t220132401  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t220132401  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t220132401  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t220132401  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t220132401  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t220132401  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t220132401_StaticFields, ___zeroVector_2)); }
	inline Vector2_t220132401  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t220132401 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t220132401  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t220132401_StaticFields, ___oneVector_3)); }
	inline Vector2_t220132401  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t220132401 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t220132401  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t220132401_StaticFields, ___upVector_4)); }
	inline Vector2_t220132401  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t220132401 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t220132401  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t220132401_StaticFields, ___downVector_5)); }
	inline Vector2_t220132401  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t220132401 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t220132401  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t220132401_StaticFields, ___leftVector_6)); }
	inline Vector2_t220132401  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t220132401 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t220132401  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t220132401_StaticFields, ___rightVector_7)); }
	inline Vector2_t220132401  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t220132401 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t220132401  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t220132401_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t220132401  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t220132401 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t220132401  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t220132401_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t220132401  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t220132401 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t220132401  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T220132401_H
#ifndef ENUM_T957306635_H
#define ENUM_T957306635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t957306635  : public ValueType_t2688987215
{
public:

public:
};

struct Enum_t957306635_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1543044620* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t957306635_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1543044620* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1543044620** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1543044620* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t957306635_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t957306635_marshaled_com
{
};
#endif // ENUM_T957306635_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef WAITFORSECONDS_T2525201084_H
#define WAITFORSECONDS_T2525201084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t2525201084  : public YieldInstruction_t4110824712
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t2525201084, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t2525201084_marshaled_pinvoke : public YieldInstruction_t4110824712_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t2525201084_marshaled_com : public YieldInstruction_t4110824712_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T2525201084_H
#ifndef WAITFORFIXEDUPDATE_T2999880001_H
#define WAITFORFIXEDUPDATE_T2999880001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t2999880001  : public YieldInstruction_t4110824712
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T2999880001_H
#ifndef WAITFORENDOFFRAME_T2249946566_H
#define WAITFORENDOFFRAME_T2249946566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t2249946566  : public YieldInstruction_t4110824712
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T2249946566_H
#ifndef SCENE_T3042255595_H
#define SCENE_T3042255595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t3042255595 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t3042255595, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T3042255595_H
#ifndef VOID_T1046261912_H
#define VOID_T1046261912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1046261912 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1046261912_H
#ifndef CULLINGGROUPEVENT_T2973994023_H
#define CULLINGGROUPEVENT_T2973994023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t2973994023 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2973994023, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2973994023, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t2973994023, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T2973994023_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T1198009040_H
#define DRIVENRECTTRANSFORMTRACKER_T1198009040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t1198009040 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T1198009040_H
#ifndef PLAYABLEHANDLE_T3833240647_H
#define PLAYABLEHANDLE_T3833240647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t3833240647 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t3833240647, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t3833240647, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T3833240647_H
#ifndef NETWORKMESSAGEINFO_T3808308285_H
#define NETWORKMESSAGEINFO_T3808308285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkMessageInfo
struct  NetworkMessageInfo_t3808308285 
{
public:
	// System.Double UnityEngine.NetworkMessageInfo::m_TimeStamp
	double ___m_TimeStamp_0;
	// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::m_Sender
	NetworkPlayer_t3919199607  ___m_Sender_1;
	// UnityEngine.NetworkViewID UnityEngine.NetworkMessageInfo::m_ViewID
	NetworkViewID_t687822152  ___m_ViewID_2;

public:
	inline static int32_t get_offset_of_m_TimeStamp_0() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t3808308285, ___m_TimeStamp_0)); }
	inline double get_m_TimeStamp_0() const { return ___m_TimeStamp_0; }
	inline double* get_address_of_m_TimeStamp_0() { return &___m_TimeStamp_0; }
	inline void set_m_TimeStamp_0(double value)
	{
		___m_TimeStamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Sender_1() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t3808308285, ___m_Sender_1)); }
	inline NetworkPlayer_t3919199607  get_m_Sender_1() const { return ___m_Sender_1; }
	inline NetworkPlayer_t3919199607 * get_address_of_m_Sender_1() { return &___m_Sender_1; }
	inline void set_m_Sender_1(NetworkPlayer_t3919199607  value)
	{
		___m_Sender_1 = value;
	}

	inline static int32_t get_offset_of_m_ViewID_2() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t3808308285, ___m_ViewID_2)); }
	inline NetworkViewID_t687822152  get_m_ViewID_2() const { return ___m_ViewID_2; }
	inline NetworkViewID_t687822152 * get_address_of_m_ViewID_2() { return &___m_ViewID_2; }
	inline void set_m_ViewID_2(NetworkViewID_t687822152  value)
	{
		___m_ViewID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKMESSAGEINFO_T3808308285_H
#ifndef LOGTYPE_T2930394465_H
#define LOGTYPE_T2930394465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t2930394465 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t2930394465, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T2930394465_H
#ifndef SCRIPTABLERENDERCONTEXT_T3390416568_H
#define SCRIPTABLERENDERCONTEXT_T3390416568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t3390416568 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t3390416568, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T3390416568_H
#ifndef DATASTREAMTYPE_T3854568859_H
#define DATASTREAMTYPE_T3854568859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t3854568859 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t3854568859, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T3854568859_H
#ifndef LOADSCENEMODE_T1985644060_H
#define LOADSCENEMODE_T1985644060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t1985644060 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t1985644060, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T1985644060_H
#ifndef REMOTENOTIFICATION_T2318905811_H
#define REMOTENOTIFICATION_T2318905811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_t2318905811  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(RemoteNotification_t2318905811, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTENOTIFICATION_T2318905811_H
#ifndef LOCALNOTIFICATION_T3130443163_H
#define LOCALNOTIFICATION_T3130443163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.LocalNotification
struct  LocalNotification_t3130443163  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.LocalNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(LocalNotification_t3130443163, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

struct LocalNotification_t3130443163_StaticFields
{
public:
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;

public:
	inline static int32_t get_offset_of_m_NSReferenceDateTicks_1() { return static_cast<int32_t>(offsetof(LocalNotification_t3130443163_StaticFields, ___m_NSReferenceDateTicks_1)); }
	inline int64_t get_m_NSReferenceDateTicks_1() const { return ___m_NSReferenceDateTicks_1; }
	inline int64_t* get_address_of_m_NSReferenceDateTicks_1() { return &___m_NSReferenceDateTicks_1; }
	inline void set_m_NSReferenceDateTicks_1(int64_t value)
	{
		___m_NSReferenceDateTicks_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALNOTIFICATION_T3130443163_H
#ifndef HIDEFLAGS_T1025538433_H
#define HIDEFLAGS_T1025538433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t1025538433 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t1025538433, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T1025538433_H
#ifndef OBJECT_T2748336099_H
#define OBJECT_T2748336099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2748336099  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2748336099, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2748336099_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2748336099_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t2748336099_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2748336099_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2748336099_H
#ifndef CALENDARUNIT_T4124242849_H
#define CALENDARUNIT_T4124242849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarUnit
struct  CalendarUnit_t4124242849 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarUnit_t4124242849, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARUNIT_T4124242849_H
#ifndef PLAYABLEOUTPUTHANDLE_T443762492_H
#define PLAYABLEOUTPUTHANDLE_T443762492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t443762492 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t443762492, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t443762492, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T443762492_H
#ifndef PLAYABLEGRAPH_T477653475_H
#define PLAYABLEGRAPH_T477653475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t477653475 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t477653475, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t477653475, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T477653475_H
#ifndef PLAYSTATE_T4216877726_H
#define PLAYSTATE_T4216877726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayState
struct  PlayState_t4216877726 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayState_t4216877726, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATE_T4216877726_H
#ifndef DRIVENTRANSFORMPROPERTIES_T874176690_H
#define DRIVENTRANSFORMPROPERTIES_T874176690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_t874176690 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_t874176690, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENTRANSFORMPROPERTIES_T874176690_H
#ifndef CALENDARIDENTIFIER_T3854862930_H
#define CALENDARIDENTIFIER_T3854862930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarIdentifier
struct  CalendarIdentifier_t3854862930 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarIdentifier::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarIdentifier_t3854862930, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARIDENTIFIER_T3854862930_H
#ifndef DELEGATE_T53505960_H
#define DELEGATE_T53505960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t53505960  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1323899958 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t53505960, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t53505960, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t53505960, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t53505960, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t53505960, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t53505960, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t53505960, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t53505960, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t53505960, ___data_8)); }
	inline DelegateData_t1323899958 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1323899958 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1323899958 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T53505960_H
#ifndef GRADIENT_T720024766_H
#define GRADIENT_T720024766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t720024766  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t720024766, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t720024766_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t720024766_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T720024766_H
#ifndef CULLINGGROUP_T196905321_H
#define CULLINGGROUP_T196905321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t196905321  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t2172851866 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t196905321, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t196905321, ___m_OnStateChanged_1)); }
	inline StateChanged_t2172851866 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t2172851866 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t2172851866 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t196905321_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t196905321_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T196905321_H
#ifndef CURSORLOCKMODE_T2237161157_H
#define CURSORLOCKMODE_T2237161157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CursorLockMode
struct  CursorLockMode_t2237161157 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CursorLockMode_t2237161157, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSORLOCKMODE_T2237161157_H
#ifndef DISPLAY_T1031102226_H
#define DISPLAY_T1031102226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t1031102226  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t1031102226, ___nativeDisplay_0)); }
	inline IntPtr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline IntPtr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(IntPtr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t1031102226_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t2837821543* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t1031102226 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t3145644448 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t1031102226_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t2837821543* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t2837821543** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t2837821543* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t1031102226_StaticFields, ____mainDisplay_2)); }
	inline Display_t1031102226 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t1031102226 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t1031102226 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t1031102226_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t3145644448 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t3145644448 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t3145644448 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T1031102226_H
#ifndef BITSTREAM_T4144146569_H
#define BITSTREAM_T4144146569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BitStream
struct  BitStream_t4144146569  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.BitStream::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(BitStream_t4144146569, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITSTREAM_T4144146569_H
#ifndef RECTOFFSET_T2389311507_H
#define RECTOFFSET_T2389311507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t2389311507  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t2389311507, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t2389311507, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t2389311507_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t2389311507_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T2389311507_H
#ifndef COROUTINE_T4126320965_H
#define COROUTINE_T4126320965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t4126320965  : public YieldInstruction_t4110824712
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t4126320965, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t4126320965_marshaled_pinvoke : public YieldInstruction_t4110824712_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t4126320965_marshaled_com : public YieldInstruction_t4110824712_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T4126320965_H
#ifndef TOUCHSCREENKEYBOARD_T4191328092_H
#define TOUCHSCREENKEYBOARD_T4191328092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t4191328092  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t4191328092, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_T4191328092_H
#ifndef TOUCHPHASE_T991447144_H
#define TOUCHPHASE_T991447144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t991447144 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t991447144, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T991447144_H
#ifndef IMECOMPOSITIONMODE_T175753029_H
#define IMECOMPOSITIONMODE_T175753029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IMECompositionMode
struct  IMECompositionMode_t175753029 
{
public:
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IMECompositionMode_t175753029, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMECOMPOSITIONMODE_T175753029_H
#ifndef TOUCHTYPE_T2500688714_H
#define TOUCHTYPE_T2500688714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2500688714 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2500688714, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2500688714_H
#ifndef ASYNCOPERATION_T2122483414_H
#define ASYNCOPERATION_T2122483414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t2122483414  : public YieldInstruction_t4110824712
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t2122483414, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t2122483414_marshaled_pinvoke : public YieldInstruction_t4110824712_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t2122483414_marshaled_com : public YieldInstruction_t4110824712_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T2122483414_H
#ifndef INTERNALVERTEXCHANNELTYPE_T3337088711_H
#define INTERNALVERTEXCHANNELTYPE_T3337088711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t3337088711 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t3337088711, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALVERTEXCHANNELTYPE_T3337088711_H
#ifndef INTERNALSHADERCHANNEL_T2565423371_H
#define INTERNALSHADERCHANNEL_T2565423371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t2565423371 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t2565423371, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSHADERCHANNEL_T2565423371_H
#ifndef BOUNDS_T3121911016_H
#define BOUNDS_T3121911016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t3121911016 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3135004533  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3135004533  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t3121911016, ___m_Center_0)); }
	inline Vector3_t3135004533  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3135004533 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3135004533  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t3121911016, ___m_Extents_1)); }
	inline Vector3_t3135004533  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3135004533 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3135004533  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T3121911016_H
#ifndef ANIMATIONCURVE_T3809492465_H
#define ANIMATIONCURVE_T3809492465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3809492465  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3809492465, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3809492465_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3809492465_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3809492465_H
#ifndef PLAYABLE_T1369303860_H
#define PLAYABLE_T1369303860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t1369303860 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t3833240647  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t1369303860, ___m_Handle_0)); }
	inline PlayableHandle_t3833240647  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3833240647 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3833240647  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t1369303860_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t1369303860  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t1369303860_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t1369303860  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t1369303860 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t1369303860  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T1369303860_H
#ifndef RESOURCEREQUEST_T3384068699_H
#define RESOURCEREQUEST_T3384068699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t3384068699  : public AsyncOperation_t2122483414
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_1;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_2;

public:
	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(ResourceRequest_t3384068699, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}

	inline static int32_t get_offset_of_m_Type_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t3384068699, ___m_Type_2)); }
	inline Type_t * get_m_Type_2() const { return ___m_Type_2; }
	inline Type_t ** get_address_of_m_Type_2() { return &___m_Type_2; }
	inline void set_m_Type_2(Type_t * value)
	{
		___m_Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3384068699_marshaled_pinvoke : public AsyncOperation_t2122483414_marshaled_pinvoke
{
	char* ___m_Path_1;
	Type_t * ___m_Type_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3384068699_marshaled_com : public AsyncOperation_t2122483414_marshaled_com
{
	Il2CppChar* ___m_Path_1;
	Type_t * ___m_Type_2;
};
#endif // RESOURCEREQUEST_T3384068699_H
#ifndef TEXTURE_T2261499199_H
#define TEXTURE_T2261499199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t2261499199  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T2261499199_H
#ifndef GAMEOBJECT_T3368468343_H
#define GAMEOBJECT_T3368468343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t3368468343  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T3368468343_H
#ifndef PLAYABLEOUTPUT_T2069042225_H
#define PLAYABLEOUTPUT_T2069042225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t2069042225 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t443762492  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t2069042225, ___m_Handle_0)); }
	inline PlayableOutputHandle_t443762492  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t443762492 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t443762492  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t2069042225_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t2069042225  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t2069042225_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t2069042225  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t2069042225 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t2069042225  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T2069042225_H
#ifndef MESH_T44458829_H
#define MESH_T44458829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t44458829  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T44458829_H
#ifndef FAILEDTOLOADSCRIPTOBJECT_T3793831086_H
#define FAILEDTOLOADSCRIPTOBJECT_T3793831086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FailedToLoadScriptObject
struct  FailedToLoadScriptObject_t3793831086  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t3793831086_marshaled_pinvoke : public Object_t2748336099_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t3793831086_marshaled_com : public Object_t2748336099_marshaled_com
{
};
#endif // FAILEDTOLOADSCRIPTOBJECT_T3793831086_H
#ifndef SHADER_T3482703234_H
#define SHADER_T3482703234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t3482703234  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T3482703234_H
#ifndef MATERIAL_T12074894_H
#define MATERIAL_T12074894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t12074894  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T12074894_H
#ifndef ASSETBUNDLECREATEREQUEST_T1121057933_H
#define ASSETBUNDLECREATEREQUEST_T1121057933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleCreateRequest
struct  AssetBundleCreateRequest_t1121057933  : public AsyncOperation_t2122483414
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLECREATEREQUEST_T1121057933_H
#ifndef ASSETBUNDLE_T545283721_H
#define ASSETBUNDLE_T545283721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundle
struct  AssetBundle_t545283721  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLE_T545283721_H
#ifndef SPRITE_T3107715618_H
#define SPRITE_T3107715618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t3107715618  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T3107715618_H
#ifndef SCRIPTABLEOBJECT_T589432225_H
#define SCRIPTABLEOBJECT_T589432225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t589432225  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t589432225_marshaled_pinvoke : public Object_t2748336099_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t589432225_marshaled_com : public Object_t2748336099_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T589432225_H
#ifndef TOUCH_T3347670734_H
#define TOUCH_T3347670734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t3347670734 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t220132401  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t220132401  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t220132401  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_Position_1)); }
	inline Vector2_t220132401  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t220132401 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t220132401  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_RawPosition_2)); }
	inline Vector2_t220132401  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t220132401 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t220132401  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_PositionDelta_3)); }
	inline Vector2_t220132401  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t220132401 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t220132401  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t3347670734, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T3347670734_H
#ifndef MULTICASTDELEGATE_T1661715453_H
#define MULTICASTDELEGATE_T1661715453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1661715453  : public Delegate_t53505960
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1661715453 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1661715453 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1661715453, ___prev_9)); }
	inline MulticastDelegate_t1661715453 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1661715453 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1661715453 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1661715453, ___kpm_next_10)); }
	inline MulticastDelegate_t1661715453 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1661715453 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1661715453 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1661715453_H
#ifndef COMPONENT_T3680335150_H
#define COMPONENT_T3680335150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3680335150  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3680335150_H
#ifndef ASSETBUNDLEREQUEST_T257396840_H
#define ASSETBUNDLEREQUEST_T257396840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t257396840  : public AsyncOperation_t2122483414
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t257396840_marshaled_pinvoke : public AsyncOperation_t2122483414_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t257396840_marshaled_com : public AsyncOperation_t2122483414_marshaled_com
{
};
#endif // ASSETBUNDLEREQUEST_T257396840_H
#ifndef BEHAVIOUR_T339761322_H
#define BEHAVIOUR_T339761322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t339761322  : public Component_t3680335150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T339761322_H
#ifndef DISPLAYSUPDATEDDELEGATE_T3145644448_H
#define DISPLAYSUPDATEDDELEGATE_T3145644448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t3145644448  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T3145644448_H
#ifndef CAMERACALLBACK_T2624629847_H
#define CAMERACALLBACK_T2624629847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/CameraCallback
struct  CameraCallback_t2624629847  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALLBACK_T2624629847_H
#ifndef STATECHANGED_T2172851866_H
#define STATECHANGED_T2172851866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t2172851866  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T2172851866_H
#ifndef RENDERER_T3101735493_H
#define RENDERER_T3101735493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t3101735493  : public Component_t3680335150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T3101735493_H
#ifndef LOGCALLBACK_T2226546501_H
#define LOGCALLBACK_T2226546501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t2226546501  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T2226546501_H
#ifndef LOWMEMORYCALLBACK_T1417072358_H
#define LOWMEMORYCALLBACK_T1417072358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LowMemoryCallback
struct  LowMemoryCallback_t1417072358  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWMEMORYCALLBACK_T1417072358_H
#ifndef RENDERTEXTURE_T2111462030_H
#define RENDERTEXTURE_T2111462030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2111462030  : public Texture_t2261499199
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2111462030_H
#ifndef TRANSFORM_T337161473_H
#define TRANSFORM_T337161473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t337161473  : public Component_t3680335150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T337161473_H
#ifndef TEXTURE2D_T1286955917_H
#define TEXTURE2D_T1286955917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t1286955917  : public Texture_t2261499199
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T1286955917_H
#ifndef NETWORKVIEW_T1162901159_H
#define NETWORKVIEW_T1162901159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkView
struct  NetworkView_t1162901159  : public Behaviour_t339761322
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEW_T1162901159_H
#ifndef CAMERA_T2032113953_H
#define CAMERA_T2032113953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t2032113953  : public Behaviour_t339761322
{
public:

public:
};

struct Camera_t2032113953_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t2624629847 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t2624629847 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t2624629847 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t2032113953_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t2624629847 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t2624629847 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t2624629847 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t2032113953_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t2624629847 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t2624629847 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t2624629847 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t2032113953_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t2624629847 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t2624629847 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t2624629847 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T2032113953_H
#ifndef GUIELEMENT_T4277693463_H
#define GUIELEMENT_T4277693463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t4277693463  : public Behaviour_t339761322
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T4277693463_H
#ifndef GUILAYER_T456342942_H
#define GUILAYER_T456342942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t456342942  : public Behaviour_t339761322
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T456342942_H
#ifndef SPRITERENDERER_T2250446344_H
#define SPRITERENDERER_T2250446344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t2250446344  : public Renderer_t3101735493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T2250446344_H
#ifndef RECTTRANSFORM_T4043262713_H
#define RECTTRANSFORM_T4043262713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t4043262713  : public Transform_t337161473
{
public:

public:
};

struct RectTransform_t4043262713_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t2604685970 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t4043262713_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t2604685970 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t2604685970 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t2604685970 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T4043262713_H
#ifndef MONOBEHAVIOUR_T469063955_H
#define MONOBEHAVIOUR_T469063955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t469063955  : public Behaviour_t339761322
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T469063955_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { sizeof (Application_t358611671), -1, sizeof(Application_t358611671_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1200[4] = 
{
	Application_t358611671_StaticFields::get_offset_of_lowMemory_0(),
	Application_t358611671_StaticFields::get_offset_of_s_LogCallbackHandler_1(),
	Application_t358611671_StaticFields::get_offset_of_s_LogCallbackHandlerThreaded_2(),
	Application_t358611671_StaticFields::get_offset_of_onBeforeRender_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (LowMemoryCallback_t1417072358), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (LogCallback_t2226546501), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (AssetBundleCreateRequest_t1121057933), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (AssetBundleRequest_t257396840), sizeof(AssetBundleRequest_t257396840_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (AssetBundle_t545283721), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (AsyncOperation_t2122483414), sizeof(AsyncOperation_t2122483414_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1206[1] = 
{
	AsyncOperation_t2122483414::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (SystemInfo_t756891181), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (WaitForSeconds_t2525201084), sizeof(WaitForSeconds_t2525201084_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1208[1] = 
{
	WaitForSeconds_t2525201084::get_offset_of_m_Seconds_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (WaitForFixedUpdate_t2999880001), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (WaitForEndOfFrame_t2249946566), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (CustomYieldInstruction_t4027198701), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (Coroutine_t4126320965), sizeof(Coroutine_t4126320965_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1212[1] = 
{
	Coroutine_t4126320965::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (ScriptableObject_t589432225), sizeof(ScriptableObject_t589432225_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (FailedToLoadScriptObject_t3793831086), sizeof(FailedToLoadScriptObject_t3793831086_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (Behaviour_t339761322), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (Camera_t2032113953), -1, sizeof(Camera_t2032113953_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1216[3] = 
{
	Camera_t2032113953_StaticFields::get_offset_of_onPreCull_2(),
	Camera_t2032113953_StaticFields::get_offset_of_onPreRender_3(),
	Camera_t2032113953_StaticFields::get_offset_of_onPostRender_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (CameraCallback_t2624629847), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (Component_t3680335150), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (UnhandledExceptionHandler_t3238822492), -1, sizeof(UnhandledExceptionHandler_t3238822492_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1219[1] = 
{
	UnhandledExceptionHandler_t3238822492_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (CullingGroupEvent_t2973994023)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t2973994023 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1220[3] = 
{
	CullingGroupEvent_t2973994023::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t2973994023::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t2973994023::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (CullingGroup_t196905321), sizeof(CullingGroup_t196905321_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1221[2] = 
{
	CullingGroup_t196905321::get_offset_of_m_Ptr_0(),
	CullingGroup_t196905321::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (StateChanged_t2172851866), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (CursorLockMode_t2237161157)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1223[4] = 
{
	CursorLockMode_t2237161157::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (Cursor_t3538589887), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (DebugLogHandler_t2772284691), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (Debug_t2771728586), -1, sizeof(Debug_t2771728586_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1226[1] = 
{
	Debug_t2771728586_StaticFields::get_offset_of_s_Logger_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (Display_t1031102226), -1, sizeof(Display_t1031102226_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1227[4] = 
{
	Display_t1031102226::get_offset_of_nativeDisplay_0(),
	Display_t1031102226_StaticFields::get_offset_of_displays_1(),
	Display_t1031102226_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t1031102226_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (DisplaysUpdatedDelegate_t3145644448), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (GameObject_t3368468343), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (Gradient_t720024766), sizeof(Gradient_t720024766_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1230[1] = 
{
	Gradient_t720024766::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (Renderer_t3101735493), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (Screen_t2460618659), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (RectOffset_t2389311507), sizeof(RectOffset_t2389311507_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1233[2] = 
{
	RectOffset_t2389311507::get_offset_of_m_Ptr_0(),
	RectOffset_t2389311507::get_offset_of_m_SourceStyle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (GUIElement_t4277693463), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (GUILayer_t456342942), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505)+ sizeof (RuntimeObject), sizeof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1236[5] = 
{
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505::get_offset_of_keyboardType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505::get_offset_of_autocorrection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505::get_offset_of_multiline_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505::get_offset_of_secure_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1441372505::get_offset_of_alert_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (TouchScreenKeyboard_t4191328092), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1237[1] = 
{
	TouchScreenKeyboard_t4191328092::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (TouchPhase_t991447144)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1238[6] = 
{
	TouchPhase_t991447144::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (IMECompositionMode_t175753029)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1239[4] = 
{
	IMECompositionMode_t175753029::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (TouchType_t2500688714)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1240[4] = 
{
	TouchType_t2500688714::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (Touch_t3347670734)+ sizeof (RuntimeObject), sizeof(Touch_t3347670734 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1241[14] = 
{
	Touch_t3347670734::get_offset_of_m_FingerId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_RawPosition_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_PositionDelta_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_TimeDelta_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_TapCount_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_Phase_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_Type_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_Pressure_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_maximumPossiblePressure_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_Radius_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_RadiusVariance_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_AltitudeAngle_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t3347670734::get_offset_of_m_AzimuthAngle_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (Gyroscope_t1138814202), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (Input_t2752151377), -1, sizeof(Input_t2752151377_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1243[1] = 
{
	Input_t2752151377_StaticFields::get_offset_of_m_MainGyro_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (LayerMask_t1937774371)+ sizeof (RuntimeObject), sizeof(LayerMask_t1937774371 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1244[1] = 
{
	LayerMask_t1937774371::get_offset_of_m_Mask_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (Vector3_t3135004533)+ sizeof (RuntimeObject), sizeof(Vector3_t3135004533 ), sizeof(Vector3_t3135004533_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1245[14] = 
{
	0,
	Vector3_t3135004533::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3135004533::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3135004533::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3135004533_StaticFields::get_offset_of_zeroVector_4(),
	Vector3_t3135004533_StaticFields::get_offset_of_oneVector_5(),
	Vector3_t3135004533_StaticFields::get_offset_of_upVector_6(),
	Vector3_t3135004533_StaticFields::get_offset_of_downVector_7(),
	Vector3_t3135004533_StaticFields::get_offset_of_leftVector_8(),
	Vector3_t3135004533_StaticFields::get_offset_of_rightVector_9(),
	Vector3_t3135004533_StaticFields::get_offset_of_forwardVector_10(),
	Vector3_t3135004533_StaticFields::get_offset_of_backVector_11(),
	Vector3_t3135004533_StaticFields::get_offset_of_positiveInfinityVector_12(),
	Vector3_t3135004533_StaticFields::get_offset_of_negativeInfinityVector_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (Quaternion_t777646635)+ sizeof (RuntimeObject), sizeof(Quaternion_t777646635 ), sizeof(Quaternion_t777646635_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1246[5] = 
{
	Quaternion_t777646635::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t777646635::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t777646635::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t777646635::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t777646635_StaticFields::get_offset_of_identityQuaternion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (Matrix4x4_t969314238)+ sizeof (RuntimeObject), sizeof(Matrix4x4_t969314238 ), sizeof(Matrix4x4_t969314238_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1247[18] = 
{
	Matrix4x4_t969314238::get_offset_of_m00_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m10_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m20_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m30_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m01_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m11_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m21_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m31_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m02_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m12_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m22_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m32_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m03_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m13_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m23_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238::get_offset_of_m33_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t969314238_StaticFields::get_offset_of_zeroMatrix_16(),
	Matrix4x4_t969314238_StaticFields::get_offset_of_identityMatrix_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (Bounds_t3121911016)+ sizeof (RuntimeObject), sizeof(Bounds_t3121911016 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1248[2] = 
{
	Bounds_t3121911016::get_offset_of_m_Center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Bounds_t3121911016::get_offset_of_m_Extents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (Mathf_t556681048)+ sizeof (RuntimeObject), sizeof(Mathf_t556681048 ), sizeof(Mathf_t556681048_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1249[1] = 
{
	Mathf_t556681048_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (Keyframe_t3415412268)+ sizeof (RuntimeObject), sizeof(Keyframe_t3415412268 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1250[4] = 
{
	Keyframe_t3415412268::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t3415412268::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t3415412268::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t3415412268::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (AnimationCurve_t3809492465), sizeof(AnimationCurve_t3809492465_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1251[1] = 
{
	AnimationCurve_t3809492465::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (Mesh_t44458829), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (InternalShaderChannel_t2565423371)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1253[9] = 
{
	InternalShaderChannel_t2565423371::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (InternalVertexChannelType_t3337088711)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1254[3] = 
{
	InternalVertexChannelType_t3337088711::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (MonoBehaviour_t469063955), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (NetworkPlayer_t3919199607)+ sizeof (RuntimeObject), sizeof(NetworkPlayer_t3919199607 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1256[1] = 
{
	NetworkPlayer_t3919199607::get_offset_of_index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (NetworkViewID_t687822152)+ sizeof (RuntimeObject), sizeof(NetworkViewID_t687822152 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1257[3] = 
{
	NetworkViewID_t687822152::get_offset_of_a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t687822152::get_offset_of_b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t687822152::get_offset_of_c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (NetworkView_t1162901159), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (BitStream_t4144146569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1259[1] = 
{
	BitStream_t4144146569::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (RPC_t367493858), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (HostData_t254599681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1261[10] = 
{
	HostData_t254599681::get_offset_of_m_Nat_0(),
	HostData_t254599681::get_offset_of_m_GameType_1(),
	HostData_t254599681::get_offset_of_m_GameName_2(),
	HostData_t254599681::get_offset_of_m_ConnectedPlayers_3(),
	HostData_t254599681::get_offset_of_m_PlayerLimit_4(),
	HostData_t254599681::get_offset_of_m_IP_5(),
	HostData_t254599681::get_offset_of_m_Port_6(),
	HostData_t254599681::get_offset_of_m_PasswordProtected_7(),
	HostData_t254599681::get_offset_of_m_Comment_8(),
	HostData_t254599681::get_offset_of_m_GUID_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (NetworkMessageInfo_t3808308285)+ sizeof (RuntimeObject), sizeof(NetworkMessageInfo_t3808308285 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1262[3] = 
{
	NetworkMessageInfo_t3808308285::get_offset_of_m_TimeStamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t3808308285::get_offset_of_m_Sender_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t3808308285::get_offset_of_m_ViewID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (Random_t4116706993), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (ResourceRequest_t3384068699), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1264[2] = 
{
	ResourceRequest_t3384068699::get_offset_of_m_Path_1(),
	ResourceRequest_t3384068699::get_offset_of_m_Type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (Resources_t354835959), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (Shader_t3482703234), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (Material_t12074894), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (SortingLayer_t1379903567)+ sizeof (RuntimeObject), sizeof(SortingLayer_t1379903567 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1268[1] = 
{
	SortingLayer_t1379903567::get_offset_of_m_Id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (Sprite_t3107715618), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (SpriteRenderer_t2250446344), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (DataUtility_t42298254), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (Texture_t2261499199), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (Texture2D_t1286955917), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (RenderTexture_t2111462030), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (Time_t4261647313), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (HideFlags_t1025538433)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1276[10] = 
{
	HideFlags_t1025538433::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (Object_t2748336099), sizeof(Object_t2748336099_marshaled_pinvoke), sizeof(Object_t2748336099_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1277[2] = 
{
	Object_t2748336099::get_offset_of_m_CachedPtr_0(),
	Object_t2748336099_StaticFields::get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (UnityLogWriter_t4001418429), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (YieldInstruction_t4110824712), sizeof(YieldInstruction_t4110824712_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (PlayState_t4216877726)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1280[3] = 
{
	PlayState_t4216877726::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (PlayableHandle_t3833240647)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t3833240647 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1281[2] = 
{
	PlayableHandle_t3833240647::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t3833240647::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (Playable_t1369303860)+ sizeof (RuntimeObject), sizeof(Playable_t1369303860 ), sizeof(Playable_t1369303860_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1282[2] = 
{
	Playable_t1369303860::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t1369303860_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (DataStreamType_t3854568859)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1283[5] = 
{
	DataStreamType_t3854568859::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (PlayableGraph_t477653475)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t477653475 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1284[2] = 
{
	PlayableGraph_t477653475::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t477653475::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (PlayableOutputHandle_t443762492)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t443762492 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1285[2] = 
{
	PlayableOutputHandle_t443762492::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t443762492::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (PlayableOutput_t2069042225)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t2069042225 ), sizeof(PlayableOutput_t2069042225_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1286[2] = 
{
	PlayableOutput_t2069042225::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t2069042225_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (CalendarIdentifier_t3854862930)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1287[12] = 
{
	CalendarIdentifier_t3854862930::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (CalendarUnit_t4124242849)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1288[12] = 
{
	CalendarUnit_t4124242849::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (LocalNotification_t3130443163), -1, sizeof(LocalNotification_t3130443163_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1289[2] = 
{
	LocalNotification_t3130443163::get_offset_of_notificationWrapper_0(),
	LocalNotification_t3130443163_StaticFields::get_offset_of_m_NSReferenceDateTicks_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (RemoteNotification_t2318905811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1290[1] = 
{
	RemoteNotification_t2318905811::get_offset_of_notificationWrapper_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (Scene_t3042255595)+ sizeof (RuntimeObject), sizeof(Scene_t3042255595 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1291[1] = 
{
	Scene_t3042255595::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (LoadSceneMode_t1985644060)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1292[3] = 
{
	LoadSceneMode_t1985644060::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (SceneManager_t1833798965), -1, sizeof(SceneManager_t1833798965_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1293[3] = 
{
	SceneManager_t1833798965_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t1833798965_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t1833798965_StaticFields::get_offset_of_activeSceneChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (ScriptableRenderContext_t3390416568)+ sizeof (RuntimeObject), sizeof(ScriptableRenderContext_t3390416568 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1294[1] = 
{
	ScriptableRenderContext_t3390416568::get_offset_of_m_Ptr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (Transform_t337161473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (Enumerator_t2446269932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1296[2] = 
{
	Enumerator_t2446269932::get_offset_of_outer_0(),
	Enumerator_t2446269932::get_offset_of_currentIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (DrivenTransformProperties_t874176690)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1297[26] = 
{
	DrivenTransformProperties_t874176690::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (DrivenRectTransformTracker_t1198009040)+ sizeof (RuntimeObject), sizeof(DrivenRectTransformTracker_t1198009040 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (RectTransform_t4043262713), -1, sizeof(RectTransform_t4043262713_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1299[1] = 
{
	RectTransform_t4043262713_StaticFields::get_offset_of_reapplyDrivenProperties_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
