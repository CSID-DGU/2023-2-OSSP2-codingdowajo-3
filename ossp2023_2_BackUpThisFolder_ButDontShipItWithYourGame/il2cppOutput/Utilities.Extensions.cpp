#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.ICollection`1<UnityEngine.Transform>
struct ICollection_1_tE791D3D97E67566E2D6F93E0626CB84C78DB7E9E;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_tFE667855A98BB6902B52DD03254BE42CC7CEB26E;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.GameObject,System.Int32>
struct KeyCollection_t38E13111257CE7BB96B48D3EC0F0B382912E83F1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.GameObject,System.Int32>
struct ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.GameObject,System.Int32>[]
struct EntryU5BU5D_t51F4A4322BFAC6DB39A1B56F224A995B859310C4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9
struct U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69;
// Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tE791D3D97E67566E2D6F93E0626CB84C78DB7E9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral60673BB45E6C8929F86441D3578DAC787A769730;
IL2CPP_EXTERN_C String_t* _stringLiteral8D6589101C5F612EA1774459FD776BAF5489058B;
IL2CPP_EXTERN_C String_t* _stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C;
IL2CPP_EXTERN_C String_t* _stringLiteralAAFF9AC919636647F5C185ECA28CFA072EE8082F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9FA57BB21432E075D7484F4315DD9A3F691973DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mF0E9CFD60F974E290503E06B56646C1C02A69907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD74889B0EE6A9CF67F82254261D092415D3912D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mFECDDDBEFC2A4BB040533CBDC061A031E8CD45FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObjectExtensions_ApplyLayerCacheRecursively_m5FF84BF0F504D0D01CF31531F17933D717798CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m1C18C5113105B0F592C6F681BFD3A8A2D07AD913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9B15E800128549D648CD61F87228399E16EB934A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAB2DFCA15E16B709BBB33F98CB44C37E6E880973_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m28DDC14F4C1EDDC71DCE27C39C0A10B0F1E1EE87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mD97416521AFAAF8D111EEB27867F47F24445C938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m75570136D1908AC20AAB6716B0CEEAD7FF304B3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformExtensions_EnumerateHierarchy_m6464BF59DE7375031F69A3667C542995ABC728D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformExtensions_EnumerateHierarchy_mAEC991E28EB550B9E8BA430C65C551AC3BE84E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateAncestorsU3Ed__9_System_Collections_IEnumerator_Reset_mDD40610BAF495645FBE827D50942F29303848E6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_mDAD9026C536202E0C99280ECB328551CE6DFD7E2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC88BCDADADB4C90A99E47AFFFBCE3806D7EE8D61 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t51F4A4322BFAC6DB39A1B56F224A995B859310C4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t38E13111257CE7BB96B48D3EC0F0B382912E83F1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// Utilities.Extensions.ComponentExtensions
struct ComponentExtensions_t63513CD33B77007FB70226524D721603CA59ABE7  : public RuntimeObject
{
};

// Utilities.Extensions.GameObjectExtensions
struct GameObjectExtensions_t22CB2F92ED30B2A118A3826EB7852AB936C99D35  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Utilities.Extensions.TransformExtensions
struct TransformExtensions_tCCDF6629E518F45C30BEFB502462B6C0F59EF74A  : public RuntimeObject
{
};

// Utilities.Extensions.UnityObjectExtensions
struct UnityObjectExtensions_tCB5BD1E265B3B09B00A43B17B68766C4C6EDAB4A  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9
struct U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69  : public RuntimeObject
{
	// System.Int32 Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::<>2__current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E2__current_1;
	// System.Int32 Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::includeSelf
	bool ___includeSelf_3;
	// System.Boolean Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_4;
	// UnityEngine.Transform Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::startTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startTransform_5;
	// UnityEngine.Transform Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::<>3__startTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E3__startTransform_6;
	// UnityEngine.Transform Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::<transform>5__2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtransformU3E5__2_7;
};

// Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833  : public RuntimeObject
{
	// System.Int32 Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>2__current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E2__current_1;
	// System.Int32 Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Transform Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root_3;
	// UnityEngine.Transform Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CU3E3__root_4;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::ignore
	RuntimeObject* ___ignore_5;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__ignore
	RuntimeObject* ___U3CU3E3__ignore_6;
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<transformQueue>5__2
	Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* ___U3CtransformQueueU3E5__2_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<UnityEngine.Transform>

// System.Collections.Generic.Queue`1<UnityEngine.Transform>

// Utilities.Extensions.ComponentExtensions

// Utilities.Extensions.ComponentExtensions

// Utilities.Extensions.GameObjectExtensions

// Utilities.Extensions.GameObjectExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Utilities.Extensions.TransformExtensions

// Utilities.Extensions.TransformExtensions

// Utilities.Extensions.UnityObjectExtensions

// Utilities.Extensions.UnityObjectExtensions

// Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9

// Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9

// Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4

// Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<UnityEngine.GameObject>

// System.Action`1<UnityEngine.GameObject>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F  : public RuntimeArray
{
	ALIGN_FIELD (8) Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* m_Items[1];

	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;

// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean Utilities.Extensions.UnityObjectExtensions::IsNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_m2F0D338674723D0D1AF0455392BFE1FEBCA79DD7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_object, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___0_componentType, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean Utilities.Extensions.UnityObjectExtensions::IsNotNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNotNull_mC36B5C900C9ECAE86CB3D2D36E778C6013B0625B (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_object, const RuntimeMethod* method) ;
// System.Void Utilities.Extensions.UnityObjectExtensions::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectExtensions_Destroy_m55E7A25D57AF1C95285EB15079DCDBC91DD172E7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_object, float ___1_t, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions::EnumerateHierarchy(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransformExtensions_EnumerateHierarchy_mAEC991E28EB550B9E8BA430C65C551AC3BE84E11 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_root, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mD74889B0EE6A9CF67F82254261D092415D3912D5 (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mFECDDDBEFC2A4BB040533CBDC061A031E8CD45FB (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mF0E9CFD60F974E290503E06B56646C1C02A69907 (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>::Remove(TKey)
inline bool Dictionary_2_Remove_m9FA57BB21432E075D7484F4315DD9A3F691973DF (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared)(__this, ___0_key, method);
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.GameObject>::Invoke(T)
inline void Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* GameObject_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9B15E800128549D648CD61F87228399E16EB934A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Graphic>()
inline GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* GameObject_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m1C18C5113105B0F592C6F681BFD3A8A2D07AD913 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean Utilities.Extensions.TransformExtensions::IsParentOrChildOf(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformExtensions_IsParentOrChildOf_m70B6C1CD47C998EC4B97F9AEC60D49FB42B46ADD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform2, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Extensions.TransformExtensions::GetFullPath(System.Text.StringBuilder,UnityEngine.Transform,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_GetFullPath_m88523A633E2F49103B8D7D64FE8A73C41832FB95 (StringBuilder_t* ___0_stringBuilder, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, String_t* ___2_delimiter, String_t* ___3_prefix, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor(System.Int32)
inline void List_1__ctor_mAB2DFCA15E16B709BBB33F98CB44C37E6E880973 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions::EnumerateHierarchyCore(UnityEngine.Transform,System.Collections.Generic.ICollection`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransformExtensions_EnumerateHierarchyCore_mFBE6552F62FF68D9B3FCC6A91B3EA74930C36EE2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_root, RuntimeObject* ___1_ignore, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4__ctor_m8CBE27BDB13690F59BC306621227D9B943440845 (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics::SyncTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_SyncTransforms_mB88B6B27C24234D18846F614F9AE674976A5F1CA (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_bounds, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) ;
// System.Void Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__9__ctor_mC9A5FF9ADC0335695B0C20B7CB5A8896A9E766EA (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean Utilities.Extensions.TransformExtensions::TryGetDepth(UnityEngine.Transform,UnityEngine.Transform,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformExtensions_TryGetDepth_m467C273FF825F8EA680A5F22A1EBEA6CA7EFD4CD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, int32_t* ___2_depth, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_op_Equality_m5D72DDC8A0C2493FAFD00E88BC3B21D600CB5B33 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_lhs, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Bounds Utilities.Extensions.TransformExtensions::GetColliderBounds(UnityEngine.Transform,UnityEngine.Collider[]&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TransformExtensions_GetColliderBounds_m6C0199530E7AE9AB1EA309F3CF0BC2ABCF2E5B3D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___1_colliders, bool ___2_syncTransform, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void Utilities.Extensions.GameObjectExtensions::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtensions_SetLayerRecursively_mBE8F36BFDF55FA1E0915D540F3D1137B4897A89B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, int32_t ___1_layer, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::.ctor()
inline void Queue_1__ctor_mD97416521AFAAF8D111EEB27867F47F24445C938 (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::Enqueue(T)
inline void Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// T System.Collections.Generic.Queue`1<UnityEngine.Transform>::Dequeue()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Queue_1_Dequeue_m28DDC14F4C1EDDC71DCE27C39C0A10B0F1E1EE87 (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Transform>::get_Count()
inline int32_t Queue_1_get_Count_m75570136D1908AC20AAB6716B0CEEAD7FF304B3E_inline (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m14F43FBC18A3E4A97A9EFABC68C8D98018C05D3A (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__9_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m931F66DCE9A31FA9F9455632794C255F4714B0C9 (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
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
// UnityEngine.Component Utilities.Extensions.ComponentExtensions::EnsureComponent(UnityEngine.GameObject,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ComponentExtensions_EnsureComponent_m2410E93E94121FA43AD086B602AAF3BEC33F85C1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, Type_t* ___1_component, const RuntimeMethod* method) 
{
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
	{
		// var foundComponent = gameObject.GetComponent(component);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		Type_t* L_1 = ___1_component;
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2;
		L_2 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_0, L_1, NULL);
		V_0 = L_2;
		// return foundComponent.IsNull() ? gameObject.AddComponent(component) : foundComponent;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = V_0;
		bool L_4;
		L_4 = UnityObjectExtensions_IsNull_m2F0D338674723D0D1AF0455392BFE1FEBCA79DD7(L_3, NULL);
		if (L_4)
		{
			goto IL_0012;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_5 = V_0;
		return L_5;
	}

IL_0012:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___0_gameObject;
		Type_t* L_7 = ___1_component;
		NullCheck(L_6);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_8;
		L_8 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_6, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.Component Utilities.Extensions.ComponentExtensions::EnsureComponent(UnityEngine.Component,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ComponentExtensions_EnsureComponent_mDFE88A8B88CAB492EC88074E58DBEF3D2C3CBAEC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, Type_t* ___1_type, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_1 = NULL;
	{
		// var gameObject = component.gameObject;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___0_component;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		V_0 = L_1;
		// var foundComponent = gameObject.GetComponent(type);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		Type_t* L_3 = ___1_type;
		NullCheck(L_2);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_4;
		L_4 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_2, L_3, NULL);
		V_1 = L_4;
		// return foundComponent.IsNull() ? gameObject.AddComponent(type) : foundComponent;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_5 = V_1;
		bool L_6;
		L_6 = UnityObjectExtensions_IsNull_m2F0D338674723D0D1AF0455392BFE1FEBCA79DD7(L_5, NULL);
		if (L_6)
		{
			goto IL_0019;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7 = V_1;
		return L_7;
	}

IL_0019:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		Type_t* L_9 = ___1_type;
		NullCheck(L_8);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_10;
		L_10 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void Utilities.Extensions.ComponentExtensions::EnsureComponentDestroyed(UnityEngine.GameObject,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentExtensions_EnsureComponentDestroyed_m8BB6FAB355B4D7BD6FB925CC43ABB9FF72A0FD2F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, Type_t* ___1_component, const RuntimeMethod* method) 
{
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
	{
		// var foundComponent = gameObject.GetComponent(component);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		Type_t* L_1 = ___1_component;
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2;
		L_2 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_0, L_1, NULL);
		V_0 = L_2;
		// if (foundComponent.IsNotNull())
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = V_0;
		bool L_4;
		L_4 = UnityObjectExtensions_IsNotNull_mC36B5C900C9ECAE86CB3D2D36E778C6013B0625B(L_3, NULL);
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// foundComponent.Destroy();
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_5 = V_0;
		UnityObjectExtensions_Destroy_m55E7A25D57AF1C95285EB15079DCDBC91DD172E7(L_5, (0.0f), NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Utilities.Extensions.ComponentExtensions::SetActive(UnityEngine.Component,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentExtensions_SetActive_m730CC6424153B1B72B1D396F1A039A07E678DF71 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, bool ___1_isActive, const RuntimeMethod* method) 
{
	{
		// if (component.gameObject.activeSelf != isActive)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___0_component;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		bool L_3 = ___1_isActive;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}
	{
		// component.gameObject.SetActive(isActive);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_4 = ___0_component;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		bool L_6 = ___1_isActive;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
	}

IL_001a:
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
// System.Void Utilities.Extensions.GameObjectExtensions::SetChildrenActive(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtensions_SetChildrenActive_m67624DC65A3109B66032D31A1D3AC2DEB5431BC7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, bool ___1_isActive, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < root.transform.childCount; i++)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// root.transform.GetChild(i).gameObject.SetActive(isActive);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_root;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, L_2, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		bool L_5 = ___1_isActive;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
		// for (int i = 0; i < root.transform.childCount; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < root.transform.childCount; i++)
		int32_t L_7 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___0_root;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_9, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Utilities.Extensions.GameObjectExtensions::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtensions_SetLayerRecursively_mBE8F36BFDF55FA1E0915D540F3D1137B4897A89B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, int32_t ___1_layer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// foreach (var child in root.transform.EnumerateHierarchy())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_root;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = TransformExtensions_EnumerateHierarchy_mAEC991E28EB550B9E8BA430C65C551AC3BE84E11(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>::GetEnumerator() */, IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0037;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0037:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_0013_1:
			{
				// foreach (var child in root.transform.EnumerateHierarchy())
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
				L_7 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>::get_Current() */, IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var, L_6);
				// child.gameObject.layer = layer;
				NullCheck(L_7);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
				int32_t L_9 = ___1_layer;
				NullCheck(L_8);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_8, L_9, NULL);
			}

IL_0024_1:
			{
				// foreach (var child in root.transform.EnumerateHierarchy())
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Utilities.Extensions.GameObjectExtensions::SetLayerRecursively(UnityEngine.GameObject,System.Int32,System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtensions_SetLayerRecursively_m402DEDA480B95B792FB6BAC242269FA29B428415 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, int32_t ___1_layer, Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740** ___2_cache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD74889B0EE6A9CF67F82254261D092415D3912D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mFECDDDBEFC2A4BB040533CBDC061A031E8CD45FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// cache = new Dictionary<GameObject, int>();
		Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740** L_0 = ___2_cache;
		Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_1 = (Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740*)il2cpp_codegen_object_new(Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mD74889B0EE6A9CF67F82254261D092415D3912D5(L_1, Dictionary_2__ctor_mD74889B0EE6A9CF67F82254261D092415D3912D5_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// foreach (var child in root.transform.EnumerateHierarchy())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_root;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = TransformExtensions_EnumerateHierarchy_mAEC991E28EB550B9E8BA430C65C551AC3BE84E11(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>::GetEnumerator() */, IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_001a_1:
			{
				// foreach (var child in root.transform.EnumerateHierarchy())
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
				L_9 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>::get_Current() */, IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var, L_8);
				// var childGameObject = child.gameObject;
				NullCheck(L_9);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
				V_1 = L_10;
				// cache[childGameObject] = childGameObject.layer;
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740** L_11 = ___2_cache;
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_12 = *((Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740**)L_11);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_1;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_14, NULL);
				NullCheck(L_12);
				Dictionary_2_set_Item_mFECDDDBEFC2A4BB040533CBDC061A031E8CD45FB(L_12, L_13, L_15, Dictionary_2_set_Item_mFECDDDBEFC2A4BB040533CBDC061A031E8CD45FB_RuntimeMethod_var);
				// childGameObject.layer = layer;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_1;
				int32_t L_17 = ___1_layer;
				NullCheck(L_16);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_16, L_17, NULL);
			}

IL_003b_1:
			{
				// foreach (var child in root.transform.EnumerateHierarchy())
				RuntimeObject* L_18 = V_0;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Utilities.Extensions.GameObjectExtensions::ApplyLayerCacheRecursively(UnityEngine.GameObject,System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtensions_ApplyLayerCacheRecursively_m5FF84BF0F504D0D01CF31531F17933D717798CE4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* ___1_cache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9FA57BB21432E075D7484F4315DD9A3F691973DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mF0E9CFD60F974E290503E06B56646C1C02A69907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (root == null) { throw new ArgumentNullException(nameof(root)); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_root;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (root == null) { throw new ArgumentNullException(nameof(root)); }
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameObjectExtensions_ApplyLayerCacheRecursively_m5FF84BF0F504D0D01CF31531F17933D717798CE4_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (cache == null) { throw new ArgumentNullException(nameof(cache)); }
		Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_3 = ___1_cache;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (cache == null) { throw new ArgumentNullException(nameof(cache)); }
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAAFF9AC919636647F5C185ECA28CFA072EE8082F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameObjectExtensions_ApplyLayerCacheRecursively_m5FF84BF0F504D0D01CF31531F17933D717798CE4_RuntimeMethod_var)));
	}

IL_0022:
	{
		// foreach (var child in root.transform.EnumerateHierarchy())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___0_root;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		RuntimeObject* L_7;
		L_7 = TransformExtensions_EnumerateHierarchy_mAEC991E28EB550B9E8BA430C65C551AC3BE84E11(L_6, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>::GetEnumerator() */, IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F_il2cpp_TypeInfo_var, L_7);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_0;
					if (!L_9)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_10 = V_0;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_006e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005b_1;
			}

IL_0035_1:
			{
				// foreach (var child in root.transform.EnumerateHierarchy())
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
				L_12 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>::get_Current() */, IEnumerator_1_t7A84A9E8C72BB62928150241D1BDAEF0137B5092_il2cpp_TypeInfo_var, L_11);
				// var childGameObject = child.gameObject;
				NullCheck(L_12);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
				L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
				V_1 = L_13;
				// if (!cache.TryGetValue(childGameObject, out var layer)) { continue; }
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_14 = ___1_cache;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
				NullCheck(L_14);
				bool L_16;
				L_16 = Dictionary_2_TryGetValue_mF0E9CFD60F974E290503E06B56646C1C02A69907(L_14, L_15, (&V_2), Dictionary_2_TryGetValue_mF0E9CFD60F974E290503E06B56646C1C02A69907_RuntimeMethod_var);
				if (!L_16)
				{
					goto IL_005b_1;
				}
			}
			{
				// childGameObject.layer = layer;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_1;
				int32_t L_18 = V_2;
				NullCheck(L_17);
				GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_17, L_18, NULL);
				// cache.Remove(childGameObject);
				Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* L_19 = ___1_cache;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
				NullCheck(L_19);
				bool L_21;
				L_21 = Dictionary_2_Remove_m9FA57BB21432E075D7484F4315DD9A3F691973DF(L_19, L_20, Dictionary_2_Remove_m9FA57BB21432E075D7484F4315DD9A3F691973DF_RuntimeMethod_var);
			}

IL_005b_1:
			{
				// foreach (var child in root.transform.EnumerateHierarchy())
				RuntimeObject* L_22 = V_0;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0035_1;
				}
			}
			{
				goto IL_006f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Boolean Utilities.Extensions.GameObjectExtensions::IsInLayerMask(UnityEngine.GameObject,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObjectExtensions_IsInLayerMask_m0D8A37EF2F365B0ECEAE970952D5092243DAFD80 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___1_layerMask, const RuntimeMethod* method) 
{
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// LayerMask gameObjectMask = 1 << gameObject.layer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_0, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2;
		L_2 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(((int32_t)(1<<((int32_t)(L_1&((int32_t)31))))), NULL);
		V_0 = L_2;
		// return (gameObjectMask & layerMask) == gameObjectMask;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = V_0;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5 = ___1_layerMask;
		int32_t L_6;
		L_6 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_5, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_7 = V_0;
		int32_t L_8;
		L_8 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_7, NULL);
		return (bool)((((int32_t)((int32_t)(L_4&L_6))) == ((int32_t)L_8))? 1 : 0);
	}
}
// System.Void Utilities.Extensions.GameObjectExtensions::ApplyToHierarchy(UnityEngine.GameObject,System.Action`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtensions_ApplyToHierarchy_m2F32C25A83850A332CED8DD4ADABD77B8D06EAC7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9B15E800128549D648CD61F87228399E16EB934A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_0 = NULL;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		// action(root);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_0 = ___1_action;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_root;
		NullCheck(L_0);
		Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline(L_0, L_1, NULL);
		// var items = root.GetComponentsInChildren<Transform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_root;
		NullCheck(L_2);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3;
		L_3 = GameObject_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9B15E800128549D648CD61F87228399E16EB934A(L_2, GameObject_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9B15E800128549D648CD61F87228399E16EB934A_RuntimeMethod_var);
		// foreach (var item in items)
		V_0 = L_3;
		V_1 = 0;
		goto IL_0026;
	}

IL_0012:
	{
		// foreach (var item in items)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// action(item.gameObject);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_8 = ___1_action;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_2;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_8);
		Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline(L_8, L_10, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0026:
	{
		// foreach (var item in items)
		int32_t L_12 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Utilities.Extensions.GameObjectExtensions::SetRenderingActive(UnityEngine.GameObject,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtensions_SetRenderingActive_mE2C25551DFF59C0FE3E6EEC4F75FB6CB6FEED334 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, bool ___1_isActive, bool ___2_includeColliders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m1C18C5113105B0F592C6F681BFD3A8A2D07AD913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* V_2 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_3 = NULL;
	{
		// if (isActive)
		bool L_0 = ___1_isActive;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_gameObject;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
	}

IL_000a:
	{
		// foreach (var renderer in gameObject.GetComponentsInChildren<Renderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_gameObject;
		NullCheck(L_2);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_3;
		L_3 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734(L_2, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0022;
	}

IL_0015:
	{
		// foreach (var renderer in gameObject.GetComponentsInChildren<Renderer>())
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// renderer.enabled = isActive;
		bool L_8 = ___1_isActive;
		NullCheck(L_7);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0022:
	{
		// foreach (var renderer in gameObject.GetComponentsInChildren<Renderer>())
		int32_t L_10 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// foreach (var graphic in gameObject.GetComponentsInChildren<Graphic>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___0_gameObject;
		NullCheck(L_12);
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_13;
		L_13 = GameObject_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m1C18C5113105B0F592C6F681BFD3A8A2D07AD913(L_12, GameObject_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m1C18C5113105B0F592C6F681BFD3A8A2D07AD913_RuntimeMethod_var);
		V_2 = L_13;
		V_1 = 0;
		goto IL_0040;
	}

IL_0033:
	{
		// foreach (var graphic in gameObject.GetComponentsInChildren<Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_14 = V_2;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		// graphic.enabled = isActive;
		bool L_18 = ___1_isActive;
		NullCheck(L_17);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, L_18, NULL);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0040:
	{
		// foreach (var graphic in gameObject.GetComponentsInChildren<Graphic>())
		int32_t L_20 = V_1;
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0033;
		}
	}
	{
		// if (includeColliders)
		bool L_22 = ___2_includeColliders;
		if (!L_22)
		{
			goto IL_0067;
		}
	}
	{
		// foreach (var collider in gameObject.GetComponentsInChildren<Collider>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = ___0_gameObject;
		NullCheck(L_23);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_24;
		L_24 = GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D(L_23, GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D_RuntimeMethod_var);
		V_3 = L_24;
		V_1 = 0;
		goto IL_0061;
	}

IL_0054:
	{
		// foreach (var collider in gameObject.GetComponentsInChildren<Collider>())
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_25 = V_3;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		// collider.enabled = isActive;
		bool L_29 = ___1_isActive;
		NullCheck(L_28);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_28, L_29, NULL);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0061:
	{
		// foreach (var collider in gameObject.GetComponentsInChildren<Collider>())
		int32_t L_31 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_32 = V_3;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0054;
		}
	}

IL_0067:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Utilities.Extensions.GameObjectExtensions::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectExtensions_FindCommonRoot_m370D7FA4A36EE896B79029925E1C42B2A5AC9571 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_g1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_g2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// if (g1 == null || g2 == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_g1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___1_g2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_0014:
	{
		// var t1 = g1.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_g1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		V_0 = L_5;
		goto IL_004d;
	}

IL_001d:
	{
		// var t2 = g2.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___1_g2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		V_1 = L_7;
		goto IL_003d;
	}

IL_0026:
	{
		// if (t1 == t2)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		// return t1.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_0;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		return L_12;
	}

IL_0036:
	{
		// t2 = t2.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_1;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_13, NULL);
		V_1 = L_14;
	}

IL_003d:
	{
		// while (t2 != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_16)
		{
			goto IL_0026;
		}
	}
	{
		// t1 = t1.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_17, NULL);
		V_0 = L_18;
	}

IL_004d:
	{
		// while (t1 != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_20)
		{
			goto IL_001d;
		}
	}
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}
}
// System.Boolean Utilities.Extensions.GameObjectExtensions::IsParentOrChildOf(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObjectExtensions_IsParentOrChildOf_m899BB12C1E2661F6C14C5046FD37E225880A715F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_g1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_g2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// if (g1 == null || g2 == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_g1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___1_g2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// var t1 = g1.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_g1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		V_0 = L_5;
		// var t2 = g2.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___1_g2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		V_1 = L_7;
		// if (t1 == null || t2 == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_9)
		{
			goto IL_0034;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0036;
		}
	}

IL_0034:
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// return t1.IsParentOrChildOf(t2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_1;
		bool L_14;
		L_14 = TransformExtensions_IsParentOrChildOf_m70B6C1CD47C998EC4B97F9AEC60D49FB42B46ADD(L_12, L_13, NULL);
		return L_14;
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
// System.String Utilities.Extensions.TransformExtensions::GetFullPath(UnityEngine.Transform,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransformExtensions_GetFullPath_m156901EBE47764B9EBA78BB1C9333F8F685131A8 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, String_t* ___1_delimiter, String_t* ___2_prefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var stringBuilder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		// GetFullPath(stringBuilder, transform, delimiter, prefix);
		StringBuilder_t* L_1 = L_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_transform;
		String_t* L_3 = ___1_delimiter;
		String_t* L_4 = ___2_prefix;
		TransformExtensions_GetFullPath_m88523A633E2F49103B8D7D64FE8A73C41832FB95(L_1, L_2, L_3, L_4, NULL);
		// return stringBuilder.ToString();
		NullCheck(L_1);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		return L_5;
	}
}
// System.Void Utilities.Extensions.TransformExtensions::GetFullPath(System.Text.StringBuilder,UnityEngine.Transform,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_GetFullPath_m88523A633E2F49103B8D7D64FE8A73C41832FB95 (StringBuilder_t* ___0_stringBuilder, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, String_t* ___2_delimiter, String_t* ___3_prefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.parent == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___1_transform;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// stringBuilder.Append(prefix);
		StringBuilder_t* L_3 = ___0_stringBuilder;
		String_t* L_4 = ___3_prefix;
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_4, NULL);
		goto IL_002e;
	}

IL_0018:
	{
		// GetFullPath(stringBuilder, transform.parent, delimiter, prefix);
		StringBuilder_t* L_6 = ___0_stringBuilder;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___1_transform;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		String_t* L_9 = ___2_delimiter;
		String_t* L_10 = ___3_prefix;
		TransformExtensions_GetFullPath_m88523A633E2F49103B8D7D64FE8A73C41832FB95(L_6, L_8, L_9, L_10, NULL);
		// stringBuilder.Append(delimiter);
		StringBuilder_t* L_11 = ___0_stringBuilder;
		String_t* L_12 = ___2_delimiter;
		NullCheck(L_11);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_12, NULL);
	}

IL_002e:
	{
		// stringBuilder.Append(transform.name);
		StringBuilder_t* L_14 = ___0_stringBuilder;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___1_transform;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions::EnumerateHierarchy(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransformExtensions_EnumerateHierarchy_mAEC991E28EB550B9E8BA430C65C551AC3BE84E11 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_root, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAB2DFCA15E16B709BBB33F98CB44C37E6E880973_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (root == null) { throw new ArgumentNullException(nameof(root)); }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_root;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (root == null) { throw new ArgumentNullException(nameof(root)); }
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformExtensions_EnumerateHierarchy_mAEC991E28EB550B9E8BA430C65C551AC3BE84E11_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return root.EnumerateHierarchyCore(new List<Transform>(0));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_root;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mAB2DFCA15E16B709BBB33F98CB44C37E6E880973(L_4, 0, List_1__ctor_mAB2DFCA15E16B709BBB33F98CB44C37E6E880973_RuntimeMethod_var);
		RuntimeObject* L_5;
		L_5 = TransformExtensions_EnumerateHierarchyCore_mFBE6552F62FF68D9B3FCC6A91B3EA74930C36EE2(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions::EnumerateHierarchy(UnityEngine.Transform,System.Collections.Generic.ICollection`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransformExtensions_EnumerateHierarchy_m6464BF59DE7375031F69A3667C542995ABC728D3 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_root, RuntimeObject* ___1_ignore, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (root == null) { throw new ArgumentNullException(nameof(root)); }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_root;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (root == null) { throw new ArgumentNullException(nameof(root)); }
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2E138AD319A0E08FFC4A185CE05933BF5C01D5C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformExtensions_EnumerateHierarchy_m6464BF59DE7375031F69A3667C542995ABC728D3_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (ignore == null) { throw new ArgumentNullException(nameof(ignore), "Ignore collection can't be null, use EnumerateHierarchy(root) instead."); }
		RuntimeObject* L_3 = ___1_ignore;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if (ignore == null) { throw new ArgumentNullException(nameof(ignore), "Ignore collection can't be null, use EnumerateHierarchy(root) instead."); }
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral60673BB45E6C8929F86441D3578DAC787A769730)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D6589101C5F612EA1774459FD776BAF5489058B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformExtensions_EnumerateHierarchy_m6464BF59DE7375031F69A3667C542995ABC728D3_RuntimeMethod_var)));
	}

IL_0027:
	{
		// return root.EnumerateHierarchyCore(ignore);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_root;
		RuntimeObject* L_6 = ___1_ignore;
		RuntimeObject* L_7;
		L_7 = TransformExtensions_EnumerateHierarchyCore_mFBE6552F62FF68D9B3FCC6A91B3EA74930C36EE2(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions::EnumerateHierarchyCore(UnityEngine.Transform,System.Collections.Generic.ICollection`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransformExtensions_EnumerateHierarchyCore_mFBE6552F62FF68D9B3FCC6A91B3EA74930C36EE2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_root, RuntimeObject* ___1_ignore, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* L_0 = (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833*)il2cpp_codegen_object_new(U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEnumerateHierarchyCoreU3Ed__4__ctor_m8CBE27BDB13690F59BC306621227D9B943440845(L_0, ((int32_t)-2), NULL);
		U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* L_1 = L_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_root;
		NullCheck(L_1);
		L_1->___U3CU3E3__root_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__root_4), (void*)L_2);
		U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* L_3 = L_1;
		RuntimeObject* L_4 = ___1_ignore;
		NullCheck(L_3);
		L_3->___U3CU3E3__ignore_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E3__ignore_6), (void*)L_4);
		return L_3;
	}
}
// UnityEngine.Bounds Utilities.Extensions.TransformExtensions::GetColliderBounds(UnityEngine.Transform,UnityEngine.Collider[]&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TransformExtensions_GetColliderBounds_m6C0199530E7AE9AB1EA309F3CF0BC2ABCF2E5B3D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___1_colliders, bool ___2_syncTransform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// var currentRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_0 = L_1;
		// if (syncTransform)
		bool L_2 = ___2_syncTransform;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// transform.rotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_4, NULL);
		// Physics.SyncTransforms(); // Update collider bounds
		Physics_SyncTransforms_mB88B6B27C24234D18846F614F9AE674976A5F1CA(NULL);
	}

IL_001a:
	{
		// if (colliders == null)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_5 = ___1_colliders;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_5);
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		// colliders = transform.GetComponentsInChildren<Collider>();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_7 = ___1_colliders;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___0_transform;
		NullCheck(L_8);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_9;
		L_9 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(L_8, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_9);
	}

IL_0026:
	{
		// if (colliders.Length == 0) { return default; }
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_10 = ___1_colliders;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_11 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_10);
		NullCheck(L_11);
		if ((((RuntimeArray*)L_11)->max_length))
		{
			goto IL_0035;
		}
	}
	{
		// if (colliders.Length == 0) { return default; }
		il2cpp_codegen_initobj((&V_2), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_12 = V_2;
		return L_12;
	}

IL_0035:
	{
		// var bounds = colliders[0].bounds;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_13 = ___1_colliders;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_14 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_13);
		NullCheck(L_14);
		int32_t L_15 = 0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17;
		L_17 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_16, NULL);
		V_1 = L_17;
		// for (var i = 1; i < colliders.Length; i++)
		V_3 = 1;
		goto IL_0057;
	}

IL_0043:
	{
		// bounds.Encapsulate(colliders[i].bounds);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_18 = ___1_colliders;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_19 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_18);
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_23;
		L_23 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_22, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_1), L_23, NULL);
		// for (var i = 1; i < colliders.Length; i++)
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0057:
	{
		// for (var i = 1; i < colliders.Length; i++)
		int32_t L_25 = V_3;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_26 = ___1_colliders;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_27 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_26);
		NullCheck(L_27);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		// if (syncTransform)
		bool L_28 = ___2_syncTransform;
		if (!L_28)
		{
			goto IL_006d;
		}
	}
	{
		// transform.rotation = currentRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = ___0_transform;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_0;
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_30, NULL);
		// Physics.SyncTransforms();
		Physics_SyncTransforms_mB88B6B27C24234D18846F614F9AE674976A5F1CA(NULL);
	}

IL_006d:
	{
		// return bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_31 = V_1;
		return L_31;
	}
}
// UnityEngine.Bounds Utilities.Extensions.TransformExtensions::GetRenderBounds(UnityEngine.Transform,UnityEngine.Renderer[]&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TransformExtensions_GetRenderBounds_m95E1D474C62EA743A3B0912D962BCE6242297462 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A** ___1_renderers, bool ___2_syncTransform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// var currentRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_0 = L_1;
		// if (syncTransform)
		bool L_2 = ___2_syncTransform;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// transform.rotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_4, NULL);
		// Physics.SyncTransforms(); // Update collider bounds
		Physics_SyncTransforms_mB88B6B27C24234D18846F614F9AE674976A5F1CA(NULL);
	}

IL_001a:
	{
		// if (renderers == null)
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A** L_5 = ___1_renderers;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_6 = *((RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A**)L_5);
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		// renderers = transform.GetComponentsInChildren<Renderer>();
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A** L_7 = ___1_renderers;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___0_transform;
		NullCheck(L_8);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_9;
		L_9 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(L_8, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_9);
	}

IL_0026:
	{
		// if (renderers.Length == 0) { return default; }
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A** L_10 = ___1_renderers;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_11 = *((RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A**)L_10);
		NullCheck(L_11);
		if ((((RuntimeArray*)L_11)->max_length))
		{
			goto IL_0035;
		}
	}
	{
		// if (renderers.Length == 0) { return default; }
		il2cpp_codegen_initobj((&V_2), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_12 = V_2;
		return L_12;
	}

IL_0035:
	{
		// var bounds = renderers[0].bounds;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A** L_13 = ___1_renderers;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_14 = *((RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A**)L_13);
		NullCheck(L_14);
		int32_t L_15 = 0;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17;
		L_17 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_16, NULL);
		V_1 = L_17;
		// for (int i = 1; i < renderers.Length; i++)
		V_3 = 1;
		goto IL_0057;
	}

IL_0043:
	{
		// bounds.Encapsulate(renderers[i].bounds);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A** L_18 = ___1_renderers;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_19 = *((RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A**)L_18);
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_23;
		L_23 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_22, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_1), L_23, NULL);
		// for (int i = 1; i < renderers.Length; i++)
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0057:
	{
		// for (int i = 1; i < renderers.Length; i++)
		int32_t L_25 = V_3;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A** L_26 = ___1_renderers;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_27 = *((RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A**)L_26);
		NullCheck(L_27);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		// if (syncTransform)
		bool L_28 = ___2_syncTransform;
		if (!L_28)
		{
			goto IL_006d;
		}
	}
	{
		// transform.rotation = currentRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = ___0_transform;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_0;
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_30, NULL);
		// Physics.SyncTransforms();
		Physics_SyncTransforms_mB88B6B27C24234D18846F614F9AE674976A5F1CA(NULL);
	}

IL_006d:
	{
		// return bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_31 = V_1;
		return L_31;
	}
}
// System.Boolean Utilities.Extensions.TransformExtensions::IsParentOrChildOf(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformExtensions_IsParentOrChildOf_m70B6C1CD47C998EC4B97F9AEC60D49FB42B46ADD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform2, const RuntimeMethod* method) 
{
	{
		// return transform1.IsChildOf(transform2) || transform2.IsChildOf(transform1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform2;
		NullCheck(L_0);
		bool L_2;
		L_2 = Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___1_transform2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___0_transform1;
		NullCheck(L_3);
		bool L_5;
		L_5 = Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA(L_3, L_4, NULL);
		return L_5;
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions::EnumerateAncestors(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransformExtensions_EnumerateAncestors_mB18D6041AE8FDAAD652E67BD8907ED644B709C87 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_startTransform, bool ___1_includeSelf, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* L_0 = (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69*)il2cpp_codegen_object_new(U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEnumerateAncestorsU3Ed__9__ctor_mC9A5FF9ADC0335695B0C20B7CB5A8896A9E766EA(L_0, ((int32_t)-2), NULL);
		U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* L_1 = L_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_startTransform;
		NullCheck(L_1);
		L_1->___U3CU3E3__startTransform_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__startTransform_6), (void*)L_2);
		U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* L_3 = L_1;
		bool L_4 = ___1_includeSelf;
		NullCheck(L_3);
		L_3->___U3CU3E3__includeSelf_4 = L_4;
		return L_3;
	}
}
// UnityEngine.Vector3 Utilities.Extensions.TransformExtensions::TransformSize(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformExtensions_TransformSize_m55F618A4326A18A45056E449DD6A1B07B3E5603B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_localSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var transformedSize = localSize;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_localSize;
		V_0 = L_0;
		// var transformedCopy = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_transform;
		V_1 = L_1;
	}

IL_0004:
	{
		// var localScale = transformedCopy.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		V_2 = L_3;
		// transformedSize.x *= localScale.x;
		float* L_4 = (&(&V_0)->___x_2);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_2;
		float L_8 = L_7.___x_2;
		*((float*)L_5) = (float)((float)il2cpp_codegen_multiply(L_6, L_8));
		// transformedSize.y *= localScale.y;
		float* L_9 = (&(&V_0)->___y_3);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		float L_13 = L_12.___y_3;
		*((float*)L_10) = (float)((float)il2cpp_codegen_multiply(L_11, L_13));
		// transformedSize.z *= localScale.z;
		float* L_14 = (&(&V_0)->___z_4);
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		float L_18 = L_17.___z_4;
		*((float*)L_15) = (float)((float)il2cpp_codegen_multiply(L_16, L_18));
		// transformedCopy = transformedCopy.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_1;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_19, NULL);
		V_1 = L_20;
		// while (transformedCopy != null);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_22)
		{
			goto IL_0004;
		}
	}
	{
		// return transformedSize;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		return L_23;
	}
}
// UnityEngine.Vector3 Utilities.Extensions.TransformExtensions::InverseTransformSize(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformExtensions_InverseTransformSize_mA6184294389CD0E27F1B7213C539B7ECAD78E919 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var transformedSize = worldSize;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_worldSize;
		V_0 = L_0;
		// var transformedCopy = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_transform;
		V_1 = L_1;
	}

IL_0004:
	{
		// var localScale = transformedCopy.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		V_2 = L_3;
		// transformedSize.x /= localScale.x;
		float* L_4 = (&(&V_0)->___x_2);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_2;
		float L_8 = L_7.___x_2;
		*((float*)L_5) = (float)((float)(L_6/L_8));
		// transformedSize.y /= localScale.y;
		float* L_9 = (&(&V_0)->___y_3);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		float L_13 = L_12.___y_3;
		*((float*)L_10) = (float)((float)(L_11/L_13));
		// transformedSize.z /= localScale.z;
		float* L_14 = (&(&V_0)->___z_4);
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		float L_18 = L_17.___z_4;
		*((float*)L_15) = (float)((float)(L_16/L_18));
		// transformedCopy = transformedCopy.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_1;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_19, NULL);
		V_1 = L_20;
		// while (transformedCopy != null);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_22)
		{
			goto IL_0004;
		}
	}
	{
		// return transformedSize;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		return L_23;
	}
}
// System.Int32 Utilities.Extensions.TransformExtensions::GetDepth(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformExtensions_GetDepth_m630F0A2D71AF7233B85B369DDBFBD100BFDFFC5B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// var depth = -1;
		V_0 = (-1);
		// Transform root = transform.root;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_0, NULL);
		V_1 = L_1;
		// if (root == transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		// return depth;
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0014:
	{
		// TryGetDepth(transform, root, ref depth);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
		bool L_8;
		L_8 = TransformExtensions_TryGetDepth_m467C273FF825F8EA680A5F22A1EBEA6CA7EFD4CD(L_6, L_7, (&V_0), NULL);
		// return depth;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Boolean Utilities.Extensions.TransformExtensions::TryGetDepth(UnityEngine.Transform,UnityEngine.Transform,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformExtensions_TryGetDepth_m467C273FF825F8EA680A5F22A1EBEA6CA7EFD4CD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, int32_t* ___2_depth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// for (var i = 0; i < parent.childCount; i++)
		V_0 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		// depth++;
		int32_t* L_0 = ___2_depth;
		int32_t* L_1 = ___2_depth;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, 1));
		// var child = parent.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___1_parent;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		V_1 = L_5;
		// if (child == target.transform || TryGetDepth(target, child, ref depth))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___0_target;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_002a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___0_target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_1;
		int32_t* L_12 = ___2_depth;
		bool L_13;
		L_13 = TransformExtensions_TryGetDepth_m467C273FF825F8EA680A5F22A1EBEA6CA7EFD4CD(L_10, L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_002c;
		}
	}

IL_002a:
	{
		// return true;
		return (bool)1;
	}

IL_002c:
	{
		// for (var i = 0; i < parent.childCount; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0030:
	{
		// for (var i = 0; i < parent.childCount; i++)
		int32_t L_15 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___1_parent;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_16, NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Vector3 Utilities.Extensions.TransformExtensions::GetPointOnBoundsEdge(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Bounds,UnityEngine.Collider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformExtensions_GetPointOnBoundsEdge_m206367E5E1D0B9B0AA8F53EEC491946DED97F791 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___2_bounds, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___3_cachedColliders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (direction != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		// direction /= Mathf.Max(Mathf.Max(Mathf.Abs(direction.x), Mathf.Abs(direction.y), Mathf.Abs(direction.y)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_direction;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_direction;
		float L_9 = L_8.___x_2;
		float L_10;
		L_10 = fabsf(L_9);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_direction;
		float L_13 = L_12.___y_3;
		float L_14;
		L_14 = fabsf(L_13);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_14);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___1_direction;
		float L_17 = L_16.___y_3;
		float L_18;
		L_18 = fabsf(L_17);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_18);
		float L_19;
		L_19 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_15, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_19);
		float L_20;
		L_20 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_3, L_20, NULL);
		___1_direction = L_21;
	}

IL_0058:
	{
		// if (bounds == default)
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_22 = ___2_bounds;
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_23 = V_0;
		bool L_24;
		L_24 = Bounds_op_Equality_m5D72DDC8A0C2493FAFD00E88BC3B21D600CB5B33(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_0074;
		}
	}
	{
		// bounds = transform.GetColliderBounds(ref cachedColliders);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = ___0_transform;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_26;
		L_26 = TransformExtensions_GetColliderBounds_m6C0199530E7AE9AB1EA309F3CF0BC2ABCF2E5B3D(L_25, (&___3_cachedColliders), (bool)1, NULL);
		___2_bounds = L_26;
	}

IL_0074:
	{
		// return bounds.center + Vector3.Scale(bounds.size, direction * 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___2_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&___2_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___1_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_28, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_31, NULL);
		return L_32;
	}
}
// UnityEngine.Transform Utilities.Extensions.TransformExtensions::FindCommonRoot(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TransformExtensions_FindCommonRoot_mDE1A954B22FE19D57390A0E9B5E3360DFDB9FB1A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// if (t1 == null || t2 == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_t1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___1_t2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}

IL_0014:
	{
		// var root = t2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___1_t2;
		V_0 = L_4;
		goto IL_0051;
	}

IL_0018:
	{
		// if (t1 == t2)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_t1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___1_t2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0023;
		}
	}
	{
		// return t1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___0_t1;
		return L_8;
	}

IL_0023:
	{
		// t2 = t2.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___1_t2;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_9, NULL);
		___1_t2 = L_10;
		// if (t2 == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___1_t2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		// if (t1 == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___0_t1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_14)
		{
			goto IL_0051;
		}
	}
	{
		// t1 = t1.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___0_t1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_15, NULL);
		___0_t1 = L_16;
		// t2 = root;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
		___1_t2 = L_17;
	}

IL_0048:
	{
		// while (t2 != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ___1_t2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_19)
		{
			goto IL_0018;
		}
	}

IL_0051:
	{
		// while (t1 != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = ___0_t1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_21)
		{
			goto IL_0048;
		}
	}
	{
		// return null;
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}
}
// UnityEngine.Collider[] Utilities.Extensions.TransformExtensions::SetCollidersActive(UnityEngine.Transform,System.Boolean,UnityEngine.Collider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* TransformExtensions_SetCollidersActive_m1D2635B74E46DF70F8B69E626B3A31C1CA22A510 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, bool ___1_isActive, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___2_colliders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (colliders == null)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_0 = ___2_colliders;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// colliders = transform.GetComponentsInChildren<Collider>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_transform;
		NullCheck(L_1);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2;
		L_2 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(L_1, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		___2_colliders = L_2;
	}

IL_000b:
	{
		// for (var i = 0; i < colliders.Length; i++)
		V_0 = 0;
		goto IL_001c;
	}

IL_000f:
	{
		// colliders[i].enabled = isActive;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3 = ___2_colliders;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7 = ___1_isActive;
		NullCheck(L_6);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_6, L_7, NULL);
		// for (var i = 0; i < colliders.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001c:
	{
		// for (var i = 0; i < colliders.Length; i++)
		int32_t L_9 = V_0;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_10 = ___2_colliders;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// return colliders;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_11 = ___2_colliders;
		return L_11;
	}
}
// System.Void Utilities.Extensions.TransformExtensions::SetCollidersActive(UnityEngine.Transform,System.Boolean,UnityEngine.Collider[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_SetCollidersActive_mB26974056BD9A2E2C8DA6FAEEFB1B362236CDE77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, bool ___1_isActive, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___2_colliders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (colliders == null)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_0 = ___2_colliders;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_0);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// colliders = transform.GetComponentsInChildren<Collider>();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_2 = ___2_colliders;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		NullCheck(L_3);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4;
		L_4 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(L_3, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
	}

IL_000c:
	{
		// for (var i = 0; i < colliders.Length; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0010:
	{
		// colliders[i].enabled = isActive;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_5 = ___2_colliders;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10 = ___1_isActive;
		NullCheck(L_9);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_9, L_10, NULL);
		// for (var i = 0; i < colliders.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_001e:
	{
		// for (var i = 0; i < colliders.Length; i++)
		int32_t L_12 = V_0;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_13 = ___2_colliders;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_14 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_13);
		NullCheck(L_14);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Utilities.Extensions.TransformExtensions::SetLayerRecursively(UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_SetLayerRecursively_m24F8462832E46912303C7FCA0C5BD45237C99677 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, int32_t ___1_layer, const RuntimeMethod* method) 
{
	{
		// => transform.gameObject.SetLayerRecursively(layer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2 = ___1_layer;
		GameObjectExtensions_SetLayerRecursively_mBE8F36BFDF55FA1E0915D540F3D1137B4897A89B(L_1, L_2, NULL);
		return;
	}
}
// System.Void Utilities.Extensions.TransformExtensions::ScaleAround(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_ScaleAround_m46921B513D44E8721984B081A6A815ED21EBBA7B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pivot, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_newScale, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var point = target.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_target;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		// var distance = point - pivot; // diff from object pivot to desired pivot/origin
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_pivot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// var relativeScale = newScale.x / target.localScale.x; // relative scale factor
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___2_newScale;
		float L_5 = L_4.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_target;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		float L_8 = L_7.___x_2;
		V_1 = ((float)(L_5/L_8));
		// var finalPosition = pivot + distance * relativeScale; // calc final position post-scale
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_pivot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_12, NULL);
		V_2 = L_13;
		// target.localScale = newScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___0_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___2_newScale;
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_15, NULL);
		// target.localPosition = finalPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___0_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_17, NULL);
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
// System.Void Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4__ctor_m8CBE27BDB13690F59BC306621227D9B943440845 (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4_System_IDisposable_Dispose_mDB56851803CE36EFB5D9986ABC841D41E3156F0F (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateHierarchyCoreU3Ed__4_MoveNext_mF2838879B8E5B5620ABFAE564C8EEB78D4B927BC (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tE791D3D97E67566E2D6F93E0626CB84C78DB7E9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m28DDC14F4C1EDDC71DCE27C39C0A10B0F1E1EE87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mD97416521AFAAF8D111EEB27867F47F24445C938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m75570136D1908AC20AAB6716B0CEEAD7FF304B3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_008a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var transformQueue = new Queue<Transform>();
		Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* L_3 = (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A*)il2cpp_codegen_object_new(Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Queue_1__ctor_mD97416521AFAAF8D111EEB27867F47F24445C938(L_3, Queue_1__ctor_mD97416521AFAAF8D111EEB27867F47F24445C938_RuntimeMethod_var);
		__this->___U3CtransformQueueU3E5__2_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransformQueueU3E5__2_7), (void*)L_3);
		// transformQueue.Enqueue(root);
		Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* L_4 = __this->___U3CtransformQueueU3E5__2_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___root_3;
		NullCheck(L_4);
		Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE(L_4, L_5, Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE_RuntimeMethod_var);
		goto IL_0091;
	}

IL_0035:
	{
		// var parentTransform = transformQueue.Dequeue();
		Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* L_6 = __this->___U3CtransformQueueU3E5__2_7;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Queue_1_Dequeue_m28DDC14F4C1EDDC71DCE27C39C0A10B0F1E1EE87(L_6, Queue_1_Dequeue_m28DDC14F4C1EDDC71DCE27C39C0A10B0F1E1EE87_RuntimeMethod_var);
		V_1 = L_7;
		// if (!parentTransform || ignore.Contains(parentTransform)) { continue; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_10 = __this->___ignore_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = InterfaceFuncInvoker1< bool, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Transform>::Contains(T) */, ICollection_1_tE791D3D97E67566E2D6F93E0626CB84C78DB7E9E_il2cpp_TypeInfo_var, L_10, L_11);
		if (L_12)
		{
			goto IL_0091;
		}
	}
	{
		// for (var i = 0; i < parentTransform.childCount; i++)
		V_2 = 0;
		goto IL_0071;
	}

IL_005b:
	{
		// transformQueue.Enqueue(parentTransform.GetChild(i));
		Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* L_13 = __this->___U3CtransformQueueU3E5__2_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_14, L_15, NULL);
		NullCheck(L_13);
		Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE(L_13, L_16, Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE_RuntimeMethod_var);
		// for (var i = 0; i < parentTransform.childCount; i++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0071:
	{
		// for (var i = 0; i < parentTransform.childCount; i++)
		int32_t L_18 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_19, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_005b;
		}
	}
	{
		// yield return parentTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_1;
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0091:
	{
		// while (transformQueue.Count > 0)
		Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* L_22 = __this->___U3CtransformQueueU3E5__2_7;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Queue_1_get_Count_m75570136D1908AC20AAB6716B0CEEAD7FF304B3E_inline(L_22, Queue_1_get_Count_m75570136D1908AC20AAB6716B0CEEAD7FF304B3E_RuntimeMethod_var);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// UnityEngine.Transform Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumeratorU3CUnityEngine_TransformU3E_get_Current_m9A367DCC5F522289F37FD58B4891AFFA80CEC731 (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_mDAD9026C536202E0C99280ECB328551CE6DFD7E2 (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_mDAD9026C536202E0C99280ECB328551CE6DFD7E2_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_get_Current_m380E0E2A176266570D895BC6E5FCA51C5C5F562E (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m14F43FBC18A3E4A97A9EFABC68C8D98018C05D3A (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* L_3 = (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833*)il2cpp_codegen_object_new(U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CEnumerateHierarchyCoreU3Ed__4__ctor_m8CBE27BDB13690F59BC306621227D9B943440845(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___U3CU3E3__root_4;
		NullCheck(L_4);
		L_4->___root_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___root_3), (void*)L_5);
		U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__ignore_6;
		NullCheck(L_6);
		L_6->___ignore_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___ignore_5), (void*)L_7);
		U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Utilities.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerable_GetEnumerator_mAE163F531D2226445898E108417A87576BA35804 (U3CEnumerateHierarchyCoreU3Ed__4_t4DE2E33BA4EEB61E571B72BE7CB5BCC8A85D9833* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m14F43FBC18A3E4A97A9EFABC68C8D98018C05D3A(__this, NULL);
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
// System.Void Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__9__ctor_mC9A5FF9ADC0335695B0C20B7CB5A8896A9E766EA (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__9_System_IDisposable_Dispose_m6E7F85AC32DD6FF60C4F684FD1C43C01C8FFB834 (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateAncestorsU3Ed__9_MoveNext_mA8E418D5143AD6FC76D457A6FD32755A212ECB56 (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!includeSelf)
		bool L_3 = __this->___includeSelf_3;
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// startTransform = startTransform.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___startTransform_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		__this->___startTransform_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startTransform_5), (void*)L_5);
	}

IL_0030:
	{
		// for (var transform = startTransform; transform != null; transform = transform.parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___startTransform_5;
		__this->___U3CtransformU3E5__2_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransformU3E5__2_7), (void*)L_6);
		goto IL_006b;
	}

IL_003e:
	{
		// yield return transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___U3CtransformU3E5__2_7;
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0053:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (var transform = startTransform; transform != null; transform = transform.parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___U3CtransformU3E5__2_7;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
		__this->___U3CtransformU3E5__2_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransformU3E5__2_7), (void*)L_9);
	}

IL_006b:
	{
		// for (var transform = startTransform; transform != null; transform = transform.parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___U3CtransformU3E5__2_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_11)
		{
			goto IL_003e;
		}
	}
	{
		__this->___U3CtransformU3E5__2_7 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransformU3E5__2_7), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// }
		return (bool)0;
	}
}
// UnityEngine.Transform Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* U3CEnumerateAncestorsU3Ed__9_System_Collections_Generic_IEnumeratorU3CUnityEngine_TransformU3E_get_Current_m4F5587451C3155B4AEFFEED796A2DD8C2D205F75 (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__9_System_Collections_IEnumerator_Reset_mDD40610BAF495645FBE827D50942F29303848E6A (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateAncestorsU3Ed__9_System_Collections_IEnumerator_Reset_mDD40610BAF495645FBE827D50942F29303848E6A_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__9_System_Collections_IEnumerator_get_Current_m38FBF4BE6DC60134567EF20E7676E6E277B4C289 (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__9_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m931F66DCE9A31FA9F9455632794C255F4714B0C9 (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* L_3 = (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69*)il2cpp_codegen_object_new(U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CEnumerateAncestorsU3Ed__9__ctor_mC9A5FF9ADC0335695B0C20B7CB5A8896A9E766EA(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___U3CU3E3__startTransform_6;
		NullCheck(L_4);
		L_4->___startTransform_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___startTransform_5), (void*)L_5);
		U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* L_6 = V_0;
		bool L_7 = __this->___U3CU3E3__includeSelf_4;
		NullCheck(L_6);
		L_6->___includeSelf_3 = L_7;
		U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Utilities.Extensions.TransformExtensions/<EnumerateAncestors>d__9::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__9_System_Collections_IEnumerable_GetEnumerator_m4472F041A96168CBB1D197C554D42ACED7E6EA33 (U3CEnumerateAncestorsU3Ed__9_t924CE151907BC853CEED1894D493CA29A22BCF69* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateAncestorsU3Ed__9_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m931F66DCE9A31FA9F9455632794C255F4714B0C9(__this, NULL);
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
// System.Void Utilities.Extensions.UnityObjectExtensions::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectExtensions_DontDestroyOnLoad_mF609FF39434E5CCD984728EB02D68C6F47A1618C (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Object.DontDestroyOnLoad(@object);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_object;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void Utilities.Extensions.UnityObjectExtensions::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectExtensions_Destroy_m55E7A25D57AF1C95285EB15079DCDBC91DD172E7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_object, float ___1_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (@object.IsNull()) { return; }
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_object;
		bool L_1;
		L_1 = UnityObjectExtensions_IsNull_m2F0D338674723D0D1AF0455392BFE1FEBCA79DD7(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (@object.IsNull()) { return; }
		return;
	}

IL_0009:
	{
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// Object.Destroy(@object, t);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___0_object;
		float L_4 = ___1_t;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_3, L_4, NULL);
		return;
	}

IL_0018:
	{
		// Object.DestroyImmediate(@object);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___0_object;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
		// }
		return;
	}
}
// System.Boolean Utilities.Extensions.UnityObjectExtensions::IsNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_m2F0D338674723D0D1AF0455392BFE1FEBCA79DD7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return @object == null;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_object;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		goto IL_000f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000a;
		}
		throw e;
	}

CATCH_000a:
	{// begin catch(System.Object)
		// catch
		// return true;
		V_0 = (bool)1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_000f;
	}// end catch (depth: 1)

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Utilities.Extensions.UnityObjectExtensions::IsNotNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNotNull_mC36B5C900C9ECAE86CB3D2D36E778C6013B0625B (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_object, const RuntimeMethod* method) 
{
	{
		// public static bool IsNotNull(this Object @object) => !@object.IsNull();
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_object;
		bool L_1;
		L_1 = UnityObjectExtensions_IsNull_m2F0D338674723D0D1AF0455392BFE1FEBCA79DD7(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_values;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_values;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_values;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___0_values;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
