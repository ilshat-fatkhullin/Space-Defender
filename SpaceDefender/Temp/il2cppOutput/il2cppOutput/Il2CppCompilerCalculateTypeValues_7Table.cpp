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

// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2226403201;
// System.Security.SecurityContext
struct SecurityContext_t554897009;
// System.Delegate
struct Delegate_t53505960;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3956672634;
// System.IO.TextWriter
struct TextWriter_t560255767;
// System.IO.TextReader
struct TextReader_t1620542325;
// System.Text.Encoding
struct Encoding_t1073075776;
// System.Collections.SortedList
struct SortedList_t3946246912;
// System.OperatingSystem
struct OperatingSystem_t834327128;
// System.IntPtr[]
struct IntPtrU5BU5D_t2420964824;
// System.Collections.IDictionary
struct IDictionary_t3711481620;
// System.Text.DecoderFallback
struct DecoderFallback_t135983394;
// System.Text.EncoderFallback
struct EncoderFallback_t592617248;
// System.Reflection.Assembly
struct Assembly_t3185969139;
// System.Object[]
struct ObjectU5BU5D_t2567097575;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2008811809;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t4128421258;
// System.Void
struct Void_t1046261912;
// System.Char[]
struct CharU5BU5D_t1543044620;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2025045362;
// System.String[]
struct StringU5BU5D_t328472698;
// System.Collections.Hashtable
struct Hashtable_t1483218075;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t3212635331;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t3235469011;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t182263962;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t4253707543;
// System.Byte[]
struct ByteU5BU5D_t2520348892;
// System.SByte[]
struct SByteU5BU5D_t1085314631;
// System.Threading.Timer/Scheduler
struct Scheduler_t1560077808;
// System.Threading.TimerCallback
struct TimerCallback_t916787390;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t550742169;
// System.Int32[]
struct Int32U5BU5D_t774821850;
// System.Runtime.Hosting.ActivationArguments
struct ActivationArguments_t1548350645;
// System.AppDomainInitializer
struct AppDomainInitializer_t2986874444;
// System.Security.Policy.ApplicationTrust
struct ApplicationTrust_t535988243;
// System.Security.SecurityElement
struct SecurityElement_t1987481061;
// System.Security.Policy.Evidence
struct Evidence_t4007173388;
// System.Security.PermissionSet
struct PermissionSet_t1723347566;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2695124408;
// System.AppDomainManager
struct AppDomainManager_t3730990605;
// System.ActivationContext
struct ActivationContext_t1318642941;
// System.ApplicationIdentity
struct ApplicationIdentity_t329642200;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t333600113;
// System.ResolveEventHandler
struct ResolveEventHandler_t3784491310;
// System.EventHandler
struct EventHandler_t3463709257;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t2002291249;
// System.Threading.ExecutionContext
struct ExecutionContext_t455876223;
// System.MulticastDelegate
struct MulticastDelegate_t1661715453;




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
#ifndef APPLICATIONIDENTITY_T329642200_H
#define APPLICATIONIDENTITY_T329642200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationIdentity
struct  ApplicationIdentity_t329642200  : public RuntimeObject
{
public:
	// System.String System.ApplicationIdentity::_fullName
	String_t* ____fullName_0;

public:
	inline static int32_t get_offset_of__fullName_0() { return static_cast<int32_t>(offsetof(ApplicationIdentity_t329642200, ____fullName_0)); }
	inline String_t* get__fullName_0() const { return ____fullName_0; }
	inline String_t** get_address_of__fullName_0() { return &____fullName_0; }
	inline void set__fullName_0(String_t* value)
	{
		____fullName_0 = value;
		Il2CppCodeGenWriteBarrier((&____fullName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONIDENTITY_T329642200_H
#ifndef COMPRESSEDSTACK_T3359923022_H
#define COMPRESSEDSTACK_T3359923022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CompressedStack
struct  CompressedStack_t3359923022  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Threading.CompressedStack::_list
	ArrayList_t2226403201 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(CompressedStack_t3359923022, ____list_0)); }
	inline ArrayList_t2226403201 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2226403201 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2226403201 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSEDSTACK_T3359923022_H
#ifndef SBYTECOMPARER_T3212635331_H
#define SBYTECOMPARER_T3212635331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/SByteComparer
struct  SByteComparer_t3212635331  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECOMPARER_T3212635331_H
#ifndef EXECUTIONCONTEXT_T455876223_H
#define EXECUTIONCONTEXT_T455876223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ExecutionContext
struct  ExecutionContext_t455876223  : public RuntimeObject
{
public:
	// System.Security.SecurityContext System.Threading.ExecutionContext::_sc
	SecurityContext_t554897009 * ____sc_0;
	// System.Boolean System.Threading.ExecutionContext::_suppressFlow
	bool ____suppressFlow_1;
	// System.Boolean System.Threading.ExecutionContext::_capture
	bool ____capture_2;

public:
	inline static int32_t get_offset_of__sc_0() { return static_cast<int32_t>(offsetof(ExecutionContext_t455876223, ____sc_0)); }
	inline SecurityContext_t554897009 * get__sc_0() const { return ____sc_0; }
	inline SecurityContext_t554897009 ** get_address_of__sc_0() { return &____sc_0; }
	inline void set__sc_0(SecurityContext_t554897009 * value)
	{
		____sc_0 = value;
		Il2CppCodeGenWriteBarrier((&____sc_0), value);
	}

	inline static int32_t get_offset_of__suppressFlow_1() { return static_cast<int32_t>(offsetof(ExecutionContext_t455876223, ____suppressFlow_1)); }
	inline bool get__suppressFlow_1() const { return ____suppressFlow_1; }
	inline bool* get_address_of__suppressFlow_1() { return &____suppressFlow_1; }
	inline void set__suppressFlow_1(bool value)
	{
		____suppressFlow_1 = value;
	}

	inline static int32_t get_offset_of__capture_2() { return static_cast<int32_t>(offsetof(ExecutionContext_t455876223, ____capture_2)); }
	inline bool get__capture_2() const { return ____capture_2; }
	inline bool* get_address_of__capture_2() { return &____capture_2; }
	inline void set__capture_2(bool value)
	{
		____capture_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONCONTEXT_T455876223_H
#ifndef INTERLOCKED_T2864106066_H
#define INTERLOCKED_T2864106066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t2864106066  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T2864106066_H
#ifndef DELEGATEENTRY_T1628653003_H
#define DELEGATEENTRY_T1628653003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder/DelegateEntry
struct  DelegateEntry_t1628653003  : public RuntimeObject
{
public:
	// System.String System.DelegateSerializationHolder/DelegateEntry::type
	String_t* ___type_0;
	// System.String System.DelegateSerializationHolder/DelegateEntry::assembly
	String_t* ___assembly_1;
	// System.Object System.DelegateSerializationHolder/DelegateEntry::target
	RuntimeObject * ___target_2;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeAssembly
	String_t* ___targetTypeAssembly_3;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeName
	String_t* ___targetTypeName_4;
	// System.String System.DelegateSerializationHolder/DelegateEntry::methodName
	String_t* ___methodName_5;
	// System.DelegateSerializationHolder/DelegateEntry System.DelegateSerializationHolder/DelegateEntry::delegateEntry
	DelegateEntry_t1628653003 * ___delegateEntry_6;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(DelegateEntry_t1628653003, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_assembly_1() { return static_cast<int32_t>(offsetof(DelegateEntry_t1628653003, ___assembly_1)); }
	inline String_t* get_assembly_1() const { return ___assembly_1; }
	inline String_t** get_address_of_assembly_1() { return &___assembly_1; }
	inline void set_assembly_1(String_t* value)
	{
		___assembly_1 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_1), value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(DelegateEntry_t1628653003, ___target_2)); }
	inline RuntimeObject * get_target_2() const { return ___target_2; }
	inline RuntimeObject ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(RuntimeObject * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_targetTypeAssembly_3() { return static_cast<int32_t>(offsetof(DelegateEntry_t1628653003, ___targetTypeAssembly_3)); }
	inline String_t* get_targetTypeAssembly_3() const { return ___targetTypeAssembly_3; }
	inline String_t** get_address_of_targetTypeAssembly_3() { return &___targetTypeAssembly_3; }
	inline void set_targetTypeAssembly_3(String_t* value)
	{
		___targetTypeAssembly_3 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeAssembly_3), value);
	}

	inline static int32_t get_offset_of_targetTypeName_4() { return static_cast<int32_t>(offsetof(DelegateEntry_t1628653003, ___targetTypeName_4)); }
	inline String_t* get_targetTypeName_4() const { return ___targetTypeName_4; }
	inline String_t** get_address_of_targetTypeName_4() { return &___targetTypeName_4; }
	inline void set_targetTypeName_4(String_t* value)
	{
		___targetTypeName_4 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeName_4), value);
	}

	inline static int32_t get_offset_of_methodName_5() { return static_cast<int32_t>(offsetof(DelegateEntry_t1628653003, ___methodName_5)); }
	inline String_t* get_methodName_5() const { return ___methodName_5; }
	inline String_t** get_address_of_methodName_5() { return &___methodName_5; }
	inline void set_methodName_5(String_t* value)
	{
		___methodName_5 = value;
		Il2CppCodeGenWriteBarrier((&___methodName_5), value);
	}

	inline static int32_t get_offset_of_delegateEntry_6() { return static_cast<int32_t>(offsetof(DelegateEntry_t1628653003, ___delegateEntry_6)); }
	inline DelegateEntry_t1628653003 * get_delegateEntry_6() const { return ___delegateEntry_6; }
	inline DelegateEntry_t1628653003 ** get_address_of_delegateEntry_6() { return &___delegateEntry_6; }
	inline void set_delegateEntry_6(DelegateEntry_t1628653003 * value)
	{
		___delegateEntry_6 = value;
		Il2CppCodeGenWriteBarrier((&___delegateEntry_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEENTRY_T1628653003_H
#ifndef MONITOR_T1404119340_H
#define MONITOR_T1404119340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Monitor
struct  Monitor_t1404119340  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONITOR_T1404119340_H
#ifndef DELEGATESERIALIZATIONHOLDER_T3785161812_H
#define DELEGATESERIALIZATIONHOLDER_T3785161812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder
struct  DelegateSerializationHolder_t3785161812  : public RuntimeObject
{
public:
	// System.Delegate System.DelegateSerializationHolder::_delegate
	Delegate_t53505960 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(DelegateSerializationHolder_t3785161812, ____delegate_0)); }
	inline Delegate_t53505960 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t53505960 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t53505960 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&____delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATESERIALIZATIONHOLDER_T3785161812_H
#ifndef NATIVEEVENTCALLS_T472579942_H
#define NATIVEEVENTCALLS_T472579942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.NativeEventCalls
struct  NativeEventCalls_t472579942  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEEVENTCALLS_T472579942_H
#ifndef SYNCHRONIZATIONCONTEXT_T1857609859_H
#define SYNCHRONIZATIONCONTEXT_T1857609859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t1857609859  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t1857609859_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t1857609859 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t1857609859_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t1857609859 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t1857609859 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t1857609859 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T1857609859_H
#ifndef DELEGATEDATA_T1323899958_H
#define DELEGATEDATA_T1323899958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateData
struct  DelegateData_t1323899958  : public RuntimeObject
{
public:
	// System.Type System.DelegateData::target_type
	Type_t * ___target_type_0;
	// System.String System.DelegateData::method_name
	String_t* ___method_name_1;

public:
	inline static int32_t get_offset_of_target_type_0() { return static_cast<int32_t>(offsetof(DelegateData_t1323899958, ___target_type_0)); }
	inline Type_t * get_target_type_0() const { return ___target_type_0; }
	inline Type_t ** get_address_of_target_type_0() { return &___target_type_0; }
	inline void set_target_type_0(Type_t * value)
	{
		___target_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_type_0), value);
	}

	inline static int32_t get_offset_of_method_name_1() { return static_cast<int32_t>(offsetof(DelegateData_t1323899958, ___method_name_1)); }
	inline String_t* get_method_name_1() const { return ___method_name_1; }
	inline String_t** get_address_of_method_name_1() { return &___method_name_1; }
	inline void set_method_name_1(String_t* value)
	{
		___method_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEDATA_T1323899958_H
#ifndef DATETIMEUTILS_T3795274370_H
#define DATETIMEUTILS_T3795274370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeUtils
struct  DateTimeUtils_t3795274370  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEUTILS_T3795274370_H
#ifndef DBNULL_T1678427962_H
#define DBNULL_T1678427962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t1678427962  : public RuntimeObject
{
public:

public:
};

struct DBNull_t1678427962_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t1678427962 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t1678427962_StaticFields, ___Value_0)); }
	inline DBNull_t1678427962 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t1678427962 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t1678427962 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T1678427962_H
#ifndef CONVERT_T2276340134_H
#define CONVERT_T2276340134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Convert
struct  Convert_t2276340134  : public RuntimeObject
{
public:

public:
};

struct Convert_t2276340134_StaticFields
{
public:
	// System.Object System.Convert::DBNull
	RuntimeObject * ___DBNull_0;
	// System.Type[] System.Convert::conversionTable
	TypeU5BU5D_t3956672634* ___conversionTable_1;

public:
	inline static int32_t get_offset_of_DBNull_0() { return static_cast<int32_t>(offsetof(Convert_t2276340134_StaticFields, ___DBNull_0)); }
	inline RuntimeObject * get_DBNull_0() const { return ___DBNull_0; }
	inline RuntimeObject ** get_address_of_DBNull_0() { return &___DBNull_0; }
	inline void set_DBNull_0(RuntimeObject * value)
	{
		___DBNull_0 = value;
		Il2CppCodeGenWriteBarrier((&___DBNull_0), value);
	}

	inline static int32_t get_offset_of_conversionTable_1() { return static_cast<int32_t>(offsetof(Convert_t2276340134_StaticFields, ___conversionTable_1)); }
	inline TypeU5BU5D_t3956672634* get_conversionTable_1() const { return ___conversionTable_1; }
	inline TypeU5BU5D_t3956672634** get_address_of_conversionTable_1() { return &___conversionTable_1; }
	inline void set_conversionTable_1(TypeU5BU5D_t3956672634* value)
	{
		___conversionTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___conversionTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERT_T2276340134_H
#ifndef THREADPOOL_T1285729536_H
#define THREADPOOL_T1285729536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadPool
struct  ThreadPool_t1285729536  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADPOOL_T1285729536_H
#ifndef CONSOLE_T2047569967_H
#define CONSOLE_T2047569967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Console
struct  Console_t2047569967  : public RuntimeObject
{
public:

public:
};

struct Console_t2047569967_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t560255767 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t560255767 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1620542325 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t1073075776 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t1073075776 * ___outputEncoding_4;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t2047569967_StaticFields, ___stdout_0)); }
	inline TextWriter_t560255767 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t560255767 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t560255767 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((&___stdout_0), value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t2047569967_StaticFields, ___stderr_1)); }
	inline TextWriter_t560255767 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t560255767 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t560255767 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((&___stderr_1), value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t2047569967_StaticFields, ___stdin_2)); }
	inline TextReader_t1620542325 * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t1620542325 ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t1620542325 * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((&___stdin_2), value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t2047569967_StaticFields, ___inputEncoding_3)); }
	inline Encoding_t1073075776 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_t1073075776 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_t1073075776 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___inputEncoding_3), value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t2047569967_StaticFields, ___outputEncoding_4)); }
	inline Encoding_t1073075776 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_t1073075776 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_t1073075776 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___outputEncoding_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLE_T2047569967_H
#ifndef CHARENUMERATOR_T1450740294_H
#define CHARENUMERATOR_T1450740294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CharEnumerator
struct  CharEnumerator_t1450740294  : public RuntimeObject
{
public:
	// System.String System.CharEnumerator::str
	String_t* ___str_0;
	// System.Int32 System.CharEnumerator::index
	int32_t ___index_1;
	// System.Int32 System.CharEnumerator::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(CharEnumerator_t1450740294, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(CharEnumerator_t1450740294, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(CharEnumerator_t1450740294, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARENUMERATOR_T1450740294_H
#ifndef TIMERCOMPARER_T495707636_H
#define TIMERCOMPARER_T495707636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer/TimerComparer
struct  TimerComparer_t495707636  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCOMPARER_T495707636_H
#ifndef SCHEDULER_T1560077808_H
#define SCHEDULER_T1560077808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer/Scheduler
struct  Scheduler_t1560077808  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Threading.Timer/Scheduler::list
	SortedList_t3946246912 * ___list_1;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(Scheduler_t1560077808, ___list_1)); }
	inline SortedList_t3946246912 * get_list_1() const { return ___list_1; }
	inline SortedList_t3946246912 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(SortedList_t3946246912 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}
};

struct Scheduler_t1560077808_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::instance
	Scheduler_t1560077808 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Scheduler_t1560077808_StaticFields, ___instance_0)); }
	inline Scheduler_t1560077808 * get_instance_0() const { return ___instance_0; }
	inline Scheduler_t1560077808 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Scheduler_t1560077808 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULER_T1560077808_H
#ifndef BUFFER_T2150752011_H
#define BUFFER_T2150752011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Buffer
struct  Buffer_t2150752011  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFER_T2150752011_H
#ifndef BITCONVERTER_T260879805_H
#define BITCONVERTER_T260879805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t260879805  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t260879805_StaticFields
{
public:
	// System.Boolean System.BitConverter::SwappedWordsInDouble
	bool ___SwappedWordsInDouble_0;
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_1;

public:
	inline static int32_t get_offset_of_SwappedWordsInDouble_0() { return static_cast<int32_t>(offsetof(BitConverter_t260879805_StaticFields, ___SwappedWordsInDouble_0)); }
	inline bool get_SwappedWordsInDouble_0() const { return ___SwappedWordsInDouble_0; }
	inline bool* get_address_of_SwappedWordsInDouble_0() { return &___SwappedWordsInDouble_0; }
	inline void set_SwappedWordsInDouble_0(bool value)
	{
		___SwappedWordsInDouble_0 = value;
	}

	inline static int32_t get_offset_of_IsLittleEndian_1() { return static_cast<int32_t>(offsetof(BitConverter_t260879805_StaticFields, ___IsLittleEndian_1)); }
	inline bool get_IsLittleEndian_1() const { return ___IsLittleEndian_1; }
	inline bool* get_address_of_IsLittleEndian_1() { return &___IsLittleEndian_1; }
	inline void set_IsLittleEndian_1(bool value)
	{
		___IsLittleEndian_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T260879805_H
#ifndef ACTIVATIONCONTEXT_T1318642941_H
#define ACTIVATIONCONTEXT_T1318642941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ActivationContext
struct  ActivationContext_t1318642941  : public RuntimeObject
{
public:
	// System.Boolean System.ActivationContext::_disposed
	bool ____disposed_0;

public:
	inline static int32_t get_offset_of__disposed_0() { return static_cast<int32_t>(offsetof(ActivationContext_t1318642941, ____disposed_0)); }
	inline bool get__disposed_0() const { return ____disposed_0; }
	inline bool* get_address_of__disposed_0() { return &____disposed_0; }
	inline void set__disposed_0(bool value)
	{
		____disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONCONTEXT_T1318642941_H
#ifndef ACTIVATOR_T3864706677_H
#define ACTIVATOR_T3864706677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Activator
struct  Activator_t3864706677  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATOR_T3864706677_H
#ifndef SHORTCOMPARER_T3235469011_H
#define SHORTCOMPARER_T3235469011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/ShortComparer
struct  ShortComparer_t3235469011  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCOMPARER_T3235469011_H
#ifndef LONGCOMPARER_T4253707543_H
#define LONGCOMPARER_T4253707543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/LongComparer
struct  LongComparer_t4253707543  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LONGCOMPARER_T4253707543_H
#ifndef INTCOMPARER_T182263962_H
#define INTCOMPARER_T182263962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/IntComparer
struct  IntComparer_t182263962  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTCOMPARER_T182263962_H
#ifndef ENCODERFALLBACK_T592617248_H
#define ENCODERFALLBACK_T592617248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t592617248  : public RuntimeObject
{
public:

public:
};

struct EncoderFallback_t592617248_StaticFields
{
public:
	// System.Text.EncoderFallback System.Text.EncoderFallback::exception_fallback
	EncoderFallback_t592617248 * ___exception_fallback_0;
	// System.Text.EncoderFallback System.Text.EncoderFallback::replacement_fallback
	EncoderFallback_t592617248 * ___replacement_fallback_1;
	// System.Text.EncoderFallback System.Text.EncoderFallback::standard_safe_fallback
	EncoderFallback_t592617248 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t592617248_StaticFields, ___exception_fallback_0)); }
	inline EncoderFallback_t592617248 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline EncoderFallback_t592617248 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(EncoderFallback_t592617248 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t592617248_StaticFields, ___replacement_fallback_1)); }
	inline EncoderFallback_t592617248 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline EncoderFallback_t592617248 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(EncoderFallback_t592617248 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t592617248_StaticFields, ___standard_safe_fallback_2)); }
	inline EncoderFallback_t592617248 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline EncoderFallback_t592617248 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(EncoderFallback_t592617248 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T592617248_H
#ifndef DECODERFALLBACKBUFFER_T2008811809_H
#define DECODERFALLBACKBUFFER_T2008811809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t2008811809  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T2008811809_H
#ifndef CRITICALFINALIZEROBJECT_T3932958251_H
#define CRITICALFINALIZEROBJECT_T3932958251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t3932958251  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T3932958251_H
#ifndef ENVIRONMENT_T1182074395_H
#define ENVIRONMENT_T1182074395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment
struct  Environment_t1182074395  : public RuntimeObject
{
public:

public:
};

struct Environment_t1182074395_StaticFields
{
public:
	// System.OperatingSystem System.Environment::os
	OperatingSystem_t834327128 * ___os_1;

public:
	inline static int32_t get_offset_of_os_1() { return static_cast<int32_t>(offsetof(Environment_t1182074395_StaticFields, ___os_1)); }
	inline OperatingSystem_t834327128 * get_os_1() const { return ___os_1; }
	inline OperatingSystem_t834327128 ** get_address_of_os_1() { return &___os_1; }
	inline void set_os_1(OperatingSystem_t834327128 * value)
	{
		___os_1 = value;
		Il2CppCodeGenWriteBarrier((&___os_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENT_T1182074395_H
#ifndef ENCODERFALLBACKBUFFER_T3708309887_H
#define ENCODERFALLBACKBUFFER_T3708309887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t3708309887  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T3708309887_H
#ifndef DECODERFALLBACK_T135983394_H
#define DECODERFALLBACK_T135983394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t135983394  : public RuntimeObject
{
public:

public:
};

struct DecoderFallback_t135983394_StaticFields
{
public:
	// System.Text.DecoderFallback System.Text.DecoderFallback::exception_fallback
	DecoderFallback_t135983394 * ___exception_fallback_0;
	// System.Text.DecoderFallback System.Text.DecoderFallback::replacement_fallback
	DecoderFallback_t135983394 * ___replacement_fallback_1;
	// System.Text.DecoderFallback System.Text.DecoderFallback::standard_safe_fallback
	DecoderFallback_t135983394 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t135983394_StaticFields, ___exception_fallback_0)); }
	inline DecoderFallback_t135983394 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline DecoderFallback_t135983394 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(DecoderFallback_t135983394 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t135983394_StaticFields, ___replacement_fallback_1)); }
	inline DecoderFallback_t135983394 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline DecoderFallback_t135983394 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(DecoderFallback_t135983394 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t135983394_StaticFields, ___standard_safe_fallback_2)); }
	inline DecoderFallback_t135983394 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline DecoderFallback_t135983394 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(DecoderFallback_t135983394 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T135983394_H
#ifndef EXCEPTION_T3222460051_H
#define EXCEPTION_T3222460051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3222460051  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2420964824* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3222460051 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3222460051, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2420964824* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2420964824** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2420964824* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3222460051, ___inner_exception_1)); }
	inline Exception_t3222460051 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3222460051 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3222460051 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3222460051, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3222460051, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3222460051, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3222460051, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3222460051, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3222460051, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3222460051, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3222460051, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3222460051, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3222460051_H
#ifndef ENCODING_T1073075776_H
#define ENCODING_T1073075776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1073075776  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t135983394 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t592617248 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___decoder_fallback_3)); }
	inline DecoderFallback_t135983394 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t135983394 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t135983394 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___encoder_fallback_4)); }
	inline EncoderFallback_t592617248 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t592617248 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t592617248 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1073075776, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1073075776_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t3185969139 * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2567097575* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1073075776 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1073075776 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1073075776 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1073075776 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1073075776 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1073075776 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1073075776 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1073075776 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1073075776 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1073075776 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1073075776 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t3185969139 * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t3185969139 ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t3185969139 * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2567097575* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2567097575** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2567097575* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1073075776 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1073075776 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1073075776 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1073075776 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1073075776 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1073075776 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1073075776 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1073075776 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1073075776 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1073075776 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1073075776 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1073075776 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1073075776 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1073075776 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1073075776 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1073075776 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1073075776 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1073075776 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1073075776 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1073075776 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1073075776 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1073075776 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1073075776 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1073075776 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1073075776 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1073075776 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1073075776 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1073075776 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1073075776 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1073075776 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1073075776 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1073075776 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1073075776 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1073075776_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1073075776_H
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
#ifndef GUIDPARSER_T1838895295_H
#define GUIDPARSER_T1838895295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/GuidParser
struct  GuidParser_t1838895295  : public RuntimeObject
{
public:
	// System.String System.Guid/GuidParser::_src
	String_t* ____src_0;
	// System.Int32 System.Guid/GuidParser::_length
	int32_t ____length_1;
	// System.Int32 System.Guid/GuidParser::_cur
	int32_t ____cur_2;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(GuidParser_t1838895295, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(GuidParser_t1838895295, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__cur_2() { return static_cast<int32_t>(offsetof(GuidParser_t1838895295, ____cur_2)); }
	inline int32_t get__cur_2() const { return ____cur_2; }
	inline int32_t* get_address_of__cur_2() { return &____cur_2; }
	inline void set__cur_2(int32_t value)
	{
		____cur_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDPARSER_T1838895295_H
#ifndef STRINGBUILDER_T3992995287_H
#define STRINGBUILDER_T3992995287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t3992995287  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t3992995287, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t3992995287, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t3992995287, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t3992995287, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T3992995287_H
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
#ifndef DECODER_T413484855_H
#define DECODER_T413484855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t413484855  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t135983394 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t2008811809 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t413484855, ___fallback_0)); }
	inline DecoderFallback_t135983394 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t135983394 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t135983394 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_0), value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t413484855, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t2008811809 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t2008811809 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t2008811809 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T413484855_H
#ifndef GC_T2410061673_H
#define GC_T2410061673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t2410061673  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_T2410061673_H
#ifndef EVENTARGS_T3107323352_H
#define EVENTARGS_T3107323352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3107323352  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3107323352_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3107323352 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3107323352_StaticFields, ___Empty_0)); }
	inline EventArgs_t3107323352 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3107323352 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3107323352 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3107323352_H
#ifndef MARSHALBYREFOBJECT_T1734858775_H
#define MARSHALBYREFOBJECT_T1734858775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1734858775  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t4128421258 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1734858775, ____identity_0)); }
	inline ServerIdentity_t4128421258 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t4128421258 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t4128421258 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T1734858775_H
#ifndef TIMESPAN_T2173167234_H
#define TIMESPAN_T2173167234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t2173167234 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t2173167234, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t2173167234_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t2173167234  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t2173167234  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t2173167234  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t2173167234_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t2173167234  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t2173167234 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t2173167234  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t2173167234_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t2173167234  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t2173167234 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t2173167234  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t2173167234_StaticFields, ___Zero_2)); }
	inline TimeSpan_t2173167234  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t2173167234 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t2173167234  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T2173167234_H
#ifndef INT32_T2869238875_H
#define INT32_T2869238875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2869238875 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2869238875, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2869238875_H
#ifndef ASSEMBLYLOADEVENTARGS_T1137539076_H
#define ASSEMBLYLOADEVENTARGS_T1137539076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventArgs
struct  AssemblyLoadEventArgs_t1137539076  : public EventArgs_t3107323352
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTARGS_T1137539076_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	UIntPtr_t  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline UIntPtr_t  get_Zero_0() const { return ___Zero_0; }
	inline UIntPtr_t * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(UIntPtr_t  value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
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
#ifndef SYSTEMEXCEPTION_T376861797_H
#define SYSTEMEXCEPTION_T376861797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t376861797  : public Exception_t3222460051
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T376861797_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2025045362 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2025045362 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2025045362 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2025045362 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef MONOENUMINFO_T1594683814_H
#define MONOENUMINFO_T1594683814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo
struct  MonoEnumInfo_t1594683814 
{
public:
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	RuntimeArray * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t328472698* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t1483218075 * ___name_hash_3;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1594683814, ___utype_0)); }
	inline Type_t * get_utype_0() const { return ___utype_0; }
	inline Type_t ** get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(Type_t * value)
	{
		___utype_0 = value;
		Il2CppCodeGenWriteBarrier((&___utype_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1594683814, ___values_1)); }
	inline RuntimeArray * get_values_1() const { return ___values_1; }
	inline RuntimeArray ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(RuntimeArray * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1594683814, ___names_2)); }
	inline StringU5BU5D_t328472698* get_names_2() const { return ___names_2; }
	inline StringU5BU5D_t328472698** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(StringU5BU5D_t328472698* value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_name_hash_3() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1594683814, ___name_hash_3)); }
	inline Hashtable_t1483218075 * get_name_hash_3() const { return ___name_hash_3; }
	inline Hashtable_t1483218075 ** get_address_of_name_hash_3() { return &___name_hash_3; }
	inline void set_name_hash_3(Hashtable_t1483218075 * value)
	{
		___name_hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_hash_3), value);
	}
};

struct MonoEnumInfo_t1594683814_StaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t1483218075 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	RuntimeObject * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t3212635331 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t3235469011 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t182263962 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t4253707543 * ___long_comparer_10;

public:
	inline static int32_t get_offset_of_global_cache_5() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1594683814_StaticFields, ___global_cache_5)); }
	inline Hashtable_t1483218075 * get_global_cache_5() const { return ___global_cache_5; }
	inline Hashtable_t1483218075 ** get_address_of_global_cache_5() { return &___global_cache_5; }
	inline void set_global_cache_5(Hashtable_t1483218075 * value)
	{
		___global_cache_5 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_5), value);
	}

	inline static int32_t get_offset_of_global_cache_monitor_6() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1594683814_StaticFields, ___global_cache_monitor_6)); }
	inline RuntimeObject * get_global_cache_monitor_6() const { return ___global_cache_monitor_6; }
	inline RuntimeObject ** get_address_of_global_cache_monitor_6() { return &___global_cache_monitor_6; }
	inline void set_global_cache_monitor_6(RuntimeObject * value)
	{
		___global_cache_monitor_6 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_monitor_6), value);
	}

	inline static int32_t get_offset_of_sbyte_comparer_7() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1594683814_StaticFields, ___sbyte_comparer_7)); }
	inline SByteComparer_t3212635331 * get_sbyte_comparer_7() const { return ___sbyte_comparer_7; }
	inline SByteComparer_t3212635331 ** get_address_of_sbyte_comparer_7() { return &___sbyte_comparer_7; }
	inline void set_sbyte_comparer_7(SByteComparer_t3212635331 * value)
	{
		___sbyte_comparer_7 = value;
		Il2CppCodeGenWriteBarrier((&___sbyte_comparer_7), value);
	}

	inline static int32_t get_offset_of_short_comparer_8() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1594683814_StaticFields, ___short_comparer_8)); }
	inline ShortComparer_t3235469011 * get_short_comparer_8() const { return ___short_comparer_8; }
	inline ShortComparer_t3235469011 ** get_address_of_short_comparer_8() { return &___short_comparer_8; }
	inline void set_short_comparer_8(ShortComparer_t3235469011 * value)
	{
		___short_comparer_8 = value;
		Il2CppCodeGenWriteBarrier((&___short_comparer_8), value);
	}

	inline static int32_t get_offset_of_int_comparer_9() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1594683814_StaticFields, ___int_comparer_9)); }
	inline IntComparer_t182263962 * get_int_comparer_9() const { return ___int_comparer_9; }
	inline IntComparer_t182263962 ** get_address_of_int_comparer_9() { return &___int_comparer_9; }
	inline void set_int_comparer_9(IntComparer_t182263962 * value)
	{
		___int_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___int_comparer_9), value);
	}

	inline static int32_t get_offset_of_long_comparer_10() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1594683814_StaticFields, ___long_comparer_10)); }
	inline LongComparer_t4253707543 * get_long_comparer_10() const { return ___long_comparer_10; }
	inline LongComparer_t4253707543 ** get_address_of_long_comparer_10() { return &___long_comparer_10; }
	inline void set_long_comparer_10(LongComparer_t4253707543 * value)
	{
		___long_comparer_10 = value;
		Il2CppCodeGenWriteBarrier((&___long_comparer_10), value);
	}
};

struct MonoEnumInfo_t1594683814_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t1483218075 * ___cache_4;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1594683814_ThreadStaticFields, ___cache_4)); }
	inline Hashtable_t1483218075 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t1483218075 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t1483218075 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t1594683814_marshaled_pinvoke
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	char** ___names_2;
	Hashtable_t1483218075 * ___name_hash_3;
};
// Native definition for COM marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t1594683814_marshaled_com
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	Il2CppChar** ___names_2;
	Hashtable_t1483218075 * ___name_hash_3;
};
#endif // MONOENUMINFO_T1594683814_H
#ifndef FLAGSATTRIBUTE_T1648512434_H
#define FLAGSATTRIBUTE_T1648512434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t1648512434  : public Attribute_t3193222758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T1648512434_H
#ifndef CONTEXTBOUNDOBJECT_T2154760309_H
#define CONTEXTBOUNDOBJECT_T2154760309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t2154760309  : public MarshalByRefObject_t1734858775
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T2154760309_H
#ifndef APPLICATIONEXCEPTION_T4242661788_H
#define APPLICATIONEXCEPTION_T4242661788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t4242661788  : public Exception_t3222460051
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T4242661788_H
#ifndef UNVERIFIABLECODEATTRIBUTE_T2034234350_H
#define UNVERIFIABLECODEATTRIBUTE_T2034234350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.UnverifiableCodeAttribute
struct  UnverifiableCodeAttribute_t2034234350  : public Attribute_t3193222758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNVERIFIABLECODEATTRIBUTE_T2034234350_H
#ifndef APPDOMAINMANAGER_T3730990605_H
#define APPDOMAINMANAGER_T3730990605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainManager
struct  AppDomainManager_t3730990605  : public MarshalByRefObject_t1734858775
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINMANAGER_T3730990605_H
#ifndef UTF8DECODER_T584166830_H
#define UTF8DECODER_T584166830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_t584166830  : public Decoder_t413484855
{
public:
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverBits
	uint32_t ___leftOverBits_2;
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverCount
	uint32_t ___leftOverCount_3;

public:
	inline static int32_t get_offset_of_leftOverBits_2() { return static_cast<int32_t>(offsetof(UTF8Decoder_t584166830, ___leftOverBits_2)); }
	inline uint32_t get_leftOverBits_2() const { return ___leftOverBits_2; }
	inline uint32_t* get_address_of_leftOverBits_2() { return &___leftOverBits_2; }
	inline void set_leftOverBits_2(uint32_t value)
	{
		___leftOverBits_2 = value;
	}

	inline static int32_t get_offset_of_leftOverCount_3() { return static_cast<int32_t>(offsetof(UTF8Decoder_t584166830, ___leftOverCount_3)); }
	inline uint32_t get_leftOverCount_3() const { return ___leftOverCount_3; }
	inline uint32_t* get_address_of_leftOverCount_3() { return &___leftOverCount_3; }
	inline void set_leftOverCount_3(uint32_t value)
	{
		___leftOverCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8DECODER_T584166830_H
#ifndef UTF8ENCODING_T1660712002_H
#define UTF8ENCODING_T1660712002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t1660712002  : public Encoding_t1073075776
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_28;

public:
	inline static int32_t get_offset_of_emitIdentifier_28() { return static_cast<int32_t>(offsetof(UTF8Encoding_t1660712002, ___emitIdentifier_28)); }
	inline bool get_emitIdentifier_28() const { return ___emitIdentifier_28; }
	inline bool* get_address_of_emitIdentifier_28() { return &___emitIdentifier_28; }
	inline void set_emitIdentifier_28(bool value)
	{
		___emitIdentifier_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T1660712002_H
#ifndef UTF7DECODER_T900261193_H
#define UTF7DECODER_T900261193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/UTF7Decoder
struct  UTF7Decoder_t900261193  : public Decoder_t413484855
{
public:
	// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::leftOver
	int32_t ___leftOver_2;

public:
	inline static int32_t get_offset_of_leftOver_2() { return static_cast<int32_t>(offsetof(UTF7Decoder_t900261193, ___leftOver_2)); }
	inline int32_t get_leftOver_2() const { return ___leftOver_2; }
	inline int32_t* get_address_of_leftOver_2() { return &___leftOver_2; }
	inline void set_leftOver_2(int32_t value)
	{
		___leftOver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7DECODER_T900261193_H
#ifndef UTF7ENCODING_T1090204744_H
#define UTF7ENCODING_T1090204744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t1090204744  : public Encoding_t1073075776
{
public:
	// System.Boolean System.Text.UTF7Encoding::allowOptionals
	bool ___allowOptionals_28;

public:
	inline static int32_t get_offset_of_allowOptionals_28() { return static_cast<int32_t>(offsetof(UTF7Encoding_t1090204744, ___allowOptionals_28)); }
	inline bool get_allowOptionals_28() const { return ___allowOptionals_28; }
	inline bool* get_address_of_allowOptionals_28() { return &___allowOptionals_28; }
	inline void set_allowOptionals_28(bool value)
	{
		___allowOptionals_28 = value;
	}
};

struct UTF7Encoding_t1090204744_StaticFields
{
public:
	// System.Byte[] System.Text.UTF7Encoding::encodingRules
	ByteU5BU5D_t2520348892* ___encodingRules_29;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t1085314631* ___base64Values_30;

public:
	inline static int32_t get_offset_of_encodingRules_29() { return static_cast<int32_t>(offsetof(UTF7Encoding_t1090204744_StaticFields, ___encodingRules_29)); }
	inline ByteU5BU5D_t2520348892* get_encodingRules_29() const { return ___encodingRules_29; }
	inline ByteU5BU5D_t2520348892** get_address_of_encodingRules_29() { return &___encodingRules_29; }
	inline void set_encodingRules_29(ByteU5BU5D_t2520348892* value)
	{
		___encodingRules_29 = value;
		Il2CppCodeGenWriteBarrier((&___encodingRules_29), value);
	}

	inline static int32_t get_offset_of_base64Values_30() { return static_cast<int32_t>(offsetof(UTF7Encoding_t1090204744_StaticFields, ___base64Values_30)); }
	inline SByteU5BU5D_t1085314631* get_base64Values_30() const { return ___base64Values_30; }
	inline SByteU5BU5D_t1085314631** get_address_of_base64Values_30() { return &___base64Values_30; }
	inline void set_base64Values_30(SByteU5BU5D_t1085314631* value)
	{
		___base64Values_30 = value;
		Il2CppCodeGenWriteBarrier((&___base64Values_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODING_T1090204744_H
#ifndef UTF32DECODER_T2113227034_H
#define UTF32DECODER_T2113227034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t2113227034  : public Decoder_t413484855
{
public:
	// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverByte
	int32_t ___leftOverByte_3;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverLength
	int32_t ___leftOverLength_4;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UTF32Decoder_t2113227034, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UTF32Decoder_t2113227034, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}

	inline static int32_t get_offset_of_leftOverLength_4() { return static_cast<int32_t>(offsetof(UTF32Decoder_t2113227034, ___leftOverLength_4)); }
	inline int32_t get_leftOverLength_4() const { return ___leftOverLength_4; }
	inline int32_t* get_address_of_leftOverLength_4() { return &___leftOverLength_4; }
	inline void set_leftOverLength_4(int32_t value)
	{
		___leftOverLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32DECODER_T2113227034_H
#ifndef UTF32ENCODING_T311764800_H
#define UTF32ENCODING_T311764800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t311764800  : public Encoding_t1073075776
{
public:
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UTF32Encoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UTF32Encoding_t311764800, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UTF32Encoding_t311764800, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T311764800_H
#ifndef LATIN1ENCODING_T2293285647_H
#define LATIN1ENCODING_T2293285647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Latin1Encoding
struct  Latin1Encoding_t2293285647  : public Encoding_t1073075776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATIN1ENCODING_T2293285647_H
#ifndef FORWARDINGDECODER_T285474153_H
#define FORWARDINGDECODER_T285474153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingDecoder
struct  ForwardingDecoder_t285474153  : public Decoder_t413484855
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingDecoder::encoding
	Encoding_t1073075776 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingDecoder_t285474153, ___encoding_2)); }
	inline Encoding_t1073075776 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t1073075776 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t1073075776 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDINGDECODER_T285474153_H
#ifndef UNICODEENCODING_T3870843104_H
#define UNICODEENCODING_T3870843104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t3870843104  : public Encoding_t1073075776
{
public:
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t3870843104, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t3870843104, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T3870843104_H
#ifndef TIMER_T2875225950_H
#define TIMER_T2875225950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer
struct  Timer_t2875225950  : public MarshalByRefObject_t1734858775
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_t916787390 * ___callback_2;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t2875225950, ___callback_2)); }
	inline TimerCallback_t916787390 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_t916787390 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_t916787390 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((&___callback_2), value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t2875225950, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((&___state_3), value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t2875225950, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t2875225950, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t2875225950, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t2875225950, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t2875225950_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_t1560077808 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t2875225950_StaticFields, ___scheduler_1)); }
	inline Scheduler_t1560077808 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_t1560077808 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_t1560077808 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T2875225950_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T1116363435_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T1116363435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t1116363435  : public EncoderFallbackBuffer_t3708309887
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_0;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.Boolean System.Text.EncoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_2;

public:
	inline static int32_t get_offset_of_replacement_0() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1116363435, ___replacement_0)); }
	inline String_t* get_replacement_0() const { return ___replacement_0; }
	inline String_t** get_address_of_replacement_0() { return &___replacement_0; }
	inline void set_replacement_0(String_t* value)
	{
		___replacement_0 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1116363435, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_fallback_assigned_2() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1116363435, ___fallback_assigned_2)); }
	inline bool get_fallback_assigned_2() const { return ___fallback_assigned_2; }
	inline bool* get_address_of_fallback_assigned_2() { return &___fallback_assigned_2; }
	inline void set_fallback_assigned_2(bool value)
	{
		___fallback_assigned_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T1116363435_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T3727867348_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T3727867348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t3727867348  : public EncoderFallbackBuffer_t3708309887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T3727867348_H
#ifndef ENCODEREXCEPTIONFALLBACK_T1678832318_H
#define ENCODEREXCEPTIONFALLBACK_T1678832318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t1678832318  : public EncoderFallback_t592617248
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T1678832318_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T10334361_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T10334361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t10334361  : public DecoderFallbackBuffer_t2008811809
{
public:
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_0;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_2;

public:
	inline static int32_t get_offset_of_fallback_assigned_0() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t10334361, ___fallback_assigned_0)); }
	inline bool get_fallback_assigned_0() const { return ___fallback_assigned_0; }
	inline bool* get_address_of_fallback_assigned_0() { return &___fallback_assigned_0; }
	inline void set_fallback_assigned_0(bool value)
	{
		___fallback_assigned_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t10334361, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_replacement_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t10334361, ___replacement_2)); }
	inline String_t* get_replacement_2() const { return ___replacement_2; }
	inline String_t** get_address_of_replacement_2() { return &___replacement_2; }
	inline void set_replacement_2(String_t* value)
	{
		___replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T10334361_H
#ifndef DECODERREPLACEMENTFALLBACK_T2117190952_H
#define DECODERREPLACEMENTFALLBACK_T2117190952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t2117190952  : public DecoderFallback_t135983394
{
public:
	// System.String System.Text.DecoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t2117190952, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T2117190952_H
#ifndef DECODEREXCEPTIONFALLBACKBUFFER_T2722036058_H
#define DECODEREXCEPTIONFALLBACKBUFFER_T2722036058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallbackBuffer
struct  DecoderExceptionFallbackBuffer_t2722036058  : public DecoderFallbackBuffer_t2008811809
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACKBUFFER_T2722036058_H
#ifndef DECODEREXCEPTIONFALLBACK_T236610030_H
#define DECODEREXCEPTIONFALLBACK_T236610030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallback
struct  DecoderExceptionFallback_t236610030  : public DecoderFallback_t135983394
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACK_T236610030_H
#ifndef ASCIIENCODING_T911427953_H
#define ASCIIENCODING_T911427953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t911427953  : public Encoding_t1073075776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODING_T911427953_H
#ifndef ENCODERREPLACEMENTFALLBACK_T274475085_H
#define ENCODERREPLACEMENTFALLBACK_T274475085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t274475085  : public EncoderFallback_t592617248
{
public:
	// System.String System.Text.EncoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t274475085, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T274475085_H
#ifndef UNICODEDECODER_T1111517482_H
#define UNICODEDECODER_T1111517482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding/UnicodeDecoder
struct  UnicodeDecoder_t1111517482  : public Decoder_t413484855
{
public:
	// System.Boolean System.Text.UnicodeEncoding/UnicodeDecoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::leftOverByte
	int32_t ___leftOverByte_3;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t1111517482, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t1111517482, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEDECODER_T1111517482_H
#ifndef PRINCIPALPOLICY_T2320016924_H
#define PRINCIPALPOLICY_T2320016924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t2320016924 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t2320016924, ___value___1)); }
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
#endif // PRINCIPALPOLICY_T2320016924_H
#ifndef FORMATEXCEPTION_T896983953_H
#define FORMATEXCEPTION_T896983953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t896983953  : public SystemException_t376861797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T896983953_H
#ifndef LOADEROPTIMIZATION_T4020095141_H
#define LOADEROPTIMIZATION_T4020095141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LoaderOptimization
struct  LoaderOptimization_t4020095141 
{
public:
	// System.Int32 System.LoaderOptimization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoaderOptimization_t4020095141, ___value___1)); }
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
#endif // LOADEROPTIMIZATION_T4020095141_H
#ifndef EXECUTIONENGINEEXCEPTION_T1487831960_H
#define EXECUTIONENGINEEXCEPTION_T1487831960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t1487831960  : public SystemException_t376861797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T1487831960_H
#ifndef SPECIALFOLDER_T3467977614_H
#define SPECIALFOLDER_T3467977614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment/SpecialFolder
struct  SpecialFolder_t3467977614 
{
public:
	// System.Int32 System.Environment/SpecialFolder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SpecialFolder_t3467977614, ___value___1)); }
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
#endif // SPECIALFOLDER_T3467977614_H
#ifndef EVENTRESETMODE_T2448867145_H
#define EVENTRESETMODE_T2448867145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventResetMode
struct  EventResetMode_t2448867145 
{
public:
	// System.Int32 System.Threading.EventResetMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventResetMode_t2448867145, ___value___1)); }
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
#endif // EVENTRESETMODE_T2448867145_H
#ifndef THREADINTERRUPTEDEXCEPTION_T40341697_H
#define THREADINTERRUPTEDEXCEPTION_T40341697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadInterruptedException
struct  ThreadInterruptedException_t40341697  : public SystemException_t376861797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINTERRUPTEDEXCEPTION_T40341697_H
#ifndef TYPELOADEXCEPTION_T1148660815_H
#define TYPELOADEXCEPTION_T1148660815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t1148660815  : public SystemException_t376861797
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t1148660815, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t1148660815, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T1148660815_H
#ifndef ARGUMENTEXCEPTION_T2838238932_H
#define ARGUMENTEXCEPTION_T2838238932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t2838238932  : public SystemException_t376861797
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t2838238932, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T2838238932_H
#ifndef ARITHMETICEXCEPTION_T1368081104_H
#define ARITHMETICEXCEPTION_T1368081104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t1368081104  : public SystemException_t376861797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T1368081104_H
#ifndef ARRAYTYPEMISMATCHEXCEPTION_T4139495929_H
#define ARRAYTYPEMISMATCHEXCEPTION_T4139495929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArrayTypeMismatchException
struct  ArrayTypeMismatchException_t4139495929  : public SystemException_t376861797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYTYPEMISMATCHEXCEPTION_T4139495929_H
#ifndef ATTRIBUTETARGETS_T671470811_H
#define ATTRIBUTETARGETS_T671470811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t671470811 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AttributeTargets_t671470811, ___value___1)); }
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
#endif // ATTRIBUTETARGETS_T671470811_H
#ifndef ACCESSVIOLATIONEXCEPTION_T2359765240_H
#define ACCESSVIOLATIONEXCEPTION_T2359765240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AccessViolationException
struct  AccessViolationException_t2359765240  : public SystemException_t376861797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACCESSVIOLATIONEXCEPTION_T2359765240_H
#ifndef WAITHANDLE_T2549181783_H
#define WAITHANDLE_T2549181783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t2549181783  : public MarshalByRefObject_t1734858775
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t550742169 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t2549181783, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t550742169 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t550742169 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t550742169 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t2549181783, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t2549181783_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	IntPtr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t2549181783_StaticFields, ___InvalidHandle_3)); }
	inline IntPtr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline IntPtr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(IntPtr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T2549181783_H
#ifndef THREADSTATEEXCEPTION_T1849752972_H
#define THREADSTATEEXCEPTION_T1849752972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStateException
struct  ThreadStateException_t1849752972  : public SystemException_t376861797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATEEXCEPTION_T1849752972_H
#ifndef THREADSTATE_T705250008_H
#define THREADSTATE_T705250008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t705250008 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t705250008, ___value___1)); }
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
#endif // THREADSTATE_T705250008_H
#ifndef THREADABORTEXCEPTION_T1041477508_H
#define THREADABORTEXCEPTION_T1041477508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadAbortException
struct  ThreadAbortException_t1041477508  : public SystemException_t376861797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADABORTEXCEPTION_T1041477508_H
#ifndef WHICH_T3724722241_H
#define WHICH_T3724722241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime/Which
struct  Which_t3724722241 
{
public:
	// System.Int32 System.DateTime/Which::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Which_t3724722241, ___value___1)); }
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
#endif // WHICH_T3724722241_H
#ifndef MEMBERACCESSEXCEPTION_T472422236_H
#define MEMBERACCESSEXCEPTION_T472422236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t472422236  : public SystemException_t376861797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T472422236_H
#ifndef DAYOFWEEK_T877392230_H
#define DAYOFWEEK_T877392230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t877392230 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DayOfWeek_t877392230, ___value___1)); }
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
#endif // DAYOFWEEK_T877392230_H
#ifndef SYNCHRONIZATIONLOCKEXCEPTION_T1839137274_H
#define SYNCHRONIZATIONLOCKEXCEPTION_T1839137274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationLockException
struct  SynchronizationLockException_t1839137274  : public SystemException_t376861797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONLOCKEXCEPTION_T1839137274_H
#ifndef DATETIMEKIND_T4275604547_H
#define DATETIMEKIND_T4275604547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t4275604547 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t4275604547, ___value___1)); }
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
#endif // DATETIMEKIND_T4275604547_H
#ifndef DATETIME_T1247539198_H
#define DATETIME_T1247539198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t1247539198 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t2173167234  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t1247539198, ___ticks_0)); }
	inline TimeSpan_t2173167234  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t2173167234 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t2173167234  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t1247539198, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t1247539198_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t1247539198  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t1247539198  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t328472698* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t328472698* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t328472698* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t328472698* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t328472698* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t328472698* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t328472698* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t774821850* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t774821850* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___MaxValue_2)); }
	inline DateTime_t1247539198  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t1247539198 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t1247539198  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___MinValue_3)); }
	inline DateTime_t1247539198  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t1247539198 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t1247539198  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t328472698* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t328472698** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t328472698* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t328472698* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t328472698** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t328472698* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t328472698* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t328472698** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t328472698* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t328472698* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t328472698** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t328472698* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t328472698* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t328472698** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t328472698* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t328472698* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t328472698** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t328472698* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t328472698* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t328472698** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t328472698* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t774821850* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t774821850** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t774821850* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t774821850* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t774821850** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t774821850* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t1247539198_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1247539198_H
#ifndef EVENTWAITHANDLE_T1063736628_H
#define EVENTWAITHANDLE_T1063736628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t1063736628  : public WaitHandle_t2549181783
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T1063736628_H
#ifndef APPDOMAINSETUP_T3266304506_H
#define APPDOMAINSETUP_T3266304506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainSetup
struct  AppDomainSetup_t3266304506  : public RuntimeObject
{
public:
	// System.String System.AppDomainSetup::application_base
	String_t* ___application_base_0;
	// System.String System.AppDomainSetup::application_name
	String_t* ___application_name_1;
	// System.String System.AppDomainSetup::cache_path
	String_t* ___cache_path_2;
	// System.String System.AppDomainSetup::configuration_file
	String_t* ___configuration_file_3;
	// System.String System.AppDomainSetup::dynamic_base
	String_t* ___dynamic_base_4;
	// System.String System.AppDomainSetup::license_file
	String_t* ___license_file_5;
	// System.String System.AppDomainSetup::private_bin_path
	String_t* ___private_bin_path_6;
	// System.String System.AppDomainSetup::private_bin_path_probe
	String_t* ___private_bin_path_probe_7;
	// System.String System.AppDomainSetup::shadow_copy_directories
	String_t* ___shadow_copy_directories_8;
	// System.String System.AppDomainSetup::shadow_copy_files
	String_t* ___shadow_copy_files_9;
	// System.Boolean System.AppDomainSetup::publisher_policy
	bool ___publisher_policy_10;
	// System.Boolean System.AppDomainSetup::path_changed
	bool ___path_changed_11;
	// System.LoaderOptimization System.AppDomainSetup::loader_optimization
	int32_t ___loader_optimization_12;
	// System.Boolean System.AppDomainSetup::disallow_binding_redirects
	bool ___disallow_binding_redirects_13;
	// System.Boolean System.AppDomainSetup::disallow_code_downloads
	bool ___disallow_code_downloads_14;
	// System.Runtime.Hosting.ActivationArguments System.AppDomainSetup::_activationArguments
	ActivationArguments_t1548350645 * ____activationArguments_15;
	// System.AppDomainInitializer System.AppDomainSetup::domain_initializer
	AppDomainInitializer_t2986874444 * ___domain_initializer_16;
	// System.Security.Policy.ApplicationTrust System.AppDomainSetup::application_trust
	ApplicationTrust_t535988243 * ___application_trust_17;
	// System.String[] System.AppDomainSetup::domain_initializer_args
	StringU5BU5D_t328472698* ___domain_initializer_args_18;
	// System.Security.SecurityElement System.AppDomainSetup::application_trust_xml
	SecurityElement_t1987481061 * ___application_trust_xml_19;
	// System.Boolean System.AppDomainSetup::disallow_appbase_probe
	bool ___disallow_appbase_probe_20;
	// System.Byte[] System.AppDomainSetup::configuration_bytes
	ByteU5BU5D_t2520348892* ___configuration_bytes_21;

public:
	inline static int32_t get_offset_of_application_base_0() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___application_base_0)); }
	inline String_t* get_application_base_0() const { return ___application_base_0; }
	inline String_t** get_address_of_application_base_0() { return &___application_base_0; }
	inline void set_application_base_0(String_t* value)
	{
		___application_base_0 = value;
		Il2CppCodeGenWriteBarrier((&___application_base_0), value);
	}

	inline static int32_t get_offset_of_application_name_1() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___application_name_1)); }
	inline String_t* get_application_name_1() const { return ___application_name_1; }
	inline String_t** get_address_of_application_name_1() { return &___application_name_1; }
	inline void set_application_name_1(String_t* value)
	{
		___application_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___application_name_1), value);
	}

	inline static int32_t get_offset_of_cache_path_2() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___cache_path_2)); }
	inline String_t* get_cache_path_2() const { return ___cache_path_2; }
	inline String_t** get_address_of_cache_path_2() { return &___cache_path_2; }
	inline void set_cache_path_2(String_t* value)
	{
		___cache_path_2 = value;
		Il2CppCodeGenWriteBarrier((&___cache_path_2), value);
	}

	inline static int32_t get_offset_of_configuration_file_3() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___configuration_file_3)); }
	inline String_t* get_configuration_file_3() const { return ___configuration_file_3; }
	inline String_t** get_address_of_configuration_file_3() { return &___configuration_file_3; }
	inline void set_configuration_file_3(String_t* value)
	{
		___configuration_file_3 = value;
		Il2CppCodeGenWriteBarrier((&___configuration_file_3), value);
	}

	inline static int32_t get_offset_of_dynamic_base_4() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___dynamic_base_4)); }
	inline String_t* get_dynamic_base_4() const { return ___dynamic_base_4; }
	inline String_t** get_address_of_dynamic_base_4() { return &___dynamic_base_4; }
	inline void set_dynamic_base_4(String_t* value)
	{
		___dynamic_base_4 = value;
		Il2CppCodeGenWriteBarrier((&___dynamic_base_4), value);
	}

	inline static int32_t get_offset_of_license_file_5() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___license_file_5)); }
	inline String_t* get_license_file_5() const { return ___license_file_5; }
	inline String_t** get_address_of_license_file_5() { return &___license_file_5; }
	inline void set_license_file_5(String_t* value)
	{
		___license_file_5 = value;
		Il2CppCodeGenWriteBarrier((&___license_file_5), value);
	}

	inline static int32_t get_offset_of_private_bin_path_6() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___private_bin_path_6)); }
	inline String_t* get_private_bin_path_6() const { return ___private_bin_path_6; }
	inline String_t** get_address_of_private_bin_path_6() { return &___private_bin_path_6; }
	inline void set_private_bin_path_6(String_t* value)
	{
		___private_bin_path_6 = value;
		Il2CppCodeGenWriteBarrier((&___private_bin_path_6), value);
	}

	inline static int32_t get_offset_of_private_bin_path_probe_7() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___private_bin_path_probe_7)); }
	inline String_t* get_private_bin_path_probe_7() const { return ___private_bin_path_probe_7; }
	inline String_t** get_address_of_private_bin_path_probe_7() { return &___private_bin_path_probe_7; }
	inline void set_private_bin_path_probe_7(String_t* value)
	{
		___private_bin_path_probe_7 = value;
		Il2CppCodeGenWriteBarrier((&___private_bin_path_probe_7), value);
	}

	inline static int32_t get_offset_of_shadow_copy_directories_8() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___shadow_copy_directories_8)); }
	inline String_t* get_shadow_copy_directories_8() const { return ___shadow_copy_directories_8; }
	inline String_t** get_address_of_shadow_copy_directories_8() { return &___shadow_copy_directories_8; }
	inline void set_shadow_copy_directories_8(String_t* value)
	{
		___shadow_copy_directories_8 = value;
		Il2CppCodeGenWriteBarrier((&___shadow_copy_directories_8), value);
	}

	inline static int32_t get_offset_of_shadow_copy_files_9() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___shadow_copy_files_9)); }
	inline String_t* get_shadow_copy_files_9() const { return ___shadow_copy_files_9; }
	inline String_t** get_address_of_shadow_copy_files_9() { return &___shadow_copy_files_9; }
	inline void set_shadow_copy_files_9(String_t* value)
	{
		___shadow_copy_files_9 = value;
		Il2CppCodeGenWriteBarrier((&___shadow_copy_files_9), value);
	}

	inline static int32_t get_offset_of_publisher_policy_10() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___publisher_policy_10)); }
	inline bool get_publisher_policy_10() const { return ___publisher_policy_10; }
	inline bool* get_address_of_publisher_policy_10() { return &___publisher_policy_10; }
	inline void set_publisher_policy_10(bool value)
	{
		___publisher_policy_10 = value;
	}

	inline static int32_t get_offset_of_path_changed_11() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___path_changed_11)); }
	inline bool get_path_changed_11() const { return ___path_changed_11; }
	inline bool* get_address_of_path_changed_11() { return &___path_changed_11; }
	inline void set_path_changed_11(bool value)
	{
		___path_changed_11 = value;
	}

	inline static int32_t get_offset_of_loader_optimization_12() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___loader_optimization_12)); }
	inline int32_t get_loader_optimization_12() const { return ___loader_optimization_12; }
	inline int32_t* get_address_of_loader_optimization_12() { return &___loader_optimization_12; }
	inline void set_loader_optimization_12(int32_t value)
	{
		___loader_optimization_12 = value;
	}

	inline static int32_t get_offset_of_disallow_binding_redirects_13() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___disallow_binding_redirects_13)); }
	inline bool get_disallow_binding_redirects_13() const { return ___disallow_binding_redirects_13; }
	inline bool* get_address_of_disallow_binding_redirects_13() { return &___disallow_binding_redirects_13; }
	inline void set_disallow_binding_redirects_13(bool value)
	{
		___disallow_binding_redirects_13 = value;
	}

	inline static int32_t get_offset_of_disallow_code_downloads_14() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___disallow_code_downloads_14)); }
	inline bool get_disallow_code_downloads_14() const { return ___disallow_code_downloads_14; }
	inline bool* get_address_of_disallow_code_downloads_14() { return &___disallow_code_downloads_14; }
	inline void set_disallow_code_downloads_14(bool value)
	{
		___disallow_code_downloads_14 = value;
	}

	inline static int32_t get_offset_of__activationArguments_15() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ____activationArguments_15)); }
	inline ActivationArguments_t1548350645 * get__activationArguments_15() const { return ____activationArguments_15; }
	inline ActivationArguments_t1548350645 ** get_address_of__activationArguments_15() { return &____activationArguments_15; }
	inline void set__activationArguments_15(ActivationArguments_t1548350645 * value)
	{
		____activationArguments_15 = value;
		Il2CppCodeGenWriteBarrier((&____activationArguments_15), value);
	}

	inline static int32_t get_offset_of_domain_initializer_16() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___domain_initializer_16)); }
	inline AppDomainInitializer_t2986874444 * get_domain_initializer_16() const { return ___domain_initializer_16; }
	inline AppDomainInitializer_t2986874444 ** get_address_of_domain_initializer_16() { return &___domain_initializer_16; }
	inline void set_domain_initializer_16(AppDomainInitializer_t2986874444 * value)
	{
		___domain_initializer_16 = value;
		Il2CppCodeGenWriteBarrier((&___domain_initializer_16), value);
	}

	inline static int32_t get_offset_of_application_trust_17() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___application_trust_17)); }
	inline ApplicationTrust_t535988243 * get_application_trust_17() const { return ___application_trust_17; }
	inline ApplicationTrust_t535988243 ** get_address_of_application_trust_17() { return &___application_trust_17; }
	inline void set_application_trust_17(ApplicationTrust_t535988243 * value)
	{
		___application_trust_17 = value;
		Il2CppCodeGenWriteBarrier((&___application_trust_17), value);
	}

	inline static int32_t get_offset_of_domain_initializer_args_18() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___domain_initializer_args_18)); }
	inline StringU5BU5D_t328472698* get_domain_initializer_args_18() const { return ___domain_initializer_args_18; }
	inline StringU5BU5D_t328472698** get_address_of_domain_initializer_args_18() { return &___domain_initializer_args_18; }
	inline void set_domain_initializer_args_18(StringU5BU5D_t328472698* value)
	{
		___domain_initializer_args_18 = value;
		Il2CppCodeGenWriteBarrier((&___domain_initializer_args_18), value);
	}

	inline static int32_t get_offset_of_application_trust_xml_19() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___application_trust_xml_19)); }
	inline SecurityElement_t1987481061 * get_application_trust_xml_19() const { return ___application_trust_xml_19; }
	inline SecurityElement_t1987481061 ** get_address_of_application_trust_xml_19() { return &___application_trust_xml_19; }
	inline void set_application_trust_xml_19(SecurityElement_t1987481061 * value)
	{
		___application_trust_xml_19 = value;
		Il2CppCodeGenWriteBarrier((&___application_trust_xml_19), value);
	}

	inline static int32_t get_offset_of_disallow_appbase_probe_20() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___disallow_appbase_probe_20)); }
	inline bool get_disallow_appbase_probe_20() const { return ___disallow_appbase_probe_20; }
	inline bool* get_address_of_disallow_appbase_probe_20() { return &___disallow_appbase_probe_20; }
	inline void set_disallow_appbase_probe_20(bool value)
	{
		___disallow_appbase_probe_20 = value;
	}

	inline static int32_t get_offset_of_configuration_bytes_21() { return static_cast<int32_t>(offsetof(AppDomainSetup_t3266304506, ___configuration_bytes_21)); }
	inline ByteU5BU5D_t2520348892* get_configuration_bytes_21() const { return ___configuration_bytes_21; }
	inline ByteU5BU5D_t2520348892** get_address_of_configuration_bytes_21() { return &___configuration_bytes_21; }
	inline void set_configuration_bytes_21(ByteU5BU5D_t2520348892* value)
	{
		___configuration_bytes_21 = value;
		Il2CppCodeGenWriteBarrier((&___configuration_bytes_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINSETUP_T3266304506_H
#ifndef ARGUMENTNULLEXCEPTION_T3991454573_H
#define ARGUMENTNULLEXCEPTION_T3991454573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t3991454573  : public ArgumentException_t2838238932
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T3991454573_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T3703386457_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T3703386457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t3703386457  : public ArgumentException_t2838238932
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t3703386457, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T3703386457_H
#ifndef DIVIDEBYZEROEXCEPTION_T2485197154_H
#define DIVIDEBYZEROEXCEPTION_T2485197154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DivideByZeroException
struct  DivideByZeroException_t2485197154  : public ArithmeticException_t1368081104
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIVIDEBYZEROEXCEPTION_T2485197154_H
#ifndef DECODERFALLBACKEXCEPTION_T899555029_H
#define DECODERFALLBACKEXCEPTION_T899555029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t899555029  : public ArgumentException_t2838238932
{
public:
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t2520348892* ___bytes_unknown_13;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_14;

public:
	inline static int32_t get_offset_of_bytes_unknown_13() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t899555029, ___bytes_unknown_13)); }
	inline ByteU5BU5D_t2520348892* get_bytes_unknown_13() const { return ___bytes_unknown_13; }
	inline ByteU5BU5D_t2520348892** get_address_of_bytes_unknown_13() { return &___bytes_unknown_13; }
	inline void set_bytes_unknown_13(ByteU5BU5D_t2520348892* value)
	{
		___bytes_unknown_13 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_unknown_13), value);
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t899555029, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKEXCEPTION_T899555029_H
#ifndef APPDOMAIN_T2715913892_H
#define APPDOMAIN_T2715913892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomain
struct  AppDomain_t2715913892  : public MarshalByRefObject_t1734858775
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	IntPtr_t ____mono_app_domain_1;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t4007173388 * ____evidence_6;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t1723347566 * ____granted_7;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t3730990605 * ____domain_manager_11;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t1318642941 * ____activation_12;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t329642200 * ____applicationIdentity_13;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t333600113 * ___AssemblyLoad_14;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3784491310 * ___AssemblyResolve_15;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t3463709257 * ___DomainUnload_16;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t3463709257 * ___ProcessExit_17;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3784491310 * ___ResourceResolve_18;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3784491310 * ___TypeResolve_19;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t2002291249 * ___UnhandledException_20;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3784491310 * ___ReflectionOnlyAssemblyResolve_21;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ____mono_app_domain_1)); }
	inline IntPtr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline IntPtr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(IntPtr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ____evidence_6)); }
	inline Evidence_t4007173388 * get__evidence_6() const { return ____evidence_6; }
	inline Evidence_t4007173388 ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(Evidence_t4007173388 * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_6), value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ____granted_7)); }
	inline PermissionSet_t1723347566 * get__granted_7() const { return ____granted_7; }
	inline PermissionSet_t1723347566 ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(PermissionSet_t1723347566 * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((&____granted_7), value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of__domain_manager_11() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ____domain_manager_11)); }
	inline AppDomainManager_t3730990605 * get__domain_manager_11() const { return ____domain_manager_11; }
	inline AppDomainManager_t3730990605 ** get_address_of__domain_manager_11() { return &____domain_manager_11; }
	inline void set__domain_manager_11(AppDomainManager_t3730990605 * value)
	{
		____domain_manager_11 = value;
		Il2CppCodeGenWriteBarrier((&____domain_manager_11), value);
	}

	inline static int32_t get_offset_of__activation_12() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ____activation_12)); }
	inline ActivationContext_t1318642941 * get__activation_12() const { return ____activation_12; }
	inline ActivationContext_t1318642941 ** get_address_of__activation_12() { return &____activation_12; }
	inline void set__activation_12(ActivationContext_t1318642941 * value)
	{
		____activation_12 = value;
		Il2CppCodeGenWriteBarrier((&____activation_12), value);
	}

	inline static int32_t get_offset_of__applicationIdentity_13() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ____applicationIdentity_13)); }
	inline ApplicationIdentity_t329642200 * get__applicationIdentity_13() const { return ____applicationIdentity_13; }
	inline ApplicationIdentity_t329642200 ** get_address_of__applicationIdentity_13() { return &____applicationIdentity_13; }
	inline void set__applicationIdentity_13(ApplicationIdentity_t329642200 * value)
	{
		____applicationIdentity_13 = value;
		Il2CppCodeGenWriteBarrier((&____applicationIdentity_13), value);
	}

	inline static int32_t get_offset_of_AssemblyLoad_14() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ___AssemblyLoad_14)); }
	inline AssemblyLoadEventHandler_t333600113 * get_AssemblyLoad_14() const { return ___AssemblyLoad_14; }
	inline AssemblyLoadEventHandler_t333600113 ** get_address_of_AssemblyLoad_14() { return &___AssemblyLoad_14; }
	inline void set_AssemblyLoad_14(AssemblyLoadEventHandler_t333600113 * value)
	{
		___AssemblyLoad_14 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyLoad_14), value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ___AssemblyResolve_15)); }
	inline ResolveEventHandler_t3784491310 * get_AssemblyResolve_15() const { return ___AssemblyResolve_15; }
	inline ResolveEventHandler_t3784491310 ** get_address_of_AssemblyResolve_15() { return &___AssemblyResolve_15; }
	inline void set_AssemblyResolve_15(ResolveEventHandler_t3784491310 * value)
	{
		___AssemblyResolve_15 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyResolve_15), value);
	}

	inline static int32_t get_offset_of_DomainUnload_16() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ___DomainUnload_16)); }
	inline EventHandler_t3463709257 * get_DomainUnload_16() const { return ___DomainUnload_16; }
	inline EventHandler_t3463709257 ** get_address_of_DomainUnload_16() { return &___DomainUnload_16; }
	inline void set_DomainUnload_16(EventHandler_t3463709257 * value)
	{
		___DomainUnload_16 = value;
		Il2CppCodeGenWriteBarrier((&___DomainUnload_16), value);
	}

	inline static int32_t get_offset_of_ProcessExit_17() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ___ProcessExit_17)); }
	inline EventHandler_t3463709257 * get_ProcessExit_17() const { return ___ProcessExit_17; }
	inline EventHandler_t3463709257 ** get_address_of_ProcessExit_17() { return &___ProcessExit_17; }
	inline void set_ProcessExit_17(EventHandler_t3463709257 * value)
	{
		___ProcessExit_17 = value;
		Il2CppCodeGenWriteBarrier((&___ProcessExit_17), value);
	}

	inline static int32_t get_offset_of_ResourceResolve_18() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ___ResourceResolve_18)); }
	inline ResolveEventHandler_t3784491310 * get_ResourceResolve_18() const { return ___ResourceResolve_18; }
	inline ResolveEventHandler_t3784491310 ** get_address_of_ResourceResolve_18() { return &___ResourceResolve_18; }
	inline void set_ResourceResolve_18(ResolveEventHandler_t3784491310 * value)
	{
		___ResourceResolve_18 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceResolve_18), value);
	}

	inline static int32_t get_offset_of_TypeResolve_19() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ___TypeResolve_19)); }
	inline ResolveEventHandler_t3784491310 * get_TypeResolve_19() const { return ___TypeResolve_19; }
	inline ResolveEventHandler_t3784491310 ** get_address_of_TypeResolve_19() { return &___TypeResolve_19; }
	inline void set_TypeResolve_19(ResolveEventHandler_t3784491310 * value)
	{
		___TypeResolve_19 = value;
		Il2CppCodeGenWriteBarrier((&___TypeResolve_19), value);
	}

	inline static int32_t get_offset_of_UnhandledException_20() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ___UnhandledException_20)); }
	inline UnhandledExceptionEventHandler_t2002291249 * get_UnhandledException_20() const { return ___UnhandledException_20; }
	inline UnhandledExceptionEventHandler_t2002291249 ** get_address_of_UnhandledException_20() { return &___UnhandledException_20; }
	inline void set_UnhandledException_20(UnhandledExceptionEventHandler_t2002291249 * value)
	{
		___UnhandledException_20 = value;
		Il2CppCodeGenWriteBarrier((&___UnhandledException_20), value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_21() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892, ___ReflectionOnlyAssemblyResolve_21)); }
	inline ResolveEventHandler_t3784491310 * get_ReflectionOnlyAssemblyResolve_21() const { return ___ReflectionOnlyAssemblyResolve_21; }
	inline ResolveEventHandler_t3784491310 ** get_address_of_ReflectionOnlyAssemblyResolve_21() { return &___ReflectionOnlyAssemblyResolve_21; }
	inline void set_ReflectionOnlyAssemblyResolve_21(ResolveEventHandler_t3784491310 * value)
	{
		___ReflectionOnlyAssemblyResolve_21 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectionOnlyAssemblyResolve_21), value);
	}
};

struct AppDomain_t2715913892_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t2715913892 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((&____process_guid_2), value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892_StaticFields, ___default_domain_10)); }
	inline AppDomain_t2715913892 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t2715913892 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t2715913892 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((&___default_domain_10), value);
	}
};

struct AppDomain_t2715913892_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t1483218075 * ___type_resolve_in_progress_3;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t1483218075 * ___assembly_resolve_in_progress_4;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t1483218075 * ___assembly_resolve_in_progress_refonly_5;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	RuntimeObject* ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Hashtable_t1483218075 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Hashtable_t1483218075 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Hashtable_t1483218075 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_resolve_in_progress_3), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Hashtable_t1483218075 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Hashtable_t1483218075 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Hashtable_t1483218075 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_4), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Hashtable_t1483218075 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Hashtable_t1483218075 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Hashtable_t1483218075 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_refonly_5), value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t2715913892_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject* get__principal_9() const { return ____principal_9; }
	inline RuntimeObject** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject* value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((&____principal_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAIN_T2715913892_H
#ifndef MUTEX_T3354268889_H
#define MUTEX_T3354268889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Mutex
struct  Mutex_t3354268889  : public WaitHandle_t2549181783
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MUTEX_T3354268889_H
#ifndef ENCODERFALLBACKEXCEPTION_T3809527649_H
#define ENCODERFALLBACKEXCEPTION_T3809527649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t3809527649  : public ArgumentException_t2838238932
{
public:
	// System.Char System.Text.EncoderFallbackException::char_unknown
	Il2CppChar ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	Il2CppChar ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	Il2CppChar ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_char_unknown_13() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3809527649, ___char_unknown_13)); }
	inline Il2CppChar get_char_unknown_13() const { return ___char_unknown_13; }
	inline Il2CppChar* get_address_of_char_unknown_13() { return &___char_unknown_13; }
	inline void set_char_unknown_13(Il2CppChar value)
	{
		___char_unknown_13 = value;
	}

	inline static int32_t get_offset_of_char_unknown_high_14() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3809527649, ___char_unknown_high_14)); }
	inline Il2CppChar get_char_unknown_high_14() const { return ___char_unknown_high_14; }
	inline Il2CppChar* get_address_of_char_unknown_high_14() { return &___char_unknown_high_14; }
	inline void set_char_unknown_high_14(Il2CppChar value)
	{
		___char_unknown_high_14 = value;
	}

	inline static int32_t get_offset_of_char_unknown_low_15() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3809527649, ___char_unknown_low_15)); }
	inline Il2CppChar get_char_unknown_low_15() const { return ___char_unknown_low_15; }
	inline Il2CppChar* get_address_of_char_unknown_low_15() { return &___char_unknown_low_15; }
	inline void set_char_unknown_low_15(Il2CppChar value)
	{
		___char_unknown_low_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3809527649, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T3809527649_H
#ifndef THREAD_T913257391_H
#define THREAD_T913257391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t913257391  : public CriticalFinalizerObject_t3932958251
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	IntPtr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	IntPtr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	IntPtr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	IntPtr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	IntPtr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	UIntPtr_t  ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	IntPtr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	IntPtr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	IntPtr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	IntPtr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	IntPtr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	IntPtr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	IntPtr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	IntPtr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	IntPtr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	IntPtr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	IntPtr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t455876223 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	IntPtr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	IntPtr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	IntPtr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	IntPtr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	IntPtr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t1661715453 * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___system_thread_handle_1)); }
	inline IntPtr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline IntPtr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(IntPtr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___unused0_3)); }
	inline IntPtr_t get_unused0_3() const { return ___unused0_3; }
	inline IntPtr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(IntPtr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___name_5)); }
	inline IntPtr_t get_name_5() const { return ___name_5; }
	inline IntPtr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(IntPtr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___start_notify_11)); }
	inline IntPtr_t get_start_notify_11() const { return ___start_notify_11; }
	inline IntPtr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(IntPtr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___stack_ptr_12)); }
	inline IntPtr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline IntPtr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(IntPtr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___static_data_13)); }
	inline UIntPtr_t  get_static_data_13() const { return ___static_data_13; }
	inline UIntPtr_t * get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(UIntPtr_t  value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___jit_data_14)); }
	inline IntPtr_t get_jit_data_14() const { return ___jit_data_14; }
	inline IntPtr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(IntPtr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___lock_data_15)); }
	inline IntPtr_t get_lock_data_15() const { return ___lock_data_15; }
	inline IntPtr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(IntPtr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___appdomain_refs_19)); }
	inline IntPtr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline IntPtr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(IntPtr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___suspend_event_21)); }
	inline IntPtr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline IntPtr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(IntPtr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___suspended_event_22)); }
	inline IntPtr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline IntPtr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(IntPtr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___resume_event_23)); }
	inline IntPtr_t get_resume_event_23() const { return ___resume_event_23; }
	inline IntPtr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(IntPtr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___synch_cs_24)); }
	inline IntPtr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline IntPtr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(IntPtr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___serialized_culture_info_25)); }
	inline IntPtr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline IntPtr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(IntPtr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___serialized_ui_culture_info_27)); }
	inline IntPtr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline IntPtr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(IntPtr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___end_stack_30)); }
	inline IntPtr_t get_end_stack_30() const { return ___end_stack_30; }
	inline IntPtr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(IntPtr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___manage_callback_35)); }
	inline IntPtr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline IntPtr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(IntPtr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___ec_to_set_37)); }
	inline ExecutionContext_t455876223 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t455876223 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t455876223 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___interrupt_on_stop_38)); }
	inline IntPtr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline IntPtr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(IntPtr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___unused3_39)); }
	inline IntPtr_t get_unused3_39() const { return ___unused3_39; }
	inline IntPtr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(IntPtr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___unused4_40)); }
	inline IntPtr_t get_unused4_40() const { return ___unused4_40; }
	inline IntPtr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(IntPtr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___unused5_41)); }
	inline IntPtr_t get_unused5_41() const { return ___unused5_41; }
	inline IntPtr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(IntPtr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___unused6_42)); }
	inline IntPtr_t get_unused6_42() const { return ___unused6_42; }
	inline IntPtr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(IntPtr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___threadstart_45)); }
	inline MulticastDelegate_t1661715453 * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t1661715453 ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t1661715453 * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t913257391, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t913257391, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t913257391_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t1483218075 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t913257391_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t1483218075 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t1483218075 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t1483218075 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t913257391_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t913257391_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t913257391_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t2567097575* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t455876223 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t913257391_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t2567097575* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t2567097575** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t2567097575* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t913257391_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t455876223 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t455876223 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t455876223 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T913257391_H
#ifndef DLLNOTFOUNDEXCEPTION_T4076453040_H
#define DLLNOTFOUNDEXCEPTION_T4076453040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t4076453040  : public TypeLoadException_t1148660815
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T4076453040_H
#ifndef FIELDACCESSEXCEPTION_T4243668534_H
#define FIELDACCESSEXCEPTION_T4243668534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t4243668534  : public MemberAccessException_t472422236
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T4243668534_H
#ifndef ENTRYPOINTNOTFOUNDEXCEPTION_T239709731_H
#define ENTRYPOINTNOTFOUNDEXCEPTION_T239709731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EntryPointNotFoundException
struct  EntryPointNotFoundException_t239709731  : public TypeLoadException_t1148660815
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRYPOINTNOTFOUNDEXCEPTION_T239709731_H
#ifndef DATETIMEOFFSET_T1944241601_H
#define DATETIMEOFFSET_T1944241601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t1944241601 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t1247539198  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t2173167234  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1944241601, ___dt_2)); }
	inline DateTime_t1247539198  get_dt_2() const { return ___dt_2; }
	inline DateTime_t1247539198 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t1247539198  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1944241601, ___utc_offset_3)); }
	inline TimeSpan_t2173167234  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t2173167234 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t2173167234  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t1944241601_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t1944241601  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t1944241601  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1944241601_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t1944241601  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t1944241601 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t1944241601  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1944241601_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t1944241601  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t1944241601 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t1944241601  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T1944241601_H
#ifndef MANUALRESETEVENT_T1825051709_H
#define MANUALRESETEVENT_T1825051709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t1825051709  : public EventWaitHandle_t1063736628
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T1825051709_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize700 = { sizeof (UnverifiableCodeAttribute_t2034234350), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize701 = { sizeof (ASCIIEncoding_t911427953), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize702 = { sizeof (Decoder_t413484855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable702[2] = 
{
	Decoder_t413484855::get_offset_of_fallback_0(),
	Decoder_t413484855::get_offset_of_fallback_buffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize703 = { sizeof (DecoderExceptionFallback_t236610030), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize704 = { sizeof (DecoderExceptionFallbackBuffer_t2722036058), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize705 = { sizeof (DecoderFallback_t135983394), -1, sizeof(DecoderFallback_t135983394_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable705[3] = 
{
	DecoderFallback_t135983394_StaticFields::get_offset_of_exception_fallback_0(),
	DecoderFallback_t135983394_StaticFields::get_offset_of_replacement_fallback_1(),
	DecoderFallback_t135983394_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize706 = { sizeof (DecoderFallbackBuffer_t2008811809), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize707 = { sizeof (DecoderFallbackException_t899555029), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable707[2] = 
{
	DecoderFallbackException_t899555029::get_offset_of_bytes_unknown_13(),
	DecoderFallbackException_t899555029::get_offset_of_index_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize708 = { sizeof (DecoderReplacementFallback_t2117190952), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable708[1] = 
{
	DecoderReplacementFallback_t2117190952::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize709 = { sizeof (DecoderReplacementFallbackBuffer_t10334361), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable709[3] = 
{
	DecoderReplacementFallbackBuffer_t10334361::get_offset_of_fallback_assigned_0(),
	DecoderReplacementFallbackBuffer_t10334361::get_offset_of_current_1(),
	DecoderReplacementFallbackBuffer_t10334361::get_offset_of_replacement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize710 = { sizeof (EncoderExceptionFallback_t1678832318), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize711 = { sizeof (EncoderExceptionFallbackBuffer_t3727867348), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize712 = { sizeof (EncoderFallback_t592617248), -1, sizeof(EncoderFallback_t592617248_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable712[3] = 
{
	EncoderFallback_t592617248_StaticFields::get_offset_of_exception_fallback_0(),
	EncoderFallback_t592617248_StaticFields::get_offset_of_replacement_fallback_1(),
	EncoderFallback_t592617248_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize713 = { sizeof (EncoderFallbackBuffer_t3708309887), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize714 = { sizeof (EncoderFallbackException_t3809527649), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable714[4] = 
{
	EncoderFallbackException_t3809527649::get_offset_of_char_unknown_13(),
	EncoderFallbackException_t3809527649::get_offset_of_char_unknown_high_14(),
	EncoderFallbackException_t3809527649::get_offset_of_char_unknown_low_15(),
	EncoderFallbackException_t3809527649::get_offset_of_index_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize715 = { sizeof (EncoderReplacementFallback_t274475085), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable715[1] = 
{
	EncoderReplacementFallback_t274475085::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize716 = { sizeof (EncoderReplacementFallbackBuffer_t1116363435), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable716[3] = 
{
	EncoderReplacementFallbackBuffer_t1116363435::get_offset_of_replacement_0(),
	EncoderReplacementFallbackBuffer_t1116363435::get_offset_of_current_1(),
	EncoderReplacementFallbackBuffer_t1116363435::get_offset_of_fallback_assigned_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize717 = { sizeof (Encoding_t1073075776), -1, sizeof(Encoding_t1073075776_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable717[28] = 
{
	Encoding_t1073075776::get_offset_of_codePage_0(),
	Encoding_t1073075776::get_offset_of_windows_code_page_1(),
	Encoding_t1073075776::get_offset_of_is_readonly_2(),
	Encoding_t1073075776::get_offset_of_decoder_fallback_3(),
	Encoding_t1073075776::get_offset_of_encoder_fallback_4(),
	Encoding_t1073075776_StaticFields::get_offset_of_i18nAssembly_5(),
	Encoding_t1073075776_StaticFields::get_offset_of_i18nDisabled_6(),
	Encoding_t1073075776_StaticFields::get_offset_of_encodings_7(),
	Encoding_t1073075776::get_offset_of_body_name_8(),
	Encoding_t1073075776::get_offset_of_encoding_name_9(),
	Encoding_t1073075776::get_offset_of_header_name_10(),
	Encoding_t1073075776::get_offset_of_is_mail_news_display_11(),
	Encoding_t1073075776::get_offset_of_is_mail_news_save_12(),
	Encoding_t1073075776::get_offset_of_is_browser_save_13(),
	Encoding_t1073075776::get_offset_of_is_browser_display_14(),
	Encoding_t1073075776::get_offset_of_web_name_15(),
	Encoding_t1073075776_StaticFields::get_offset_of_asciiEncoding_16(),
	Encoding_t1073075776_StaticFields::get_offset_of_bigEndianEncoding_17(),
	Encoding_t1073075776_StaticFields::get_offset_of_defaultEncoding_18(),
	Encoding_t1073075776_StaticFields::get_offset_of_utf7Encoding_19(),
	Encoding_t1073075776_StaticFields::get_offset_of_utf8EncodingWithMarkers_20(),
	Encoding_t1073075776_StaticFields::get_offset_of_utf8EncodingWithoutMarkers_21(),
	Encoding_t1073075776_StaticFields::get_offset_of_unicodeEncoding_22(),
	Encoding_t1073075776_StaticFields::get_offset_of_isoLatin1Encoding_23(),
	Encoding_t1073075776_StaticFields::get_offset_of_utf8EncodingUnsafe_24(),
	Encoding_t1073075776_StaticFields::get_offset_of_utf32Encoding_25(),
	Encoding_t1073075776_StaticFields::get_offset_of_bigEndianUTF32Encoding_26(),
	Encoding_t1073075776_StaticFields::get_offset_of_lockobj_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize718 = { sizeof (ForwardingDecoder_t285474153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable718[1] = 
{
	ForwardingDecoder_t285474153::get_offset_of_encoding_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize719 = { sizeof (Latin1Encoding_t2293285647), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize720 = { sizeof (StringBuilder_t3992995287), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable720[5] = 
{
	0,
	StringBuilder_t3992995287::get_offset_of__length_1(),
	StringBuilder_t3992995287::get_offset_of__str_2(),
	StringBuilder_t3992995287::get_offset_of__cached_str_3(),
	StringBuilder_t3992995287::get_offset_of__maxCapacity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize721 = { sizeof (UTF32Encoding_t311764800), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable721[2] = 
{
	UTF32Encoding_t311764800::get_offset_of_bigEndian_28(),
	UTF32Encoding_t311764800::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize722 = { sizeof (UTF32Decoder_t2113227034), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable722[3] = 
{
	UTF32Decoder_t2113227034::get_offset_of_bigEndian_2(),
	UTF32Decoder_t2113227034::get_offset_of_leftOverByte_3(),
	UTF32Decoder_t2113227034::get_offset_of_leftOverLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize723 = { sizeof (UTF7Encoding_t1090204744), -1, sizeof(UTF7Encoding_t1090204744_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable723[3] = 
{
	UTF7Encoding_t1090204744::get_offset_of_allowOptionals_28(),
	UTF7Encoding_t1090204744_StaticFields::get_offset_of_encodingRules_29(),
	UTF7Encoding_t1090204744_StaticFields::get_offset_of_base64Values_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize724 = { sizeof (UTF7Decoder_t900261193), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable724[1] = 
{
	UTF7Decoder_t900261193::get_offset_of_leftOver_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize725 = { sizeof (UTF8Encoding_t1660712002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable725[1] = 
{
	UTF8Encoding_t1660712002::get_offset_of_emitIdentifier_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize726 = { sizeof (UTF8Decoder_t584166830), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable726[2] = 
{
	UTF8Decoder_t584166830::get_offset_of_leftOverBits_2(),
	UTF8Decoder_t584166830::get_offset_of_leftOverCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize727 = { sizeof (UnicodeEncoding_t3870843104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable727[2] = 
{
	UnicodeEncoding_t3870843104::get_offset_of_bigEndian_28(),
	UnicodeEncoding_t3870843104::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize728 = { sizeof (UnicodeDecoder_t1111517482), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable728[2] = 
{
	UnicodeDecoder_t1111517482::get_offset_of_bigEndian_2(),
	UnicodeDecoder_t1111517482::get_offset_of_leftOverByte_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize729 = { sizeof (CompressedStack_t3359923022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable729[1] = 
{
	CompressedStack_t3359923022::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize730 = { sizeof (EventResetMode_t2448867145)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable730[3] = 
{
	EventResetMode_t2448867145::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize731 = { sizeof (EventWaitHandle_t1063736628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize732 = { sizeof (ExecutionContext_t455876223), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable732[3] = 
{
	ExecutionContext_t455876223::get_offset_of__sc_0(),
	ExecutionContext_t455876223::get_offset_of__suppressFlow_1(),
	ExecutionContext_t455876223::get_offset_of__capture_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize733 = { sizeof (Interlocked_t2864106066), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize734 = { sizeof (ManualResetEvent_t1825051709), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize735 = { sizeof (Monitor_t1404119340), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize736 = { sizeof (Mutex_t3354268889), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize737 = { sizeof (NativeEventCalls_t472579942), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize738 = { sizeof (SynchronizationContext_t1857609859), -1, 0, sizeof(SynchronizationContext_t1857609859_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable738[1] = 
{
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize739 = { sizeof (SynchronizationLockException_t1839137274), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize740 = { sizeof (Thread_t913257391), -1, sizeof(Thread_t913257391_StaticFields), sizeof(Thread_t913257391_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable740[52] = 
{
	Thread_t913257391::get_offset_of_lock_thread_id_0(),
	Thread_t913257391::get_offset_of_system_thread_handle_1(),
	Thread_t913257391::get_offset_of_cached_culture_info_2(),
	Thread_t913257391::get_offset_of_unused0_3(),
	Thread_t913257391::get_offset_of_threadpool_thread_4(),
	Thread_t913257391::get_offset_of_name_5(),
	Thread_t913257391::get_offset_of_name_len_6(),
	Thread_t913257391::get_offset_of_state_7(),
	Thread_t913257391::get_offset_of_abort_exc_8(),
	Thread_t913257391::get_offset_of_abort_state_handle_9(),
	Thread_t913257391::get_offset_of_thread_id_10(),
	Thread_t913257391::get_offset_of_start_notify_11(),
	Thread_t913257391::get_offset_of_stack_ptr_12(),
	Thread_t913257391::get_offset_of_static_data_13(),
	Thread_t913257391::get_offset_of_jit_data_14(),
	Thread_t913257391::get_offset_of_lock_data_15(),
	Thread_t913257391::get_offset_of_current_appcontext_16(),
	Thread_t913257391::get_offset_of_stack_size_17(),
	Thread_t913257391::get_offset_of_start_obj_18(),
	Thread_t913257391::get_offset_of_appdomain_refs_19(),
	Thread_t913257391::get_offset_of_interruption_requested_20(),
	Thread_t913257391::get_offset_of_suspend_event_21(),
	Thread_t913257391::get_offset_of_suspended_event_22(),
	Thread_t913257391::get_offset_of_resume_event_23(),
	Thread_t913257391::get_offset_of_synch_cs_24(),
	Thread_t913257391::get_offset_of_serialized_culture_info_25(),
	Thread_t913257391::get_offset_of_serialized_culture_info_len_26(),
	Thread_t913257391::get_offset_of_serialized_ui_culture_info_27(),
	Thread_t913257391::get_offset_of_serialized_ui_culture_info_len_28(),
	Thread_t913257391::get_offset_of_thread_dump_requested_29(),
	Thread_t913257391::get_offset_of_end_stack_30(),
	Thread_t913257391::get_offset_of_thread_interrupt_requested_31(),
	Thread_t913257391::get_offset_of_apartment_state_32(),
	Thread_t913257391::get_offset_of_critical_region_level_33(),
	Thread_t913257391::get_offset_of_small_id_34(),
	Thread_t913257391::get_offset_of_manage_callback_35(),
	Thread_t913257391::get_offset_of_pending_exception_36(),
	Thread_t913257391::get_offset_of_ec_to_set_37(),
	Thread_t913257391::get_offset_of_interrupt_on_stop_38(),
	Thread_t913257391::get_offset_of_unused3_39(),
	Thread_t913257391::get_offset_of_unused4_40(),
	Thread_t913257391::get_offset_of_unused5_41(),
	Thread_t913257391::get_offset_of_unused6_42(),
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
	Thread_t913257391::get_offset_of_threadstart_45(),
	Thread_t913257391::get_offset_of_managed_id_46(),
	Thread_t913257391::get_offset_of__principal_47(),
	Thread_t913257391_StaticFields::get_offset_of_datastorehash_48(),
	Thread_t913257391_StaticFields::get_offset_of_datastore_lock_49(),
	Thread_t913257391::get_offset_of_in_currentculture_50(),
	Thread_t913257391_StaticFields::get_offset_of_culture_lock_51(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize741 = { sizeof (ThreadAbortException_t1041477508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize742 = { sizeof (ThreadInterruptedException_t40341697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize743 = { sizeof (ThreadPool_t1285729536), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize744 = { sizeof (ThreadState_t705250008)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable744[11] = 
{
	ThreadState_t705250008::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize745 = { sizeof (ThreadStateException_t1849752972), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize746 = { sizeof (Timer_t2875225950), -1, sizeof(Timer_t2875225950_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable746[7] = 
{
	Timer_t2875225950_StaticFields::get_offset_of_scheduler_1(),
	Timer_t2875225950::get_offset_of_callback_2(),
	Timer_t2875225950::get_offset_of_state_3(),
	Timer_t2875225950::get_offset_of_due_time_ms_4(),
	Timer_t2875225950::get_offset_of_period_ms_5(),
	Timer_t2875225950::get_offset_of_next_run_6(),
	Timer_t2875225950::get_offset_of_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize747 = { sizeof (TimerComparer_t495707636), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize748 = { sizeof (Scheduler_t1560077808), -1, sizeof(Scheduler_t1560077808_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable748[2] = 
{
	Scheduler_t1560077808_StaticFields::get_offset_of_instance_0(),
	Scheduler_t1560077808::get_offset_of_list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize749 = { sizeof (WaitHandle_t2549181783), -1, sizeof(WaitHandle_t2549181783_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable749[4] = 
{
	0,
	WaitHandle_t2549181783::get_offset_of_safe_wait_handle_2(),
	WaitHandle_t2549181783_StaticFields::get_offset_of_InvalidHandle_3(),
	WaitHandle_t2549181783::get_offset_of_disposed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize750 = { sizeof (AccessViolationException_t2359765240), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize751 = { sizeof (ActivationContext_t1318642941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable751[1] = 
{
	ActivationContext_t1318642941::get_offset_of__disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize752 = { sizeof (Activator_t3864706677), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize753 = { sizeof (AppDomain_t2715913892), -1, sizeof(AppDomain_t2715913892_StaticFields), sizeof(AppDomain_t2715913892_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable753[21] = 
{
	AppDomain_t2715913892::get_offset_of__mono_app_domain_1(),
	AppDomain_t2715913892_StaticFields::get_offset_of__process_guid_2(),
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
	AppDomain_t2715913892::get_offset_of__evidence_6(),
	AppDomain_t2715913892::get_offset_of__granted_7(),
	AppDomain_t2715913892::get_offset_of__principalPolicy_8(),
	THREAD_STATIC_FIELD_OFFSET,
	AppDomain_t2715913892_StaticFields::get_offset_of_default_domain_10(),
	AppDomain_t2715913892::get_offset_of__domain_manager_11(),
	AppDomain_t2715913892::get_offset_of__activation_12(),
	AppDomain_t2715913892::get_offset_of__applicationIdentity_13(),
	AppDomain_t2715913892::get_offset_of_AssemblyLoad_14(),
	AppDomain_t2715913892::get_offset_of_AssemblyResolve_15(),
	AppDomain_t2715913892::get_offset_of_DomainUnload_16(),
	AppDomain_t2715913892::get_offset_of_ProcessExit_17(),
	AppDomain_t2715913892::get_offset_of_ResourceResolve_18(),
	AppDomain_t2715913892::get_offset_of_TypeResolve_19(),
	AppDomain_t2715913892::get_offset_of_UnhandledException_20(),
	AppDomain_t2715913892::get_offset_of_ReflectionOnlyAssemblyResolve_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize754 = { sizeof (AppDomainManager_t3730990605), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize755 = { sizeof (AppDomainSetup_t3266304506), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable755[22] = 
{
	AppDomainSetup_t3266304506::get_offset_of_application_base_0(),
	AppDomainSetup_t3266304506::get_offset_of_application_name_1(),
	AppDomainSetup_t3266304506::get_offset_of_cache_path_2(),
	AppDomainSetup_t3266304506::get_offset_of_configuration_file_3(),
	AppDomainSetup_t3266304506::get_offset_of_dynamic_base_4(),
	AppDomainSetup_t3266304506::get_offset_of_license_file_5(),
	AppDomainSetup_t3266304506::get_offset_of_private_bin_path_6(),
	AppDomainSetup_t3266304506::get_offset_of_private_bin_path_probe_7(),
	AppDomainSetup_t3266304506::get_offset_of_shadow_copy_directories_8(),
	AppDomainSetup_t3266304506::get_offset_of_shadow_copy_files_9(),
	AppDomainSetup_t3266304506::get_offset_of_publisher_policy_10(),
	AppDomainSetup_t3266304506::get_offset_of_path_changed_11(),
	AppDomainSetup_t3266304506::get_offset_of_loader_optimization_12(),
	AppDomainSetup_t3266304506::get_offset_of_disallow_binding_redirects_13(),
	AppDomainSetup_t3266304506::get_offset_of_disallow_code_downloads_14(),
	AppDomainSetup_t3266304506::get_offset_of__activationArguments_15(),
	AppDomainSetup_t3266304506::get_offset_of_domain_initializer_16(),
	AppDomainSetup_t3266304506::get_offset_of_application_trust_17(),
	AppDomainSetup_t3266304506::get_offset_of_domain_initializer_args_18(),
	AppDomainSetup_t3266304506::get_offset_of_application_trust_xml_19(),
	AppDomainSetup_t3266304506::get_offset_of_disallow_appbase_probe_20(),
	AppDomainSetup_t3266304506::get_offset_of_configuration_bytes_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize756 = { sizeof (ApplicationException_t4242661788), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize757 = { sizeof (ApplicationIdentity_t329642200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable757[1] = 
{
	ApplicationIdentity_t329642200::get_offset_of__fullName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize758 = { sizeof (ArgumentException_t2838238932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable758[2] = 
{
	0,
	ArgumentException_t2838238932::get_offset_of_param_name_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize759 = { sizeof (ArgumentNullException_t3991454573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable759[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize760 = { sizeof (ArgumentOutOfRangeException_t3703386457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable760[1] = 
{
	ArgumentOutOfRangeException_t3703386457::get_offset_of_actual_value_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize761 = { sizeof (ArithmeticException_t1368081104), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize762 = { sizeof (ArrayTypeMismatchException_t4139495929), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable762[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize763 = { sizeof (AssemblyLoadEventArgs_t1137539076), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize764 = { sizeof (AttributeTargets_t671470811)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable764[17] = 
{
	AttributeTargets_t671470811::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize765 = { sizeof (BitConverter_t260879805), -1, sizeof(BitConverter_t260879805_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable765[2] = 
{
	BitConverter_t260879805_StaticFields::get_offset_of_SwappedWordsInDouble_0(),
	BitConverter_t260879805_StaticFields::get_offset_of_IsLittleEndian_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize766 = { sizeof (Buffer_t2150752011), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize767 = { sizeof (CharEnumerator_t1450740294), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable767[3] = 
{
	CharEnumerator_t1450740294::get_offset_of_str_0(),
	CharEnumerator_t1450740294::get_offset_of_index_1(),
	CharEnumerator_t1450740294::get_offset_of_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize768 = { sizeof (Console_t2047569967), -1, sizeof(Console_t2047569967_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable768[5] = 
{
	Console_t2047569967_StaticFields::get_offset_of_stdout_0(),
	Console_t2047569967_StaticFields::get_offset_of_stderr_1(),
	Console_t2047569967_StaticFields::get_offset_of_stdin_2(),
	Console_t2047569967_StaticFields::get_offset_of_inputEncoding_3(),
	Console_t2047569967_StaticFields::get_offset_of_outputEncoding_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize769 = { sizeof (ContextBoundObject_t2154760309), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize770 = { sizeof (Convert_t2276340134), -1, sizeof(Convert_t2276340134_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable770[2] = 
{
	Convert_t2276340134_StaticFields::get_offset_of_DBNull_0(),
	Convert_t2276340134_StaticFields::get_offset_of_conversionTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize771 = { sizeof (DBNull_t1678427962), -1, sizeof(DBNull_t1678427962_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable771[1] = 
{
	DBNull_t1678427962_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize772 = { sizeof (DateTime_t1247539198)+ sizeof (RuntimeObject), -1, sizeof(DateTime_t1247539198_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable772[15] = 
{
	DateTime_t1247539198::get_offset_of_ticks_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t1247539198::get_offset_of_kind_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t1247539198_StaticFields::get_offset_of_MaxValue_2(),
	DateTime_t1247539198_StaticFields::get_offset_of_MinValue_3(),
	DateTime_t1247539198_StaticFields::get_offset_of_ParseTimeFormats_4(),
	DateTime_t1247539198_StaticFields::get_offset_of_ParseYearDayMonthFormats_5(),
	DateTime_t1247539198_StaticFields::get_offset_of_ParseYearMonthDayFormats_6(),
	DateTime_t1247539198_StaticFields::get_offset_of_ParseDayMonthYearFormats_7(),
	DateTime_t1247539198_StaticFields::get_offset_of_ParseMonthDayYearFormats_8(),
	DateTime_t1247539198_StaticFields::get_offset_of_MonthDayShortFormats_9(),
	DateTime_t1247539198_StaticFields::get_offset_of_DayMonthShortFormats_10(),
	DateTime_t1247539198_StaticFields::get_offset_of_daysmonth_11(),
	DateTime_t1247539198_StaticFields::get_offset_of_daysmonthleap_12(),
	DateTime_t1247539198_StaticFields::get_offset_of_to_local_time_span_object_13(),
	DateTime_t1247539198_StaticFields::get_offset_of_last_now_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize773 = { sizeof (Which_t3724722241)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable773[5] = 
{
	Which_t3724722241::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize774 = { sizeof (DateTimeKind_t4275604547)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable774[4] = 
{
	DateTimeKind_t4275604547::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize775 = { sizeof (DateTimeOffset_t1944241601)+ sizeof (RuntimeObject), -1, sizeof(DateTimeOffset_t1944241601_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable775[4] = 
{
	DateTimeOffset_t1944241601_StaticFields::get_offset_of_MaxValue_0(),
	DateTimeOffset_t1944241601_StaticFields::get_offset_of_MinValue_1(),
	DateTimeOffset_t1944241601::get_offset_of_dt_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeOffset_t1944241601::get_offset_of_utc_offset_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize776 = { sizeof (DateTimeUtils_t3795274370), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize777 = { sizeof (DayOfWeek_t877392230)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable777[8] = 
{
	DayOfWeek_t877392230::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize778 = { sizeof (DelegateData_t1323899958), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable778[2] = 
{
	DelegateData_t1323899958::get_offset_of_target_type_0(),
	DelegateData_t1323899958::get_offset_of_method_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize779 = { sizeof (DelegateSerializationHolder_t3785161812), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable779[1] = 
{
	DelegateSerializationHolder_t3785161812::get_offset_of__delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize780 = { sizeof (DelegateEntry_t1628653003), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable780[7] = 
{
	DelegateEntry_t1628653003::get_offset_of_type_0(),
	DelegateEntry_t1628653003::get_offset_of_assembly_1(),
	DelegateEntry_t1628653003::get_offset_of_target_2(),
	DelegateEntry_t1628653003::get_offset_of_targetTypeAssembly_3(),
	DelegateEntry_t1628653003::get_offset_of_targetTypeName_4(),
	DelegateEntry_t1628653003::get_offset_of_methodName_5(),
	DelegateEntry_t1628653003::get_offset_of_delegateEntry_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize781 = { sizeof (DivideByZeroException_t2485197154), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable781[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize782 = { sizeof (DllNotFoundException_t4076453040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable782[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize783 = { sizeof (EntryPointNotFoundException_t239709731), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable783[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize784 = { sizeof (MonoEnumInfo_t1594683814)+ sizeof (RuntimeObject), -1, sizeof(MonoEnumInfo_t1594683814_StaticFields), sizeof(MonoEnumInfo_t1594683814_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable784[11] = 
{
	MonoEnumInfo_t1594683814::get_offset_of_utype_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t1594683814::get_offset_of_values_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t1594683814::get_offset_of_names_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t1594683814::get_offset_of_name_hash_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	THREAD_STATIC_FIELD_OFFSET,
	MonoEnumInfo_t1594683814_StaticFields::get_offset_of_global_cache_5(),
	MonoEnumInfo_t1594683814_StaticFields::get_offset_of_global_cache_monitor_6(),
	MonoEnumInfo_t1594683814_StaticFields::get_offset_of_sbyte_comparer_7(),
	MonoEnumInfo_t1594683814_StaticFields::get_offset_of_short_comparer_8(),
	MonoEnumInfo_t1594683814_StaticFields::get_offset_of_int_comparer_9(),
	MonoEnumInfo_t1594683814_StaticFields::get_offset_of_long_comparer_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize785 = { sizeof (SByteComparer_t3212635331), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize786 = { sizeof (ShortComparer_t3235469011), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize787 = { sizeof (IntComparer_t182263962), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize788 = { sizeof (LongComparer_t4253707543), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize789 = { sizeof (Environment_t1182074395), -1, sizeof(Environment_t1182074395_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable789[2] = 
{
	0,
	Environment_t1182074395_StaticFields::get_offset_of_os_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize790 = { sizeof (SpecialFolder_t3467977614)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable790[24] = 
{
	SpecialFolder_t3467977614::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize791 = { sizeof (EventArgs_t3107323352), -1, sizeof(EventArgs_t3107323352_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable791[1] = 
{
	EventArgs_t3107323352_StaticFields::get_offset_of_Empty_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize792 = { sizeof (ExecutionEngineException_t1487831960), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize793 = { sizeof (FieldAccessException_t4243668534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize794 = { sizeof (FlagsAttribute_t1648512434), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize795 = { sizeof (FormatException_t896983953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable795[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize796 = { sizeof (GC_t2410061673), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize797 = { sizeof (Guid_t)+ sizeof (RuntimeObject), sizeof(Guid_t ), sizeof(Guid_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable797[14] = 
{
	Guid_t::get_offset_of__a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__d_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__e_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__f_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__g_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__h_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__i_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__j_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__k_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t_StaticFields::get_offset_of_Empty_11(),
	Guid_t_StaticFields::get_offset_of__rngAccess_12(),
	Guid_t_StaticFields::get_offset_of__rng_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize798 = { sizeof (GuidParser_t1838895295), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable798[3] = 
{
	GuidParser_t1838895295::get_offset_of__src_0(),
	GuidParser_t1838895295::get_offset_of__length_1(),
	GuidParser_t1838895295::get_offset_of__cur_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize799 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
