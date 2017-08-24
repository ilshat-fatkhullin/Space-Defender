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

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t1875918777;
// UnityEngineInternal.GenericStack
struct GenericStack_t2285631481;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t1995782794;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t1673903395;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1395634968;
// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct RequestAtlasCallback_t4219266798;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t4057812809;
// System.IntPtr[]
struct IntPtrU5BU5D_t2420964824;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t3711481620;
// UnityEngine.Texture
struct Texture_t2261499199;
// System.Char[]
struct CharU5BU5D_t1543044620;
// System.Void
struct Void_t1046261912;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t724145691;
// UnityEngine.GUIStyle
struct GUIStyle_t3682286417;
// UnityEngine.Texture2D
struct Texture2D_t1286955917;
// System.Action
struct Action_t3831797981;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t3263998812;
// System.Func`2<System.Exception,System.Boolean>
struct Func_2_t527133730;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1323899958;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t3984447632;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t1388224368;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t2876653048;
// UnityEngine.Collider2D
struct Collider2D_t2763227762;
// UnityEngine.Collider
struct Collider_t2628297314;
// System.String[]
struct StringU5BU5D_t328472698;
// System.Int32[]
struct Int32U5BU5D_t774821850;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t4191328092;
// UnityEngine.GUIContent
struct GUIContent_t1779043998;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t4084513124;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t3362020340;
// System.Action`1<UnityEngine.Font>
struct Action_1_t1771024396;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2790002797;
// UnityEngine.Object
struct Object_t2748336099;
// UnityEngine.AnimationState
struct AnimationState_t4237697442;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t2267125456;
// UnityEngine.RectOffset
struct RectOffset_t2389311507;
// UnityEngine.GUIStyleState
struct GUIStyleState_t3156549051;
// UnityEngine.Font
struct Font_t7410343;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t2430045607;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1409390338;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t3407446582;
// System.IAsyncResult
struct IAsyncResult_t1563141617;
// System.AsyncCallback
struct AsyncCallback_t1962123760;
// UnityEngine.GUISkin
struct GUISkin_t1491476989;
// System.Single[]
struct SingleU5BU5D_t1100208152;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2265907276;
// UnityEngine.GUISettings
struct GUISettings_t1311439069;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t1537193233;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t1366627815;
// UnityEngine.RectTransform
struct RectTransform_t4043262713;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t386148385;

struct GUIStyle_t3682286417_marshaled_pinvoke;
struct GUIStyle_t3682286417_marshaled_com;
struct ContactPoint2D_t3687663125 ;
struct Object_t2748336099_marshaled_com;
struct GUIStyleState_t3156549051_marshaled_pinvoke;
struct GUIStyleState_t3156549051_marshaled_com;
struct RectOffset_t2389311507_marshaled_com;



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
#ifndef LAYOUTCACHE_T1388224368_H
#define LAYOUTCACHE_T1388224368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t1388224368  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t1875918777 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t2285631481 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t1875918777 * ___windows_2;

public:
	inline static int32_t get_offset_of_topLevel_0() { return static_cast<int32_t>(offsetof(LayoutCache_t1388224368, ___topLevel_0)); }
	inline GUILayoutGroup_t1875918777 * get_topLevel_0() const { return ___topLevel_0; }
	inline GUILayoutGroup_t1875918777 ** get_address_of_topLevel_0() { return &___topLevel_0; }
	inline void set_topLevel_0(GUILayoutGroup_t1875918777 * value)
	{
		___topLevel_0 = value;
		Il2CppCodeGenWriteBarrier((&___topLevel_0), value);
	}

	inline static int32_t get_offset_of_layoutGroups_1() { return static_cast<int32_t>(offsetof(LayoutCache_t1388224368, ___layoutGroups_1)); }
	inline GenericStack_t2285631481 * get_layoutGroups_1() const { return ___layoutGroups_1; }
	inline GenericStack_t2285631481 ** get_address_of_layoutGroups_1() { return &___layoutGroups_1; }
	inline void set_layoutGroups_1(GenericStack_t2285631481 * value)
	{
		___layoutGroups_1 = value;
		Il2CppCodeGenWriteBarrier((&___layoutGroups_1), value);
	}

	inline static int32_t get_offset_of_windows_2() { return static_cast<int32_t>(offsetof(LayoutCache_t1388224368, ___windows_2)); }
	inline GUILayoutGroup_t1875918777 * get_windows_2() const { return ___windows_2; }
	inline GUILayoutGroup_t1875918777 ** get_address_of_windows_2() { return &___windows_2; }
	inline void set_windows_2(GUILayoutGroup_t1875918777 * value)
	{
		___windows_2 = value;
		Il2CppCodeGenWriteBarrier((&___windows_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTCACHE_T1388224368_H
#ifndef AUDIOSETTINGS_T4085266708_H
#define AUDIOSETTINGS_T4085266708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t4085266708  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t4085266708_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t1995782794 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t4085266708_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t1995782794 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t1995782794 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t1995782794 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T4085266708_H
#ifndef UISYSTEMPROFILERAPI_T199024525_H
#define UISYSTEMPROFILERAPI_T199024525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UISystemProfilerApi
struct  UISystemProfilerApi_t199024525  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISYSTEMPROFILERAPI_T199024525_H
#ifndef SLIDERSTATE_T69028235_H
#define SLIDERSTATE_T69028235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SliderState
struct  SliderState_t69028235  : public RuntimeObject
{
public:
	// System.Single UnityEngine.SliderState::dragStartPos
	float ___dragStartPos_0;
	// System.Single UnityEngine.SliderState::dragStartValue
	float ___dragStartValue_1;
	// System.Boolean UnityEngine.SliderState::isDragging
	bool ___isDragging_2;

public:
	inline static int32_t get_offset_of_dragStartPos_0() { return static_cast<int32_t>(offsetof(SliderState_t69028235, ___dragStartPos_0)); }
	inline float get_dragStartPos_0() const { return ___dragStartPos_0; }
	inline float* get_address_of_dragStartPos_0() { return &___dragStartPos_0; }
	inline void set_dragStartPos_0(float value)
	{
		___dragStartPos_0 = value;
	}

	inline static int32_t get_offset_of_dragStartValue_1() { return static_cast<int32_t>(offsetof(SliderState_t69028235, ___dragStartValue_1)); }
	inline float get_dragStartValue_1() const { return ___dragStartValue_1; }
	inline float* get_address_of_dragStartValue_1() { return &___dragStartValue_1; }
	inline void set_dragStartValue_1(float value)
	{
		___dragStartValue_1 = value;
	}

	inline static int32_t get_offset_of_isDragging_2() { return static_cast<int32_t>(offsetof(SliderState_t69028235, ___isDragging_2)); }
	inline bool get_isDragging_2() const { return ___isDragging_2; }
	inline bool* get_address_of_isDragging_2() { return &___isDragging_2; }
	inline void set_isDragging_2(bool value)
	{
		___isDragging_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDERSTATE_T69028235_H
#ifndef SCROLLVIEWSTATE_T3432503216_H
#define SCROLLVIEWSTATE_T3432503216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScrollViewState
struct  ScrollViewState_t3432503216  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLVIEWSTATE_T3432503216_H
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
#ifndef ANIMATIONPLAYABLEGRAPHEXTENSIONS_T3447079434_H
#define ANIMATIONPLAYABLEGRAPHEXTENSIONS_T3447079434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct  AnimationPlayableGraphExtensions_t3447079434  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEGRAPHEXTENSIONS_T3447079434_H
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
#ifndef PHYSICS2D_T952151298_H
#define PHYSICS2D_T952151298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics2D
struct  Physics2D_t952151298  : public RuntimeObject
{
public:

public:
};

struct Physics2D_t952151298_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> UnityEngine.Physics2D::m_LastDisabledRigidbody2D
	List_1_t1673903395 * ___m_LastDisabledRigidbody2D_0;

public:
	inline static int32_t get_offset_of_m_LastDisabledRigidbody2D_0() { return static_cast<int32_t>(offsetof(Physics2D_t952151298_StaticFields, ___m_LastDisabledRigidbody2D_0)); }
	inline List_1_t1673903395 * get_m_LastDisabledRigidbody2D_0() const { return ___m_LastDisabledRigidbody2D_0; }
	inline List_1_t1673903395 ** get_address_of_m_LastDisabledRigidbody2D_0() { return &___m_LastDisabledRigidbody2D_0; }
	inline void set_m_LastDisabledRigidbody2D_0(List_1_t1673903395 * value)
	{
		___m_LastDisabledRigidbody2D_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastDisabledRigidbody2D_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2D_T952151298_H
#ifndef AUDIOPLAYABLEGRAPHEXTENSIONS_T1521588682_H
#define AUDIOPLAYABLEGRAPHEXTENSIONS_T1521588682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.AudioPlayableGraphExtensions
struct  AudioPlayableGraphExtensions_t1521588682  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEGRAPHEXTENSIONS_T1521588682_H
#ifndef GUILAYOUT_T1956094654_H
#define GUILAYOUT_T1956094654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayout
struct  GUILayout_t1956094654  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUT_T1956094654_H
#ifndef PHYSICS_T3553430025_H
#define PHYSICS_T3553430025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics
struct  Physics_t3553430025  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS_T3553430025_H
#ifndef RECTTRANSFORMUTILITY_T2591954166_H
#define RECTTRANSFORMUTILITY_T2591954166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransformUtility
struct  RectTransformUtility_t2591954166  : public RuntimeObject
{
public:

public:
};

struct RectTransformUtility_t2591954166_StaticFields
{
public:
	// UnityEngine.Vector3[] UnityEngine.RectTransformUtility::s_Corners
	Vector3U5BU5D_t1395634968* ___s_Corners_0;

public:
	inline static int32_t get_offset_of_s_Corners_0() { return static_cast<int32_t>(offsetof(RectTransformUtility_t2591954166_StaticFields, ___s_Corners_0)); }
	inline Vector3U5BU5D_t1395634968* get_s_Corners_0() const { return ___s_Corners_0; }
	inline Vector3U5BU5D_t1395634968** get_address_of_s_Corners_0() { return &___s_Corners_0; }
	inline void set_s_Corners_0(Vector3U5BU5D_t1395634968* value)
	{
		___s_Corners_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Corners_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORMUTILITY_T2591954166_H
#ifndef SPRITEATLASMANAGER_T1558298817_H
#define SPRITEATLASMANAGER_T1558298817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t1558298817  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t1558298817_StaticFields
{
public:
	// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	RequestAtlasCallback_t4219266798 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t4057812809 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t1558298817_StaticFields, ___atlasRequested_0)); }
	inline RequestAtlasCallback_t4219266798 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline RequestAtlasCallback_t4219266798 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(RequestAtlasCallback_t4219266798 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t1558298817_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Action_1_t4057812809 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Action_1_t4057812809 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Action_1_t4057812809 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T1558298817_H
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
#ifndef GUICONTENT_T1779043998_H
#define GUICONTENT_T1779043998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIContent
struct  GUIContent_t1779043998  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t2261499199 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t1779043998, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t1779043998, ___m_Image_1)); }
	inline Texture_t2261499199 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t2261499199 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t2261499199 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t1779043998, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tooltip_2), value);
	}
};

struct GUIContent_t1779043998_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t1779043998 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t1779043998 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t1779043998 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t1779043998 * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t1779043998_StaticFields, ___s_Text_3)); }
	inline GUIContent_t1779043998 * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t1779043998 ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t1779043998 * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_Text_3), value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t1779043998_StaticFields, ___s_Image_4)); }
	inline GUIContent_t1779043998 * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t1779043998 ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t1779043998 * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Image_4), value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t1779043998_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t1779043998 * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t1779043998 ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t1779043998 * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_TextImage_5), value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t1779043998_StaticFields, ___none_6)); }
	inline GUIContent_t1779043998 * get_none_6() const { return ___none_6; }
	inline GUIContent_t1779043998 ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t1779043998 * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((&___none_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t1779043998_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t2261499199 * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t1779043998_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t2261499199 * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};
#endif // GUICONTENT_T1779043998_H
#ifndef GUITARGETATTRIBUTE_T801312366_H
#define GUITARGETATTRIBUTE_T801312366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUITargetAttribute
struct  GUITargetAttribute_t801312366  : public Attribute_t3193222758
{
public:
	// System.Int32 UnityEngine.GUITargetAttribute::displayMask
	int32_t ___displayMask_0;

public:
	inline static int32_t get_offset_of_displayMask_0() { return static_cast<int32_t>(offsetof(GUITargetAttribute_t801312366, ___displayMask_0)); }
	inline int32_t get_displayMask_0() const { return ___displayMask_0; }
	inline int32_t* get_address_of_displayMask_0() { return &___displayMask_0; }
	inline void set_displayMask_0(int32_t value)
	{
		___displayMask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITARGETATTRIBUTE_T801312366_H
#ifndef ANIMATORCLIPINFO_T2802853799_H
#define ANIMATORCLIPINFO_T2802853799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t2802853799 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t2802853799, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t2802853799, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T2802853799_H
#ifndef ANIMATORSTATEINFO_T742498804_H
#define ANIMATORSTATEINFO_T742498804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t742498804 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t742498804, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t742498804, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t742498804, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t742498804, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t742498804, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t742498804, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t742498804, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t742498804, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t742498804, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T742498804_H
#ifndef UILINEINFO_T3682577983_H
#define UILINEINFO_T3682577983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UILineInfo
struct  UILineInfo_t3682577983 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t3682577983, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t3682577983, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t3682577983, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t3682577983, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINEINFO_T3682577983_H
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
#ifndef ANIMATORTRANSITIONINFO_T2790182771_H
#define ANIMATORTRANSITIONINFO_T2790182771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t2790182771 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_4;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_5;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2790182771, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2790182771, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2790182771, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2790182771, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2790182771, ___m_AnyState_4)); }
	inline bool get_m_AnyState_4() const { return ___m_AnyState_4; }
	inline bool* get_address_of_m_AnyState_4() { return &___m_AnyState_4; }
	inline void set_m_AnyState_4(bool value)
	{
		___m_AnyState_4 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t2790182771, ___m_TransitionType_5)); }
	inline int32_t get_m_TransitionType_5() const { return ___m_TransitionType_5; }
	inline int32_t* get_address_of_m_TransitionType_5() { return &___m_TransitionType_5; }
	inline void set_m_TransitionType_5(int32_t value)
	{
		___m_TransitionType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t2790182771_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t2790182771_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
#endif // ANIMATORTRANSITIONINFO_T2790182771_H
#ifndef SHAREDBETWEENANIMATORSATTRIBUTE_T2714830706_H
#define SHAREDBETWEENANIMATORSATTRIBUTE_T2714830706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_t2714830706  : public Attribute_t3193222758
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDBETWEENANIMATORSATTRIBUTE_T2714830706_H
#ifndef EXITGUIEXCEPTION_T3103570255_H
#define EXITGUIEXCEPTION_T3103570255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExitGUIException
struct  ExitGUIException_t3103570255  : public Exception_t3222460051
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXITGUIEXCEPTION_T3103570255_H
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
#ifndef RECT_T2049231722_H
#define RECT_T2049231722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2049231722 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2049231722, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2049231722, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2049231722, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2049231722, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2049231722_H
#ifndef VECTOR4_T1510720084_H
#define VECTOR4_T1510720084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t1510720084 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t1510720084, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t1510720084, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t1510720084, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t1510720084, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t1510720084_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t1510720084  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t1510720084  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t1510720084  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t1510720084  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t1510720084_StaticFields, ___zeroVector_5)); }
	inline Vector4_t1510720084  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t1510720084 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t1510720084  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t1510720084_StaticFields, ___oneVector_6)); }
	inline Vector4_t1510720084  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t1510720084 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t1510720084  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t1510720084_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t1510720084  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t1510720084 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t1510720084  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t1510720084_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t1510720084  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t1510720084 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t1510720084  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T1510720084_H
#ifndef COLOR32_T3496556846_H
#define COLOR32_T3496556846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t3496556846 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t3496556846, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t3496556846, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t3496556846, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t3496556846, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T3496556846_H
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
#ifndef COLOR_T3323652498_H
#define COLOR_T3323652498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t3323652498 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t3323652498, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t3323652498, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t3323652498, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t3323652498, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T3323652498_H
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
#ifndef BOOLEAN_T1463985473_H
#define BOOLEAN_T1463985473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1463985473 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1463985473, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1463985473_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1463985473_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1463985473_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1463985473_H
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
#ifndef EVENT_T1812461728_H
#define EVENT_T1812461728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Event
struct  Event_t1812461728  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_t1812461728, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_t1812461728_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t1812461728 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t1812461728 * ___s_MasterEvent_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Event::<>f__switch$map0
	Dictionary_2_t724145691 * ___U3CU3Ef__switchU24map0_3;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_t1812461728_StaticFields, ___s_Current_1)); }
	inline Event_t1812461728 * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_t1812461728 ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_t1812461728 * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Current_1), value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_t1812461728_StaticFields, ___s_MasterEvent_2)); }
	inline Event_t1812461728 * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_t1812461728 ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_t1812461728 * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_MasterEvent_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_3() { return static_cast<int32_t>(offsetof(Event_t1812461728_StaticFields, ___U3CU3Ef__switchU24map0_3)); }
	inline Dictionary_2_t724145691 * get_U3CU3Ef__switchU24map0_3() const { return ___U3CU3Ef__switchU24map0_3; }
	inline Dictionary_2_t724145691 ** get_address_of_U3CU3Ef__switchU24map0_3() { return &___U3CU3Ef__switchU24map0_3; }
	inline void set_U3CU3Ef__switchU24map0_3(Dictionary_2_t724145691 * value)
	{
		___U3CU3Ef__switchU24map0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_t1812461728_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_t1812461728_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // EVENT_T1812461728_H
#ifndef EVENTTYPE_T1253938293_H
#define EVENTTYPE_T1253938293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventType
struct  EventType_t1253938293 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventType_t1253938293, ___value___1)); }
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
#endif // EVENTTYPE_T1253938293_H
#ifndef SAMPLETYPE_T2291196668_H
#define SAMPLETYPE_T2291196668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UISystemProfilerApi/SampleType
struct  SampleType_t2291196668 
{
public:
	// System.Int32 UnityEngine.UISystemProfilerApi/SampleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SampleType_t2291196668, ___value___1)); }
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
#endif // SAMPLETYPE_T2291196668_H
#ifndef TYPE_T3085431491_H
#define TYPE_T3085431491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption/Type
struct  Type_t3085431491 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t3085431491, ___value___1)); }
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
#endif // TYPE_T3085431491_H
#ifndef UIVERTEX_T2705177008_H
#define UIVERTEX_T2705177008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t2705177008 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t3135004533  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t3135004533  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t3496556846  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t220132401  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t220132401  ___uv1_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t220132401  ___uv2_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t220132401  ___uv3_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t1510720084  ___tangent_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t2705177008, ___position_0)); }
	inline Vector3_t3135004533  get_position_0() const { return ___position_0; }
	inline Vector3_t3135004533 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3135004533  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t2705177008, ___normal_1)); }
	inline Vector3_t3135004533  get_normal_1() const { return ___normal_1; }
	inline Vector3_t3135004533 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t3135004533  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t2705177008, ___color_2)); }
	inline Color32_t3496556846  get_color_2() const { return ___color_2; }
	inline Color32_t3496556846 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t3496556846  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t2705177008, ___uv0_3)); }
	inline Vector2_t220132401  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t220132401 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t220132401  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t2705177008, ___uv1_4)); }
	inline Vector2_t220132401  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t220132401 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t220132401  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(UIVertex_t2705177008, ___uv2_5)); }
	inline Vector2_t220132401  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t220132401 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t220132401  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(UIVertex_t2705177008, ___uv3_6)); }
	inline Vector2_t220132401  get_uv3_6() const { return ___uv3_6; }
	inline Vector2_t220132401 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector2_t220132401  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_tangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t2705177008, ___tangent_7)); }
	inline Vector4_t1510720084  get_tangent_7() const { return ___tangent_7; }
	inline Vector4_t1510720084 * get_address_of_tangent_7() { return &___tangent_7; }
	inline void set_tangent_7(Vector4_t1510720084  value)
	{
		___tangent_7 = value;
	}
};

struct UIVertex_t2705177008_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t3496556846  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t1510720084  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t2705177008  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t2705177008_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t3496556846  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t3496556846 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t3496556846  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t2705177008_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t1510720084  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t1510720084 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t1510720084  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t2705177008_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t2705177008  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t2705177008 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t2705177008  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T2705177008_H
#ifndef EVENTMODIFIERS_T2391314135_H
#define EVENTMODIFIERS_T2391314135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventModifiers
struct  EventModifiers_t2391314135 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventModifiers_t2391314135, ___value___1)); }
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
#endif // EVENTMODIFIERS_T2391314135_H
#ifndef GUILAYOUTENTRY_T2542256857_H
#define GUILAYOUTENTRY_T2542256857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutEntry
struct  GUILayoutEntry_t2542256857  : public RuntimeObject
{
public:
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t2049231722  ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t3682286417 * ___m_Style_7;

public:
	inline static int32_t get_offset_of_minWidth_0() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2542256857, ___minWidth_0)); }
	inline float get_minWidth_0() const { return ___minWidth_0; }
	inline float* get_address_of_minWidth_0() { return &___minWidth_0; }
	inline void set_minWidth_0(float value)
	{
		___minWidth_0 = value;
	}

	inline static int32_t get_offset_of_maxWidth_1() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2542256857, ___maxWidth_1)); }
	inline float get_maxWidth_1() const { return ___maxWidth_1; }
	inline float* get_address_of_maxWidth_1() { return &___maxWidth_1; }
	inline void set_maxWidth_1(float value)
	{
		___maxWidth_1 = value;
	}

	inline static int32_t get_offset_of_minHeight_2() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2542256857, ___minHeight_2)); }
	inline float get_minHeight_2() const { return ___minHeight_2; }
	inline float* get_address_of_minHeight_2() { return &___minHeight_2; }
	inline void set_minHeight_2(float value)
	{
		___minHeight_2 = value;
	}

	inline static int32_t get_offset_of_maxHeight_3() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2542256857, ___maxHeight_3)); }
	inline float get_maxHeight_3() const { return ___maxHeight_3; }
	inline float* get_address_of_maxHeight_3() { return &___maxHeight_3; }
	inline void set_maxHeight_3(float value)
	{
		___maxHeight_3 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2542256857, ___rect_4)); }
	inline Rect_t2049231722  get_rect_4() const { return ___rect_4; }
	inline Rect_t2049231722 * get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(Rect_t2049231722  value)
	{
		___rect_4 = value;
	}

	inline static int32_t get_offset_of_stretchWidth_5() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2542256857, ___stretchWidth_5)); }
	inline int32_t get_stretchWidth_5() const { return ___stretchWidth_5; }
	inline int32_t* get_address_of_stretchWidth_5() { return &___stretchWidth_5; }
	inline void set_stretchWidth_5(int32_t value)
	{
		___stretchWidth_5 = value;
	}

	inline static int32_t get_offset_of_stretchHeight_6() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2542256857, ___stretchHeight_6)); }
	inline int32_t get_stretchHeight_6() const { return ___stretchHeight_6; }
	inline int32_t* get_address_of_stretchHeight_6() { return &___stretchHeight_6; }
	inline void set_stretchHeight_6(int32_t value)
	{
		___stretchHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_Style_7() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2542256857, ___m_Style_7)); }
	inline GUIStyle_t3682286417 * get_m_Style_7() const { return ___m_Style_7; }
	inline GUIStyle_t3682286417 ** get_address_of_m_Style_7() { return &___m_Style_7; }
	inline void set_m_Style_7(GUIStyle_t3682286417 * value)
	{
		___m_Style_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Style_7), value);
	}
};

struct GUILayoutEntry_t2542256857_StaticFields
{
public:
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t2049231722  ___kDummyRect_8;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_9;

public:
	inline static int32_t get_offset_of_kDummyRect_8() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2542256857_StaticFields, ___kDummyRect_8)); }
	inline Rect_t2049231722  get_kDummyRect_8() const { return ___kDummyRect_8; }
	inline Rect_t2049231722 * get_address_of_kDummyRect_8() { return &___kDummyRect_8; }
	inline void set_kDummyRect_8(Rect_t2049231722  value)
	{
		___kDummyRect_8 = value;
	}

	inline static int32_t get_offset_of_indent_9() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2542256857_StaticFields, ___indent_9)); }
	inline int32_t get_indent_9() const { return ___indent_9; }
	inline int32_t* get_address_of_indent_9() { return &___indent_9; }
	inline void set_indent_9(int32_t value)
	{
		___indent_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTENTRY_T2542256857_H
#ifndef RENDERMODE_T2212832010_H
#define RENDERMODE_T2212832010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderMode
struct  RenderMode_t2212832010 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderMode_t2212832010, ___value___1)); }
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
#endif // RENDERMODE_T2212832010_H
#ifndef GUISETTINGS_T1311439069_H
#define GUISETTINGS_T1311439069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISettings
struct  GUISettings_t1311439069  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.GUISettings::m_DoubleClickSelectsWord
	bool ___m_DoubleClickSelectsWord_0;
	// System.Boolean UnityEngine.GUISettings::m_TripleClickSelectsLine
	bool ___m_TripleClickSelectsLine_1;
	// UnityEngine.Color UnityEngine.GUISettings::m_CursorColor
	Color_t3323652498  ___m_CursorColor_2;
	// System.Single UnityEngine.GUISettings::m_CursorFlashSpeed
	float ___m_CursorFlashSpeed_3;
	// UnityEngine.Color UnityEngine.GUISettings::m_SelectionColor
	Color_t3323652498  ___m_SelectionColor_4;

public:
	inline static int32_t get_offset_of_m_DoubleClickSelectsWord_0() { return static_cast<int32_t>(offsetof(GUISettings_t1311439069, ___m_DoubleClickSelectsWord_0)); }
	inline bool get_m_DoubleClickSelectsWord_0() const { return ___m_DoubleClickSelectsWord_0; }
	inline bool* get_address_of_m_DoubleClickSelectsWord_0() { return &___m_DoubleClickSelectsWord_0; }
	inline void set_m_DoubleClickSelectsWord_0(bool value)
	{
		___m_DoubleClickSelectsWord_0 = value;
	}

	inline static int32_t get_offset_of_m_TripleClickSelectsLine_1() { return static_cast<int32_t>(offsetof(GUISettings_t1311439069, ___m_TripleClickSelectsLine_1)); }
	inline bool get_m_TripleClickSelectsLine_1() const { return ___m_TripleClickSelectsLine_1; }
	inline bool* get_address_of_m_TripleClickSelectsLine_1() { return &___m_TripleClickSelectsLine_1; }
	inline void set_m_TripleClickSelectsLine_1(bool value)
	{
		___m_TripleClickSelectsLine_1 = value;
	}

	inline static int32_t get_offset_of_m_CursorColor_2() { return static_cast<int32_t>(offsetof(GUISettings_t1311439069, ___m_CursorColor_2)); }
	inline Color_t3323652498  get_m_CursorColor_2() const { return ___m_CursorColor_2; }
	inline Color_t3323652498 * get_address_of_m_CursorColor_2() { return &___m_CursorColor_2; }
	inline void set_m_CursorColor_2(Color_t3323652498  value)
	{
		___m_CursorColor_2 = value;
	}

	inline static int32_t get_offset_of_m_CursorFlashSpeed_3() { return static_cast<int32_t>(offsetof(GUISettings_t1311439069, ___m_CursorFlashSpeed_3)); }
	inline float get_m_CursorFlashSpeed_3() const { return ___m_CursorFlashSpeed_3; }
	inline float* get_address_of_m_CursorFlashSpeed_3() { return &___m_CursorFlashSpeed_3; }
	inline void set_m_CursorFlashSpeed_3(float value)
	{
		___m_CursorFlashSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_4() { return static_cast<int32_t>(offsetof(GUISettings_t1311439069, ___m_SelectionColor_4)); }
	inline Color_t3323652498  get_m_SelectionColor_4() const { return ___m_SelectionColor_4; }
	inline Color_t3323652498 * get_address_of_m_SelectionColor_4() { return &___m_SelectionColor_4; }
	inline void set_m_SelectionColor_4(Color_t3323652498  value)
	{
		___m_SelectionColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISETTINGS_T1311439069_H
#ifndef GUISTYLESTATE_T3156549051_H
#define GUISTYLESTATE_T3156549051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t3156549051  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3682286417 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t1286955917 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t3156549051, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t3156549051, ___m_SourceStyle_1)); }
	inline GUIStyle_t3682286417 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3682286417 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3682286417 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t3156549051, ___m_Background_2)); }
	inline Texture2D_t1286955917 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t1286955917 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t1286955917 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t3156549051_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3682286417_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t1286955917 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t3156549051_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3682286417_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t1286955917 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T3156549051_H
#ifndef IMAGEPOSITION_T3380066013_H
#define IMAGEPOSITION_T3380066013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ImagePosition
struct  ImagePosition_t3380066013 
{
public:
	// System.Int32 UnityEngine.ImagePosition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ImagePosition_t3380066013, ___value___1)); }
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
#endif // IMAGEPOSITION_T3380066013_H
#ifndef TEXTCLIPPING_T781249177_H
#define TEXTCLIPPING_T781249177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextClipping
struct  TextClipping_t781249177 
{
public:
	// System.Int32 UnityEngine.TextClipping::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextClipping_t781249177, ___value___1)); }
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
#endif // TEXTCLIPPING_T781249177_H
#ifndef GUIUTILITY_T2589751424_H
#define GUIUTILITY_T2589751424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIUtility
struct  GUIUtility_t2589751424  : public RuntimeObject
{
public:

public:
};

struct GUIUtility_t2589751424_StaticFields
{
public:
	// System.Int32 UnityEngine.GUIUtility::s_SkinMode
	int32_t ___s_SkinMode_0;
	// System.Int32 UnityEngine.GUIUtility::s_OriginalID
	int32_t ___s_OriginalID_1;
	// System.Action UnityEngine.GUIUtility::takeCapture
	Action_t3831797981 * ___takeCapture_2;
	// System.Action UnityEngine.GUIUtility::releaseCapture
	Action_t3831797981 * ___releaseCapture_3;
	// System.Func`3<System.Int32,System.IntPtr,System.Boolean> UnityEngine.GUIUtility::processEvent
	Func_3_t3263998812 * ___processEvent_4;
	// System.Func`2<System.Exception,System.Boolean> UnityEngine.GUIUtility::endContainerGUIFromException
	Func_2_t527133730 * ___endContainerGUIFromException_5;
	// System.Boolean UnityEngine.GUIUtility::<guiIsExiting>k__BackingField
	bool ___U3CguiIsExitingU3Ek__BackingField_6;
	// UnityEngine.Vector2 UnityEngine.GUIUtility::s_EditorScreenPointOffset
	Vector2_t220132401  ___s_EditorScreenPointOffset_7;

public:
	inline static int32_t get_offset_of_s_SkinMode_0() { return static_cast<int32_t>(offsetof(GUIUtility_t2589751424_StaticFields, ___s_SkinMode_0)); }
	inline int32_t get_s_SkinMode_0() const { return ___s_SkinMode_0; }
	inline int32_t* get_address_of_s_SkinMode_0() { return &___s_SkinMode_0; }
	inline void set_s_SkinMode_0(int32_t value)
	{
		___s_SkinMode_0 = value;
	}

	inline static int32_t get_offset_of_s_OriginalID_1() { return static_cast<int32_t>(offsetof(GUIUtility_t2589751424_StaticFields, ___s_OriginalID_1)); }
	inline int32_t get_s_OriginalID_1() const { return ___s_OriginalID_1; }
	inline int32_t* get_address_of_s_OriginalID_1() { return &___s_OriginalID_1; }
	inline void set_s_OriginalID_1(int32_t value)
	{
		___s_OriginalID_1 = value;
	}

	inline static int32_t get_offset_of_takeCapture_2() { return static_cast<int32_t>(offsetof(GUIUtility_t2589751424_StaticFields, ___takeCapture_2)); }
	inline Action_t3831797981 * get_takeCapture_2() const { return ___takeCapture_2; }
	inline Action_t3831797981 ** get_address_of_takeCapture_2() { return &___takeCapture_2; }
	inline void set_takeCapture_2(Action_t3831797981 * value)
	{
		___takeCapture_2 = value;
		Il2CppCodeGenWriteBarrier((&___takeCapture_2), value);
	}

	inline static int32_t get_offset_of_releaseCapture_3() { return static_cast<int32_t>(offsetof(GUIUtility_t2589751424_StaticFields, ___releaseCapture_3)); }
	inline Action_t3831797981 * get_releaseCapture_3() const { return ___releaseCapture_3; }
	inline Action_t3831797981 ** get_address_of_releaseCapture_3() { return &___releaseCapture_3; }
	inline void set_releaseCapture_3(Action_t3831797981 * value)
	{
		___releaseCapture_3 = value;
		Il2CppCodeGenWriteBarrier((&___releaseCapture_3), value);
	}

	inline static int32_t get_offset_of_processEvent_4() { return static_cast<int32_t>(offsetof(GUIUtility_t2589751424_StaticFields, ___processEvent_4)); }
	inline Func_3_t3263998812 * get_processEvent_4() const { return ___processEvent_4; }
	inline Func_3_t3263998812 ** get_address_of_processEvent_4() { return &___processEvent_4; }
	inline void set_processEvent_4(Func_3_t3263998812 * value)
	{
		___processEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___processEvent_4), value);
	}

	inline static int32_t get_offset_of_endContainerGUIFromException_5() { return static_cast<int32_t>(offsetof(GUIUtility_t2589751424_StaticFields, ___endContainerGUIFromException_5)); }
	inline Func_2_t527133730 * get_endContainerGUIFromException_5() const { return ___endContainerGUIFromException_5; }
	inline Func_2_t527133730 ** get_address_of_endContainerGUIFromException_5() { return &___endContainerGUIFromException_5; }
	inline void set_endContainerGUIFromException_5(Func_2_t527133730 * value)
	{
		___endContainerGUIFromException_5 = value;
		Il2CppCodeGenWriteBarrier((&___endContainerGUIFromException_5), value);
	}

	inline static int32_t get_offset_of_U3CguiIsExitingU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GUIUtility_t2589751424_StaticFields, ___U3CguiIsExitingU3Ek__BackingField_6)); }
	inline bool get_U3CguiIsExitingU3Ek__BackingField_6() const { return ___U3CguiIsExitingU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CguiIsExitingU3Ek__BackingField_6() { return &___U3CguiIsExitingU3Ek__BackingField_6; }
	inline void set_U3CguiIsExitingU3Ek__BackingField_6(bool value)
	{
		___U3CguiIsExitingU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_s_EditorScreenPointOffset_7() { return static_cast<int32_t>(offsetof(GUIUtility_t2589751424_StaticFields, ___s_EditorScreenPointOffset_7)); }
	inline Vector2_t220132401  get_s_EditorScreenPointOffset_7() const { return ___s_EditorScreenPointOffset_7; }
	inline Vector2_t220132401 * get_address_of_s_EditorScreenPointOffset_7() { return &___s_EditorScreenPointOffset_7; }
	inline void set_s_EditorScreenPointOffset_7(Vector2_t220132401  value)
	{
		___s_EditorScreenPointOffset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIUTILITY_T2589751424_H
#ifndef DBLCLICKSNAPPING_T3898945694_H
#define DBLCLICKSNAPPING_T3898945694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor/DblClickSnapping
struct  DblClickSnapping_t3898945694 
{
public:
	// System.Byte UnityEngine.TextEditor/DblClickSnapping::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DblClickSnapping_t3898945694, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBLCLICKSNAPPING_T3898945694_H
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
#ifndef TRACKEDREFERENCE_T523229651_H
#define TRACKEDREFERENCE_T523229651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t523229651  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t523229651, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t523229651_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t523229651_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T523229651_H
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
#ifndef GUILAYOUTUTILITY_T2532016762_H
#define GUILAYOUTUTILITY_T2532016762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_t2532016762  : public RuntimeObject
{
public:

public:
};

struct GUILayoutUtility_t2532016762_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t3984447632 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t3984447632 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t1388224368 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t2049231722  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t3682286417 * ___s_SpaceStyle_4;

public:
	inline static int32_t get_offset_of_s_StoredLayouts_0() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t2532016762_StaticFields, ___s_StoredLayouts_0)); }
	inline Dictionary_2_t3984447632 * get_s_StoredLayouts_0() const { return ___s_StoredLayouts_0; }
	inline Dictionary_2_t3984447632 ** get_address_of_s_StoredLayouts_0() { return &___s_StoredLayouts_0; }
	inline void set_s_StoredLayouts_0(Dictionary_2_t3984447632 * value)
	{
		___s_StoredLayouts_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_StoredLayouts_0), value);
	}

	inline static int32_t get_offset_of_s_StoredWindows_1() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t2532016762_StaticFields, ___s_StoredWindows_1)); }
	inline Dictionary_2_t3984447632 * get_s_StoredWindows_1() const { return ___s_StoredWindows_1; }
	inline Dictionary_2_t3984447632 ** get_address_of_s_StoredWindows_1() { return &___s_StoredWindows_1; }
	inline void set_s_StoredWindows_1(Dictionary_2_t3984447632 * value)
	{
		___s_StoredWindows_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_StoredWindows_1), value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t2532016762_StaticFields, ___current_2)); }
	inline LayoutCache_t1388224368 * get_current_2() const { return ___current_2; }
	inline LayoutCache_t1388224368 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(LayoutCache_t1388224368 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_kDummyRect_3() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t2532016762_StaticFields, ___kDummyRect_3)); }
	inline Rect_t2049231722  get_kDummyRect_3() const { return ___kDummyRect_3; }
	inline Rect_t2049231722 * get_address_of_kDummyRect_3() { return &___kDummyRect_3; }
	inline void set_kDummyRect_3(Rect_t2049231722  value)
	{
		___kDummyRect_3 = value;
	}

	inline static int32_t get_offset_of_s_SpaceStyle_4() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t2532016762_StaticFields, ___s_SpaceStyle_4)); }
	inline GUIStyle_t3682286417 * get_s_SpaceStyle_4() const { return ___s_SpaceStyle_4; }
	inline GUIStyle_t3682286417 ** get_address_of_s_SpaceStyle_4() { return &___s_SpaceStyle_4; }
	inline void set_s_SpaceStyle_4(GUIStyle_t3682286417 * value)
	{
		___s_SpaceStyle_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_SpaceStyle_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTUTILITY_T2532016762_H
#ifndef UICHARINFO_T1684521739_H
#define UICHARINFO_T1684521739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t1684521739 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t220132401  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t1684521739, ___cursorPos_0)); }
	inline Vector2_t220132401  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t220132401 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t220132401  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t1684521739, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_T1684521739_H
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
#ifndef COLLISION2D_T3490913073_H
#define COLLISION2D_T3490913073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t3490913073  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t2876653048* ___m_Contacts_4;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t220132401  ___m_RelativeVelocity_5;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_6;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t3490913073, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t3490913073, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t3490913073, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t3490913073, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision2D_t3490913073, ___m_Contacts_4)); }
	inline ContactPoint2DU5BU5D_t2876653048* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPoint2DU5BU5D_t2876653048** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPoint2DU5BU5D_t2876653048* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_5() { return static_cast<int32_t>(offsetof(Collision2D_t3490913073, ___m_RelativeVelocity_5)); }
	inline Vector2_t220132401  get_m_RelativeVelocity_5() const { return ___m_RelativeVelocity_5; }
	inline Vector2_t220132401 * get_address_of_m_RelativeVelocity_5() { return &___m_RelativeVelocity_5; }
	inline void set_m_RelativeVelocity_5(Vector2_t220132401  value)
	{
		___m_RelativeVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_6() { return static_cast<int32_t>(offsetof(Collision2D_t3490913073, ___m_Enabled_6)); }
	inline int32_t get_m_Enabled_6() const { return ___m_Enabled_6; }
	inline int32_t* get_address_of_m_Enabled_6() { return &___m_Enabled_6; }
	inline void set_m_Enabled_6(int32_t value)
	{
		___m_Enabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t3490913073_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3687663125 * ___m_Contacts_4;
	Vector2_t220132401  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t3490913073_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3687663125 * ___m_Contacts_4;
	Vector2_t220132401  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
#endif // COLLISION2D_T3490913073_H
#ifndef ANIMATORCONTROLLERPARAMETERTYPE_T2276392494_H
#define ANIMATORCONTROLLERPARAMETERTYPE_T2276392494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_t2276392494 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_t2276392494, ___value___1)); }
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
#endif // ANIMATORCONTROLLERPARAMETERTYPE_T2276392494_H
#ifndef SKELETONBONE_T2302708218_H
#define SKELETONBONE_T2302708218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkeletonBone
struct  SkeletonBone_t2302708218 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t3135004533  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t777646635  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t3135004533  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t2302708218, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t2302708218, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___parentName_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t2302708218, ___position_2)); }
	inline Vector3_t3135004533  get_position_2() const { return ___position_2; }
	inline Vector3_t3135004533 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t3135004533  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t2302708218, ___rotation_3)); }
	inline Quaternion_t777646635  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t777646635 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t777646635  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t2302708218, ___scale_4)); }
	inline Vector3_t3135004533  get_scale_4() const { return ___scale_4; }
	inline Vector3_t3135004533 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t3135004533  value)
	{
		___scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t2302708218_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t3135004533  ___position_2;
	Quaternion_t777646635  ___rotation_3;
	Vector3_t3135004533  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t2302708218_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t3135004533  ___position_2;
	Quaternion_t777646635  ___rotation_3;
	Vector3_t3135004533  ___scale_4;
};
#endif // SKELETONBONE_T2302708218_H
#ifndef HUMANLIMIT_T3548641834_H
#define HUMANLIMIT_T3548641834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanLimit
struct  HumanLimit_t3548641834 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t3135004533  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t3135004533  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t3135004533  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t3548641834, ___m_Min_0)); }
	inline Vector3_t3135004533  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t3135004533 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t3135004533  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t3548641834, ___m_Max_1)); }
	inline Vector3_t3135004533  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t3135004533 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t3135004533  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t3548641834, ___m_Center_2)); }
	inline Vector3_t3135004533  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t3135004533 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t3135004533  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t3548641834, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t3548641834, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANLIMIT_T3548641834_H
#ifndef CONTACTPOINT2D_T3687663125_H
#define CONTACTPOINT2D_T3687663125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3687663125 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t220132401  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t220132401  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t220132401  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3687663125, ___m_Point_0)); }
	inline Vector2_t220132401  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t220132401 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t220132401  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3687663125, ___m_Normal_1)); }
	inline Vector2_t220132401  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t220132401 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t220132401  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3687663125, ___m_RelativeVelocity_2)); }
	inline Vector2_t220132401  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_t220132401 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_t220132401  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3687663125, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3687663125, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3687663125, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3687663125, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3687663125, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3687663125, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3687663125, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3687663125, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT2D_T3687663125_H
#ifndef CONTACTFILTER2D_T1334238686_H
#define CONTACTFILTER2D_T1334238686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactFilter2D
struct  ContactFilter2D_t1334238686 
{
public:
	// System.Boolean UnityEngine.ContactFilter2D::useTriggers
	bool ___useTriggers_0;
	// System.Boolean UnityEngine.ContactFilter2D::useLayerMask
	bool ___useLayerMask_1;
	// System.Boolean UnityEngine.ContactFilter2D::useDepth
	bool ___useDepth_2;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideDepth
	bool ___useOutsideDepth_3;
	// System.Boolean UnityEngine.ContactFilter2D::useNormalAngle
	bool ___useNormalAngle_4;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideNormalAngle
	bool ___useOutsideNormalAngle_5;
	// UnityEngine.LayerMask UnityEngine.ContactFilter2D::layerMask
	LayerMask_t1937774371  ___layerMask_6;
	// System.Single UnityEngine.ContactFilter2D::minDepth
	float ___minDepth_7;
	// System.Single UnityEngine.ContactFilter2D::maxDepth
	float ___maxDepth_8;
	// System.Single UnityEngine.ContactFilter2D::minNormalAngle
	float ___minNormalAngle_9;
	// System.Single UnityEngine.ContactFilter2D::maxNormalAngle
	float ___maxNormalAngle_10;

public:
	inline static int32_t get_offset_of_useTriggers_0() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1334238686, ___useTriggers_0)); }
	inline bool get_useTriggers_0() const { return ___useTriggers_0; }
	inline bool* get_address_of_useTriggers_0() { return &___useTriggers_0; }
	inline void set_useTriggers_0(bool value)
	{
		___useTriggers_0 = value;
	}

	inline static int32_t get_offset_of_useLayerMask_1() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1334238686, ___useLayerMask_1)); }
	inline bool get_useLayerMask_1() const { return ___useLayerMask_1; }
	inline bool* get_address_of_useLayerMask_1() { return &___useLayerMask_1; }
	inline void set_useLayerMask_1(bool value)
	{
		___useLayerMask_1 = value;
	}

	inline static int32_t get_offset_of_useDepth_2() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1334238686, ___useDepth_2)); }
	inline bool get_useDepth_2() const { return ___useDepth_2; }
	inline bool* get_address_of_useDepth_2() { return &___useDepth_2; }
	inline void set_useDepth_2(bool value)
	{
		___useDepth_2 = value;
	}

	inline static int32_t get_offset_of_useOutsideDepth_3() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1334238686, ___useOutsideDepth_3)); }
	inline bool get_useOutsideDepth_3() const { return ___useOutsideDepth_3; }
	inline bool* get_address_of_useOutsideDepth_3() { return &___useOutsideDepth_3; }
	inline void set_useOutsideDepth_3(bool value)
	{
		___useOutsideDepth_3 = value;
	}

	inline static int32_t get_offset_of_useNormalAngle_4() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1334238686, ___useNormalAngle_4)); }
	inline bool get_useNormalAngle_4() const { return ___useNormalAngle_4; }
	inline bool* get_address_of_useNormalAngle_4() { return &___useNormalAngle_4; }
	inline void set_useNormalAngle_4(bool value)
	{
		___useNormalAngle_4 = value;
	}

	inline static int32_t get_offset_of_useOutsideNormalAngle_5() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1334238686, ___useOutsideNormalAngle_5)); }
	inline bool get_useOutsideNormalAngle_5() const { return ___useOutsideNormalAngle_5; }
	inline bool* get_address_of_useOutsideNormalAngle_5() { return &___useOutsideNormalAngle_5; }
	inline void set_useOutsideNormalAngle_5(bool value)
	{
		___useOutsideNormalAngle_5 = value;
	}

	inline static int32_t get_offset_of_layerMask_6() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1334238686, ___layerMask_6)); }
	inline LayerMask_t1937774371  get_layerMask_6() const { return ___layerMask_6; }
	inline LayerMask_t1937774371 * get_address_of_layerMask_6() { return &___layerMask_6; }
	inline void set_layerMask_6(LayerMask_t1937774371  value)
	{
		___layerMask_6 = value;
	}

	inline static int32_t get_offset_of_minDepth_7() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1334238686, ___minDepth_7)); }
	inline float get_minDepth_7() const { return ___minDepth_7; }
	inline float* get_address_of_minDepth_7() { return &___minDepth_7; }
	inline void set_minDepth_7(float value)
	{
		___minDepth_7 = value;
	}

	inline static int32_t get_offset_of_maxDepth_8() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1334238686, ___maxDepth_8)); }
	inline float get_maxDepth_8() const { return ___maxDepth_8; }
	inline float* get_address_of_maxDepth_8() { return &___maxDepth_8; }
	inline void set_maxDepth_8(float value)
	{
		___maxDepth_8 = value;
	}

	inline static int32_t get_offset_of_minNormalAngle_9() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1334238686, ___minNormalAngle_9)); }
	inline float get_minNormalAngle_9() const { return ___minNormalAngle_9; }
	inline float* get_address_of_minNormalAngle_9() { return &___minNormalAngle_9; }
	inline void set_minNormalAngle_9(float value)
	{
		___minNormalAngle_9 = value;
	}

	inline static int32_t get_offset_of_maxNormalAngle_10() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1334238686, ___maxNormalAngle_10)); }
	inline float get_maxNormalAngle_10() const { return ___maxNormalAngle_10; }
	inline float* get_address_of_maxNormalAngle_10() { return &___maxNormalAngle_10; }
	inline void set_maxNormalAngle_10(float value)
	{
		___maxNormalAngle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t1334238686_marshaled_pinvoke
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t1937774371  ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
// Native definition for COM marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t1334238686_marshaled_com
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t1937774371  ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
#endif // CONTACTFILTER2D_T1334238686_H
#ifndef FONTSTYLE_T249809327_H
#define FONTSTYLE_T249809327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FontStyle
struct  FontStyle_t249809327 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FontStyle_t249809327, ___value___1)); }
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
#endif // FONTSTYLE_T249809327_H
#ifndef TEXTGENERATIONERROR_T1271670381_H
#define TEXTGENERATIONERROR_T1271670381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerationError
struct  TextGenerationError_t1271670381 
{
public:
	// System.Int32 UnityEngine.TextGenerationError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextGenerationError_t1271670381, ___value___1)); }
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
#endif // TEXTGENERATIONERROR_T1271670381_H
#ifndef RAYCASTHIT2D_T153468174_H
#define RAYCASTHIT2D_T153468174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t153468174 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t220132401  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t220132401  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t220132401  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t2763227762 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t153468174, ___m_Centroid_0)); }
	inline Vector2_t220132401  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t220132401 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t220132401  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t153468174, ___m_Point_1)); }
	inline Vector2_t220132401  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t220132401 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t220132401  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t153468174, ___m_Normal_2)); }
	inline Vector2_t220132401  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t220132401 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t220132401  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t153468174, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t153468174, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t153468174, ___m_Collider_5)); }
	inline Collider2D_t2763227762 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t2763227762 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t2763227762 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t153468174_marshaled_pinvoke
{
	Vector2_t220132401  ___m_Centroid_0;
	Vector2_t220132401  ___m_Point_1;
	Vector2_t220132401  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2763227762 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t153468174_marshaled_com
{
	Vector2_t220132401  ___m_Centroid_0;
	Vector2_t220132401  ___m_Point_1;
	Vector2_t220132401  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2763227762 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T153468174_H
#ifndef ANIMATIONEVENTSOURCE_T1497087_H
#define ANIMATIONEVENTSOURCE_T1497087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t1497087 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimationEventSource_t1497087, ___value___1)); }
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
#endif // ANIMATIONEVENTSOURCE_T1497087_H
#ifndef AXIS_T4247100251_H
#define AXIS_T4247100251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Axis
struct  Axis_t4247100251 
{
public:
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Axis_t4247100251, ___value___1)); }
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
#endif // AXIS_T4247100251_H
#ifndef EDGE_T3083410505_H
#define EDGE_T3083410505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Edge
struct  Edge_t3083410505 
{
public:
	// System.Int32 UnityEngine.RectTransform/Edge::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Edge_t3083410505, ___value___1)); }
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
#endif // EDGE_T3083410505_H
#ifndef VERTICALWRAPMODE_T3149658427_H
#define VERTICALWRAPMODE_T3149658427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VerticalWrapMode
struct  VerticalWrapMode_t3149658427 
{
public:
	// System.Int32 UnityEngine.VerticalWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VerticalWrapMode_t3149658427, ___value___1)); }
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
#endif // VERTICALWRAPMODE_T3149658427_H
#ifndef RAYCASTHIT_T1008305013_H
#define RAYCASTHIT_T1008305013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1008305013 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3135004533  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3135004533  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t220132401  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t2628297314 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1008305013, ___m_Point_0)); }
	inline Vector3_t3135004533  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3135004533 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3135004533  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1008305013, ___m_Normal_1)); }
	inline Vector3_t3135004533  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3135004533 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3135004533  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1008305013, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1008305013, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1008305013, ___m_UV_4)); }
	inline Vector2_t220132401  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t220132401 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t220132401  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1008305013, ___m_Collider_5)); }
	inline Collider_t2628297314 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t2628297314 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t2628297314 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1008305013_marshaled_pinvoke
{
	Vector3_t3135004533  ___m_Point_0;
	Vector3_t3135004533  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t220132401  ___m_UV_4;
	Collider_t2628297314 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1008305013_marshaled_com
{
	Vector3_t3135004533  ___m_Point_0;
	Vector3_t3135004533  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t220132401  ___m_UV_4;
	Collider_t2628297314 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1008305013_H
#ifndef TEXTANCHOR_T3307004715_H
#define TEXTANCHOR_T3307004715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t3307004715 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t3307004715, ___value___1)); }
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
#endif // TEXTANCHOR_T3307004715_H
#ifndef HORIZONTALWRAPMODE_T4143606101_H
#define HORIZONTALWRAPMODE_T4143606101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HorizontalWrapMode
struct  HorizontalWrapMode_t4143606101 
{
public:
	// System.Int32 UnityEngine.HorizontalWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HorizontalWrapMode_t4143606101, ___value___1)); }
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
#endif // HORIZONTALWRAPMODE_T4143606101_H
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
#ifndef ANIMATIONOFFSETPLAYABLE_T3032324545_H
#define ANIMATIONOFFSETPLAYABLE_T3032324545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t3032324545 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t3833240647  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t3032324545, ___m_Handle_0)); }
	inline PlayableHandle_t3833240647  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3833240647 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3833240647  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t3032324545_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t3032324545  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t3032324545_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t3032324545  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t3032324545 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t3032324545  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONOFFSETPLAYABLE_T3032324545_H
#ifndef TEXTEDITOR_T893023610_H
#define TEXTEDITOR_T893023610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor
struct  TextEditor_t893023610  : public RuntimeObject
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t4191328092 * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t3682286417 * ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t220132401  ___scrollOffset_6;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t1779043998 * ___m_Content_7;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_8;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_9;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_10;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_11;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_12;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_13;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_14;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_15;

public:
	inline static int32_t get_offset_of_keyboardOnScreen_0() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___keyboardOnScreen_0)); }
	inline TouchScreenKeyboard_t4191328092 * get_keyboardOnScreen_0() const { return ___keyboardOnScreen_0; }
	inline TouchScreenKeyboard_t4191328092 ** get_address_of_keyboardOnScreen_0() { return &___keyboardOnScreen_0; }
	inline void set_keyboardOnScreen_0(TouchScreenKeyboard_t4191328092 * value)
	{
		___keyboardOnScreen_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyboardOnScreen_0), value);
	}

	inline static int32_t get_offset_of_controlID_1() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___controlID_1)); }
	inline int32_t get_controlID_1() const { return ___controlID_1; }
	inline int32_t* get_address_of_controlID_1() { return &___controlID_1; }
	inline void set_controlID_1(int32_t value)
	{
		___controlID_1 = value;
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___style_2)); }
	inline GUIStyle_t3682286417 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t3682286417 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t3682286417 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier((&___style_2), value);
	}

	inline static int32_t get_offset_of_multiline_3() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___multiline_3)); }
	inline bool get_multiline_3() const { return ___multiline_3; }
	inline bool* get_address_of_multiline_3() { return &___multiline_3; }
	inline void set_multiline_3(bool value)
	{
		___multiline_3 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_4() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___hasHorizontalCursorPos_4)); }
	inline bool get_hasHorizontalCursorPos_4() const { return ___hasHorizontalCursorPos_4; }
	inline bool* get_address_of_hasHorizontalCursorPos_4() { return &___hasHorizontalCursorPos_4; }
	inline void set_hasHorizontalCursorPos_4(bool value)
	{
		___hasHorizontalCursorPos_4 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_5() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___isPasswordField_5)); }
	inline bool get_isPasswordField_5() const { return ___isPasswordField_5; }
	inline bool* get_address_of_isPasswordField_5() { return &___isPasswordField_5; }
	inline void set_isPasswordField_5(bool value)
	{
		___isPasswordField_5 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_6() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___scrollOffset_6)); }
	inline Vector2_t220132401  get_scrollOffset_6() const { return ___scrollOffset_6; }
	inline Vector2_t220132401 * get_address_of_scrollOffset_6() { return &___scrollOffset_6; }
	inline void set_scrollOffset_6(Vector2_t220132401  value)
	{
		___scrollOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_Content_7() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___m_Content_7)); }
	inline GUIContent_t1779043998 * get_m_Content_7() const { return ___m_Content_7; }
	inline GUIContent_t1779043998 ** get_address_of_m_Content_7() { return &___m_Content_7; }
	inline void set_m_Content_7(GUIContent_t1779043998 * value)
	{
		___m_Content_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_7), value);
	}

	inline static int32_t get_offset_of_m_CursorIndex_8() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___m_CursorIndex_8)); }
	inline int32_t get_m_CursorIndex_8() const { return ___m_CursorIndex_8; }
	inline int32_t* get_address_of_m_CursorIndex_8() { return &___m_CursorIndex_8; }
	inline void set_m_CursorIndex_8(int32_t value)
	{
		___m_CursorIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_9() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___m_SelectIndex_9)); }
	inline int32_t get_m_SelectIndex_9() const { return ___m_SelectIndex_9; }
	inline int32_t* get_address_of_m_SelectIndex_9() { return &___m_SelectIndex_9; }
	inline void set_m_SelectIndex_9(int32_t value)
	{
		___m_SelectIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_10() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___m_RevealCursor_10)); }
	inline bool get_m_RevealCursor_10() const { return ___m_RevealCursor_10; }
	inline bool* get_address_of_m_RevealCursor_10() { return &___m_RevealCursor_10; }
	inline void set_m_RevealCursor_10(bool value)
	{
		___m_RevealCursor_10 = value;
	}

	inline static int32_t get_offset_of_m_MouseDragSelectsWholeWords_11() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___m_MouseDragSelectsWholeWords_11)); }
	inline bool get_m_MouseDragSelectsWholeWords_11() const { return ___m_MouseDragSelectsWholeWords_11; }
	inline bool* get_address_of_m_MouseDragSelectsWholeWords_11() { return &___m_MouseDragSelectsWholeWords_11; }
	inline void set_m_MouseDragSelectsWholeWords_11(bool value)
	{
		___m_MouseDragSelectsWholeWords_11 = value;
	}

	inline static int32_t get_offset_of_m_DblClickInitPos_12() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___m_DblClickInitPos_12)); }
	inline int32_t get_m_DblClickInitPos_12() const { return ___m_DblClickInitPos_12; }
	inline int32_t* get_address_of_m_DblClickInitPos_12() { return &___m_DblClickInitPos_12; }
	inline void set_m_DblClickInitPos_12(int32_t value)
	{
		___m_DblClickInitPos_12 = value;
	}

	inline static int32_t get_offset_of_m_DblClickSnap_13() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___m_DblClickSnap_13)); }
	inline uint8_t get_m_DblClickSnap_13() const { return ___m_DblClickSnap_13; }
	inline uint8_t* get_address_of_m_DblClickSnap_13() { return &___m_DblClickSnap_13; }
	inline void set_m_DblClickSnap_13(uint8_t value)
	{
		___m_DblClickSnap_13 = value;
	}

	inline static int32_t get_offset_of_m_bJustSelected_14() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___m_bJustSelected_14)); }
	inline bool get_m_bJustSelected_14() const { return ___m_bJustSelected_14; }
	inline bool* get_address_of_m_bJustSelected_14() { return &___m_bJustSelected_14; }
	inline void set_m_bJustSelected_14(bool value)
	{
		___m_bJustSelected_14 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_15() { return static_cast<int32_t>(offsetof(TextEditor_t893023610, ___m_iAltCursorPos_15)); }
	inline int32_t get_m_iAltCursorPos_15() const { return ___m_iAltCursorPos_15; }
	inline int32_t* get_address_of_m_iAltCursorPos_15() { return &___m_iAltCursorPos_15; }
	inline void set_m_iAltCursorPos_15(int32_t value)
	{
		___m_iAltCursorPos_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTEDITOR_T893023610_H
#ifndef ANIMATIONMIXERPLAYABLE_T3718580065_H
#define ANIMATIONMIXERPLAYABLE_T3718580065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_t3718580065 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t3833240647  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t3718580065, ___m_Handle_0)); }
	inline PlayableHandle_t3833240647  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3833240647 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3833240647  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMIXERPLAYABLE_T3718580065_H
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
#ifndef ANIMATIONLAYERMIXERPLAYABLE_T3896145778_H
#define ANIMATIONLAYERMIXERPLAYABLE_T3896145778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t3896145778 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t3833240647  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t3896145778, ___m_Handle_0)); }
	inline PlayableHandle_t3833240647  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3833240647 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3833240647  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t3896145778_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t3896145778  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t3896145778_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t3896145778  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t3896145778 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t3896145778  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONLAYERMIXERPLAYABLE_T3896145778_H
#ifndef ANIMATIONCLIPPLAYABLE_T3965686632_H
#define ANIMATIONCLIPPLAYABLE_T3965686632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t3965686632 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t3833240647  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t3965686632, ___m_Handle_0)); }
	inline PlayableHandle_t3833240647  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3833240647 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3833240647  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIPPLAYABLE_T3965686632_H
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
#ifndef AUDIOMIXERPLAYABLE_T184718795_H
#define AUDIOMIXERPLAYABLE_T184718795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t184718795 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t3833240647  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t184718795, ___m_Handle_0)); }
	inline PlayableHandle_t3833240647  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3833240647 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3833240647  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T184718795_H
#ifndef AUDIOCLIPPLAYABLE_T508528095_H
#define AUDIOCLIPPLAYABLE_T508528095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t508528095 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t3833240647  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t508528095, ___m_Handle_0)); }
	inline PlayableHandle_t3833240647  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3833240647 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3833240647  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T508528095_H
#ifndef AUDIOPLAYABLEOUTPUT_T3151069686_H
#define AUDIOPLAYABLEOUTPUT_T3151069686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t3151069686 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t443762492  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t3151069686, ___m_Handle_0)); }
	inline PlayableOutputHandle_t443762492  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t443762492 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t443762492  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEOUTPUT_T3151069686_H
#ifndef ANIMATIONPLAYABLEOUTPUT_T893098896_H
#define ANIMATIONPLAYABLEOUTPUT_T893098896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_t893098896 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t443762492  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_t893098896, ___m_Handle_0)); }
	inline PlayableOutputHandle_t443762492  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t443762492 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t443762492  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEOUTPUT_T893098896_H
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
#ifndef SPRITEATLAS_T2294198756_H
#define SPRITEATLAS_T2294198756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t2294198756  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T2294198756_H
#ifndef AUDIOCLIP_T3960397311_H
#define AUDIOCLIP_T3960397311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3960397311  : public Object_t2748336099
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t4084513124 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t3362020340 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3960397311, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t4084513124 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t4084513124 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t4084513124 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3960397311, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t3362020340 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t3362020340 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t3362020340 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3960397311_H
#ifndef FONT_T7410343_H
#define FONT_T7410343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t7410343  : public Object_t2748336099
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2790002797 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t7410343, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t2790002797 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t2790002797 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t2790002797 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t7410343_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t1771024396 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t7410343_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t1771024396 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t1771024396 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t1771024396 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T7410343_H
#ifndef ANIMATORCONTROLLERPLAYABLE_T76259512_H
#define ANIMATORCONTROLLERPLAYABLE_T76259512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t76259512 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t3833240647  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t76259512, ___m_Handle_0)); }
	inline PlayableHandle_t3833240647  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t3833240647 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t3833240647  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t76259512_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t76259512  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t76259512_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t76259512  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t76259512 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t76259512  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPLAYABLE_T76259512_H
#ifndef GUILAYOUTOPTION_T4107894613_H
#define GUILAYOUTOPTION_T4107894613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t4107894613  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t4107894613, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t4107894613, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTOPTION_T4107894613_H
#ifndef ANIMATIONEVENT_T2637376726_H
#define ANIMATIONEVENT_T2637376726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEvent
struct  AnimationEvent_t2637376726  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_t2748336099 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t4237697442 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t742498804  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t2802853799  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_t2637376726, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_t2637376726, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FunctionName_1), value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_t2637376726, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringParameter_2), value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_t2637376726, ___m_ObjectReferenceParameter_3)); }
	inline Object_t2748336099 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_t2748336099 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_t2748336099 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectReferenceParameter_3), value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_t2637376726, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_t2637376726, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_t2637376726, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_t2637376726, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_t2637376726, ___m_StateSender_8)); }
	inline AnimationState_t4237697442 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t4237697442 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t4237697442 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_StateSender_8), value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_t2637376726, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_t742498804  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_t742498804 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_t742498804  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_t2637376726, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t2802853799  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t2802853799 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t2802853799  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t2637376726_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_t2748336099_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t4237697442 * ___m_StateSender_8;
	AnimatorStateInfo_t742498804  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t2802853799  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t2637376726_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_t2748336099_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t4237697442 * ___m_StateSender_8;
	AnimatorStateInfo_t742498804  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t2802853799  ___m_AnimatorClipInfo_10;
};
#endif // ANIMATIONEVENT_T2637376726_H
#ifndef HUMANBONE_T2471663341_H
#define HUMANBONE_T2471663341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBone
struct  HumanBone_t2471663341 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t3548641834  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t2471663341, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneName_0), value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t2471663341, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanName_1), value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t2471663341, ___limit_2)); }
	inline HumanLimit_t3548641834  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t3548641834 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t3548641834  value)
	{
		___limit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t2471663341_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t3548641834  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t2471663341_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t3548641834  ___limit_2;
};
#endif // HUMANBONE_T2471663341_H
#ifndef GUILAYOUTGROUP_T1875918777_H
#define GUILAYOUTGROUP_T1875918777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutGroup
struct  GUILayoutGroup_t1875918777  : public GUILayoutEntry_t2542256857
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_t2267125456 * ___entries_10;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_11;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_12;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_13;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_14;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_15;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_16;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_19;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_21;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_25;
	// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::m_Margin
	RectOffset_t2389311507 * ___m_Margin_26;

public:
	inline static int32_t get_offset_of_entries_10() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___entries_10)); }
	inline List_1_t2267125456 * get_entries_10() const { return ___entries_10; }
	inline List_1_t2267125456 ** get_address_of_entries_10() { return &___entries_10; }
	inline void set_entries_10(List_1_t2267125456 * value)
	{
		___entries_10 = value;
		Il2CppCodeGenWriteBarrier((&___entries_10), value);
	}

	inline static int32_t get_offset_of_isVertical_11() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___isVertical_11)); }
	inline bool get_isVertical_11() const { return ___isVertical_11; }
	inline bool* get_address_of_isVertical_11() { return &___isVertical_11; }
	inline void set_isVertical_11(bool value)
	{
		___isVertical_11 = value;
	}

	inline static int32_t get_offset_of_resetCoords_12() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___resetCoords_12)); }
	inline bool get_resetCoords_12() const { return ___resetCoords_12; }
	inline bool* get_address_of_resetCoords_12() { return &___resetCoords_12; }
	inline void set_resetCoords_12(bool value)
	{
		___resetCoords_12 = value;
	}

	inline static int32_t get_offset_of_spacing_13() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___spacing_13)); }
	inline float get_spacing_13() const { return ___spacing_13; }
	inline float* get_address_of_spacing_13() { return &___spacing_13; }
	inline void set_spacing_13(float value)
	{
		___spacing_13 = value;
	}

	inline static int32_t get_offset_of_sameSize_14() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___sameSize_14)); }
	inline bool get_sameSize_14() const { return ___sameSize_14; }
	inline bool* get_address_of_sameSize_14() { return &___sameSize_14; }
	inline void set_sameSize_14(bool value)
	{
		___sameSize_14 = value;
	}

	inline static int32_t get_offset_of_isWindow_15() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___isWindow_15)); }
	inline bool get_isWindow_15() const { return ___isWindow_15; }
	inline bool* get_address_of_isWindow_15() { return &___isWindow_15; }
	inline void set_isWindow_15(bool value)
	{
		___isWindow_15 = value;
	}

	inline static int32_t get_offset_of_windowID_16() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___windowID_16)); }
	inline int32_t get_windowID_16() const { return ___windowID_16; }
	inline int32_t* get_address_of_windowID_16() { return &___windowID_16; }
	inline void set_windowID_16(int32_t value)
	{
		___windowID_16 = value;
	}

	inline static int32_t get_offset_of_m_Cursor_17() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___m_Cursor_17)); }
	inline int32_t get_m_Cursor_17() const { return ___m_Cursor_17; }
	inline int32_t* get_address_of_m_Cursor_17() { return &___m_Cursor_17; }
	inline void set_m_Cursor_17(int32_t value)
	{
		___m_Cursor_17 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountX_18() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___m_StretchableCountX_18)); }
	inline int32_t get_m_StretchableCountX_18() const { return ___m_StretchableCountX_18; }
	inline int32_t* get_address_of_m_StretchableCountX_18() { return &___m_StretchableCountX_18; }
	inline void set_m_StretchableCountX_18(int32_t value)
	{
		___m_StretchableCountX_18 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountY_19() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___m_StretchableCountY_19)); }
	inline int32_t get_m_StretchableCountY_19() const { return ___m_StretchableCountY_19; }
	inline int32_t* get_address_of_m_StretchableCountY_19() { return &___m_StretchableCountY_19; }
	inline void set_m_StretchableCountY_19(int32_t value)
	{
		___m_StretchableCountY_19 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedWidth_20() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___m_UserSpecifiedWidth_20)); }
	inline bool get_m_UserSpecifiedWidth_20() const { return ___m_UserSpecifiedWidth_20; }
	inline bool* get_address_of_m_UserSpecifiedWidth_20() { return &___m_UserSpecifiedWidth_20; }
	inline void set_m_UserSpecifiedWidth_20(bool value)
	{
		___m_UserSpecifiedWidth_20 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedHeight_21() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___m_UserSpecifiedHeight_21)); }
	inline bool get_m_UserSpecifiedHeight_21() const { return ___m_UserSpecifiedHeight_21; }
	inline bool* get_address_of_m_UserSpecifiedHeight_21() { return &___m_UserSpecifiedHeight_21; }
	inline void set_m_UserSpecifiedHeight_21(bool value)
	{
		___m_UserSpecifiedHeight_21 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinWidth_22() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___m_ChildMinWidth_22)); }
	inline float get_m_ChildMinWidth_22() const { return ___m_ChildMinWidth_22; }
	inline float* get_address_of_m_ChildMinWidth_22() { return &___m_ChildMinWidth_22; }
	inline void set_m_ChildMinWidth_22(float value)
	{
		___m_ChildMinWidth_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxWidth_23() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___m_ChildMaxWidth_23)); }
	inline float get_m_ChildMaxWidth_23() const { return ___m_ChildMaxWidth_23; }
	inline float* get_address_of_m_ChildMaxWidth_23() { return &___m_ChildMaxWidth_23; }
	inline void set_m_ChildMaxWidth_23(float value)
	{
		___m_ChildMaxWidth_23 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinHeight_24() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___m_ChildMinHeight_24)); }
	inline float get_m_ChildMinHeight_24() const { return ___m_ChildMinHeight_24; }
	inline float* get_address_of_m_ChildMinHeight_24() { return &___m_ChildMinHeight_24; }
	inline void set_m_ChildMinHeight_24(float value)
	{
		___m_ChildMinHeight_24 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxHeight_25() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___m_ChildMaxHeight_25)); }
	inline float get_m_ChildMaxHeight_25() const { return ___m_ChildMaxHeight_25; }
	inline float* get_address_of_m_ChildMaxHeight_25() { return &___m_ChildMaxHeight_25; }
	inline void set_m_ChildMaxHeight_25(float value)
	{
		___m_ChildMaxHeight_25 = value;
	}

	inline static int32_t get_offset_of_m_Margin_26() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t1875918777, ___m_Margin_26)); }
	inline RectOffset_t2389311507 * get_m_Margin_26() const { return ___m_Margin_26; }
	inline RectOffset_t2389311507 ** get_address_of_m_Margin_26() { return &___m_Margin_26; }
	inline void set_m_Margin_26(RectOffset_t2389311507 * value)
	{
		___m_Margin_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTGROUP_T1875918777_H
#ifndef RUNTIMEANIMATORCONTROLLER_T1038216979_H
#define RUNTIMEANIMATORCONTROLLER_T1038216979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeAnimatorController
struct  RuntimeAnimatorController_t1038216979  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEANIMATORCONTROLLER_T1038216979_H
#ifndef AVATARMASK_T2543038138_H
#define AVATARMASK_T2543038138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarMask
struct  AvatarMask_t2543038138  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARMASK_T2543038138_H
#ifndef ANIMATORCONTROLLERPARAMETER_T2794502131_H
#define ANIMATORCONTROLLERPARAMETER_T2794502131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameter
struct  AnimatorControllerParameter_t2794502131  : public RuntimeObject
{
public:
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2794502131, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2794502131, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultFloat_2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2794502131, ___m_DefaultFloat_2)); }
	inline float get_m_DefaultFloat_2() const { return ___m_DefaultFloat_2; }
	inline float* get_address_of_m_DefaultFloat_2() { return &___m_DefaultFloat_2; }
	inline void set_m_DefaultFloat_2(float value)
	{
		___m_DefaultFloat_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultInt_3() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2794502131, ___m_DefaultInt_3)); }
	inline int32_t get_m_DefaultInt_3() const { return ___m_DefaultInt_3; }
	inline int32_t* get_address_of_m_DefaultInt_3() { return &___m_DefaultInt_3; }
	inline void set_m_DefaultInt_3(int32_t value)
	{
		___m_DefaultInt_3 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBool_4() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2794502131, ___m_DefaultBool_4)); }
	inline bool get_m_DefaultBool_4() const { return ___m_DefaultBool_4; }
	inline bool* get_address_of_m_DefaultBool_4() { return &___m_DefaultBool_4; }
	inline void set_m_DefaultBool_4(bool value)
	{
		___m_DefaultBool_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETER_T2794502131_H
#ifndef MOTION_T3193511884_H
#define MOTION_T3193511884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t3193511884  : public Object_t2748336099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T3193511884_H
#ifndef ANIMATIONSTATE_T4237697442_H
#define ANIMATIONSTATE_T4237697442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t4237697442  : public TrackedReference_t523229651
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T4237697442_H
#ifndef GUISTYLE_T3682286417_H
#define GUISTYLE_T3682286417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3682286417  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t3156549051 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t3156549051 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t3156549051 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t3156549051 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t3156549051 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t3156549051 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t3156549051 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t3156549051 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t2389311507 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t2389311507 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t2389311507 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t2389311507 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t7410343 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_Normal_1)); }
	inline GUIStyleState_t3156549051 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t3156549051 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t3156549051 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_Hover_2)); }
	inline GUIStyleState_t3156549051 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t3156549051 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t3156549051 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_Active_3)); }
	inline GUIStyleState_t3156549051 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t3156549051 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t3156549051 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_Focused_4)); }
	inline GUIStyleState_t3156549051 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t3156549051 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t3156549051 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_OnNormal_5)); }
	inline GUIStyleState_t3156549051 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t3156549051 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t3156549051 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_OnHover_6)); }
	inline GUIStyleState_t3156549051 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t3156549051 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t3156549051 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_OnActive_7)); }
	inline GUIStyleState_t3156549051 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t3156549051 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t3156549051 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_OnFocused_8)); }
	inline GUIStyleState_t3156549051 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t3156549051 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t3156549051 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_Border_9)); }
	inline RectOffset_t2389311507 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t2389311507 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t2389311507 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_Padding_10)); }
	inline RectOffset_t2389311507 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t2389311507 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t2389311507 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_Margin_11)); }
	inline RectOffset_t2389311507 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t2389311507 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t2389311507 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_Overflow_12)); }
	inline RectOffset_t2389311507 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t2389311507 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t2389311507 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417, ___m_FontInternal_13)); }
	inline Font_t7410343 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t7410343 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t7410343 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3682286417_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3682286417 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3682286417_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3682286417 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3682286417 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3682286417 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3682286417_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t3156549051_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t3156549051_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t3156549051_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t3156549051_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t3156549051_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t3156549051_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t3156549051_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t3156549051_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t2389311507_marshaled_pinvoke ___m_Border_9;
	RectOffset_t2389311507_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t2389311507_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t2389311507_marshaled_pinvoke ___m_Overflow_12;
	Font_t7410343 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3682286417_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t3156549051_marshaled_com* ___m_Normal_1;
	GUIStyleState_t3156549051_marshaled_com* ___m_Hover_2;
	GUIStyleState_t3156549051_marshaled_com* ___m_Active_3;
	GUIStyleState_t3156549051_marshaled_com* ___m_Focused_4;
	GUIStyleState_t3156549051_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t3156549051_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t3156549051_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t3156549051_marshaled_com* ___m_OnFocused_8;
	RectOffset_t2389311507_marshaled_com* ___m_Border_9;
	RectOffset_t2389311507_marshaled_com* ___m_Padding_10;
	RectOffset_t2389311507_marshaled_com* ___m_Margin_11;
	RectOffset_t2389311507_marshaled_com* ___m_Overflow_12;
	Font_t7410343 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3682286417_H
#ifndef TEXTGENERATIONSETTINGS_T213248848_H
#define TEXTGENERATIONSETTINGS_T213248848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerationSettings
struct  TextGenerationSettings_t213248848 
{
public:
	// UnityEngine.Font UnityEngine.TextGenerationSettings::font
	Font_t7410343 * ___font_0;
	// UnityEngine.Color UnityEngine.TextGenerationSettings::color
	Color_t3323652498  ___color_1;
	// System.Int32 UnityEngine.TextGenerationSettings::fontSize
	int32_t ___fontSize_2;
	// System.Single UnityEngine.TextGenerationSettings::lineSpacing
	float ___lineSpacing_3;
	// System.Boolean UnityEngine.TextGenerationSettings::richText
	bool ___richText_4;
	// System.Single UnityEngine.TextGenerationSettings::scaleFactor
	float ___scaleFactor_5;
	// UnityEngine.FontStyle UnityEngine.TextGenerationSettings::fontStyle
	int32_t ___fontStyle_6;
	// UnityEngine.TextAnchor UnityEngine.TextGenerationSettings::textAnchor
	int32_t ___textAnchor_7;
	// System.Boolean UnityEngine.TextGenerationSettings::alignByGeometry
	bool ___alignByGeometry_8;
	// System.Boolean UnityEngine.TextGenerationSettings::resizeTextForBestFit
	bool ___resizeTextForBestFit_9;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMinSize
	int32_t ___resizeTextMinSize_10;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMaxSize
	int32_t ___resizeTextMaxSize_11;
	// System.Boolean UnityEngine.TextGenerationSettings::updateBounds
	bool ___updateBounds_12;
	// UnityEngine.VerticalWrapMode UnityEngine.TextGenerationSettings::verticalOverflow
	int32_t ___verticalOverflow_13;
	// UnityEngine.HorizontalWrapMode UnityEngine.TextGenerationSettings::horizontalOverflow
	int32_t ___horizontalOverflow_14;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::generationExtents
	Vector2_t220132401  ___generationExtents_15;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::pivot
	Vector2_t220132401  ___pivot_16;
	// System.Boolean UnityEngine.TextGenerationSettings::generateOutOfBounds
	bool ___generateOutOfBounds_17;

public:
	inline static int32_t get_offset_of_font_0() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___font_0)); }
	inline Font_t7410343 * get_font_0() const { return ___font_0; }
	inline Font_t7410343 ** get_address_of_font_0() { return &___font_0; }
	inline void set_font_0(Font_t7410343 * value)
	{
		___font_0 = value;
		Il2CppCodeGenWriteBarrier((&___font_0), value);
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___color_1)); }
	inline Color_t3323652498  get_color_1() const { return ___color_1; }
	inline Color_t3323652498 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t3323652498  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_fontSize_2() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___fontSize_2)); }
	inline int32_t get_fontSize_2() const { return ___fontSize_2; }
	inline int32_t* get_address_of_fontSize_2() { return &___fontSize_2; }
	inline void set_fontSize_2(int32_t value)
	{
		___fontSize_2 = value;
	}

	inline static int32_t get_offset_of_lineSpacing_3() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___lineSpacing_3)); }
	inline float get_lineSpacing_3() const { return ___lineSpacing_3; }
	inline float* get_address_of_lineSpacing_3() { return &___lineSpacing_3; }
	inline void set_lineSpacing_3(float value)
	{
		___lineSpacing_3 = value;
	}

	inline static int32_t get_offset_of_richText_4() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___richText_4)); }
	inline bool get_richText_4() const { return ___richText_4; }
	inline bool* get_address_of_richText_4() { return &___richText_4; }
	inline void set_richText_4(bool value)
	{
		___richText_4 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_5() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___scaleFactor_5)); }
	inline float get_scaleFactor_5() const { return ___scaleFactor_5; }
	inline float* get_address_of_scaleFactor_5() { return &___scaleFactor_5; }
	inline void set_scaleFactor_5(float value)
	{
		___scaleFactor_5 = value;
	}

	inline static int32_t get_offset_of_fontStyle_6() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___fontStyle_6)); }
	inline int32_t get_fontStyle_6() const { return ___fontStyle_6; }
	inline int32_t* get_address_of_fontStyle_6() { return &___fontStyle_6; }
	inline void set_fontStyle_6(int32_t value)
	{
		___fontStyle_6 = value;
	}

	inline static int32_t get_offset_of_textAnchor_7() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___textAnchor_7)); }
	inline int32_t get_textAnchor_7() const { return ___textAnchor_7; }
	inline int32_t* get_address_of_textAnchor_7() { return &___textAnchor_7; }
	inline void set_textAnchor_7(int32_t value)
	{
		___textAnchor_7 = value;
	}

	inline static int32_t get_offset_of_alignByGeometry_8() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___alignByGeometry_8)); }
	inline bool get_alignByGeometry_8() const { return ___alignByGeometry_8; }
	inline bool* get_address_of_alignByGeometry_8() { return &___alignByGeometry_8; }
	inline void set_alignByGeometry_8(bool value)
	{
		___alignByGeometry_8 = value;
	}

	inline static int32_t get_offset_of_resizeTextForBestFit_9() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___resizeTextForBestFit_9)); }
	inline bool get_resizeTextForBestFit_9() const { return ___resizeTextForBestFit_9; }
	inline bool* get_address_of_resizeTextForBestFit_9() { return &___resizeTextForBestFit_9; }
	inline void set_resizeTextForBestFit_9(bool value)
	{
		___resizeTextForBestFit_9 = value;
	}

	inline static int32_t get_offset_of_resizeTextMinSize_10() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___resizeTextMinSize_10)); }
	inline int32_t get_resizeTextMinSize_10() const { return ___resizeTextMinSize_10; }
	inline int32_t* get_address_of_resizeTextMinSize_10() { return &___resizeTextMinSize_10; }
	inline void set_resizeTextMinSize_10(int32_t value)
	{
		___resizeTextMinSize_10 = value;
	}

	inline static int32_t get_offset_of_resizeTextMaxSize_11() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___resizeTextMaxSize_11)); }
	inline int32_t get_resizeTextMaxSize_11() const { return ___resizeTextMaxSize_11; }
	inline int32_t* get_address_of_resizeTextMaxSize_11() { return &___resizeTextMaxSize_11; }
	inline void set_resizeTextMaxSize_11(int32_t value)
	{
		___resizeTextMaxSize_11 = value;
	}

	inline static int32_t get_offset_of_updateBounds_12() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___updateBounds_12)); }
	inline bool get_updateBounds_12() const { return ___updateBounds_12; }
	inline bool* get_address_of_updateBounds_12() { return &___updateBounds_12; }
	inline void set_updateBounds_12(bool value)
	{
		___updateBounds_12 = value;
	}

	inline static int32_t get_offset_of_verticalOverflow_13() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___verticalOverflow_13)); }
	inline int32_t get_verticalOverflow_13() const { return ___verticalOverflow_13; }
	inline int32_t* get_address_of_verticalOverflow_13() { return &___verticalOverflow_13; }
	inline void set_verticalOverflow_13(int32_t value)
	{
		___verticalOverflow_13 = value;
	}

	inline static int32_t get_offset_of_horizontalOverflow_14() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___horizontalOverflow_14)); }
	inline int32_t get_horizontalOverflow_14() const { return ___horizontalOverflow_14; }
	inline int32_t* get_address_of_horizontalOverflow_14() { return &___horizontalOverflow_14; }
	inline void set_horizontalOverflow_14(int32_t value)
	{
		___horizontalOverflow_14 = value;
	}

	inline static int32_t get_offset_of_generationExtents_15() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___generationExtents_15)); }
	inline Vector2_t220132401  get_generationExtents_15() const { return ___generationExtents_15; }
	inline Vector2_t220132401 * get_address_of_generationExtents_15() { return &___generationExtents_15; }
	inline void set_generationExtents_15(Vector2_t220132401  value)
	{
		___generationExtents_15 = value;
	}

	inline static int32_t get_offset_of_pivot_16() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___pivot_16)); }
	inline Vector2_t220132401  get_pivot_16() const { return ___pivot_16; }
	inline Vector2_t220132401 * get_address_of_pivot_16() { return &___pivot_16; }
	inline void set_pivot_16(Vector2_t220132401  value)
	{
		___pivot_16 = value;
	}

	inline static int32_t get_offset_of_generateOutOfBounds_17() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t213248848, ___generateOutOfBounds_17)); }
	inline bool get_generateOutOfBounds_17() const { return ___generateOutOfBounds_17; }
	inline bool* get_address_of_generateOutOfBounds_17() { return &___generateOutOfBounds_17; }
	inline void set_generateOutOfBounds_17(bool value)
	{
		___generateOutOfBounds_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t213248848_marshaled_pinvoke
{
	Font_t7410343 * ___font_0;
	Color_t3323652498  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t220132401  ___generationExtents_15;
	Vector2_t220132401  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
// Native definition for COM marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t213248848_marshaled_com
{
	Font_t7410343 * ___font_0;
	Color_t3323652498  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t220132401  ___generationExtents_15;
	Vector2_t220132401  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
#endif // TEXTGENERATIONSETTINGS_T213248848_H
#ifndef COLLIDER_T2628297314_H
#define COLLIDER_T2628297314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t2628297314  : public Component_t3680335150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T2628297314_H
#ifndef TEXTGENERATOR_T3237981637_H
#define TEXTGENERATOR_T3237981637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerator
struct  TextGenerator_t3237981637  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TextGenerator::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.String UnityEngine.TextGenerator::m_LastString
	String_t* ___m_LastString_1;
	// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::m_LastSettings
	TextGenerationSettings_t213248848  ___m_LastSettings_2;
	// System.Boolean UnityEngine.TextGenerator::m_HasGenerated
	bool ___m_HasGenerated_3;
	// UnityEngine.TextGenerationError UnityEngine.TextGenerator::m_LastValid
	int32_t ___m_LastValid_4;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::m_Verts
	List_1_t2430045607 * ___m_Verts_5;
	// System.Collections.Generic.List`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::m_Characters
	List_1_t1409390338 * ___m_Characters_6;
	// System.Collections.Generic.List`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::m_Lines
	List_1_t3407446582 * ___m_Lines_7;
	// System.Boolean UnityEngine.TextGenerator::m_CachedVerts
	bool ___m_CachedVerts_8;
	// System.Boolean UnityEngine.TextGenerator::m_CachedCharacters
	bool ___m_CachedCharacters_9;
	// System.Boolean UnityEngine.TextGenerator::m_CachedLines
	bool ___m_CachedLines_10;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TextGenerator_t3237981637, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_LastString_1() { return static_cast<int32_t>(offsetof(TextGenerator_t3237981637, ___m_LastString_1)); }
	inline String_t* get_m_LastString_1() const { return ___m_LastString_1; }
	inline String_t** get_address_of_m_LastString_1() { return &___m_LastString_1; }
	inline void set_m_LastString_1(String_t* value)
	{
		___m_LastString_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastString_1), value);
	}

	inline static int32_t get_offset_of_m_LastSettings_2() { return static_cast<int32_t>(offsetof(TextGenerator_t3237981637, ___m_LastSettings_2)); }
	inline TextGenerationSettings_t213248848  get_m_LastSettings_2() const { return ___m_LastSettings_2; }
	inline TextGenerationSettings_t213248848 * get_address_of_m_LastSettings_2() { return &___m_LastSettings_2; }
	inline void set_m_LastSettings_2(TextGenerationSettings_t213248848  value)
	{
		___m_LastSettings_2 = value;
	}

	inline static int32_t get_offset_of_m_HasGenerated_3() { return static_cast<int32_t>(offsetof(TextGenerator_t3237981637, ___m_HasGenerated_3)); }
	inline bool get_m_HasGenerated_3() const { return ___m_HasGenerated_3; }
	inline bool* get_address_of_m_HasGenerated_3() { return &___m_HasGenerated_3; }
	inline void set_m_HasGenerated_3(bool value)
	{
		___m_HasGenerated_3 = value;
	}

	inline static int32_t get_offset_of_m_LastValid_4() { return static_cast<int32_t>(offsetof(TextGenerator_t3237981637, ___m_LastValid_4)); }
	inline int32_t get_m_LastValid_4() const { return ___m_LastValid_4; }
	inline int32_t* get_address_of_m_LastValid_4() { return &___m_LastValid_4; }
	inline void set_m_LastValid_4(int32_t value)
	{
		___m_LastValid_4 = value;
	}

	inline static int32_t get_offset_of_m_Verts_5() { return static_cast<int32_t>(offsetof(TextGenerator_t3237981637, ___m_Verts_5)); }
	inline List_1_t2430045607 * get_m_Verts_5() const { return ___m_Verts_5; }
	inline List_1_t2430045607 ** get_address_of_m_Verts_5() { return &___m_Verts_5; }
	inline void set_m_Verts_5(List_1_t2430045607 * value)
	{
		___m_Verts_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Verts_5), value);
	}

	inline static int32_t get_offset_of_m_Characters_6() { return static_cast<int32_t>(offsetof(TextGenerator_t3237981637, ___m_Characters_6)); }
	inline List_1_t1409390338 * get_m_Characters_6() const { return ___m_Characters_6; }
	inline List_1_t1409390338 ** get_address_of_m_Characters_6() { return &___m_Characters_6; }
	inline void set_m_Characters_6(List_1_t1409390338 * value)
	{
		___m_Characters_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Characters_6), value);
	}

	inline static int32_t get_offset_of_m_Lines_7() { return static_cast<int32_t>(offsetof(TextGenerator_t3237981637, ___m_Lines_7)); }
	inline List_1_t3407446582 * get_m_Lines_7() const { return ___m_Lines_7; }
	inline List_1_t3407446582 ** get_address_of_m_Lines_7() { return &___m_Lines_7; }
	inline void set_m_Lines_7(List_1_t3407446582 * value)
	{
		___m_Lines_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Lines_7), value);
	}

	inline static int32_t get_offset_of_m_CachedVerts_8() { return static_cast<int32_t>(offsetof(TextGenerator_t3237981637, ___m_CachedVerts_8)); }
	inline bool get_m_CachedVerts_8() const { return ___m_CachedVerts_8; }
	inline bool* get_address_of_m_CachedVerts_8() { return &___m_CachedVerts_8; }
	inline void set_m_CachedVerts_8(bool value)
	{
		___m_CachedVerts_8 = value;
	}

	inline static int32_t get_offset_of_m_CachedCharacters_9() { return static_cast<int32_t>(offsetof(TextGenerator_t3237981637, ___m_CachedCharacters_9)); }
	inline bool get_m_CachedCharacters_9() const { return ___m_CachedCharacters_9; }
	inline bool* get_address_of_m_CachedCharacters_9() { return &___m_CachedCharacters_9; }
	inline void set_m_CachedCharacters_9(bool value)
	{
		___m_CachedCharacters_9 = value;
	}

	inline static int32_t get_offset_of_m_CachedLines_10() { return static_cast<int32_t>(offsetof(TextGenerator_t3237981637, ___m_CachedLines_10)); }
	inline bool get_m_CachedLines_10() const { return ___m_CachedLines_10; }
	inline bool* get_address_of_m_CachedLines_10() { return &___m_CachedLines_10; }
	inline void set_m_CachedLines_10(bool value)
	{
		___m_CachedLines_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerator
struct TextGenerator_t3237981637_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	char* ___m_LastString_1;
	TextGenerationSettings_t213248848_marshaled_pinvoke ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t2430045607 * ___m_Verts_5;
	List_1_t1409390338 * ___m_Characters_6;
	List_1_t3407446582 * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
// Native definition for COM marshalling of UnityEngine.TextGenerator
struct TextGenerator_t3237981637_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppChar* ___m_LastString_1;
	TextGenerationSettings_t213248848_marshaled_com ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t2430045607 * ___m_Verts_5;
	List_1_t1409390338 * ___m_Characters_6;
	List_1_t3407446582 * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
#endif // TEXTGENERATOR_T3237981637_H
#ifndef CANVASRENDERER_T3568322951_H
#define CANVASRENDERER_T3568322951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasRenderer
struct  CanvasRenderer_t3568322951  : public Component_t3680335150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASRENDERER_T3568322951_H
#ifndef REQUESTATLASCALLBACK_T4219266798_H
#define REQUESTATLASCALLBACK_T4219266798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct  RequestAtlasCallback_t4219266798  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTATLASCALLBACK_T4219266798_H
#ifndef RIGIDBODY2D_T1949034796_H
#define RIGIDBODY2D_T1949034796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t1949034796  : public Component_t3680335150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T1949034796_H
#ifndef GUI_T419086580_H
#define GUI_T419086580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI
struct  GUI_t419086580  : public RuntimeObject
{
public:

public:
};

struct GUI_t419086580_StaticFields
{
public:
	// System.Single UnityEngine.GUI::s_ScrollStepSize
	float ___s_ScrollStepSize_0;
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_1;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_2;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_3;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_4;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_5;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_6;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_7;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_8;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t1247539198  ___U3CnextScrollStepTimeU3Ek__BackingField_9;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t1491476989 * ___s_Skin_10;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::s_ScrollViewStates
	GenericStack_t2285631481 * ___s_ScrollViewStates_11;

public:
	inline static int32_t get_offset_of_s_ScrollStepSize_0() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___s_ScrollStepSize_0)); }
	inline float get_s_ScrollStepSize_0() const { return ___s_ScrollStepSize_0; }
	inline float* get_address_of_s_ScrollStepSize_0() { return &___s_ScrollStepSize_0; }
	inline void set_s_ScrollStepSize_0(float value)
	{
		___s_ScrollStepSize_0 = value;
	}

	inline static int32_t get_offset_of_s_HotTextField_1() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___s_HotTextField_1)); }
	inline int32_t get_s_HotTextField_1() const { return ___s_HotTextField_1; }
	inline int32_t* get_address_of_s_HotTextField_1() { return &___s_HotTextField_1; }
	inline void set_s_HotTextField_1(int32_t value)
	{
		___s_HotTextField_1 = value;
	}

	inline static int32_t get_offset_of_s_BoxHash_2() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___s_BoxHash_2)); }
	inline int32_t get_s_BoxHash_2() const { return ___s_BoxHash_2; }
	inline int32_t* get_address_of_s_BoxHash_2() { return &___s_BoxHash_2; }
	inline void set_s_BoxHash_2(int32_t value)
	{
		___s_BoxHash_2 = value;
	}

	inline static int32_t get_offset_of_s_RepeatButtonHash_3() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___s_RepeatButtonHash_3)); }
	inline int32_t get_s_RepeatButtonHash_3() const { return ___s_RepeatButtonHash_3; }
	inline int32_t* get_address_of_s_RepeatButtonHash_3() { return &___s_RepeatButtonHash_3; }
	inline void set_s_RepeatButtonHash_3(int32_t value)
	{
		___s_RepeatButtonHash_3 = value;
	}

	inline static int32_t get_offset_of_s_ToggleHash_4() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___s_ToggleHash_4)); }
	inline int32_t get_s_ToggleHash_4() const { return ___s_ToggleHash_4; }
	inline int32_t* get_address_of_s_ToggleHash_4() { return &___s_ToggleHash_4; }
	inline void set_s_ToggleHash_4(int32_t value)
	{
		___s_ToggleHash_4 = value;
	}

	inline static int32_t get_offset_of_s_ButtonGridHash_5() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___s_ButtonGridHash_5)); }
	inline int32_t get_s_ButtonGridHash_5() const { return ___s_ButtonGridHash_5; }
	inline int32_t* get_address_of_s_ButtonGridHash_5() { return &___s_ButtonGridHash_5; }
	inline void set_s_ButtonGridHash_5(int32_t value)
	{
		___s_ButtonGridHash_5 = value;
	}

	inline static int32_t get_offset_of_s_SliderHash_6() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___s_SliderHash_6)); }
	inline int32_t get_s_SliderHash_6() const { return ___s_SliderHash_6; }
	inline int32_t* get_address_of_s_SliderHash_6() { return &___s_SliderHash_6; }
	inline void set_s_SliderHash_6(int32_t value)
	{
		___s_SliderHash_6 = value;
	}

	inline static int32_t get_offset_of_s_BeginGroupHash_7() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___s_BeginGroupHash_7)); }
	inline int32_t get_s_BeginGroupHash_7() const { return ___s_BeginGroupHash_7; }
	inline int32_t* get_address_of_s_BeginGroupHash_7() { return &___s_BeginGroupHash_7; }
	inline void set_s_BeginGroupHash_7(int32_t value)
	{
		___s_BeginGroupHash_7 = value;
	}

	inline static int32_t get_offset_of_s_ScrollviewHash_8() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___s_ScrollviewHash_8)); }
	inline int32_t get_s_ScrollviewHash_8() const { return ___s_ScrollviewHash_8; }
	inline int32_t* get_address_of_s_ScrollviewHash_8() { return &___s_ScrollviewHash_8; }
	inline void set_s_ScrollviewHash_8(int32_t value)
	{
		___s_ScrollviewHash_8 = value;
	}

	inline static int32_t get_offset_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___U3CnextScrollStepTimeU3Ek__BackingField_9)); }
	inline DateTime_t1247539198  get_U3CnextScrollStepTimeU3Ek__BackingField_9() const { return ___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline DateTime_t1247539198 * get_address_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return &___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline void set_U3CnextScrollStepTimeU3Ek__BackingField_9(DateTime_t1247539198  value)
	{
		___U3CnextScrollStepTimeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_s_Skin_10() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___s_Skin_10)); }
	inline GUISkin_t1491476989 * get_s_Skin_10() const { return ___s_Skin_10; }
	inline GUISkin_t1491476989 ** get_address_of_s_Skin_10() { return &___s_Skin_10; }
	inline void set_s_Skin_10(GUISkin_t1491476989 * value)
	{
		___s_Skin_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_Skin_10), value);
	}

	inline static int32_t get_offset_of_s_ScrollViewStates_11() { return static_cast<int32_t>(offsetof(GUI_t419086580_StaticFields, ___s_ScrollViewStates_11)); }
	inline GenericStack_t2285631481 * get_s_ScrollViewStates_11() const { return ___s_ScrollViewStates_11; }
	inline GenericStack_t2285631481 ** get_address_of_s_ScrollViewStates_11() { return &___s_ScrollViewStates_11; }
	inline void set_s_ScrollViewStates_11(GenericStack_t2285631481 * value)
	{
		___s_ScrollViewStates_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollViewStates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUI_T419086580_H
#ifndef WINDOWFUNCTION_T3339668720_H
#define WINDOWFUNCTION_T3339668720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3339668720  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3339668720_H
#ifndef WILLRENDERCANVASES_T386148385_H
#define WILLRENDERCANVASES_T386148385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas/WillRenderCanvases
struct  WillRenderCanvases_t386148385  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WILLRENDERCANVASES_T386148385_H
#ifndef CANVASGROUP_T1103608150_H
#define CANVASGROUP_T1103608150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasGroup
struct  CanvasGroup_t1103608150  : public Component_t3680335150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASGROUP_T1103608150_H
#ifndef FONTTEXTUREREBUILDCALLBACK_T2790002797_H
#define FONTTEXTUREREBUILDCALLBACK_T2790002797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font/FontTextureRebuildCallback
struct  FontTextureRebuildCallback_t2790002797  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTTEXTUREREBUILDCALLBACK_T2790002797_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T1995782794_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T1995782794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t1995782794  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T1995782794_H
#ifndef PCMREADERCALLBACK_T4084513124_H
#define PCMREADERCALLBACK_T4084513124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t4084513124  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T4084513124_H
#ifndef PCMSETPOSITIONCALLBACK_T3362020340_H
#define PCMSETPOSITIONCALLBACK_T3362020340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t3362020340  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T3362020340_H
#ifndef GUISCROLLGROUP_T2016409107_H
#define GUISCROLLGROUP_T2016409107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIScrollGroup
struct  GUIScrollGroup_t2016409107  : public GUILayoutGroup_t1875918777
{
public:
	// System.Single UnityEngine.GUIScrollGroup::calcMinWidth
	float ___calcMinWidth_27;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxWidth
	float ___calcMaxWidth_28;
	// System.Single UnityEngine.GUIScrollGroup::calcMinHeight
	float ___calcMinHeight_29;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxHeight
	float ___calcMaxHeight_30;
	// System.Single UnityEngine.GUIScrollGroup::clientWidth
	float ___clientWidth_31;
	// System.Single UnityEngine.GUIScrollGroup::clientHeight
	float ___clientHeight_32;
	// System.Boolean UnityEngine.GUIScrollGroup::allowHorizontalScroll
	bool ___allowHorizontalScroll_33;
	// System.Boolean UnityEngine.GUIScrollGroup::allowVerticalScroll
	bool ___allowVerticalScroll_34;
	// System.Boolean UnityEngine.GUIScrollGroup::needsHorizontalScrollbar
	bool ___needsHorizontalScrollbar_35;
	// System.Boolean UnityEngine.GUIScrollGroup::needsVerticalScrollbar
	bool ___needsVerticalScrollbar_36;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::horizontalScrollbar
	GUIStyle_t3682286417 * ___horizontalScrollbar_37;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::verticalScrollbar
	GUIStyle_t3682286417 * ___verticalScrollbar_38;

public:
	inline static int32_t get_offset_of_calcMinWidth_27() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___calcMinWidth_27)); }
	inline float get_calcMinWidth_27() const { return ___calcMinWidth_27; }
	inline float* get_address_of_calcMinWidth_27() { return &___calcMinWidth_27; }
	inline void set_calcMinWidth_27(float value)
	{
		___calcMinWidth_27 = value;
	}

	inline static int32_t get_offset_of_calcMaxWidth_28() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___calcMaxWidth_28)); }
	inline float get_calcMaxWidth_28() const { return ___calcMaxWidth_28; }
	inline float* get_address_of_calcMaxWidth_28() { return &___calcMaxWidth_28; }
	inline void set_calcMaxWidth_28(float value)
	{
		___calcMaxWidth_28 = value;
	}

	inline static int32_t get_offset_of_calcMinHeight_29() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___calcMinHeight_29)); }
	inline float get_calcMinHeight_29() const { return ___calcMinHeight_29; }
	inline float* get_address_of_calcMinHeight_29() { return &___calcMinHeight_29; }
	inline void set_calcMinHeight_29(float value)
	{
		___calcMinHeight_29 = value;
	}

	inline static int32_t get_offset_of_calcMaxHeight_30() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___calcMaxHeight_30)); }
	inline float get_calcMaxHeight_30() const { return ___calcMaxHeight_30; }
	inline float* get_address_of_calcMaxHeight_30() { return &___calcMaxHeight_30; }
	inline void set_calcMaxHeight_30(float value)
	{
		___calcMaxHeight_30 = value;
	}

	inline static int32_t get_offset_of_clientWidth_31() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___clientWidth_31)); }
	inline float get_clientWidth_31() const { return ___clientWidth_31; }
	inline float* get_address_of_clientWidth_31() { return &___clientWidth_31; }
	inline void set_clientWidth_31(float value)
	{
		___clientWidth_31 = value;
	}

	inline static int32_t get_offset_of_clientHeight_32() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___clientHeight_32)); }
	inline float get_clientHeight_32() const { return ___clientHeight_32; }
	inline float* get_address_of_clientHeight_32() { return &___clientHeight_32; }
	inline void set_clientHeight_32(float value)
	{
		___clientHeight_32 = value;
	}

	inline static int32_t get_offset_of_allowHorizontalScroll_33() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___allowHorizontalScroll_33)); }
	inline bool get_allowHorizontalScroll_33() const { return ___allowHorizontalScroll_33; }
	inline bool* get_address_of_allowHorizontalScroll_33() { return &___allowHorizontalScroll_33; }
	inline void set_allowHorizontalScroll_33(bool value)
	{
		___allowHorizontalScroll_33 = value;
	}

	inline static int32_t get_offset_of_allowVerticalScroll_34() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___allowVerticalScroll_34)); }
	inline bool get_allowVerticalScroll_34() const { return ___allowVerticalScroll_34; }
	inline bool* get_address_of_allowVerticalScroll_34() { return &___allowVerticalScroll_34; }
	inline void set_allowVerticalScroll_34(bool value)
	{
		___allowVerticalScroll_34 = value;
	}

	inline static int32_t get_offset_of_needsHorizontalScrollbar_35() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___needsHorizontalScrollbar_35)); }
	inline bool get_needsHorizontalScrollbar_35() const { return ___needsHorizontalScrollbar_35; }
	inline bool* get_address_of_needsHorizontalScrollbar_35() { return &___needsHorizontalScrollbar_35; }
	inline void set_needsHorizontalScrollbar_35(bool value)
	{
		___needsHorizontalScrollbar_35 = value;
	}

	inline static int32_t get_offset_of_needsVerticalScrollbar_36() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___needsVerticalScrollbar_36)); }
	inline bool get_needsVerticalScrollbar_36() const { return ___needsVerticalScrollbar_36; }
	inline bool* get_address_of_needsVerticalScrollbar_36() { return &___needsVerticalScrollbar_36; }
	inline void set_needsVerticalScrollbar_36(bool value)
	{
		___needsVerticalScrollbar_36 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollbar_37() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___horizontalScrollbar_37)); }
	inline GUIStyle_t3682286417 * get_horizontalScrollbar_37() const { return ___horizontalScrollbar_37; }
	inline GUIStyle_t3682286417 ** get_address_of_horizontalScrollbar_37() { return &___horizontalScrollbar_37; }
	inline void set_horizontalScrollbar_37(GUIStyle_t3682286417 * value)
	{
		___horizontalScrollbar_37 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalScrollbar_37), value);
	}

	inline static int32_t get_offset_of_verticalScrollbar_38() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2016409107, ___verticalScrollbar_38)); }
	inline GUIStyle_t3682286417 * get_verticalScrollbar_38() const { return ___verticalScrollbar_38; }
	inline GUIStyle_t3682286417 ** get_address_of_verticalScrollbar_38() { return &___verticalScrollbar_38; }
	inline void set_verticalScrollbar_38(GUIStyle_t3682286417 * value)
	{
		___verticalScrollbar_38 = value;
		Il2CppCodeGenWriteBarrier((&___verticalScrollbar_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISCROLLGROUP_T2016409107_H
#ifndef STATEMACHINEBEHAVIOUR_T663513812_H
#define STATEMACHINEBEHAVIOUR_T663513812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t663513812  : public ScriptableObject_t589432225
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T663513812_H
#ifndef GUISKIN_T1491476989_H
#define GUISKIN_T1491476989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin
struct  GUISkin_t1491476989  : public ScriptableObject_t589432225
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t7410343 * ___m_Font_2;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t3682286417 * ___m_box_3;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t3682286417 * ___m_button_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t3682286417 * ___m_toggle_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t3682286417 * ___m_label_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t3682286417 * ___m_textField_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t3682286417 * ___m_textArea_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t3682286417 * ___m_window_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t3682286417 * ___m_horizontalSlider_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t3682286417 * ___m_horizontalSliderThumb_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t3682286417 * ___m_verticalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t3682286417 * ___m_verticalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t3682286417 * ___m_horizontalScrollbar_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t3682286417 * ___m_horizontalScrollbarThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t3682286417 * ___m_horizontalScrollbarLeftButton_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t3682286417 * ___m_horizontalScrollbarRightButton_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t3682286417 * ___m_verticalScrollbar_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t3682286417 * ___m_verticalScrollbarThumb_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t3682286417 * ___m_verticalScrollbarUpButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t3682286417 * ___m_verticalScrollbarDownButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t3682286417 * ___m_ScrollView_22;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t2265907276* ___m_CustomStyles_23;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t1311439069 * ___m_Settings_24;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t1537193233 * ___m_Styles_26;

public:
	inline static int32_t get_offset_of_m_Font_2() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_Font_2)); }
	inline Font_t7410343 * get_m_Font_2() const { return ___m_Font_2; }
	inline Font_t7410343 ** get_address_of_m_Font_2() { return &___m_Font_2; }
	inline void set_m_Font_2(Font_t7410343 * value)
	{
		___m_Font_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Font_2), value);
	}

	inline static int32_t get_offset_of_m_box_3() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_box_3)); }
	inline GUIStyle_t3682286417 * get_m_box_3() const { return ___m_box_3; }
	inline GUIStyle_t3682286417 ** get_address_of_m_box_3() { return &___m_box_3; }
	inline void set_m_box_3(GUIStyle_t3682286417 * value)
	{
		___m_box_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_box_3), value);
	}

	inline static int32_t get_offset_of_m_button_4() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_button_4)); }
	inline GUIStyle_t3682286417 * get_m_button_4() const { return ___m_button_4; }
	inline GUIStyle_t3682286417 ** get_address_of_m_button_4() { return &___m_button_4; }
	inline void set_m_button_4(GUIStyle_t3682286417 * value)
	{
		___m_button_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_button_4), value);
	}

	inline static int32_t get_offset_of_m_toggle_5() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_toggle_5)); }
	inline GUIStyle_t3682286417 * get_m_toggle_5() const { return ___m_toggle_5; }
	inline GUIStyle_t3682286417 ** get_address_of_m_toggle_5() { return &___m_toggle_5; }
	inline void set_m_toggle_5(GUIStyle_t3682286417 * value)
	{
		___m_toggle_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_toggle_5), value);
	}

	inline static int32_t get_offset_of_m_label_6() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_label_6)); }
	inline GUIStyle_t3682286417 * get_m_label_6() const { return ___m_label_6; }
	inline GUIStyle_t3682286417 ** get_address_of_m_label_6() { return &___m_label_6; }
	inline void set_m_label_6(GUIStyle_t3682286417 * value)
	{
		___m_label_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_label_6), value);
	}

	inline static int32_t get_offset_of_m_textField_7() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_textField_7)); }
	inline GUIStyle_t3682286417 * get_m_textField_7() const { return ___m_textField_7; }
	inline GUIStyle_t3682286417 ** get_address_of_m_textField_7() { return &___m_textField_7; }
	inline void set_m_textField_7(GUIStyle_t3682286417 * value)
	{
		___m_textField_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_textField_7), value);
	}

	inline static int32_t get_offset_of_m_textArea_8() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_textArea_8)); }
	inline GUIStyle_t3682286417 * get_m_textArea_8() const { return ___m_textArea_8; }
	inline GUIStyle_t3682286417 ** get_address_of_m_textArea_8() { return &___m_textArea_8; }
	inline void set_m_textArea_8(GUIStyle_t3682286417 * value)
	{
		___m_textArea_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textArea_8), value);
	}

	inline static int32_t get_offset_of_m_window_9() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_window_9)); }
	inline GUIStyle_t3682286417 * get_m_window_9() const { return ___m_window_9; }
	inline GUIStyle_t3682286417 ** get_address_of_m_window_9() { return &___m_window_9; }
	inline void set_m_window_9(GUIStyle_t3682286417 * value)
	{
		___m_window_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_window_9), value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_10() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_horizontalSlider_10)); }
	inline GUIStyle_t3682286417 * get_m_horizontalSlider_10() const { return ___m_horizontalSlider_10; }
	inline GUIStyle_t3682286417 ** get_address_of_m_horizontalSlider_10() { return &___m_horizontalSlider_10; }
	inline void set_m_horizontalSlider_10(GUIStyle_t3682286417 * value)
	{
		___m_horizontalSlider_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSlider_10), value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_11() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_horizontalSliderThumb_11)); }
	inline GUIStyle_t3682286417 * get_m_horizontalSliderThumb_11() const { return ___m_horizontalSliderThumb_11; }
	inline GUIStyle_t3682286417 ** get_address_of_m_horizontalSliderThumb_11() { return &___m_horizontalSliderThumb_11; }
	inline void set_m_horizontalSliderThumb_11(GUIStyle_t3682286417 * value)
	{
		___m_horizontalSliderThumb_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSliderThumb_11), value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_verticalSlider_12)); }
	inline GUIStyle_t3682286417 * get_m_verticalSlider_12() const { return ___m_verticalSlider_12; }
	inline GUIStyle_t3682286417 ** get_address_of_m_verticalSlider_12() { return &___m_verticalSlider_12; }
	inline void set_m_verticalSlider_12(GUIStyle_t3682286417 * value)
	{
		___m_verticalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSlider_12), value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_verticalSliderThumb_13)); }
	inline GUIStyle_t3682286417 * get_m_verticalSliderThumb_13() const { return ___m_verticalSliderThumb_13; }
	inline GUIStyle_t3682286417 ** get_address_of_m_verticalSliderThumb_13() { return &___m_verticalSliderThumb_13; }
	inline void set_m_verticalSliderThumb_13(GUIStyle_t3682286417 * value)
	{
		___m_verticalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSliderThumb_13), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_14() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_horizontalScrollbar_14)); }
	inline GUIStyle_t3682286417 * get_m_horizontalScrollbar_14() const { return ___m_horizontalScrollbar_14; }
	inline GUIStyle_t3682286417 ** get_address_of_m_horizontalScrollbar_14() { return &___m_horizontalScrollbar_14; }
	inline void set_m_horizontalScrollbar_14(GUIStyle_t3682286417 * value)
	{
		___m_horizontalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbar_14), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_15() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_horizontalScrollbarThumb_15)); }
	inline GUIStyle_t3682286417 * get_m_horizontalScrollbarThumb_15() const { return ___m_horizontalScrollbarThumb_15; }
	inline GUIStyle_t3682286417 ** get_address_of_m_horizontalScrollbarThumb_15() { return &___m_horizontalScrollbarThumb_15; }
	inline void set_m_horizontalScrollbarThumb_15(GUIStyle_t3682286417 * value)
	{
		___m_horizontalScrollbarThumb_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarThumb_15), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_16() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_horizontalScrollbarLeftButton_16)); }
	inline GUIStyle_t3682286417 * get_m_horizontalScrollbarLeftButton_16() const { return ___m_horizontalScrollbarLeftButton_16; }
	inline GUIStyle_t3682286417 ** get_address_of_m_horizontalScrollbarLeftButton_16() { return &___m_horizontalScrollbarLeftButton_16; }
	inline void set_m_horizontalScrollbarLeftButton_16(GUIStyle_t3682286417 * value)
	{
		___m_horizontalScrollbarLeftButton_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarLeftButton_16), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_17() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_horizontalScrollbarRightButton_17)); }
	inline GUIStyle_t3682286417 * get_m_horizontalScrollbarRightButton_17() const { return ___m_horizontalScrollbarRightButton_17; }
	inline GUIStyle_t3682286417 ** get_address_of_m_horizontalScrollbarRightButton_17() { return &___m_horizontalScrollbarRightButton_17; }
	inline void set_m_horizontalScrollbarRightButton_17(GUIStyle_t3682286417 * value)
	{
		___m_horizontalScrollbarRightButton_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarRightButton_17), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_18() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_verticalScrollbar_18)); }
	inline GUIStyle_t3682286417 * get_m_verticalScrollbar_18() const { return ___m_verticalScrollbar_18; }
	inline GUIStyle_t3682286417 ** get_address_of_m_verticalScrollbar_18() { return &___m_verticalScrollbar_18; }
	inline void set_m_verticalScrollbar_18(GUIStyle_t3682286417 * value)
	{
		___m_verticalScrollbar_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbar_18), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_19() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_verticalScrollbarThumb_19)); }
	inline GUIStyle_t3682286417 * get_m_verticalScrollbarThumb_19() const { return ___m_verticalScrollbarThumb_19; }
	inline GUIStyle_t3682286417 ** get_address_of_m_verticalScrollbarThumb_19() { return &___m_verticalScrollbarThumb_19; }
	inline void set_m_verticalScrollbarThumb_19(GUIStyle_t3682286417 * value)
	{
		___m_verticalScrollbarThumb_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarThumb_19), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_20() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_verticalScrollbarUpButton_20)); }
	inline GUIStyle_t3682286417 * get_m_verticalScrollbarUpButton_20() const { return ___m_verticalScrollbarUpButton_20; }
	inline GUIStyle_t3682286417 ** get_address_of_m_verticalScrollbarUpButton_20() { return &___m_verticalScrollbarUpButton_20; }
	inline void set_m_verticalScrollbarUpButton_20(GUIStyle_t3682286417 * value)
	{
		___m_verticalScrollbarUpButton_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarUpButton_20), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_21() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_verticalScrollbarDownButton_21)); }
	inline GUIStyle_t3682286417 * get_m_verticalScrollbarDownButton_21() const { return ___m_verticalScrollbarDownButton_21; }
	inline GUIStyle_t3682286417 ** get_address_of_m_verticalScrollbarDownButton_21() { return &___m_verticalScrollbarDownButton_21; }
	inline void set_m_verticalScrollbarDownButton_21(GUIStyle_t3682286417 * value)
	{
		___m_verticalScrollbarDownButton_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarDownButton_21), value);
	}

	inline static int32_t get_offset_of_m_ScrollView_22() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_ScrollView_22)); }
	inline GUIStyle_t3682286417 * get_m_ScrollView_22() const { return ___m_ScrollView_22; }
	inline GUIStyle_t3682286417 ** get_address_of_m_ScrollView_22() { return &___m_ScrollView_22; }
	inline void set_m_ScrollView_22(GUIStyle_t3682286417 * value)
	{
		___m_ScrollView_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScrollView_22), value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_23() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_CustomStyles_23)); }
	inline GUIStyleU5BU5D_t2265907276* get_m_CustomStyles_23() const { return ___m_CustomStyles_23; }
	inline GUIStyleU5BU5D_t2265907276** get_address_of_m_CustomStyles_23() { return &___m_CustomStyles_23; }
	inline void set_m_CustomStyles_23(GUIStyleU5BU5D_t2265907276* value)
	{
		___m_CustomStyles_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomStyles_23), value);
	}

	inline static int32_t get_offset_of_m_Settings_24() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_Settings_24)); }
	inline GUISettings_t1311439069 * get_m_Settings_24() const { return ___m_Settings_24; }
	inline GUISettings_t1311439069 ** get_address_of_m_Settings_24() { return &___m_Settings_24; }
	inline void set_m_Settings_24(GUISettings_t1311439069 * value)
	{
		___m_Settings_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_24), value);
	}

	inline static int32_t get_offset_of_m_Styles_26() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989, ___m_Styles_26)); }
	inline Dictionary_2_t1537193233 * get_m_Styles_26() const { return ___m_Styles_26; }
	inline Dictionary_2_t1537193233 ** get_address_of_m_Styles_26() { return &___m_Styles_26; }
	inline void set_m_Styles_26(Dictionary_2_t1537193233 * value)
	{
		___m_Styles_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Styles_26), value);
	}
};

struct GUISkin_t1491476989_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t3682286417 * ___ms_Error_25;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t1366627815 * ___m_SkinChanged_27;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t1491476989 * ___current_28;

public:
	inline static int32_t get_offset_of_ms_Error_25() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989_StaticFields, ___ms_Error_25)); }
	inline GUIStyle_t3682286417 * get_ms_Error_25() const { return ___ms_Error_25; }
	inline GUIStyle_t3682286417 ** get_address_of_ms_Error_25() { return &___ms_Error_25; }
	inline void set_ms_Error_25(GUIStyle_t3682286417 * value)
	{
		___ms_Error_25 = value;
		Il2CppCodeGenWriteBarrier((&___ms_Error_25), value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_27() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989_StaticFields, ___m_SkinChanged_27)); }
	inline SkinChangedDelegate_t1366627815 * get_m_SkinChanged_27() const { return ___m_SkinChanged_27; }
	inline SkinChangedDelegate_t1366627815 ** get_address_of_m_SkinChanged_27() { return &___m_SkinChanged_27; }
	inline void set_m_SkinChanged_27(SkinChangedDelegate_t1366627815 * value)
	{
		___m_SkinChanged_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_SkinChanged_27), value);
	}

	inline static int32_t get_offset_of_current_28() { return static_cast<int32_t>(offsetof(GUISkin_t1491476989_StaticFields, ___current_28)); }
	inline GUISkin_t1491476989 * get_current_28() const { return ___current_28; }
	inline GUISkin_t1491476989 ** get_address_of_current_28() { return &___current_28; }
	inline void set_current_28(GUISkin_t1491476989 * value)
	{
		___current_28 = value;
		Il2CppCodeGenWriteBarrier((&___current_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISKIN_T1491476989_H
#ifndef SKINCHANGEDDELEGATE_T1366627815_H
#define SKINCHANGEDDELEGATE_T1366627815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin/SkinChangedDelegate
struct  SkinChangedDelegate_t1366627815  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKINCHANGEDDELEGATE_T1366627815_H
#ifndef ANIMATIONCLIP_T704063720_H
#define ANIMATIONCLIP_T704063720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t704063720  : public Motion_t3193511884
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T704063720_H
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
#ifndef REAPPLYDRIVENPROPERTIES_T2604685970_H
#define REAPPLYDRIVENPROPERTIES_T2604685970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t2604685970  : public MulticastDelegate_t1661715453
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REAPPLYDRIVENPROPERTIES_T2604685970_H
#ifndef COLLIDER2D_T2763227762_H
#define COLLIDER2D_T2763227762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2763227762  : public Behaviour_t339761322
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2763227762_H
#ifndef AUDIOSOURCE_T807903881_H
#define AUDIOSOURCE_T807903881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t807903881  : public Behaviour_t339761322
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T807903881_H
#ifndef ANIMATOR_T2691004777_H
#define ANIMATOR_T2691004777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t2691004777  : public Behaviour_t339761322
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T2691004777_H
#ifndef CANVAS_T2391886180_H
#define CANVAS_T2391886180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t2391886180  : public Behaviour_t339761322
{
public:

public:
};

struct Canvas_t2391886180_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t386148385 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t2391886180_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t386148385 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t386148385 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t386148385 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T2391886180_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (ReapplyDrivenProperties_t2604685970), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (Edge_t3083410505)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1301[5] = 
{
	Edge_t3083410505::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { sizeof (Axis_t4247100251)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1302[3] = 
{
	Axis_t4247100251::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (SpriteAtlasManager_t1558298817), -1, sizeof(SpriteAtlasManager_t1558298817_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1303[2] = 
{
	SpriteAtlasManager_t1558298817_StaticFields::get_offset_of_atlasRequested_0(),
	SpriteAtlasManager_t1558298817_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (RequestAtlasCallback_t4219266798), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { sizeof (SpriteAtlas_t2294198756), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { sizeof (Physics_t3553430025), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { sizeof (Collider_t2628297314), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { sizeof (RaycastHit_t1008305013)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1308[6] = 
{
	RaycastHit_t1008305013::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1008305013::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1008305013::get_offset_of_m_FaceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1008305013::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1008305013::get_offset_of_m_UV_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1008305013::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { sizeof (RaycastHit2D_t153468174)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1309[6] = 
{
	RaycastHit2D_t153468174::get_offset_of_m_Centroid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t153468174::get_offset_of_m_Point_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t153468174::get_offset_of_m_Normal_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t153468174::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t153468174::get_offset_of_m_Fraction_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t153468174::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (Physics2D_t952151298), -1, sizeof(Physics2D_t952151298_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1310[1] = 
{
	Physics2D_t952151298_StaticFields::get_offset_of_m_LastDisabledRigidbody2D_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (ContactFilter2D_t1334238686)+ sizeof (RuntimeObject), sizeof(ContactFilter2D_t1334238686_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1311[11] = 
{
	ContactFilter2D_t1334238686::get_offset_of_useTriggers_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t1334238686::get_offset_of_useLayerMask_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t1334238686::get_offset_of_useDepth_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t1334238686::get_offset_of_useOutsideDepth_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t1334238686::get_offset_of_useNormalAngle_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t1334238686::get_offset_of_useOutsideNormalAngle_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t1334238686::get_offset_of_layerMask_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t1334238686::get_offset_of_minDepth_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t1334238686::get_offset_of_maxDepth_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t1334238686::get_offset_of_minNormalAngle_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t1334238686::get_offset_of_maxNormalAngle_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (Rigidbody2D_t1949034796), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (Collider2D_t2763227762), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (ContactPoint2D_t3687663125)+ sizeof (RuntimeObject), sizeof(ContactPoint2D_t3687663125 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1314[11] = 
{
	ContactPoint2D_t3687663125::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t3687663125::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t3687663125::get_offset_of_m_RelativeVelocity_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t3687663125::get_offset_of_m_Separation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t3687663125::get_offset_of_m_NormalImpulse_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t3687663125::get_offset_of_m_TangentImpulse_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t3687663125::get_offset_of_m_Collider_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t3687663125::get_offset_of_m_OtherCollider_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t3687663125::get_offset_of_m_Rigidbody_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t3687663125::get_offset_of_m_OtherRigidbody_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t3687663125::get_offset_of_m_Enabled_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (Collision2D_t3490913073), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1315[7] = 
{
	Collision2D_t3490913073::get_offset_of_m_Collider_0(),
	Collision2D_t3490913073::get_offset_of_m_OtherCollider_1(),
	Collision2D_t3490913073::get_offset_of_m_Rigidbody_2(),
	Collision2D_t3490913073::get_offset_of_m_OtherRigidbody_3(),
	Collision2D_t3490913073::get_offset_of_m_Contacts_4(),
	Collision2D_t3490913073::get_offset_of_m_RelativeVelocity_5(),
	Collision2D_t3490913073::get_offset_of_m_Enabled_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (AudioPlayableOutput_t3151069686)+ sizeof (RuntimeObject), sizeof(AudioPlayableOutput_t3151069686 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1316[1] = 
{
	AudioPlayableOutput_t3151069686::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (AudioClipPlayable_t508528095)+ sizeof (RuntimeObject), sizeof(AudioClipPlayable_t508528095 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1317[1] = 
{
	AudioClipPlayable_t508528095::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (AudioMixerPlayable_t184718795)+ sizeof (RuntimeObject), sizeof(AudioMixerPlayable_t184718795 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1318[1] = 
{
	AudioMixerPlayable_t184718795::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (AudioSettings_t4085266708), -1, sizeof(AudioSettings_t4085266708_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1319[1] = 
{
	AudioSettings_t4085266708_StaticFields::get_offset_of_OnAudioConfigurationChanged_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (AudioConfigurationChangeHandler_t1995782794), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (AudioClip_t3960397311), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1321[2] = 
{
	AudioClip_t3960397311::get_offset_of_m_PCMReaderCallback_2(),
	AudioClip_t3960397311::get_offset_of_m_PCMSetPositionCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (PCMReaderCallback_t4084513124), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (PCMSetPositionCallback_t3362020340), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (AudioSource_t807903881), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (AudioPlayableGraphExtensions_t1521588682), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (SharedBetweenAnimatorsAttribute_t2714830706), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (StateMachineBehaviour_t663513812), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (AnimationClipPlayable_t3965686632)+ sizeof (RuntimeObject), sizeof(AnimationClipPlayable_t3965686632 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1328[1] = 
{
	AnimationClipPlayable_t3965686632::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (AnimationLayerMixerPlayable_t3896145778)+ sizeof (RuntimeObject), sizeof(AnimationLayerMixerPlayable_t3896145778 ), sizeof(AnimationLayerMixerPlayable_t3896145778_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1329[2] = 
{
	AnimationLayerMixerPlayable_t3896145778::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationLayerMixerPlayable_t3896145778_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (AnimationMixerPlayable_t3718580065)+ sizeof (RuntimeObject), sizeof(AnimationMixerPlayable_t3718580065 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1330[1] = 
{
	AnimationMixerPlayable_t3718580065::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (AnimationOffsetPlayable_t3032324545)+ sizeof (RuntimeObject), sizeof(AnimationOffsetPlayable_t3032324545 ), sizeof(AnimationOffsetPlayable_t3032324545_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1331[2] = 
{
	AnimationOffsetPlayable_t3032324545::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationOffsetPlayable_t3032324545_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (AnimationPlayableOutput_t893098896)+ sizeof (RuntimeObject), sizeof(AnimationPlayableOutput_t893098896 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1332[1] = 
{
	AnimationPlayableOutput_t893098896::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (AnimatorControllerPlayable_t76259512)+ sizeof (RuntimeObject), sizeof(AnimatorControllerPlayable_t76259512 ), sizeof(AnimatorControllerPlayable_t76259512_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1333[2] = 
{
	AnimatorControllerPlayable_t76259512::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorControllerPlayable_t76259512_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (AnimationPlayableGraphExtensions_t3447079434), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (AnimationEventSource_t1497087)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1335[4] = 
{
	AnimationEventSource_t1497087::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (AnimationEvent_t2637376726), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1336[11] = 
{
	AnimationEvent_t2637376726::get_offset_of_m_Time_0(),
	AnimationEvent_t2637376726::get_offset_of_m_FunctionName_1(),
	AnimationEvent_t2637376726::get_offset_of_m_StringParameter_2(),
	AnimationEvent_t2637376726::get_offset_of_m_ObjectReferenceParameter_3(),
	AnimationEvent_t2637376726::get_offset_of_m_FloatParameter_4(),
	AnimationEvent_t2637376726::get_offset_of_m_IntParameter_5(),
	AnimationEvent_t2637376726::get_offset_of_m_MessageOptions_6(),
	AnimationEvent_t2637376726::get_offset_of_m_Source_7(),
	AnimationEvent_t2637376726::get_offset_of_m_StateSender_8(),
	AnimationEvent_t2637376726::get_offset_of_m_AnimatorStateInfo_9(),
	AnimationEvent_t2637376726::get_offset_of_m_AnimatorClipInfo_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (AnimationClip_t704063720), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (AnimationState_t4237697442), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { sizeof (AnimatorControllerParameterType_t2276392494)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1339[5] = 
{
	AnimatorControllerParameterType_t2276392494::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { sizeof (AnimatorClipInfo_t2802853799)+ sizeof (RuntimeObject), sizeof(AnimatorClipInfo_t2802853799 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1340[2] = 
{
	AnimatorClipInfo_t2802853799::get_offset_of_m_ClipInstanceID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorClipInfo_t2802853799::get_offset_of_m_Weight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { sizeof (AnimatorStateInfo_t742498804)+ sizeof (RuntimeObject), sizeof(AnimatorStateInfo_t742498804 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1341[9] = 
{
	AnimatorStateInfo_t742498804::get_offset_of_m_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t742498804::get_offset_of_m_Path_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t742498804::get_offset_of_m_FullPath_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t742498804::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t742498804::get_offset_of_m_Length_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t742498804::get_offset_of_m_Speed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t742498804::get_offset_of_m_SpeedMultiplier_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t742498804::get_offset_of_m_Tag_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t742498804::get_offset_of_m_Loop_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (AnimatorTransitionInfo_t2790182771)+ sizeof (RuntimeObject), sizeof(AnimatorTransitionInfo_t2790182771_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1342[6] = 
{
	AnimatorTransitionInfo_t2790182771::get_offset_of_m_FullPath_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t2790182771::get_offset_of_m_UserName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t2790182771::get_offset_of_m_Name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t2790182771::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t2790182771::get_offset_of_m_AnyState_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t2790182771::get_offset_of_m_TransitionType_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (Animator_t2691004777), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (AnimatorControllerParameter_t2794502131), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1344[5] = 
{
	AnimatorControllerParameter_t2794502131::get_offset_of_m_Name_0(),
	AnimatorControllerParameter_t2794502131::get_offset_of_m_Type_1(),
	AnimatorControllerParameter_t2794502131::get_offset_of_m_DefaultFloat_2(),
	AnimatorControllerParameter_t2794502131::get_offset_of_m_DefaultInt_3(),
	AnimatorControllerParameter_t2794502131::get_offset_of_m_DefaultBool_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (SkeletonBone_t2302708218)+ sizeof (RuntimeObject), sizeof(SkeletonBone_t2302708218_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1345[5] = 
{
	SkeletonBone_t2302708218::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2302708218::get_offset_of_parentName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2302708218::get_offset_of_position_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2302708218::get_offset_of_rotation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2302708218::get_offset_of_scale_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (HumanLimit_t3548641834)+ sizeof (RuntimeObject), sizeof(HumanLimit_t3548641834 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1346[5] = 
{
	HumanLimit_t3548641834::get_offset_of_m_Min_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t3548641834::get_offset_of_m_Max_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t3548641834::get_offset_of_m_Center_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t3548641834::get_offset_of_m_AxisLength_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t3548641834::get_offset_of_m_UseDefaultValues_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (HumanBone_t2471663341)+ sizeof (RuntimeObject), sizeof(HumanBone_t2471663341_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1347[3] = 
{
	HumanBone_t2471663341::get_offset_of_m_BoneName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t2471663341::get_offset_of_m_HumanName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t2471663341::get_offset_of_limit_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (AvatarMask_t2543038138), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (Motion_t3193511884), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { sizeof (RuntimeAnimatorController_t1038216979), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (FontStyle_t249809327)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1351[5] = 
{
	FontStyle_t249809327::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (TextGenerationError_t1271670381)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1352[5] = 
{
	TextGenerationError_t1271670381::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (TextGenerationSettings_t213248848)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1353[18] = 
{
	TextGenerationSettings_t213248848::get_offset_of_font_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_color_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_fontSize_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_lineSpacing_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_richText_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_scaleFactor_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_fontStyle_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_textAnchor_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_alignByGeometry_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_resizeTextForBestFit_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_resizeTextMinSize_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_resizeTextMaxSize_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_updateBounds_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_verticalOverflow_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_horizontalOverflow_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_generationExtents_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_pivot_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t213248848::get_offset_of_generateOutOfBounds_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { sizeof (TextGenerator_t3237981637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1354[11] = 
{
	TextGenerator_t3237981637::get_offset_of_m_Ptr_0(),
	TextGenerator_t3237981637::get_offset_of_m_LastString_1(),
	TextGenerator_t3237981637::get_offset_of_m_LastSettings_2(),
	TextGenerator_t3237981637::get_offset_of_m_HasGenerated_3(),
	TextGenerator_t3237981637::get_offset_of_m_LastValid_4(),
	TextGenerator_t3237981637::get_offset_of_m_Verts_5(),
	TextGenerator_t3237981637::get_offset_of_m_Characters_6(),
	TextGenerator_t3237981637::get_offset_of_m_Lines_7(),
	TextGenerator_t3237981637::get_offset_of_m_CachedVerts_8(),
	TextGenerator_t3237981637::get_offset_of_m_CachedCharacters_9(),
	TextGenerator_t3237981637::get_offset_of_m_CachedLines_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (TextAnchor_t3307004715)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1355[10] = 
{
	TextAnchor_t3307004715::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (HorizontalWrapMode_t4143606101)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1356[3] = 
{
	HorizontalWrapMode_t4143606101::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (VerticalWrapMode_t3149658427)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1357[3] = 
{
	VerticalWrapMode_t3149658427::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (Font_t7410343), -1, sizeof(Font_t7410343_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1358[2] = 
{
	Font_t7410343_StaticFields::get_offset_of_textureRebuilt_2(),
	Font_t7410343::get_offset_of_m_FontTextureRebuildCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (FontTextureRebuildCallback_t2790002797), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (UICharInfo_t1684521739)+ sizeof (RuntimeObject), sizeof(UICharInfo_t1684521739 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1360[2] = 
{
	UICharInfo_t1684521739::get_offset_of_cursorPos_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UICharInfo_t1684521739::get_offset_of_charWidth_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { sizeof (UILineInfo_t3682577983)+ sizeof (RuntimeObject), sizeof(UILineInfo_t3682577983 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1361[4] = 
{
	UILineInfo_t3682577983::get_offset_of_startCharIdx_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t3682577983::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t3682577983::get_offset_of_topY_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t3682577983::get_offset_of_leading_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { sizeof (UIVertex_t2705177008)+ sizeof (RuntimeObject), sizeof(UIVertex_t2705177008 ), sizeof(UIVertex_t2705177008_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1362[11] = 
{
	UIVertex_t2705177008::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t2705177008::get_offset_of_normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t2705177008::get_offset_of_color_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t2705177008::get_offset_of_uv0_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t2705177008::get_offset_of_uv1_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t2705177008::get_offset_of_uv2_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t2705177008::get_offset_of_uv3_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t2705177008::get_offset_of_tangent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t2705177008_StaticFields::get_offset_of_s_DefaultColor_8(),
	UIVertex_t2705177008_StaticFields::get_offset_of_s_DefaultTangent_9(),
	UIVertex_t2705177008_StaticFields::get_offset_of_simpleVert_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { sizeof (RectTransformUtility_t2591954166), -1, sizeof(RectTransformUtility_t2591954166_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1363[1] = 
{
	RectTransformUtility_t2591954166_StaticFields::get_offset_of_s_Corners_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { sizeof (RenderMode_t2212832010)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1364[4] = 
{
	RenderMode_t2212832010::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { sizeof (Canvas_t2391886180), -1, sizeof(Canvas_t2391886180_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1365[1] = 
{
	Canvas_t2391886180_StaticFields::get_offset_of_willRenderCanvases_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { sizeof (WillRenderCanvases_t386148385), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { sizeof (UISystemProfilerApi_t199024525), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { sizeof (SampleType_t2291196668)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1368[3] = 
{
	SampleType_t2291196668::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { sizeof (CanvasGroup_t1103608150), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { sizeof (CanvasRenderer_t3568322951), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { sizeof (Event_t1812461728), sizeof(Event_t1812461728_marshaled_pinvoke), sizeof(Event_t1812461728_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1372[4] = 
{
	Event_t1812461728::get_offset_of_m_Ptr_0(),
	Event_t1812461728_StaticFields::get_offset_of_s_Current_1(),
	Event_t1812461728_StaticFields::get_offset_of_s_MasterEvent_2(),
	Event_t1812461728_StaticFields::get_offset_of_U3CU3Ef__switchU24map0_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { sizeof (EventType_t1253938293)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1373[33] = 
{
	EventType_t1253938293::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { sizeof (EventModifiers_t2391314135)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1374[9] = 
{
	EventModifiers_t2391314135::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { sizeof (GUI_t419086580), -1, sizeof(GUI_t419086580_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1375[12] = 
{
	GUI_t419086580_StaticFields::get_offset_of_s_ScrollStepSize_0(),
	GUI_t419086580_StaticFields::get_offset_of_s_HotTextField_1(),
	GUI_t419086580_StaticFields::get_offset_of_s_BoxHash_2(),
	GUI_t419086580_StaticFields::get_offset_of_s_RepeatButtonHash_3(),
	GUI_t419086580_StaticFields::get_offset_of_s_ToggleHash_4(),
	GUI_t419086580_StaticFields::get_offset_of_s_ButtonGridHash_5(),
	GUI_t419086580_StaticFields::get_offset_of_s_SliderHash_6(),
	GUI_t419086580_StaticFields::get_offset_of_s_BeginGroupHash_7(),
	GUI_t419086580_StaticFields::get_offset_of_s_ScrollviewHash_8(),
	GUI_t419086580_StaticFields::get_offset_of_U3CnextScrollStepTimeU3Ek__BackingField_9(),
	GUI_t419086580_StaticFields::get_offset_of_s_Skin_10(),
	GUI_t419086580_StaticFields::get_offset_of_s_ScrollViewStates_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { sizeof (WindowFunction_t3339668720), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { sizeof (GUIContent_t1779043998), -1, sizeof(GUIContent_t1779043998_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1377[7] = 
{
	GUIContent_t1779043998::get_offset_of_m_Text_0(),
	GUIContent_t1779043998::get_offset_of_m_Image_1(),
	GUIContent_t1779043998::get_offset_of_m_Tooltip_2(),
	GUIContent_t1779043998_StaticFields::get_offset_of_s_Text_3(),
	GUIContent_t1779043998_StaticFields::get_offset_of_s_Image_4(),
	GUIContent_t1779043998_StaticFields::get_offset_of_s_TextImage_5(),
	GUIContent_t1779043998_StaticFields::get_offset_of_none_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { sizeof (GUILayout_t1956094654), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { sizeof (GUILayoutOption_t4107894613), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1379[2] = 
{
	GUILayoutOption_t4107894613::get_offset_of_type_0(),
	GUILayoutOption_t4107894613::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (Type_t3085431491)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1380[15] = 
{
	Type_t3085431491::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (GUILayoutGroup_t1875918777), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1381[17] = 
{
	GUILayoutGroup_t1875918777::get_offset_of_entries_10(),
	GUILayoutGroup_t1875918777::get_offset_of_isVertical_11(),
	GUILayoutGroup_t1875918777::get_offset_of_resetCoords_12(),
	GUILayoutGroup_t1875918777::get_offset_of_spacing_13(),
	GUILayoutGroup_t1875918777::get_offset_of_sameSize_14(),
	GUILayoutGroup_t1875918777::get_offset_of_isWindow_15(),
	GUILayoutGroup_t1875918777::get_offset_of_windowID_16(),
	GUILayoutGroup_t1875918777::get_offset_of_m_Cursor_17(),
	GUILayoutGroup_t1875918777::get_offset_of_m_StretchableCountX_18(),
	GUILayoutGroup_t1875918777::get_offset_of_m_StretchableCountY_19(),
	GUILayoutGroup_t1875918777::get_offset_of_m_UserSpecifiedWidth_20(),
	GUILayoutGroup_t1875918777::get_offset_of_m_UserSpecifiedHeight_21(),
	GUILayoutGroup_t1875918777::get_offset_of_m_ChildMinWidth_22(),
	GUILayoutGroup_t1875918777::get_offset_of_m_ChildMaxWidth_23(),
	GUILayoutGroup_t1875918777::get_offset_of_m_ChildMinHeight_24(),
	GUILayoutGroup_t1875918777::get_offset_of_m_ChildMaxHeight_25(),
	GUILayoutGroup_t1875918777::get_offset_of_m_Margin_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (GUIScrollGroup_t2016409107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1382[12] = 
{
	GUIScrollGroup_t2016409107::get_offset_of_calcMinWidth_27(),
	GUIScrollGroup_t2016409107::get_offset_of_calcMaxWidth_28(),
	GUIScrollGroup_t2016409107::get_offset_of_calcMinHeight_29(),
	GUIScrollGroup_t2016409107::get_offset_of_calcMaxHeight_30(),
	GUIScrollGroup_t2016409107::get_offset_of_clientWidth_31(),
	GUIScrollGroup_t2016409107::get_offset_of_clientHeight_32(),
	GUIScrollGroup_t2016409107::get_offset_of_allowHorizontalScroll_33(),
	GUIScrollGroup_t2016409107::get_offset_of_allowVerticalScroll_34(),
	GUIScrollGroup_t2016409107::get_offset_of_needsHorizontalScrollbar_35(),
	GUIScrollGroup_t2016409107::get_offset_of_needsVerticalScrollbar_36(),
	GUIScrollGroup_t2016409107::get_offset_of_horizontalScrollbar_37(),
	GUIScrollGroup_t2016409107::get_offset_of_verticalScrollbar_38(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (GUILayoutEntry_t2542256857), -1, sizeof(GUILayoutEntry_t2542256857_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1383[10] = 
{
	GUILayoutEntry_t2542256857::get_offset_of_minWidth_0(),
	GUILayoutEntry_t2542256857::get_offset_of_maxWidth_1(),
	GUILayoutEntry_t2542256857::get_offset_of_minHeight_2(),
	GUILayoutEntry_t2542256857::get_offset_of_maxHeight_3(),
	GUILayoutEntry_t2542256857::get_offset_of_rect_4(),
	GUILayoutEntry_t2542256857::get_offset_of_stretchWidth_5(),
	GUILayoutEntry_t2542256857::get_offset_of_stretchHeight_6(),
	GUILayoutEntry_t2542256857::get_offset_of_m_Style_7(),
	GUILayoutEntry_t2542256857_StaticFields::get_offset_of_kDummyRect_8(),
	GUILayoutEntry_t2542256857_StaticFields::get_offset_of_indent_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { sizeof (GUILayoutUtility_t2532016762), -1, sizeof(GUILayoutUtility_t2532016762_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1384[5] = 
{
	GUILayoutUtility_t2532016762_StaticFields::get_offset_of_s_StoredLayouts_0(),
	GUILayoutUtility_t2532016762_StaticFields::get_offset_of_s_StoredWindows_1(),
	GUILayoutUtility_t2532016762_StaticFields::get_offset_of_current_2(),
	GUILayoutUtility_t2532016762_StaticFields::get_offset_of_kDummyRect_3(),
	GUILayoutUtility_t2532016762_StaticFields::get_offset_of_s_SpaceStyle_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (LayoutCache_t1388224368), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1385[3] = 
{
	LayoutCache_t1388224368::get_offset_of_topLevel_0(),
	LayoutCache_t1388224368::get_offset_of_layoutGroups_1(),
	LayoutCache_t1388224368::get_offset_of_windows_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { sizeof (GUISettings_t1311439069), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1386[5] = 
{
	GUISettings_t1311439069::get_offset_of_m_DoubleClickSelectsWord_0(),
	GUISettings_t1311439069::get_offset_of_m_TripleClickSelectsLine_1(),
	GUISettings_t1311439069::get_offset_of_m_CursorColor_2(),
	GUISettings_t1311439069::get_offset_of_m_CursorFlashSpeed_3(),
	GUISettings_t1311439069::get_offset_of_m_SelectionColor_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { sizeof (GUISkin_t1491476989), -1, sizeof(GUISkin_t1491476989_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1387[27] = 
{
	GUISkin_t1491476989::get_offset_of_m_Font_2(),
	GUISkin_t1491476989::get_offset_of_m_box_3(),
	GUISkin_t1491476989::get_offset_of_m_button_4(),
	GUISkin_t1491476989::get_offset_of_m_toggle_5(),
	GUISkin_t1491476989::get_offset_of_m_label_6(),
	GUISkin_t1491476989::get_offset_of_m_textField_7(),
	GUISkin_t1491476989::get_offset_of_m_textArea_8(),
	GUISkin_t1491476989::get_offset_of_m_window_9(),
	GUISkin_t1491476989::get_offset_of_m_horizontalSlider_10(),
	GUISkin_t1491476989::get_offset_of_m_horizontalSliderThumb_11(),
	GUISkin_t1491476989::get_offset_of_m_verticalSlider_12(),
	GUISkin_t1491476989::get_offset_of_m_verticalSliderThumb_13(),
	GUISkin_t1491476989::get_offset_of_m_horizontalScrollbar_14(),
	GUISkin_t1491476989::get_offset_of_m_horizontalScrollbarThumb_15(),
	GUISkin_t1491476989::get_offset_of_m_horizontalScrollbarLeftButton_16(),
	GUISkin_t1491476989::get_offset_of_m_horizontalScrollbarRightButton_17(),
	GUISkin_t1491476989::get_offset_of_m_verticalScrollbar_18(),
	GUISkin_t1491476989::get_offset_of_m_verticalScrollbarThumb_19(),
	GUISkin_t1491476989::get_offset_of_m_verticalScrollbarUpButton_20(),
	GUISkin_t1491476989::get_offset_of_m_verticalScrollbarDownButton_21(),
	GUISkin_t1491476989::get_offset_of_m_ScrollView_22(),
	GUISkin_t1491476989::get_offset_of_m_CustomStyles_23(),
	GUISkin_t1491476989::get_offset_of_m_Settings_24(),
	GUISkin_t1491476989_StaticFields::get_offset_of_ms_Error_25(),
	GUISkin_t1491476989::get_offset_of_m_Styles_26(),
	GUISkin_t1491476989_StaticFields::get_offset_of_m_SkinChanged_27(),
	GUISkin_t1491476989_StaticFields::get_offset_of_current_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { sizeof (SkinChangedDelegate_t1366627815), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (GUIStyleState_t3156549051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1389[3] = 
{
	GUIStyleState_t3156549051::get_offset_of_m_Ptr_0(),
	GUIStyleState_t3156549051::get_offset_of_m_SourceStyle_1(),
	GUIStyleState_t3156549051::get_offset_of_m_Background_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { sizeof (ImagePosition_t3380066013)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1390[5] = 
{
	ImagePosition_t3380066013::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (GUIStyle_t3682286417), -1, sizeof(GUIStyle_t3682286417_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1391[16] = 
{
	GUIStyle_t3682286417::get_offset_of_m_Ptr_0(),
	GUIStyle_t3682286417::get_offset_of_m_Normal_1(),
	GUIStyle_t3682286417::get_offset_of_m_Hover_2(),
	GUIStyle_t3682286417::get_offset_of_m_Active_3(),
	GUIStyle_t3682286417::get_offset_of_m_Focused_4(),
	GUIStyle_t3682286417::get_offset_of_m_OnNormal_5(),
	GUIStyle_t3682286417::get_offset_of_m_OnHover_6(),
	GUIStyle_t3682286417::get_offset_of_m_OnActive_7(),
	GUIStyle_t3682286417::get_offset_of_m_OnFocused_8(),
	GUIStyle_t3682286417::get_offset_of_m_Border_9(),
	GUIStyle_t3682286417::get_offset_of_m_Padding_10(),
	GUIStyle_t3682286417::get_offset_of_m_Margin_11(),
	GUIStyle_t3682286417::get_offset_of_m_Overflow_12(),
	GUIStyle_t3682286417::get_offset_of_m_FontInternal_13(),
	GUIStyle_t3682286417_StaticFields::get_offset_of_showKeyboardFocus_14(),
	GUIStyle_t3682286417_StaticFields::get_offset_of_s_None_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (TextClipping_t781249177)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1392[3] = 
{
	TextClipping_t781249177::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (GUITargetAttribute_t801312366), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1393[1] = 
{
	GUITargetAttribute_t801312366::get_offset_of_displayMask_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (ExitGUIException_t3103570255), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { sizeof (GUIUtility_t2589751424), -1, sizeof(GUIUtility_t2589751424_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1395[8] = 
{
	GUIUtility_t2589751424_StaticFields::get_offset_of_s_SkinMode_0(),
	GUIUtility_t2589751424_StaticFields::get_offset_of_s_OriginalID_1(),
	GUIUtility_t2589751424_StaticFields::get_offset_of_takeCapture_2(),
	GUIUtility_t2589751424_StaticFields::get_offset_of_releaseCapture_3(),
	GUIUtility_t2589751424_StaticFields::get_offset_of_processEvent_4(),
	GUIUtility_t2589751424_StaticFields::get_offset_of_endContainerGUIFromException_5(),
	GUIUtility_t2589751424_StaticFields::get_offset_of_U3CguiIsExitingU3Ek__BackingField_6(),
	GUIUtility_t2589751424_StaticFields::get_offset_of_s_EditorScreenPointOffset_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (ScrollViewState_t3432503216), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { sizeof (SliderState_t69028235), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1397[3] = 
{
	SliderState_t69028235::get_offset_of_dragStartPos_0(),
	SliderState_t69028235::get_offset_of_dragStartValue_1(),
	SliderState_t69028235::get_offset_of_isDragging_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { sizeof (TextEditor_t893023610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1398[16] = 
{
	TextEditor_t893023610::get_offset_of_keyboardOnScreen_0(),
	TextEditor_t893023610::get_offset_of_controlID_1(),
	TextEditor_t893023610::get_offset_of_style_2(),
	TextEditor_t893023610::get_offset_of_multiline_3(),
	TextEditor_t893023610::get_offset_of_hasHorizontalCursorPos_4(),
	TextEditor_t893023610::get_offset_of_isPasswordField_5(),
	TextEditor_t893023610::get_offset_of_scrollOffset_6(),
	TextEditor_t893023610::get_offset_of_m_Content_7(),
	TextEditor_t893023610::get_offset_of_m_CursorIndex_8(),
	TextEditor_t893023610::get_offset_of_m_SelectIndex_9(),
	TextEditor_t893023610::get_offset_of_m_RevealCursor_10(),
	TextEditor_t893023610::get_offset_of_m_MouseDragSelectsWholeWords_11(),
	TextEditor_t893023610::get_offset_of_m_DblClickInitPos_12(),
	TextEditor_t893023610::get_offset_of_m_DblClickSnap_13(),
	TextEditor_t893023610::get_offset_of_m_bJustSelected_14(),
	TextEditor_t893023610::get_offset_of_m_iAltCursorPos_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { sizeof (DblClickSnapping_t3898945694)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1399[3] = 
{
	DblClickSnapping_t3898945694::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
