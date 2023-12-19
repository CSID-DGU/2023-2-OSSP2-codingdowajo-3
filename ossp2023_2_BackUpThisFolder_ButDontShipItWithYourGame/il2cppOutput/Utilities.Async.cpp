#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4;
// Utilities.Async.CoroutineWrapper`1<System.Object>
struct CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t60B0B212E646FAA748170ABB47E557CC31788685;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<System.Action>
struct Segment_t174C78A8427100A895D97B8B30BFC775EEF05F9B;
// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>
struct SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B;
// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>
struct SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE;
// Utilities.Async.SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594;
// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object>
struct SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB;
// System.Collections.Generic.Stack`1<System.Collections.IEnumerator>
struct Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6;
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Utilities.Async.AwaitYieldInstructions.BackgroundThread
struct BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// Utilities.Async.SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// Utilities.Async.AwaitYieldInstructions.UnityMainThread
struct UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6;
// Utilities.Async.AwaiterExtensions/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC;
// Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30
struct U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C;
// Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31
struct U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18;
// Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28
struct U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E;
// Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29
struct U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE;
// Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27
struct U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5;
// Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0
struct U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0;
// Utilities.Async.AwaiterExtensions/CoroutineRunner
struct CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9;
// Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c
struct U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3DC481B874B2AE4547CE76EE452FCAF2B6F741EB;
IL2CPP_EXTERN_C String_t* _stringLiteral8B4DEEF5ED5F74648B2CA15D7C9CB069385815B8;
IL2CPP_EXTERN_C String_t* _stringLiteral98CEDF889E5D7250825F3F647847147DD1F0D681;
IL2CPP_EXTERN_C String_t* _stringLiteralC1C835BD1710D600B6F36FD0BBD70FEAA6AC7D37;
IL2CPP_EXTERN_C String_t* _stringLiteralC933C6841D3ABA639D40749CDC3379F25FF8A2D1;
IL2CPP_EXTERN_C String_t* _stringLiteralFA7121CCA2DB3A3F8E91ADB1D63E44CE5BD46B1C;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m758D6F412E660F310998BB624DA47862FDEF202A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m530B7AA8FF1FE056965630A1927ED43B2A4961B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AwaiterExtensions_DeferredPostCallback_m51AC875EC55F61A580F14DAAD9423007E6229948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AwaiterExtensions_RunCoroutine_m9920D9114518B25781EB37AC75577D2EAEBEE4F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_mFC6C166C257C6A89AE250C19132DB4961E9887BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryPeek_m51AFA1BA430F177D8AB4E509394025E67AB6F8AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_mE1A62800E8BFDED5BDB15A6C54416077BF8D7374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_mEF44290366C95F403729AAE156D7D7DF627046D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoroutineWrapper_1_Run_mC79A7BE03A53A49CD15A5703F41ABDA0EA6B0DD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoroutineWrapper_1__ctor_m26847CFBBC14B48E420DA60AB5515340636F6B1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mED4DD1E415CAF115D691BBAA951C546B2524C844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mDE952F1EB7D7C8312A1B8BBB721868A810EF9CB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1_Complete_m28D2397260691E3F359E79954C8D25E3FAAC205C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1_Complete_m7CD70AF0D28A550F7B73D6FA0A3B8E824D55E54F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1_Complete_m926BF09CE9ED95496C65433C03A1F7CBBE9D6AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1__ctor_m02B308EE954154CA1F6D780951886F36CB5DBE3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1__ctor_m8286F47F8661E2F2ADDF571191E187C3A95A6DA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1__ctor_mADE89487AB4B0028F7ED75A0147D8082B609F769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1__ctor_mEC0FC08BBDFB5C98513F33C09B6E4B0A94514EFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_Complete_m2FF0A02F80AA26B112D6568EF723FBF8A9160702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_GetResult_m9DBA8062060DD5EC647A669D104B3171384819CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_UnsafeOnCompleted_m4CF308A8216C398742A6ED64D65B6B278D941C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAssetBundleCreateRequestU3Ed__30_System_Collections_IEnumerator_Reset_mA453792609F0775FC37A8B05C61776726147D67E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAssetBundleRequestU3Ed__31_System_Collections_IEnumerator_Reset_m01CCEEF3CA1B1D2AE64208599B864B4EED94ABBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResourceRequestU3Ed__28_System_Collections_IEnumerator_Reset_mFE9A676F16ADB2832E44456D0CCF175875139756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReturnAsyncOperationU3Ed__29_System_Collections_IEnumerator_Reset_m074D7B5B63874EED5E6671C2550D6B9952721E52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReturnVoidU3Ed__27_System_Collections_IEnumerator_Reset_m28FDAA2198447B492A33EF6CC91583FDE4F379AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRunAsIEnumeratorU3Ed__0_MoveNext_m60039309EEB9EA25FF3786C20BCFE03717CD1B29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRunAsIEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_m51BA907467090EA348DB12CCB7B49475F1AEAF4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m797319A72E6A50B98B8B3F62992A743EF69ADE1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CGetAwaiterU3Eb__0_mB4D1949DF46D2DAA0CE087E0F05B1A1D089E3B0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CGetAwaiterU3Eb__0_m12CCFEE4ED6CEEE9420E37A511061C39DE41886A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CGetAwaiterU3Eb__0_m4A9C7769E3CDCA74099656CC36ABB5BF21CFF89D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CGetAwaiterU3Eb__0_m91800C3590F9B8AB8CF751F0EF12E2ED532C5E0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CGetAwaiterU3Eb__0_mC644DFEE0B29410F560B21D80A8E70D90DF4A5DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CGetAwaiterReturnVoidU3Eb__0_mBB749A260AAC54021B14899946191022241FBDA1_RuntimeMethod_var;
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
struct U3CModuleU3E_t1E4BFF761B77AFF253324D0959BC08A29A050EFA 
{
};

// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3  : public RuntimeObject
{
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject* ____crossSegmentLock_0;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t174C78A8427100A895D97B8B30BFC775EEF05F9B* ____tail_1;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t174C78A8427100A895D97B8B30BFC775EEF05F9B* ____head_2;
};

// Utilities.Async.CoroutineWrapper`1<System.Object>
struct CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499  : public RuntimeObject
{
	// Utilities.Async.SimpleCoroutineAwaiter`1<T> Utilities.Async.CoroutineWrapper`1::awaiter
	SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594* ___awaiter_0;
	// System.Collections.Generic.Stack`1<System.Collections.IEnumerator> Utilities.Async.CoroutineWrapper`1::processStack
	Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* ___processStack_1;
};

// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>
struct SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B  : public RuntimeObject
{
	// System.Exception Utilities.Async.SimpleCoroutineAwaiter`1::exception
	Exception_t* ___exception_0;
	// System.Action Utilities.Async.SimpleCoroutineAwaiter`1::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// T Utilities.Async.SimpleCoroutineAwaiter`1::result
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___result_2;
	// System.Boolean Utilities.Async.SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;
};

// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>
struct SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE  : public RuntimeObject
{
	// System.Exception Utilities.Async.SimpleCoroutineAwaiter`1::exception
	Exception_t* ___exception_0;
	// System.Action Utilities.Async.SimpleCoroutineAwaiter`1::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// T Utilities.Async.SimpleCoroutineAwaiter`1::result
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___result_2;
	// System.Boolean Utilities.Async.SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;
};

// Utilities.Async.SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594  : public RuntimeObject
{
	// System.Exception Utilities.Async.SimpleCoroutineAwaiter`1::exception
	Exception_t* ___exception_0;
	// System.Action Utilities.Async.SimpleCoroutineAwaiter`1::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// T Utilities.Async.SimpleCoroutineAwaiter`1::result
	RuntimeObject* ___result_2;
	// System.Boolean Utilities.Async.SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;
};

// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object>
struct SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB  : public RuntimeObject
{
	// System.Exception Utilities.Async.SimpleCoroutineAwaiter`1::exception
	Exception_t* ___exception_0;
	// System.Action Utilities.Async.SimpleCoroutineAwaiter`1::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// T Utilities.Async.SimpleCoroutineAwaiter`1::result
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___result_2;
	// System.Boolean Utilities.Async.SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;
};

// Utilities.Async.AwaiterExtensions
struct AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C  : public RuntimeObject
{
};

// Utilities.Async.Awaiters
struct Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
};

// Utilities.Async.SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC  : public RuntimeObject
{
	// System.Exception Utilities.Async.SimpleCoroutineAwaiter::exception
	Exception_t* ___exception_0;
	// System.Action Utilities.Async.SimpleCoroutineAwaiter::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_1;
	// System.Boolean Utilities.Async.SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Utilities.Async.Internal.SyncContextUtility
struct SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F  : public RuntimeObject
{
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C  : public RuntimeObject
{
	// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation> Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0::awaiter
	SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* ___awaiter_0;
	// UnityEngine.AsyncOperation Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0::instruction
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___instruction_1;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434  : public RuntimeObject
{
	// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object> Utilities.Async.AwaiterExtensions/<>c__DisplayClass15_0::awaiter
	SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* ___awaiter_0;
	// UnityEngine.ResourceRequest Utilities.Async.AwaiterExtensions/<>c__DisplayClass15_0::instruction
	ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* ___instruction_1;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17  : public RuntimeObject
{
	// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle> Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0::awaiter
	SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* ___awaiter_0;
	// UnityEngine.AssetBundleCreateRequest Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0::instruction
	AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* ___instruction_1;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B  : public RuntimeObject
{
	// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object> Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0::awaiter
	SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* ___awaiter_0;
	// UnityEngine.AssetBundleRequest Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0::instruction
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___instruction_1;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6  : public RuntimeObject
{
	// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions/<>c__DisplayClass19_0::coroutine
	RuntimeObject* ___coroutine_0;
	// Utilities.Async.SimpleCoroutineAwaiter`1<System.Object> Utilities.Async.AwaiterExtensions/<>c__DisplayClass19_0::awaiter
	SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594* ___awaiter_1;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC  : public RuntimeObject
{
	// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions/<>c__DisplayClass20_0::awaiter
	SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* ___awaiter_0;
	// System.Object Utilities.Async.AwaiterExtensions/<>c__DisplayClass20_0::instruction
	RuntimeObject* ___instruction_1;
};

// Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30
struct U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C  : public RuntimeObject
{
	// System.Int32 Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AssetBundleCreateRequest Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30::instruction
	AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* ___instruction_2;
	// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle> Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30::awaiter
	SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* ___awaiter_3;
};

// Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31
struct U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18  : public RuntimeObject
{
	// System.Int32 Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AssetBundleRequest Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31::instruction
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___instruction_2;
	// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object> Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31::awaiter
	SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* ___awaiter_3;
};

// Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28
struct U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E  : public RuntimeObject
{
	// System.Int32 Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.ResourceRequest Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28::instruction
	ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* ___instruction_2;
	// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object> Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28::awaiter
	SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* ___awaiter_3;
};

// Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29
struct U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE  : public RuntimeObject
{
	// System.Int32 Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AsyncOperation Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29::instruction
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___instruction_2;
	// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation> Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29::awaiter
	SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* ___awaiter_3;
};

// Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27
struct U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5  : public RuntimeObject
{
	// System.Int32 Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Object Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27::instruction
	RuntimeObject* ___instruction_2;
	// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27::awaiter
	SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* ___awaiter_3;
};

// Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0
struct U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0  : public RuntimeObject
{
	// System.Int32 Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Threading.Tasks.Task Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0::task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task_2;
};

// Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c
struct U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// Utilities.Async.AwaitYieldInstructions.BackgroundThread
struct BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// Utilities.Async.AwaitYieldInstructions.UnityMainThread
struct UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitWhile::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
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

// UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t* ___m_Type_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t* ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t* ___m_Type_3;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t60B0B212E646FAA748170ABB47E557CC31788685  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621  : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868
{
};
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_pinvoke : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_com : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_com
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d
struct U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7 
{
	// System.Int32 Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_2;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Utilities.Async.AwaiterExtensions/CoroutineRunner
struct CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// <Module>

// <Module>

// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>

// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>

// Utilities.Async.CoroutineWrapper`1<System.Object>

// Utilities.Async.CoroutineWrapper`1<System.Object>

// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>

// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>

// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>

// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>

// Utilities.Async.SimpleCoroutineAwaiter`1<System.Object>

// Utilities.Async.SimpleCoroutineAwaiter`1<System.Object>

// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object>

// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object>

// Utilities.Async.AwaiterExtensions
struct AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields
{
	// UnityEngine.MonoBehaviour Utilities.Async.AwaiterExtensions::coroutineRunner
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___coroutineRunner_0;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> Utilities.Async.AwaiterExtensions::actionQueue
	ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* ___actionQueue_1;
};

// Utilities.Async.AwaiterExtensions

// Utilities.Async.Awaiters
struct Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields
{
	// Utilities.Async.AwaitYieldInstructions.UnityMainThread Utilities.Async.Awaiters::<UnityMainThread>k__BackingField
	UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* ___U3CUnityMainThreadU3Ek__BackingField_0;
	// Utilities.Async.AwaitYieldInstructions.BackgroundThread Utilities.Async.Awaiters::<BackgroundThread>k__BackingField
	BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* ___U3CBackgroundThreadU3Ek__BackingField_1;
};

// Utilities.Async.Awaiters

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// Utilities.Async.SimpleCoroutineAwaiter

// Utilities.Async.SimpleCoroutineAwaiter

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Utilities.Async.Internal.SyncContextUtility
struct SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields
{
	// System.Int32 Utilities.Async.Internal.SyncContextUtility::<UnityThreadId>k__BackingField
	int32_t ___U3CUnityThreadIdU3Ek__BackingField_0;
	// System.Threading.SynchronizationContext Utilities.Async.Internal.SyncContextUtility::<UnitySynchronizationContext>k__BackingField
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___U3CUnitySynchronizationContextU3Ek__BackingField_1;
};

// Utilities.Async.Internal.SyncContextUtility

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
};

// System.Threading.SynchronizationContext

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass15_0

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass15_0

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass19_0

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass19_0

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass20_0

// Utilities.Async.AwaiterExtensions/<>c__DisplayClass20_0

// Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30

// Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30

// Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31

// Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31

// Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28

// Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28

// Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29

// Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29

// Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27

// Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27

// Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0

// Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0

// Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c
struct U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields
{
	// Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::<>9
	U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* ___U3CU3E9_0;
	// System.Func`1<System.Threading.Tasks.Task> Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::<>9__0_0
	Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* ___U3CU3E9__0_0_1;
};

// Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c

// Utilities.Async.AwaitYieldInstructions.BackgroundThread

// Utilities.Async.AwaitYieldInstructions.BackgroundThread

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

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// Utilities.Async.AwaitYieldInstructions.UnityMainThread

// Utilities.Async.AwaitYieldInstructions.UnityMainThread

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForFixedUpdate

// UnityEngine.WaitForFixedUpdate

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSecondsRealtime

// UnityEngine.WaitForSecondsRealtime

// UnityEngine.WaitUntil

// UnityEngine.WaitUntil

// UnityEngine.WaitWhile

// UnityEngine.WaitWhile

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.AggregateException

// System.AggregateException

// UnityEngine.AssetBundle

// UnityEngine.AssetBundle

// UnityEngine.AssetBundleCreateRequest

// UnityEngine.AssetBundleCreateRequest

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ResourceRequest

// UnityEngine.ResourceRequest

// System.Func`1<System.Object>

// System.Func`1<System.Object>

// System.Func`1<System.Threading.Tasks.Task>

// System.Func`1<System.Threading.Tasks.Task>

// System.Action

// System.Action

// UnityEngine.AssetBundleRequest

// UnityEngine.AssetBundleRequest

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotSupportedException

// System.NotSupportedException

// System.Threading.SendOrPostCallback

// System.Threading.SendOrPostCallback

// Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d

// Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Utilities.Async.AwaiterExtensions/CoroutineRunner

// Utilities.Async.AwaiterExtensions/CoroutineRunner
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_1__ctor_m02B308EE954154CA1F6D780951886F36CB5DBE3D_gshared (SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryPeek(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryPeek_m77F4E32293E8717DB7B83508705CB23B8984932B_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryDequeue(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_mA93A5A146DE4520B153BECFFAF36279EB29FA21E_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.CoroutineWrapper`1<System.Object>::.ctor(System.Collections.IEnumerator,Utilities.Async.SimpleCoroutineAwaiter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineWrapper_1__ctor_m26847CFBBC14B48E420DA60AB5515340636F6B1B_gshared (CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499* __this, RuntimeObject* ___0_coroutine, SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594* ___1_awaiter, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Utilities.Async.CoroutineWrapper`1<System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoroutineWrapper_1_Run_mC79A7BE03A53A49CD15A5703F41ABDA0EA6B0DD1_gshared (CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter`1<System.Object>::Complete(T,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_1_Complete_m9D2B428F728FB62C898A869E6456FF27C7E23D1B_gshared (SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594* __this, RuntimeObject* ___0_taskResult, Exception_t* ___1_e, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m530B7AA8FF1FE056965630A1927ED43B2A4961B6_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m758D6F412E660F310998BB624DA47862FDEF202A_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7* ___1_stateMachine, const RuntimeMethod* method) ;

// System.Void Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunAsIEnumeratorU3Ed__0__ctor_m954F840C470828761F8606075E959A8499940E7F (U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Threading.Tasks.Task>::Invoke()
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Func_1_Invoke_mF62B79DDADBD36C0E8F0DA4BAD59B33D7BA3C880_inline (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* __this, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::RunAsIEnumerator(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_RunAsIEnumerator_mF7FD731A530DB760B52D233BFD17FAEDDD785D61 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.Task::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Wait_m33955515E36BF6598FCEDA841C8C75F716DE5A4E (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiterReturnVoid(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* AwaiterExtensions_GetAwaiterReturnVoid_m45CD6C32ADFCDAFB829CF8F8414CCB8CF2CF8CD3 (RuntimeObject* ___0_instruction, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Utilities.Async.AwaitYieldInstructions.BackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 BackgroundThread_GetAwaiter_m4921FD5738D51489AE89CC4652A8C7E756424610 (const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m0734FB3329E0311751F70480674B04ADFF9B4252 (U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>::.ctor()
inline void SimpleCoroutineAwaiter_1__ctor_m8286F47F8661E2F2ADDF571191E187C3A95A6DA3 (SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* __this, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE*, const RuntimeMethod*))SimpleCoroutineAwaiter_1__ctor_m02B308EE954154CA1F6D780951886F36CB5DBE3D_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions::RunOnUnityScheduler(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_RunOnUnityScheduler_m3A6E0A2A96760AA198AF282E5797BDD1FFC55A42 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m1802851AC6FA7A74C4236070332C87D8A28A4E8C (U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object>::.ctor()
inline void SimpleCoroutineAwaiter_1__ctor_mADE89487AB4B0028F7ED75A0147D8082B609F769 (SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* __this, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB*, const RuntimeMethod*))SimpleCoroutineAwaiter_1__ctor_m02B308EE954154CA1F6D780951886F36CB5DBE3D_gshared)(__this, method);
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m743F884DA6B8220442494F059936483A7621B3B1 (U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>::.ctor()
inline void SimpleCoroutineAwaiter_1__ctor_mEC0FC08BBDFB5C98513F33C09B6E4B0A94514EFF (SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* __this, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B*, const RuntimeMethod*))SimpleCoroutineAwaiter_1__ctor_m02B308EE954154CA1F6D780951886F36CB5DBE3D_gshared)(__this, method);
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m9BA3E2EB4032B74B1A8D868ED01EE2C9A6E664D3 (U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m6103AB9A91AB234777D1333D729C3F45BC502A41 (U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter`1<System.Object>::.ctor()
inline void SimpleCoroutineAwaiter_1__ctor_m02B308EE954154CA1F6D780951886F36CB5DBE3D (SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594* __this, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594*, const RuntimeMethod*))SimpleCoroutineAwaiter_1__ctor_m02B308EE954154CA1F6D780951886F36CB5DBE3D_gshared)(__this, method);
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m07A566A07E26D5BA614F8A1B03697117C76BE711 (U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter__ctor_m14AD9C45B65632BBE897CCF79D73D71E508986DD (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<Utilities.Async.AwaiterExtensions/CoroutineRunner>(T&)
inline bool GameObject_TryGetComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mDE952F1EB7D7C8312A1B8BBB721868A810EF9CB7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___0_component, method);
}
// T UnityEngine.GameObject::AddComponent<Utilities.Async.AwaiterExtensions/CoroutineRunner>()
inline CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* GameObject_AddComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mED4DD1E415CAF115D691BBAA951C546B2524C844 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Utilities.Async.Internal.SyncContextUtility::get_IsMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncContextUtility_get_IsMainThread_m308539FDDA29CCB2F37713C85CA364C5F0D4A615 (const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::Enqueue(T)
inline void ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7 (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared)(__this, ___0_item, method);
}
// System.Threading.SynchronizationContext Utilities.Async.Internal.SyncContextUtility::get_UnitySynchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SyncContextUtility_get_UnitySynchronizationContext_m16C567FA9D022798527C3DBC2B9A6CB0267EC787_inline (const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::TryPeek(T&)
inline bool ConcurrentQueue_1_TryPeek_m51AFA1BA430F177D8AB4E509394025E67AB6F8AA (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**, const RuntimeMethod*))ConcurrentQueue_1_TryPeek_m77F4E32293E8717DB7B83508705CB23B8984932B_gshared)(__this, ___0_result, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::TryDequeue(T&)
inline bool ConcurrentQueue_1_TryDequeue_mFC6C166C257C6A89AE250C19132DB4961E9887BC (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared)(__this, ___0_result, method);
}
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::get_Count()
inline int32_t ConcurrentQueue_1_get_Count_mEF44290366C95F403729AAE156D7D7DF627046D9 (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3*, const RuntimeMethod*))ConcurrentQueue_1_get_Count_mA93A5A146DE4520B153BECFFAF36279EB29FA21E_gshared)(__this, method);
}
// System.Void Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__27__ctor_mAB5B41E3E9D90FCCEC6A6B840A1BFF7A02C386A1 (U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__28__ctor_mDF89DB5FDC05BFBB8337803F9048C27FCAC1049B (U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnAsyncOperationU3Ed__29__ctor_m7948DE9BA58889C2B9715139C237965E7B2600B8 (U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__30__ctor_m37800DFC2F9AFA31CFEAD9C8629B013B5C3416B1 (U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__31__ctor_m3C647D8240FF10990247E1AD7F70DE97241F5D96 (U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::.ctor()
inline void ConcurrentQueue_1__ctor_mE1A62800E8BFDED5BDB15A6C54416077BF8D7374 (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3*, const RuntimeMethod*))ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::ReturnAsyncOperation(Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>,UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_ReturnAsyncOperation_mD0FEDBA712E3A3CC8633A04985AAF36157FF9053 (SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* ___0_awaiter, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___1_instruction, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaiterExtensions::RunCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_RunCoroutine_m9920D9114518B25781EB37AC75577D2EAEBEE4F2 (RuntimeObject* ___0_enumerator, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::ResourceRequest(Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.ResourceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_ResourceRequest_mEE093CA29E80054008C4321E7D40D533548CF9A7 (SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* ___0_awaiter, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* ___1_instruction, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::AssetBundleCreateRequest(Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>,UnityEngine.AssetBundleCreateRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_AssetBundleCreateRequest_mEFD387F052B8D009EF8613EC054466CCE62B8787 (SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* ___0_awaiter, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* ___1_instruction, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::AssetBundleRequest(Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.AssetBundleRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_AssetBundleRequest_mB423114665DF673E8C40E5010D62AD07B228CCB6 (SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* ___0_awaiter, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___1_instruction, const RuntimeMethod* method) ;
// System.Void Utilities.Async.CoroutineWrapper`1<System.Object>::.ctor(System.Collections.IEnumerator,Utilities.Async.SimpleCoroutineAwaiter`1<T>)
inline void CoroutineWrapper_1__ctor_m26847CFBBC14B48E420DA60AB5515340636F6B1B (CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499* __this, RuntimeObject* ___0_coroutine, SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594* ___1_awaiter, const RuntimeMethod* method)
{
	((  void (*) (CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499*, RuntimeObject*, SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594*, const RuntimeMethod*))CoroutineWrapper_1__ctor_m26847CFBBC14B48E420DA60AB5515340636F6B1B_gshared)(__this, ___0_coroutine, ___1_awaiter, method);
}
// System.Collections.IEnumerator Utilities.Async.CoroutineWrapper`1<System.Object>::Run()
inline RuntimeObject* CoroutineWrapper_1_Run_mC79A7BE03A53A49CD15A5703F41ABDA0EA6B0DD1 (CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499*, const RuntimeMethod*))CoroutineWrapper_1_Run_mC79A7BE03A53A49CD15A5703F41ABDA0EA6B0DD1_gshared)(__this, method);
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::ReturnVoid(Utilities.Async.SimpleCoroutineAwaiter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_ReturnVoid_mB5E0726A1867D825EF3C4F420CB38EABB50C523E (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* ___0_awaiter, RuntimeObject* ___1_instruction, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter::Complete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_Complete_m2FF0A02F80AA26B112D6568EF723FBF8A9160702 (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, Exception_t* ___0_e, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ResourceRequest_get_asset_m740C394902843D080795A49372A2AB3CE9705087 (ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object>::Complete(T,System.Exception)
inline void SimpleCoroutineAwaiter_1_Complete_m926BF09CE9ED95496C65433C03A1F7CBBE9D6AAD (SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_taskResult, Exception_t* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, Exception_t*, const RuntimeMethod*))SimpleCoroutineAwaiter_1_Complete_m9D2B428F728FB62C898A869E6456FF27C7E23D1B_gshared)(__this, ___0_taskResult, ___1_e, method);
}
// System.Void Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>::Complete(T,System.Exception)
inline void SimpleCoroutineAwaiter_1_Complete_m28D2397260691E3F359E79954C8D25E3FAAC205C (SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_taskResult, Exception_t* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE*, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*, Exception_t*, const RuntimeMethod*))SimpleCoroutineAwaiter_1_Complete_m9D2B428F728FB62C898A869E6456FF27C7E23D1B_gshared)(__this, ___0_taskResult, ___1_e, method);
}
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21 (AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>::Complete(T,System.Exception)
inline void SimpleCoroutineAwaiter_1_Complete_m7CD70AF0D28A550F7B73D6FA0A3B8E824D55E54F (SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* __this, AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___0_taskResult, Exception_t* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B*, AssetBundle_tB38418819A49060CD738CB21541649340F082943*, Exception_t*, const RuntimeMethod*))SimpleCoroutineAwaiter_1_Complete_m9D2B428F728FB62C898A869E6456FF27C7E23D1B_gshared)(__this, ___0_taskResult, ___1_e, method);
}
// UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C (AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaitYieldInstructions.UnityMainThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThread__ctor_mB503158CD706DC757EA69CB7E9D52728B9817062 (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundThread__ctor_m4F3CC38C6D4714EA48577E0070406B6A947C6C80 (BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* __this, const RuntimeMethod* method) ;
// System.Boolean Utilities.Async.SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7_inline (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_set_IsCompleted_m5FF07BC737B79EA8CC42ADAEC02F5BB9BAAB4596_inline (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Utilities.Async.SimpleCoroutineAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_UnsafeOnCompleted_m4CF308A8216C398742A6ED64D65B6B278D941C57 (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_notifyContinuation, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
// System.Void Utilities.Async.Internal.SyncContextUtility::set_UnitySynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnitySynchronizationContext_m83D495A0FF176179A186356C6213D72666DCDE2B_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.Internal.SyncContextUtility::set_UnityThreadId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnityThreadId_mA1B2D3B250A5CF927BCC06C2E55B0723D8175D31_inline (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Func`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_m59DCF6061E31E90EE85393BE82E6907EC60B6958 (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* ___0_function, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A129C8FB4D87D1790031D0ECD80D4D66D4A6C69 (U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m530B7AA8FF1FE056965630A1927ED43B2A4961B6 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m530B7AA8FF1FE056965630A1927ED43B2A4961B6_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48 (int32_t ___0_millisecondsDelay, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m758D6F412E660F310998BB624DA47862FDEF202A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m758D6F412E660F310998BB624DA47862FDEF202A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CGetAwaiterU3Eb__0_0U3Ed_MoveNext_mD1F8F654E1047FA80F167F940FF3ECE8E54D5932 (U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CGetAwaiterU3Eb__0_0U3Ed_SetStateMachine_mCA71A52B5F04D1271AA511D7E74CA0CBD6461733 (U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
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
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::RunAsIEnumerator(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_RunAsIEnumerator_mF7FD731A530DB760B52D233BFD17FAEDDD785D61 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0* L_0 = (U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0*)il2cpp_codegen_object_new(U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRunAsIEnumeratorU3Ed__0__ctor_m954F840C470828761F8606075E959A8499940E7F(L_0, 0, NULL);
		U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0* L_1 = L_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = ___0_task;
		NullCheck(L_1);
		L_1->___task_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___task_2), (void*)L_2);
		return L_1;
	}
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::RunAsIEnumerator(System.Func`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_RunAsIEnumerator_m47C499850B5B876530E78A5914C660EA44789868 (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* ___0_asyncFunc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => asyncFunc.Invoke().RunAsIEnumerator();
		Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_0 = ___0_asyncFunc;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Func_1_Invoke_mF62B79DDADBD36C0E8F0DA4BAD59B33D7BA3C880_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = AwaiterExtensions_RunAsIEnumerator_mF7FD731A530DB760B52D233BFD17FAEDDD785D61(L_1, NULL);
		return L_2;
	}
}
// System.Void Utilities.Async.AwaiterExtensions::RunSynchronously(System.Func`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_RunSynchronously_m21A7690A916E378BA5147718AD280C68F76EC350 (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* ___0_asyncFunc, const RuntimeMethod* method) 
{
	{
		// => asyncFunc.Invoke().Wait();
		Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_0 = ___0_asyncFunc;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Func_1_Invoke_mF62B79DDADBD36C0E8F0DA4BAD59B33D7BA3C880_inline(L_0, NULL);
		NullCheck(L_1);
		Task_Wait_m33955515E36BF6598FCEDA841C8C75F716DE5A4E(L_1, NULL);
		return;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(Utilities.Async.AwaitYieldInstructions.UnityMainThread)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* AwaiterExtensions_GetAwaiter_m9380B1F06B59905326F5179D41B51398A3AFB501 (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetAwaiterReturnVoid(instruction);
		UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_0 = ___0_instruction;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_m45CD6C32ADFCDAFB829CF8F8414CCB8CF2CF8CD3(L_0, NULL);
		return L_1;
	}
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(Utilities.Async.AwaitYieldInstructions.BackgroundThread)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 AwaiterExtensions_GetAwaiter_mA26755BBCFB62EEA184B34DE4003575A71EA7155 (BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* ___0__, const RuntimeMethod* method) 
{
	{
		// => BackgroundThread.GetAwaiter();
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0;
		L_0 = BackgroundThread_GetAwaiter_m4921FD5738D51489AE89CC4652A8C7E756424610(NULL);
		return L_0;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitForSeconds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* AwaiterExtensions_GetAwaiter_mF03C8DEFA5E1EA72F35684B8E934B5E7D8A76172 (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_0 = ___0_instruction;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_m45CD6C32ADFCDAFB829CF8F8414CCB8CF2CF8CD3(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitForEndOfFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* AwaiterExtensions_GetAwaiter_m0030E9FABCF0F736D82A8BAC858971C9B558A6F8 (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_0 = ___0_instruction;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_m45CD6C32ADFCDAFB829CF8F8414CCB8CF2CF8CD3(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitForFixedUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* AwaiterExtensions_GetAwaiter_mBC2C80DB037306FF88F542625B6820CA2AD06FC8 (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* L_0 = ___0_instruction;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_m45CD6C32ADFCDAFB829CF8F8414CCB8CF2CF8CD3(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitForSecondsRealtime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* AwaiterExtensions_GetAwaiter_mEE9934917F75530CE9BF5810F94467A6D6E99347 (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_0 = ___0_instruction;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_m45CD6C32ADFCDAFB829CF8F8414CCB8CF2CF8CD3(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* AwaiterExtensions_GetAwaiter_m778A34780D464AC99B68D757CBE0E8F01B17913F (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_0 = ___0_instruction;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_m45CD6C32ADFCDAFB829CF8F8414CCB8CF2CF8CD3(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitWhile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* AwaiterExtensions_GetAwaiter_mDC8D538F8907E9C12C9823BF3A2228AE70A1C8BC (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetAwaiterReturnVoid(instruction);
		WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* L_0 = ___0_instruction;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_1;
		L_1 = AwaiterExtensions_GetAwaiterReturnVoid_m45CD6C32ADFCDAFB829CF8F8414CCB8CF2CF8CD3(L_0, NULL);
		return L_1;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation> Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* AwaiterExtensions_GetAwaiter_m9BFD43ADF167EECE4FD95DDD29E1E9021F3B9B5F (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_m8286F47F8661E2F2ADDF571191E187C3A95A6DA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CGetAwaiterU3Eb__0_mB4D1949DF46D2DAA0CE087E0F05B1A1D089E3B0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* L_0 = (U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m0734FB3329E0311751F70480674B04ADFF9B4252(L_0, NULL);
		U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* L_1 = L_0;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2 = ___0_instruction;
		NullCheck(L_1);
		L_1->___instruction_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___instruction_1), (void*)L_2);
		// var awaiter = new SimpleCoroutineAwaiter<AsyncOperation>();
		U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* L_3 = L_1;
		SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* L_4 = (SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE*)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1__ctor_m8286F47F8661E2F2ADDF571191E187C3A95A6DA3(L_4, SimpleCoroutineAwaiter_1__ctor_m8286F47F8661E2F2ADDF571191E187C3A95A6DA3_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___awaiter_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___awaiter_0), (void*)L_4);
		// RunOnUnityScheduler(() => RunCoroutine(ReturnAsyncOperation(awaiter, instruction)));
		U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* L_5 = L_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CGetAwaiterU3Eb__0_mB4D1949DF46D2DAA0CE087E0F05B1A1D089E3B0D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		AwaiterExtensions_RunOnUnityScheduler_m3A6E0A2A96760AA198AF282E5797BDD1FFC55A42(L_6, NULL);
		// return awaiter;
		NullCheck(L_5);
		SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* L_7 = L_5->___awaiter_0;
		return L_7;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object> Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.ResourceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* AwaiterExtensions_GetAwaiter_m888A03914CB9CE58E602ECF17B8CB569E7FEA901 (ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_mADE89487AB4B0028F7ED75A0147D8082B609F769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CGetAwaiterU3Eb__0_m12CCFEE4ED6CEEE9420E37A511061C39DE41886A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434* L_0 = (U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass15_0__ctor_m1802851AC6FA7A74C4236070332C87D8A28A4E8C(L_0, NULL);
		U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434* L_1 = L_0;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_2 = ___0_instruction;
		NullCheck(L_1);
		L_1->___instruction_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___instruction_1), (void*)L_2);
		// var awaiter = new SimpleCoroutineAwaiter<Object>();
		U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434* L_3 = L_1;
		SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* L_4 = (SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB*)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1__ctor_mADE89487AB4B0028F7ED75A0147D8082B609F769(L_4, SimpleCoroutineAwaiter_1__ctor_mADE89487AB4B0028F7ED75A0147D8082B609F769_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___awaiter_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___awaiter_0), (void*)L_4);
		// RunOnUnityScheduler(() => RunCoroutine(ResourceRequest(awaiter, instruction)));
		U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434* L_5 = L_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CGetAwaiterU3Eb__0_m12CCFEE4ED6CEEE9420E37A511061C39DE41886A_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		AwaiterExtensions_RunOnUnityScheduler_m3A6E0A2A96760AA198AF282E5797BDD1FFC55A42(L_6, NULL);
		// return awaiter;
		NullCheck(L_5);
		SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* L_7 = L_5->___awaiter_0;
		return L_7;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle> Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.AssetBundleCreateRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* AwaiterExtensions_GetAwaiter_mF83778FC26C358353D51D31B731B30429A55698B (AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_mEC0FC08BBDFB5C98513F33C09B6E4B0A94514EFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CGetAwaiterU3Eb__0_m4A9C7769E3CDCA74099656CC36ABB5BF21CFF89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* L_0 = (U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass16_0__ctor_m743F884DA6B8220442494F059936483A7621B3B1(L_0, NULL);
		U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* L_1 = L_0;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_2 = ___0_instruction;
		NullCheck(L_1);
		L_1->___instruction_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___instruction_1), (void*)L_2);
		// var awaiter = new SimpleCoroutineAwaiter<AssetBundle>();
		U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* L_3 = L_1;
		SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* L_4 = (SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B*)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1__ctor_mEC0FC08BBDFB5C98513F33C09B6E4B0A94514EFF(L_4, SimpleCoroutineAwaiter_1__ctor_mEC0FC08BBDFB5C98513F33C09B6E4B0A94514EFF_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___awaiter_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___awaiter_0), (void*)L_4);
		// RunOnUnityScheduler(() => RunCoroutine(AssetBundleCreateRequest(awaiter, instruction)));
		U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* L_5 = L_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CGetAwaiterU3Eb__0_m4A9C7769E3CDCA74099656CC36ABB5BF21CFF89D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		AwaiterExtensions_RunOnUnityScheduler_m3A6E0A2A96760AA198AF282E5797BDD1FFC55A42(L_6, NULL);
		// return awaiter;
		NullCheck(L_5);
		SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* L_7 = L_5->___awaiter_0;
		return L_7;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object> Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.AssetBundleRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* AwaiterExtensions_GetAwaiter_m7AC3943666072FDA4480C777934A16B4FFA0A5D8 (AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_mADE89487AB4B0028F7ED75A0147D8082B609F769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CGetAwaiterU3Eb__0_m91800C3590F9B8AB8CF751F0EF12E2ED532C5E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* L_0 = (U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass17_0__ctor_m9BA3E2EB4032B74B1A8D868ED01EE2C9A6E664D3(L_0, NULL);
		U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* L_1 = L_0;
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_2 = ___0_instruction;
		NullCheck(L_1);
		L_1->___instruction_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___instruction_1), (void*)L_2);
		// var awaiter = new SimpleCoroutineAwaiter<Object>();
		U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* L_3 = L_1;
		SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* L_4 = (SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB*)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1__ctor_mADE89487AB4B0028F7ED75A0147D8082B609F769(L_4, SimpleCoroutineAwaiter_1__ctor_mADE89487AB4B0028F7ED75A0147D8082B609F769_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___awaiter_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___awaiter_0), (void*)L_4);
		// RunOnUnityScheduler(() => RunCoroutine(AssetBundleRequest(awaiter, instruction)));
		U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* L_5 = L_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CGetAwaiterU3Eb__0_m91800C3590F9B8AB8CF751F0EF12E2ED532C5E0A_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		AwaiterExtensions_RunOnUnityScheduler_m3A6E0A2A96760AA198AF282E5797BDD1FFC55A42(L_6, NULL);
		// return awaiter;
		NullCheck(L_5);
		SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* L_7 = L_5->___awaiter_0;
		return L_7;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter`1<System.Object> Utilities.Async.AwaiterExtensions::GetAwaiter(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594* AwaiterExtensions_GetAwaiter_mF85CEA0773A3C3A98A79A1CF5C5A56982DFEE5C3 (RuntimeObject* ___0_coroutine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1__ctor_m02B308EE954154CA1F6D780951886F36CB5DBE3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CGetAwaiterU3Eb__0_mC644DFEE0B29410F560B21D80A8E70D90DF4A5DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6* L_0 = (U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass19_0__ctor_m6103AB9A91AB234777D1333D729C3F45BC502A41(L_0, NULL);
		U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6* L_1 = L_0;
		RuntimeObject* L_2 = ___0_coroutine;
		NullCheck(L_1);
		L_1->___coroutine_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___coroutine_0), (void*)L_2);
		// var awaiter = new SimpleCoroutineAwaiter<object>();
		U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6* L_3 = L_1;
		SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594* L_4 = (SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594*)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1__ctor_m02B308EE954154CA1F6D780951886F36CB5DBE3D(L_4, SimpleCoroutineAwaiter_1__ctor_m02B308EE954154CA1F6D780951886F36CB5DBE3D_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___awaiter_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___awaiter_1), (void*)L_4);
		// RunOnUnityScheduler(() => RunCoroutine(new CoroutineWrapper<object>(coroutine, awaiter).Run()));
		U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6* L_5 = L_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass19_0_U3CGetAwaiterU3Eb__0_mC644DFEE0B29410F560B21D80A8E70D90DF4A5DC_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		AwaiterExtensions_RunOnUnityScheduler_m3A6E0A2A96760AA198AF282E5797BDD1FFC55A42(L_6, NULL);
		// return awaiter;
		NullCheck(L_5);
		SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594* L_7 = L_5->___awaiter_1;
		return L_7;
	}
}
// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiterReturnVoid(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* AwaiterExtensions_GetAwaiterReturnVoid_m45CD6C32ADFCDAFB829CF8F8414CCB8CF2CF8CD3 (RuntimeObject* ___0_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CGetAwaiterReturnVoidU3Eb__0_mBB749A260AAC54021B14899946191022241FBDA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC* L_0 = (U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass20_0__ctor_m07A566A07E26D5BA614F8A1B03697117C76BE711(L_0, NULL);
		U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC* L_1 = L_0;
		RuntimeObject* L_2 = ___0_instruction;
		NullCheck(L_1);
		L_1->___instruction_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___instruction_1), (void*)L_2);
		// var awaiter = new SimpleCoroutineAwaiter();
		U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC* L_3 = L_1;
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_4 = (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC*)il2cpp_codegen_object_new(SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SimpleCoroutineAwaiter__ctor_m14AD9C45B65632BBE897CCF79D73D71E508986DD(L_4, NULL);
		NullCheck(L_3);
		L_3->___awaiter_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___awaiter_0), (void*)L_4);
		// RunOnUnityScheduler(() => RunCoroutine(ReturnVoid(awaiter, instruction)));
		U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC* L_5 = L_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass20_0_U3CGetAwaiterReturnVoidU3Eb__0_mBB749A260AAC54021B14899946191022241FBDA1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		AwaiterExtensions_RunOnUnityScheduler_m3A6E0A2A96760AA198AF282E5797BDD1FFC55A42(L_6, NULL);
		// return awaiter;
		NullCheck(L_5);
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_7 = L_5->___awaiter_0;
		return L_7;
	}
}
// System.Void Utilities.Async.AwaiterExtensions::RunCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_RunCoroutine_m9920D9114518B25781EB37AC75577D2EAEBEE4F2 (RuntimeObject* ___0_enumerator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mED4DD1E415CAF115D691BBAA951C546B2524C844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mDE952F1EB7D7C8312A1B8BBB721868A810EF9CB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA7121CCA2DB3A3F8E91ADB1D63E44CE5BD46B1C);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* V_1 = NULL;
	CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* G_B7_0 = NULL;
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		// if (coroutineRunner == null)
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = ((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___coroutineRunner_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		// var go = GameObject.Find(nameof(CoroutineRunner));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralFA7121CCA2DB3A3F8E91ADB1D63E44CE5BD46B1C, NULL);
		V_0 = L_3;
		// if (go == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// go = new GameObject(nameof(CoroutineRunner));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_6, _stringLiteralFA7121CCA2DB3A3F8E91ADB1D63E44CE5BD46B1C, NULL);
		V_0 = L_6;
	}

IL_0033:
	{
		// Object.DontDestroyOnLoad(go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_7, NULL);
		// go.hideFlags = HideFlags.HideAndDontSave;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_8, ((int32_t)61), NULL);
		// coroutineRunner = go.TryGetComponent<CoroutineRunner>(out var runner) ? runner : go.AddComponent<CoroutineRunner>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_TryGetComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mDE952F1EB7D7C8312A1B8BBB721868A810EF9CB7(L_9, (&V_1), GameObject_TryGetComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mDE952F1EB7D7C8312A1B8BBB721868A810EF9CB7_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_11);
		CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* L_12;
		L_12 = GameObject_AddComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mED4DD1E415CAF115D691BBAA951C546B2524C844(L_11, GameObject_AddComponent_TisCoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9_mED4DD1E415CAF115D691BBAA951C546B2524C844_RuntimeMethod_var);
		G_B7_0 = L_12;
		goto IL_0054;
	}

IL_0053:
	{
		CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* L_13 = V_1;
		G_B7_0 = L_13;
	}

IL_0054:
	{
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___coroutineRunner_0 = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___coroutineRunner_0), (void*)G_B7_0);
	}

IL_0059:
	{
		// coroutineRunner.StartCoroutine(enumerator);
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_14 = ((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___coroutineRunner_0;
		RuntimeObject* L_15 = ___0_enumerator;
		NullCheck(L_14);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_14, L_15, NULL);
		return;
	}

IL_0066:
	{
		// throw new Exception(nameof(CoroutineRunner));
		Exception_t* L_17 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA7121CCA2DB3A3F8E91ADB1D63E44CE5BD46B1C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AwaiterExtensions_RunCoroutine_m9920D9114518B25781EB37AC75577D2EAEBEE4F2_RuntimeMethod_var)));
	}
}
// System.Void Utilities.Async.AwaiterExtensions::RunOnUnityScheduler(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_RunOnUnityScheduler_m3A6E0A2A96760AA198AF282E5797BDD1FFC55A42 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_DeferredPostCallback_m51AC875EC55F61A580F14DAAD9423007E6229948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SyncContextUtility.IsMainThread)
		bool L_0;
		L_0 = SyncContextUtility_get_IsMainThread_m308539FDDA29CCB2F37713C85CA364C5F0D4A615(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_action;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
		return;
	}

IL_000e:
	{
		// actionQueue.Enqueue(action);
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_2 = ((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___actionQueue_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_action;
		NullCheck(L_2);
		ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7(L_2, L_3, ConcurrentQueue_1_Enqueue_mB2A5332EE6591094624C43E356CF17B5D82C55A7_RuntimeMethod_var);
		// SyncContextUtility.UnitySynchronizationContext.Post(DeferredPostCallback, null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_4;
		L_4 = SyncContextUtility_get_UnitySynchronizationContext_m16C567FA9D022798527C3DBC2B9A6CB0267EC787_inline(NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_5 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_5, NULL, (intptr_t)((void*)AwaiterExtensions_DeferredPostCallback_m51AC875EC55F61A580F14DAAD9423007E6229948_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions::DeferredPostCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions_DeferredPostCallback_m51AC875EC55F61A580F14DAAD9423007E6229948 (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_mFC6C166C257C6A89AE250C19132DB4961E9887BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryPeek_m51AFA1BA430F177D8AB4E509394025E67AB6F8AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_mEF44290366C95F403729AAE156D7D7DF627046D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B4DEEF5ED5F74648B2CA15D7C9CB069385815B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98CEDF889E5D7250825F3F647847147DD1F0D681);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	{
		// if (!SyncContextUtility.IsMainThread)
		bool L_0;
		L_0 = SyncContextUtility_get_IsMainThread_m308539FDDA29CCB2F37713C85CA364C5F0D4A615(NULL);
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogError("Failed to post deferred execution back on main thread!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral98CEDF889E5D7250825F3F647847147DD1F0D681, NULL);
		// return;
		return;
	}

IL_0012:
	{
		// if (actionQueue.TryPeek(out _) &&
		//     actionQueue.TryDequeue(out var action))
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_1 = ((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___actionQueue_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = ConcurrentQueue_1_TryPeek_m51AFA1BA430F177D8AB4E509394025E67AB6F8AA(L_1, (&V_1), ConcurrentQueue_1_TryPeek_m51AFA1BA430F177D8AB4E509394025E67AB6F8AA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_3 = ((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___actionQueue_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = ConcurrentQueue_1_TryDequeue_mFC6C166C257C6A89AE250C19132DB4961E9887BC(L_3, (&V_0), ConcurrentQueue_1_TryDequeue_mFC6C166C257C6A89AE250C19132DB4961E9887BC_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// action?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_0;
		NullCheck(L_6);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_6, NULL);
	}

IL_0037:
	{
		// while (actionQueue.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_7 = ((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___actionQueue_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ConcurrentQueue_1_get_Count_mEF44290366C95F403729AAE156D7D7DF627046D9(L_7, ConcurrentQueue_1_get_Count_mEF44290366C95F403729AAE156D7D7DF627046D9_RuntimeMethod_var);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		// if (actionQueue.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_9 = ((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___actionQueue_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ConcurrentQueue_1_get_Count_mEF44290366C95F403729AAE156D7D7DF627046D9(L_9, ConcurrentQueue_1_get_Count_mEF44290366C95F403729AAE156D7D7DF627046D9_RuntimeMethod_var);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		// Debug.LogError("Failed to execute all queued actions!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral8B4DEEF5ED5F74648B2CA15D7C9CB069385815B8, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::ReturnVoid(Utilities.Async.SimpleCoroutineAwaiter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_ReturnVoid_mB5E0726A1867D825EF3C4F420CB38EABB50C523E (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* ___0_awaiter, RuntimeObject* ___1_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5* L_0 = (U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5*)il2cpp_codegen_object_new(U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReturnVoidU3Ed__27__ctor_mAB5B41E3E9D90FCCEC6A6B840A1BFF7A02C386A1(L_0, 0, NULL);
		U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5* L_1 = L_0;
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_2 = ___0_awaiter;
		NullCheck(L_1);
		L_1->___awaiter_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___awaiter_3), (void*)L_2);
		U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5* L_3 = L_1;
		RuntimeObject* L_4 = ___1_instruction;
		NullCheck(L_3);
		L_3->___instruction_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___instruction_2), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::ResourceRequest(Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.ResourceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_ResourceRequest_mEE093CA29E80054008C4321E7D40D533548CF9A7 (SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* ___0_awaiter, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* ___1_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E* L_0 = (U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E*)il2cpp_codegen_object_new(U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CResourceRequestU3Ed__28__ctor_mDF89DB5FDC05BFBB8337803F9048C27FCAC1049B(L_0, 0, NULL);
		U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E* L_1 = L_0;
		SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* L_2 = ___0_awaiter;
		NullCheck(L_1);
		L_1->___awaiter_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___awaiter_3), (void*)L_2);
		U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E* L_3 = L_1;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_4 = ___1_instruction;
		NullCheck(L_3);
		L_3->___instruction_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___instruction_2), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::ReturnAsyncOperation(Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>,UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_ReturnAsyncOperation_mD0FEDBA712E3A3CC8633A04985AAF36157FF9053 (SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* ___0_awaiter, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___1_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE* L_0 = (U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE*)il2cpp_codegen_object_new(U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReturnAsyncOperationU3Ed__29__ctor_m7948DE9BA58889C2B9715139C237965E7B2600B8(L_0, 0, NULL);
		U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE* L_1 = L_0;
		SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* L_2 = ___0_awaiter;
		NullCheck(L_1);
		L_1->___awaiter_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___awaiter_3), (void*)L_2);
		U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE* L_3 = L_1;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4 = ___1_instruction;
		NullCheck(L_3);
		L_3->___instruction_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___instruction_2), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::AssetBundleCreateRequest(Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.AssetBundle>,UnityEngine.AssetBundleCreateRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_AssetBundleCreateRequest_mEFD387F052B8D009EF8613EC054466CCE62B8787 (SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* ___0_awaiter, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* ___1_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C* L_0 = (U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C*)il2cpp_codegen_object_new(U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAssetBundleCreateRequestU3Ed__30__ctor_m37800DFC2F9AFA31CFEAD9C8629B013B5C3416B1(L_0, 0, NULL);
		U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C* L_1 = L_0;
		SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* L_2 = ___0_awaiter;
		NullCheck(L_1);
		L_1->___awaiter_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___awaiter_3), (void*)L_2);
		U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C* L_3 = L_1;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_4 = ___1_instruction;
		NullCheck(L_3);
		L_3->___instruction_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___instruction_2), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator Utilities.Async.AwaiterExtensions::AssetBundleRequest(Utilities.Async.SimpleCoroutineAwaiter`1<UnityEngine.Object>,UnityEngine.AssetBundleRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AwaiterExtensions_AssetBundleRequest_mB423114665DF673E8C40E5010D62AD07B228CCB6 (SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* ___0_awaiter, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___1_instruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18* L_0 = (U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18*)il2cpp_codegen_object_new(U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAssetBundleRequestU3Ed__31__ctor_m3C647D8240FF10990247E1AD7F70DE97241F5D96(L_0, 0, NULL);
		U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18* L_1 = L_0;
		SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* L_2 = ___0_awaiter;
		NullCheck(L_1);
		L_1->___awaiter_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___awaiter_3), (void*)L_2);
		U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18* L_3 = L_1;
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_4 = ___1_instruction;
		NullCheck(L_3);
		L_3->___instruction_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___instruction_2), (void*)L_4);
		return L_3;
	}
}
// System.Void Utilities.Async.AwaiterExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaiterExtensions__cctor_m16F55371816429E6A641FD42A36F074A07BDA822 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1__ctor_mE1A62800E8BFDED5BDB15A6C54416077BF8D7374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ConcurrentQueue<Action> actionQueue = new ConcurrentQueue<Action>();
		ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* L_0 = (ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3*)il2cpp_codegen_object_new(ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentQueue_1__ctor_mE1A62800E8BFDED5BDB15A6C54416077BF8D7374(L_0, ConcurrentQueue_1__ctor_mE1A62800E8BFDED5BDB15A6C54416077BF8D7374_RuntimeMethod_var);
		((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___actionQueue_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var))->___actionQueue_1), (void*)L_0);
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
// System.Void Utilities.Async.AwaiterExtensions/CoroutineRunner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineRunner__ctor_m96914B6CC753B65A34ADF2F97FB371ED4166747F (CoroutineRunner_t75C07E96032BCAA465A01113589FA5601AE699B9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunAsIEnumeratorU3Ed__0__ctor_m954F840C470828761F8606075E959A8499940E7F (U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunAsIEnumeratorU3Ed__0_System_IDisposable_Dispose_mC0B4343EDD49AD607465642A2E739981D54099F1 (U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRunAsIEnumeratorU3Ed__0_MoveNext_m60039309EEB9EA25FF3786C20BCFE03717CD1B29 (U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0* __this, const RuntimeMethod* method) 
{
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
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0030;
	}

IL_0019:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0030:
	{
		// while (!task.IsCompleted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = __this->___task_2;
		NullCheck(L_3);
		bool L_4;
		L_4 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_3, NULL);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		// if (task.IsFaulted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5 = __this->___task_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_5, NULL);
		if (!L_6)
		{
			goto IL_0063;
		}
	}
	{
		// if (task.Exception != null)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7 = __this->___task_2;
		NullCheck(L_7);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_8;
		L_8 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_7, NULL);
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		// throw task.Exception;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9 = __this->___task_2;
		NullCheck(L_9);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_10;
		L_10 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRunAsIEnumeratorU3Ed__0_MoveNext_m60039309EEB9EA25FF3786C20BCFE03717CD1B29_RuntimeMethod_var)));
	}

IL_0063:
	{
		// }
		return (bool)0;
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRunAsIEnumeratorU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA0D6E8AF271808F4BCF85E137FA9EB5D8057B9F4 (U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunAsIEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_m51BA907467090EA348DB12CCB7B49475F1AEAF4E (U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRunAsIEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_m51BA907467090EA348DB12CCB7B49475F1AEAF4E_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<RunAsIEnumerator>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRunAsIEnumeratorU3Ed__0_System_Collections_IEnumerator_get_Current_m4B0324431B42AE21E43DC97951CF6D00AE744B36 (U3CRunAsIEnumeratorU3Ed__0_t9742710A3FCA99A5BE5F2F7572888CBF0073F1C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m0734FB3329E0311751F70480674B04ADFF9B4252 (U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass14_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CGetAwaiterU3Eb__0_mB4D1949DF46D2DAA0CE087E0F05B1A1D089E3B0D (U3CU3Ec__DisplayClass14_0_tFBE4DA55944422E1E0586C989F6F99DC30B0B20C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnUnityScheduler(() => RunCoroutine(ReturnAsyncOperation(awaiter, instruction)));
		SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* L_0 = __this->___awaiter_0;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1 = __this->___instruction_1;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = AwaiterExtensions_ReturnAsyncOperation_mD0FEDBA712E3A3CC8633A04985AAF36157FF9053(L_0, L_1, NULL);
		AwaiterExtensions_RunCoroutine_m9920D9114518B25781EB37AC75577D2EAEBEE4F2(L_2, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m1802851AC6FA7A74C4236070332C87D8A28A4E8C (U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass15_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CGetAwaiterU3Eb__0_m12CCFEE4ED6CEEE9420E37A511061C39DE41886A (U3CU3Ec__DisplayClass15_0_t48B164F04F5C6FA2B54BF4466569F096C4D29434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnUnityScheduler(() => RunCoroutine(ResourceRequest(awaiter, instruction)));
		SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* L_0 = __this->___awaiter_0;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_1 = __this->___instruction_1;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = AwaiterExtensions_ResourceRequest_mEE093CA29E80054008C4321E7D40D533548CF9A7(L_0, L_1, NULL);
		AwaiterExtensions_RunCoroutine_m9920D9114518B25781EB37AC75577D2EAEBEE4F2(L_2, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m743F884DA6B8220442494F059936483A7621B3B1 (U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass16_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CGetAwaiterU3Eb__0_m4A9C7769E3CDCA74099656CC36ABB5BF21CFF89D (U3CU3Ec__DisplayClass16_0_tAC637C26FC2A980969B8D0434122A28EF8EF7D17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnUnityScheduler(() => RunCoroutine(AssetBundleCreateRequest(awaiter, instruction)));
		SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* L_0 = __this->___awaiter_0;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_1 = __this->___instruction_1;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = AwaiterExtensions_AssetBundleCreateRequest_mEFD387F052B8D009EF8613EC054466CCE62B8787(L_0, L_1, NULL);
		AwaiterExtensions_RunCoroutine_m9920D9114518B25781EB37AC75577D2EAEBEE4F2(L_2, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m9BA3E2EB4032B74B1A8D868ED01EE2C9A6E664D3 (U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass17_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CGetAwaiterU3Eb__0_m91800C3590F9B8AB8CF751F0EF12E2ED532C5E0A (U3CU3Ec__DisplayClass17_0_t2772EC28E971C52A51E6F59BD65316C5C209BC2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnUnityScheduler(() => RunCoroutine(AssetBundleRequest(awaiter, instruction)));
		SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* L_0 = __this->___awaiter_0;
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_1 = __this->___instruction_1;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = AwaiterExtensions_AssetBundleRequest_mB423114665DF673E8C40E5010D62AD07B228CCB6(L_0, L_1, NULL);
		AwaiterExtensions_RunCoroutine_m9920D9114518B25781EB37AC75577D2EAEBEE4F2(L_2, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m6103AB9A91AB234777D1333D729C3F45BC502A41 (U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass19_0::<GetAwaiter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CGetAwaiterU3Eb__0_mC644DFEE0B29410F560B21D80A8E70D90DF4A5DC (U3CU3Ec__DisplayClass19_0_tF3412B2AF2C9B89590BA5904886B1174C507B4D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineWrapper_1_Run_mC79A7BE03A53A49CD15A5703F41ABDA0EA6B0DD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineWrapper_1__ctor_m26847CFBBC14B48E420DA60AB5515340636F6B1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnUnityScheduler(() => RunCoroutine(new CoroutineWrapper<object>(coroutine, awaiter).Run()));
		RuntimeObject* L_0 = __this->___coroutine_0;
		SimpleCoroutineAwaiter_1_t1758A1C3869B1EC2229525698AE8865C5D9FB594* L_1 = __this->___awaiter_1;
		CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499* L_2 = (CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499*)il2cpp_codegen_object_new(CoroutineWrapper_1_t27EF92A3B43A4F16B7AE25B8BD04D80BA1145499_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CoroutineWrapper_1__ctor_m26847CFBBC14B48E420DA60AB5515340636F6B1B(L_2, L_0, L_1, CoroutineWrapper_1__ctor_m26847CFBBC14B48E420DA60AB5515340636F6B1B_RuntimeMethod_var);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = CoroutineWrapper_1_Run_mC79A7BE03A53A49CD15A5703F41ABDA0EA6B0DD1(L_2, CoroutineWrapper_1_Run_mC79A7BE03A53A49CD15A5703F41ABDA0EA6B0DD1_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		AwaiterExtensions_RunCoroutine_m9920D9114518B25781EB37AC75577D2EAEBEE4F2(L_3, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m07A566A07E26D5BA614F8A1B03697117C76BE711 (U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<>c__DisplayClass20_0::<GetAwaiterReturnVoid>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CGetAwaiterReturnVoidU3Eb__0_mBB749A260AAC54021B14899946191022241FBDA1 (U3CU3Ec__DisplayClass20_0_tB1F7CD6BD6ADA6BE7B915FFC0BC0765C7D3E51AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnUnityScheduler(() => RunCoroutine(ReturnVoid(awaiter, instruction)));
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_0 = __this->___awaiter_0;
		RuntimeObject* L_1 = __this->___instruction_1;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = AwaiterExtensions_ReturnVoid_mB5E0726A1867D825EF3C4F420CB38EABB50C523E(L_0, L_1, NULL);
		AwaiterExtensions_RunCoroutine_m9920D9114518B25781EB37AC75577D2EAEBEE4F2(L_2, NULL);
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
// System.Void Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__27__ctor_mAB5B41E3E9D90FCCEC6A6B840A1BFF7A02C386A1 (U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__27_System_IDisposable_Dispose_m987490F06513BC618CDC01711C2734CC2C6481AE (U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReturnVoidU3Ed__27_MoveNext_mD23E7BE3B50DEDECE549D01C1A3531883E32D787 (U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5* __this, const RuntimeMethod* method) 
{
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
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return instruction;
		RuntimeObject* L_3 = __this->___instruction_2;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// awaiter.Complete();
		SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_4 = __this->___awaiter_3;
		NullCheck(L_4);
		SimpleCoroutineAwaiter_Complete_m2FF0A02F80AA26B112D6568EF723FBF8A9160702(L_4, (Exception_t*)NULL, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReturnVoidU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8AD9FEF5484382102AFBC7BDC42249D6E50B9783 (U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnVoidU3Ed__27_System_Collections_IEnumerator_Reset_m28FDAA2198447B492A33EF6CC91583FDE4F379AD (U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReturnVoidU3Ed__27_System_Collections_IEnumerator_Reset_m28FDAA2198447B492A33EF6CC91583FDE4F379AD_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<ReturnVoid>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReturnVoidU3Ed__27_System_Collections_IEnumerator_get_Current_m238FA9C2909576AF058B54E43402362EC428A2EC (U3CReturnVoidU3Ed__27_tAB803AAF68E52D8C974841F6D3C1F022ADC87CC5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__28__ctor_mDF89DB5FDC05BFBB8337803F9048C27FCAC1049B (U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__28_System_IDisposable_Dispose_m4053D825B1E1C643085C02A2F8DE5BDE9D5DB906 (U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResourceRequestU3Ed__28_MoveNext_m113EAD999AD72D42C818A373DB16D3A19083BB3B (U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_Complete_m926BF09CE9ED95496C65433C03A1F7CBBE9D6AAD_RuntimeMethod_var);
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
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return instruction;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_3 = __this->___instruction_2;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// awaiter.Complete(instruction.asset);
		SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* L_4 = __this->___awaiter_3;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_5 = __this->___instruction_2;
		NullCheck(L_5);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6;
		L_6 = ResourceRequest_get_asset_m740C394902843D080795A49372A2AB3CE9705087(L_5, NULL);
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1_Complete_m926BF09CE9ED95496C65433C03A1F7CBBE9D6AAD(L_4, L_6, (Exception_t*)NULL, SimpleCoroutineAwaiter_1_Complete_m926BF09CE9ED95496C65433C03A1F7CBBE9D6AAD_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResourceRequestU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD433DEA03D80D9708A586E5D2E8753B1D41E4ED6 (U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResourceRequestU3Ed__28_System_Collections_IEnumerator_Reset_mFE9A676F16ADB2832E44456D0CCF175875139756 (U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResourceRequestU3Ed__28_System_Collections_IEnumerator_Reset_mFE9A676F16ADB2832E44456D0CCF175875139756_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<ResourceRequest>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResourceRequestU3Ed__28_System_Collections_IEnumerator_get_Current_mD020ECAE825F6E8CF8ED2E7B516FF62A822664E5 (U3CResourceRequestU3Ed__28_t44886F3625C431646DD5086454A059B4D493235E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnAsyncOperationU3Ed__29__ctor_m7948DE9BA58889C2B9715139C237965E7B2600B8 (U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnAsyncOperationU3Ed__29_System_IDisposable_Dispose_mFC1E022843021AD1050581A4232E7C4C51CEA1F7 (U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReturnAsyncOperationU3Ed__29_MoveNext_m0701F1D91CBDB7A5788CBD20556826672EA4E93A (U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_Complete_m28D2397260691E3F359E79954C8D25E3FAAC205C_RuntimeMethod_var);
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
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return instruction;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3 = __this->___instruction_2;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// awaiter.Complete(instruction);
		SimpleCoroutineAwaiter_1_t011B73E57A405843773A5D39053909DA32B410DE* L_4 = __this->___awaiter_3;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5 = __this->___instruction_2;
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1_Complete_m28D2397260691E3F359E79954C8D25E3FAAC205C(L_4, L_5, (Exception_t*)NULL, SimpleCoroutineAwaiter_1_Complete_m28D2397260691E3F359E79954C8D25E3FAAC205C_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReturnAsyncOperationU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC5E4986712FFEB75AFD7370535DF9BA72AB6A29D (U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnAsyncOperationU3Ed__29_System_Collections_IEnumerator_Reset_m074D7B5B63874EED5E6671C2550D6B9952721E52 (U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReturnAsyncOperationU3Ed__29_System_Collections_IEnumerator_Reset_m074D7B5B63874EED5E6671C2550D6B9952721E52_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<ReturnAsyncOperation>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReturnAsyncOperationU3Ed__29_System_Collections_IEnumerator_get_Current_mCE47A3BCC37518C091DC2CBBAEADF7426921ECDD (U3CReturnAsyncOperationU3Ed__29_tD87B022781CC0E8DA83A81CCBEE93B27F45372FE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__30__ctor_m37800DFC2F9AFA31CFEAD9C8629B013B5C3416B1 (U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__30_System_IDisposable_Dispose_m0181D73AB9D7C408C85989A6A0D8AD9C46652767 (U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAssetBundleCreateRequestU3Ed__30_MoveNext_mDD5FB2BA35C6B71A53B4ABE3EAB17BE5E24E7C1E (U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_Complete_m7CD70AF0D28A550F7B73D6FA0A3B8E824D55E54F_RuntimeMethod_var);
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
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return instruction;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_3 = __this->___instruction_2;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// awaiter.Complete(instruction.assetBundle);
		SimpleCoroutineAwaiter_1_t23E8C7D3E3BAA78F2CA957A0CE153CF1D000310B* L_4 = __this->___awaiter_3;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_5 = __this->___instruction_2;
		NullCheck(L_5);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_6;
		L_6 = AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21(L_5, NULL);
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1_Complete_m7CD70AF0D28A550F7B73D6FA0A3B8E824D55E54F(L_4, L_6, (Exception_t*)NULL, SimpleCoroutineAwaiter_1_Complete_m7CD70AF0D28A550F7B73D6FA0A3B8E824D55E54F_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAssetBundleCreateRequestU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m66925DEAD0A3EBE6D68577BDF93A7B24BA4378F3 (U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleCreateRequestU3Ed__30_System_Collections_IEnumerator_Reset_mA453792609F0775FC37A8B05C61776726147D67E (U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAssetBundleCreateRequestU3Ed__30_System_Collections_IEnumerator_Reset_mA453792609F0775FC37A8B05C61776726147D67E_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<AssetBundleCreateRequest>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAssetBundleCreateRequestU3Ed__30_System_Collections_IEnumerator_get_Current_m39B2991FC8329734E22FA4A1DBDAF225A570D3A5 (U3CAssetBundleCreateRequestU3Ed__30_t6134BF240BA53336320CA91AF0210322B125333C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__31__ctor_m3C647D8240FF10990247E1AD7F70DE97241F5D96 (U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__31_System_IDisposable_Dispose_mCA7BAAC3E9BA1C18B3C4B86697C05145B647E82F (U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAssetBundleRequestU3Ed__31_MoveNext_m60413808D424045E6F5116187B1BA5A500A7A11E (U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_Complete_m926BF09CE9ED95496C65433C03A1F7CBBE9D6AAD_RuntimeMethod_var);
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
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return instruction;
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_3 = __this->___instruction_2;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// awaiter.Complete(instruction.asset);
		SimpleCoroutineAwaiter_1_t2383F9B48C1A0FB1199B54B2A77EB2EE097A34DB* L_4 = __this->___awaiter_3;
		AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* L_5 = __this->___instruction_2;
		NullCheck(L_5);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6;
		L_6 = AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C(L_5, NULL);
		NullCheck(L_4);
		SimpleCoroutineAwaiter_1_Complete_m926BF09CE9ED95496C65433C03A1F7CBBE9D6AAD(L_4, L_6, (Exception_t*)NULL, SimpleCoroutineAwaiter_1_Complete_m926BF09CE9ED95496C65433C03A1F7CBBE9D6AAD_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAssetBundleRequestU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m85C029EBF799B20DE0DDCA48F740C481C272B06C (U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAssetBundleRequestU3Ed__31_System_Collections_IEnumerator_Reset_m01CCEEF3CA1B1D2AE64208599B864B4EED94ABBA (U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAssetBundleRequestU3Ed__31_System_Collections_IEnumerator_Reset_m01CCEEF3CA1B1D2AE64208599B864B4EED94ABBA_RuntimeMethod_var)));
	}
}
// System.Object Utilities.Async.AwaiterExtensions/<AssetBundleRequest>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAssetBundleRequestU3Ed__31_System_Collections_IEnumerator_get_Current_m58445186CC0F386FC22548AB52C61C893A3E54DB (U3CAssetBundleRequestU3Ed__31_t3EB5432F67F08DC82E816F2DF32BBD5BAB942F18* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// Utilities.Async.AwaitYieldInstructions.UnityMainThread Utilities.Async.Awaiters::get_UnityMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityMainThread UnityMainThread { get; } = new UnityMainThread();
		il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_0 = ((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CUnityMainThreadU3Ek__BackingField_0;
		return L_0;
	}
}
// Utilities.Async.AwaitYieldInstructions.BackgroundThread Utilities.Async.Awaiters::get_BackgroundThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* Awaiters_get_BackgroundThread_m2CBDABB9D8409211632EE97C45D7479BADB93C9E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BackgroundThread BackgroundThread { get; } = new BackgroundThread();
		il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* L_0 = ((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CBackgroundThreadU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Utilities.Async.Awaiters::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiters__cctor_m26B8C54B97B1A8460C3F0D685C470C7C0A4578F7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityMainThread UnityMainThread { get; } = new UnityMainThread();
		UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_0 = (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC*)il2cpp_codegen_object_new(UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityMainThread__ctor_mB503158CD706DC757EA69CB7E9D52728B9817062(L_0, NULL);
		((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CUnityMainThreadU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CUnityMainThreadU3Ek__BackingField_0), (void*)L_0);
		// public static BackgroundThread BackgroundThread { get; } = new BackgroundThread();
		BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* L_1 = (BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938*)il2cpp_codegen_object_new(BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BackgroundThread__ctor_m4F3CC38C6D4714EA48577E0070406B6A947C6C80(L_1, NULL);
		((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CBackgroundThreadU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields*)il2cpp_codegen_static_fields_for(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var))->___U3CBackgroundThreadU3Ek__BackingField_1), (void*)L_1);
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
// System.Boolean Utilities.Async.SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7 (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Utilities.Async.SimpleCoroutineAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_set_IsCompleted_m5FF07BC737B79EA8CC42ADAEC02F5BB9BAAB4596 (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCompletedU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Utilities.Async.SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m9DBA8062060DD5EC647A669D104B3171384819CC (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, const RuntimeMethod* method) 
{
	{
		// if (!IsCompleted)
		bool L_0;
		L_0 = SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Tried to get result before task completed!");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC933C6841D3ABA639D40749CDC3379F25FF8A2D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleCoroutineAwaiter_GetResult_m9DBA8062060DD5EC647A669D104B3171384819CC_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (exception != null)
		Exception_t* L_2 = __this->___exception_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// ExceptionDispatchInfo.Capture(exception).Throw();
		Exception_t* L_3 = __this->___exception_0;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4;
		L_4 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_3, NULL);
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Utilities.Async.SimpleCoroutineAwaiter::Complete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_Complete_m2FF0A02F80AA26B112D6568EF723FBF8A9160702 (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsCompleted)
		bool L_0;
		L_0 = SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Task has already been completed!");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3DC481B874B2AE4547CE76EE452FCAF2B6F741EB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleCoroutineAwaiter_Complete_m2FF0A02F80AA26B112D6568EF723FBF8A9160702_RuntimeMethod_var)));
	}

IL_0013:
	{
		// IsCompleted = true;
		SimpleCoroutineAwaiter_set_IsCompleted_m5FF07BC737B79EA8CC42ADAEC02F5BB9BAAB4596_inline(__this, (bool)1, NULL);
		// exception = e;
		Exception_t* L_2 = ___0_e;
		__this->___exception_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exception_0), (void*)L_2);
		// if (continuation != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___continuation_1;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// RunOnUnityScheduler(continuation);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___continuation_1;
		il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		AwaiterExtensions_RunOnUnityScheduler_m3A6E0A2A96760AA198AF282E5797BDD1FFC55A42(L_4, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Utilities.Async.SimpleCoroutineAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_OnCompleted_mD3881E2D4E597854B042AEF2EB832CE04844D26D (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_notifyContinuation, const RuntimeMethod* method) 
{
	{
		// => UnsafeOnCompleted(notifyContinuation);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_notifyContinuation;
		SimpleCoroutineAwaiter_UnsafeOnCompleted_m4CF308A8216C398742A6ED64D65B6B278D941C57(__this, L_0, NULL);
		return;
	}
}
// System.Void Utilities.Async.SimpleCoroutineAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_UnsafeOnCompleted_m4CF308A8216C398742A6ED64D65B6B278D941C57 (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_notifyContinuation, const RuntimeMethod* method) 
{
	{
		// if (continuation != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("task continuation is not null!");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1C835BD1710D600B6F36FD0BBD70FEAA6AC7D37)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleCoroutineAwaiter_UnsafeOnCompleted_m4CF308A8216C398742A6ED64D65B6B278D941C57_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (IsCompleted)
		bool L_2;
		L_2 = SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// throw new InvalidOperationException("Task has already been completed!");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3DC481B874B2AE4547CE76EE452FCAF2B6F741EB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleCoroutineAwaiter_UnsafeOnCompleted_m4CF308A8216C398742A6ED64D65B6B278D941C57_RuntimeMethod_var)));
	}

IL_0026:
	{
		// continuation = notifyContinuation;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___0_notifyContinuation;
		__this->___continuation_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___continuation_1), (void*)L_4);
		// }
		return;
	}
}
// System.Void Utilities.Async.SimpleCoroutineAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter__ctor_m14AD9C45B65632BBE897CCF79D73D71E508986DD (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Utilities.Async.Internal.SyncContextUtility::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtility_Initialize_mAEF7D78802D11B93E53042F4601B2C1ED7355F2F (const RuntimeMethod* method) 
{
	{
		// UnitySynchronizationContext = SynchronizationContext.Current;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0;
		L_0 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		SyncContextUtility_set_UnitySynchronizationContext_m83D495A0FF176179A186356C6213D72666DCDE2B_inline(L_0, NULL);
		// UnityThreadId = Thread.CurrentThread.ManagedThreadId;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		SyncContextUtility_set_UnityThreadId_mA1B2D3B250A5CF927BCC06C2E55B0723D8175D31_inline(L_2, NULL);
		// }
		return;
	}
}
// System.Int32 Utilities.Async.Internal.SyncContextUtility::get_UnityThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncContextUtility_get_UnityThreadId_m0EB88069366612A3943A87B8BE43A702DC75C77A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int UnityThreadId { get; private set; }
		int32_t L_0 = ((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnityThreadIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Utilities.Async.Internal.SyncContextUtility::set_UnityThreadId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnityThreadId_mA1B2D3B250A5CF927BCC06C2E55B0723D8175D31 (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int UnityThreadId { get; private set; }
		int32_t L_0 = ___0_value;
		((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnityThreadIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Threading.SynchronizationContext Utilities.Async.Internal.SyncContextUtility::get_UnitySynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SyncContextUtility_get_UnitySynchronizationContext_m16C567FA9D022798527C3DBC2B9A6CB0267EC787 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext UnitySynchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Utilities.Async.Internal.SyncContextUtility::set_UnitySynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnitySynchronizationContext_m83D495A0FF176179A186356C6213D72666DCDE2B (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext UnitySynchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___0_value;
		((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean Utilities.Async.Internal.SyncContextUtility::get_IsMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncContextUtility_get_IsMainThread_m308539FDDA29CCB2F37713C85CA364C5F0D4A615 (const RuntimeMethod* method) 
{
	{
		// public static bool IsMainThread => UnitySynchronizationContext == SynchronizationContext.Current;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0;
		L_0 = SyncContextUtility_get_UnitySynchronizationContext_m16C567FA9D022798527C3DBC2B9A6CB0267EC787_inline(NULL);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_1;
		L_1 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		return (bool)((((RuntimeObject*)(SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)L_0) == ((RuntimeObject*)(SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)L_1))? 1 : 0);
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
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Utilities.Async.AwaitYieldInstructions.BackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 BackgroundThread_GetAwaiter_m4921FD5738D51489AE89CC4652A8C7E756424610 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m797319A72E6A50B98B8B3F62992A743EF69ADE1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* G_B2_0 = NULL;
	Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* G_B1_0 = NULL;
	{
		// return Task.Run(async () =>
		// {
		//     while (SyncContextUtility.IsMainThread)
		//     {
		//         await Task.Delay(1).ConfigureAwait(false);
		//     }
		// }).ConfigureAwait(false).GetAwaiter();
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var);
		Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_0 = ((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var);
		U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* L_2 = ((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_3 = (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*)il2cpp_codegen_object_new(Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m797319A72E6A50B98B8B3F62992A743EF69ADE1A_RuntimeMethod_var), NULL);
		Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_4 = L_3;
		((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = Task_Run_m59DCF6061E31E90EE85393BE82E6907EC60B6958(G_B2_0, NULL);
		NullCheck(L_5);
		ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_6;
		L_6 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_5, (bool)0, NULL);
		V_0 = L_6;
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_7;
		L_7 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_0), NULL);
		return L_7;
	}
}
// System.Boolean Utilities.Async.AwaitYieldInstructions.BackgroundThread::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BackgroundThread_get_keepWaiting_m497510943DE2E4311490FE889AC99ABF1DB42016 (BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* __this, const RuntimeMethod* method) 
{
	{
		// public override bool keepWaiting => false;
		return (bool)0;
	}
}
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundThread__ctor_m4F3CC38C6D4714EA48577E0070406B6A947C6C80 (BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* __this, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
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
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m035D6661DA74E36D3B53F3B0B70E7E3FD9B4F261 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* L_0 = (U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3*)il2cpp_codegen_object_new(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9A129C8FB4D87D1790031D0ECD80D4D66D4A6C69(L_0, NULL);
		((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A129C8FB4D87D1790031D0ECD80D4D66D4A6C69 (U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c::<GetAwaiter>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m797319A72E6A50B98B8B3F62992A743EF69ADE1A (U3CU3Ec_t7C3E1EF01DDB6BB2A9A3D72BD8DBE5F3DAA280D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m530B7AA8FF1FE056965630A1927ED43B2A4961B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m530B7AA8FF1FE056965630A1927ED43B2A4961B6(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m530B7AA8FF1FE056965630A1927ED43B2A4961B6_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
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
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CGetAwaiterU3Eb__0_0U3Ed_MoveNext_mD1F8F654E1047FA80F167F940FF3ECE8E54D5932 (U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m758D6F412E660F310998BB624DA47862FDEF202A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_004a_1;
			}
		}
		{
			goto IL_006d_1;
		}

IL_000c_1:
		{
			// await Task.Delay(1).ConfigureAwait(false);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
			L_2 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(1, NULL);
			NullCheck(L_2);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_3;
			L_3 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_2, (bool)0, NULL);
			V_2 = L_3;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_4;
			L_4 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_2), NULL);
			V_1 = L_4;
			bool L_5;
			L_5 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_1), NULL);
			if (L_5)
			{
				goto IL_0066_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___U3CU3E1__state_0 = L_6;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_7 = V_1;
			__this->___U3CU3Eu__1_2 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_2))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m758D6F412E660F310998BB624DA47862FDEF202A(L_8, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7_m758D6F412E660F310998BB624DA47862FDEF202A_RuntimeMethod_var);
			goto IL_00a0;
		}

IL_004a_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_9 = __this->___U3CU3Eu__1_2;
			V_1 = L_9;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_10 = (&__this->___U3CU3Eu__1_2);
			il2cpp_codegen_initobj(L_10, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0066_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_1), NULL);
		}

IL_006d_1:
		{
			// while (SyncContextUtility.IsMainThread)
			bool L_12;
			L_12 = SyncContextUtility_get_IsMainThread_m308539FDDA29CCB2F37713C85CA364C5F0D4A615(NULL);
			if (L_12)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_008d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_13 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_14 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_13, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a0;
	}// end catch (depth: 1)

IL_008d:
	{
		// }).ConfigureAwait(false).GetAwaiter();
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_15 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_15, NULL);
	}

IL_00a0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CGetAwaiterU3Eb__0_0U3Ed_MoveNext_mD1F8F654E1047FA80F167F940FF3ECE8E54D5932_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7*>(__this + _offset);
	U3CU3CGetAwaiterU3Eb__0_0U3Ed_MoveNext_mD1F8F654E1047FA80F167F940FF3ECE8E54D5932(_thisAdjusted, method);
}
// System.Void Utilities.Async.AwaitYieldInstructions.BackgroundThread/<>c/<<GetAwaiter>b__0_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CGetAwaiterU3Eb__0_0U3Ed_SetStateMachine_mCA71A52B5F04D1271AA511D7E74CA0CBD6461733 (U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CGetAwaiterU3Eb__0_0U3Ed_SetStateMachine_mCA71A52B5F04D1271AA511D7E74CA0CBD6461733_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CGetAwaiterU3Eb__0_0U3Ed_t6090DC5DD4BA2DE3F803A52292E1D04B9E51FBA7*>(__this + _offset);
	U3CU3CGetAwaiterU3Eb__0_0U3Ed_SetStateMachine_mCA71A52B5F04D1271AA511D7E74CA0CBD6461733(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Utilities.Async.AwaitYieldInstructions.UnityMainThread::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityMainThread_get_keepWaiting_m1D318EC3CEA99CA3C55819983AC2768DE4CFB18B (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* __this, const RuntimeMethod* method) 
{
	{
		// public override bool keepWaiting => false;
		return (bool)0;
	}
}
// System.Void Utilities.Async.AwaitYieldInstructions.UnityMainThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThread__ctor_mB503158CD706DC757EA69CB7E9D52728B9817062 (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* __this, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SyncContextUtility_get_UnitySynchronizationContext_m16C567FA9D022798527C3DBC2B9A6CB0267EC787_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext UnitySynchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7_inline (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_set_IsCompleted_m5FF07BC737B79EA8CC42ADAEC02F5BB9BAAB4596_inline (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCompletedU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnitySynchronizationContext_m83D495A0FF176179A186356C6213D72666DCDE2B_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext UnitySynchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___0_value;
		((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnitySynchronizationContextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SyncContextUtility_set_UnityThreadId_mA1B2D3B250A5CF927BCC06C2E55B0723D8175D31_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int UnityThreadId { get; private set; }
		int32_t L_0 = ___0_value;
		((SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_StaticFields*)il2cpp_codegen_static_fields_for(SyncContextUtility_tB5C1D08943455969180F885B054E7C906064143F_il2cpp_TypeInfo_var))->___U3CUnityThreadIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
