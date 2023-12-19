#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// Utilities.Audio.AbstractRecordingBehaviour`1<System.Object>
struct AbstractRecordingBehaviour_1_tB027D11CCC6843A055768A7D32CF3761A5B2F704;
// Utilities.Audio.AbstractRecordingBehaviour`1<Utilities.Encoding.OggVorbis.OggEncoder>
struct AbstractRecordingBehaviour_1_t83CB6E6C5F77FD4FC6CCA4668FD5CA8C807C963A;
// System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct TaskFactory_1_tBB104CB5AB77377E459CE42D40D6685CA6A51ECC;
// System.Threading.Tasks.TaskFactory`1<System.Byte[]>
struct TaskFactory_1_tE78D5901E25DE030D64ED783B6E0BED8282D0148;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E;
// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// System.Tuple`2<System.String,UnityEngine.AudioClip>
struct Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744;
// System.Single[][]
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// OggVorbisEncoder.Setup.Mode[]
struct ModeU5BU5D_t5ADFF5BC334D4D32E1757D3C7B5327BAF5D82C6C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.AccessViolationException
struct AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Utilities.Async.AwaitYieldInstructions.BackgroundThread
struct BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// OggVorbisEncoder.CodecSetup
struct CodecSetup_t70F97AE51CA701CC80526F6B617232298D6FD444;
// OggVorbisEncoder.Comments
struct Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// OggVorbisEncoder.LookupCollection
struct LookupCollection_tEA28DEB22F817DE475B5D1B5606646F2E0C42E41;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Utilities.Encoding.OggVorbis.OggEncoder
struct OggEncoder_tB4C1A77B6277FE505E9EC22BF65476EA69749A05;
// OggVorbisEncoder.OggPacket
struct OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5;
// OggVorbisEncoder.OggPage
struct OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E;
// Utilities.Encoding.OggVorbis.OggRecorderBehaviour
struct OggRecorderBehaviour_t047903533DE434B9C8788D25F6E28C5AD0F4E086;
// OggVorbisEncoder.OggStream
struct OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F;
// OggVorbisEncoder.ProcessingState
struct ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Utilities.Async.SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Utilities.Async.AwaitYieldInstructions.UnityMainThread
struct UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// OggVorbisEncoder.VorbisInfo
struct VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A71CFFD786404158D51A0F7A79AE1902FAAF2A7;
IL2CPP_EXTERN_C String_t* _stringLiteral20D93A6FEBBBBDAC8D8A470059938C46DCF62D90;
IL2CPP_EXTERN_C String_t* _stringLiteral28E9C92C481BC7D26F977E7EB74FE19D9639DC68;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1693E237127979E6840FE9503A56562F6763F2;
IL2CPP_EXTERN_C String_t* _stringLiteral4330481298E05E651479321D3F2F1AF6D644E5F7;
IL2CPP_EXTERN_C String_t* _stringLiteral507FAB1F5B697A4F6D4421FA45C85C74E8BA6C07;
IL2CPP_EXTERN_C String_t* _stringLiteral5617C415DAB0B64021CC2F09FEBF2897B0CB1D68;
IL2CPP_EXTERN_C String_t* _stringLiteral5F48486DCAFDD71732AF9FBCB99B1BF3BAC89C0E;
IL2CPP_EXTERN_C String_t* _stringLiteral639EDD13E80C7AB1E738F109795CB5AED20E741B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D64A34D3275966681FD9DADB57684C569829DD3;
IL2CPP_EXTERN_C String_t* _stringLiteral722E944F9F31C8EF9F20F7A53867EAA97FD36488;
IL2CPP_EXTERN_C String_t* _stringLiteral7E853B59147D1E3F5F59DB7F0C1558DEE6BEA92F;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1B199097D409A8D6AE7A87F2052C1CAE7D2612;
IL2CPP_EXTERN_C String_t* _stringLiteralB2B04C45B6ACB27F471AECBCE961380C670FBF95;
IL2CPP_EXTERN_C String_t* _stringLiteralBAC8DD0A909CA8D0DD5AFBE6940689670F3607E1;
IL2CPP_EXTERN_C String_t* _stringLiteralD21A7BFE478B9363237CF90541813792015C6C02;
IL2CPP_EXTERN_C String_t* _stringLiteralD499752FDC638D47EB8D55FF7F7664AA81F236E5;
IL2CPP_EXTERN_C String_t* _stringLiteralF0EC54FD9493DD95C328894C9CC1F35DEB57EC2F;
IL2CPP_EXTERN_C String_t* _stringLiteralFA385B67619E3DB03702032DC6EE1DD96F4E1616;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractRecordingBehaviour_1__ctor_m84D1A99B2A9C3E78DDD4601A069948B435E4E71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m4F67DE48EB640BD37B9BDB9BEE03B3A85E082717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m85CB7744952F105541FD968791F92F87F063468C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m34C1A63D67E842B2B8A41E728D4804D5EBFB05CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m473ABB3F48BD701A87B9BAC3A67C49338DF5F641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m828DB83DD843DC0A5A94572AB7BF5886ADD34163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m3EAA5E413090893E2A09B35FE7EB801DF4323418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_m2AF402F3903B914073DB423582BB55AA5D942BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mD5BCF8BB191765693AAA74313FB5A277550662A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m8A172BF2B83B7862484348C6E1DB5311C125BAC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m68FC6A48AFEF15775269F9C82820919FCD0ED79A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9B2D0EEB3A691A059AC744AC18B8815504A95483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_mDDB17F352825E6731A4E8C16B058184966A13BD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_mB312C202C927CD74C88990849B9A8524BD055D74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m009B0737B8C63AD2188DE111EC662262B57E123D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m884390E8490BAF2B54C602FAFA637E4D27D85AF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m7B3747000EF0438B67247FC38CB11C83D6A5741F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_m392C1A1BE7A901149A0B0BDCADCAE2645B797D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_mF3FBB026A792B00BE69E5B7EF51B511F0B23F4F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_mAA584E3F7D719917CBCE21EE79C69ADD984F7F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m6BAD322C74730A75BE5EC7654FD70E68ECE1080D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m624FFF9D167CC155AA8F124C79471FBDED408F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OggEncoder_ConvertToBytes_mA15CFE280F6D99BDB80AD721668DEAF199AFF0FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_mE516EE1D621DED3ABDABB912374320EC152730E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_mB3628B71825226B713F07E9520DA6487ACBDEBCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CConvertToBytesAsyncU3Ed__7_MoveNext_mEC4056973A6B1EE12332C0358BCC339C5B22674A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStreamSaveToDiskAsyncU3Ed__8_MoveNext_mCBC42E1EDBA2A50AE71C7A1ADF2D105692108800_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t434C11224187B5E52A2AA7F7EC8972EF1465C172 
{
};

// System.Tuple`2<System.String,UnityEngine.AudioClip>
struct Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	String_t* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_Item2_1;
};

// Utilities.Encoding.OggVorbis.AudioClipExtensions
struct AudioClipExtensions_t5F9E208AA43DE27F2AB2040ACB9248B05A85240E  : public RuntimeObject
{
};

// Utilities.Async.Awaiters
struct Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A  : public RuntimeObject
{
};

// OggVorbisEncoder.Comments
struct Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> OggVorbisEncoder.Comments::_userComments
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____userComments_0;
};

// Utilities.Encoding.OggVorbis.Constants
struct Constants_t52D7A25F3C7F856E78F0843A4957980B2550887A  : public RuntimeObject
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

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Utilities.Encoding.OggVorbis.OggEncoder
struct OggEncoder_tB4C1A77B6277FE505E9EC22BF65476EA69749A05  : public RuntimeObject
{
};

// Utilities.Encoding.OggVorbis.OggExtensions
struct OggExtensions_t4A605F4F092B3FE2204D007A21555463238EB22D  : public RuntimeObject
{
};

// OggVorbisEncoder.OggPacket
struct OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5  : public RuntimeObject
{
	// System.Byte[] OggVorbisEncoder.OggPacket::<PacketData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CPacketDataU3Ek__BackingField_0;
	// System.Boolean OggVorbisEncoder.OggPacket::<EndOfStream>k__BackingField
	bool ___U3CEndOfStreamU3Ek__BackingField_1;
	// System.Int32 OggVorbisEncoder.OggPacket::<GranulePosition>k__BackingField
	int32_t ___U3CGranulePositionU3Ek__BackingField_2;
	// System.Int32 OggVorbisEncoder.OggPacket::<PacketNumber>k__BackingField
	int32_t ___U3CPacketNumberU3Ek__BackingField_3;
};

// OggVorbisEncoder.OggPage
struct OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E  : public RuntimeObject
{
	// System.Byte[] OggVorbisEncoder.OggPage::<Header>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CHeaderU3Ek__BackingField_0;
	// System.Byte[] OggVorbisEncoder.OggPage::<Body>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CBodyU3Ek__BackingField_1;
};

// OggVorbisEncoder.OggStream
struct OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F  : public RuntimeObject
{
	// System.Int32 OggVorbisEncoder.OggStream::_serialNumber
	int32_t ____serialNumber_2;
	// System.Byte[] OggVorbisEncoder.OggStream::_bodyData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____bodyData_3;
	// System.Int32 OggVorbisEncoder.OggStream::_bodyFill
	int32_t ____bodyFill_4;
	// System.Int32 OggVorbisEncoder.OggStream::_bodyReturned
	int32_t ____bodyReturned_5;
	// System.Int64 OggVorbisEncoder.OggStream::_granulePosition
	int64_t ____granulePosition_6;
	// System.Int64[] OggVorbisEncoder.OggStream::_granuleValues
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ____granuleValues_7;
	// System.Int32 OggVorbisEncoder.OggStream::_lacingFill
	int32_t ____lacingFill_8;
	// System.Int32[] OggVorbisEncoder.OggStream::_lacingValues
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____lacingValues_9;
	// System.Int32 OggVorbisEncoder.OggStream::_pageNumber
	int32_t ____pageNumber_10;
	// System.Boolean OggVorbisEncoder.OggStream::_writesHaveStarted
	bool ____writesHaveStarted_11;
	// System.Boolean OggVorbisEncoder.OggStream::<Finished>k__BackingField
	bool ___U3CFinishedU3Ek__BackingField_12;
};

// OggVorbisEncoder.ProcessingState
struct ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA  : public RuntimeObject
{
	// OggVorbisEncoder.LookupCollection OggVorbisEncoder.ProcessingState::_lookups
	LookupCollection_tEA28DEB22F817DE475B5D1B5606646F2E0C42E41* ____lookups_1;
	// System.Single[][] OggVorbisEncoder.ProcessingState::_pcm
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ____pcm_2;
	// OggVorbisEncoder.VorbisInfo OggVorbisEncoder.ProcessingState::_vorbisInfo
	VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* ____vorbisInfo_3;
	// System.Int32[] OggVorbisEncoder.ProcessingState::_window
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____window_4;
	// System.Int32 OggVorbisEncoder.ProcessingState::_centerWindow
	int32_t ____centerWindow_5;
	// System.Int32 OggVorbisEncoder.ProcessingState::_currentWindow
	int32_t ____currentWindow_6;
	// System.Int32 OggVorbisEncoder.ProcessingState::_eofFlag
	int32_t ____eofFlag_7;
	// System.Int32 OggVorbisEncoder.ProcessingState::_granulePosition
	int32_t ____granulePosition_8;
	// System.Int32 OggVorbisEncoder.ProcessingState::_lastWindow
	int32_t ____lastWindow_9;
	// System.Int32 OggVorbisEncoder.ProcessingState::_nextWindow
	int32_t ____nextWindow_10;
	// System.Int32 OggVorbisEncoder.ProcessingState::_pcmCurrent
	int32_t ____pcmCurrent_11;
	// System.Boolean OggVorbisEncoder.ProcessingState::_preExtrapolated
	bool ____preExtrapolated_12;
	// System.Int32 OggVorbisEncoder.ProcessingState::_sequence
	int32_t ____sequence_13;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

// Utilities.Audio.RecordingManager
struct RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009  : public RuntimeObject
{
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

// OggVorbisEncoder.VorbisInfo
struct VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367  : public RuntimeObject
{
	// System.Int32 OggVorbisEncoder.VorbisInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_1;
	// System.Int32 OggVorbisEncoder.VorbisInfo::<SampleRate>k__BackingField
	int32_t ___U3CSampleRateU3Ek__BackingField_2;
	// System.Int32 OggVorbisEncoder.VorbisInfo::<BitRateNominal>k__BackingField
	int32_t ___U3CBitRateNominalU3Ek__BackingField_3;
	// OggVorbisEncoder.CodecSetup OggVorbisEncoder.VorbisInfo::<CodecSetup>k__BackingField
	CodecSetup_t70F97AE51CA701CC80526F6B617232298D6FD444* ___U3CCodecSetupU3Ek__BackingField_4;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Byte[]>
struct ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>
struct TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_result_22;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// Utilities.Async.AwaitYieldInstructions.UnityMainThread
struct UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
};

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F 
{
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject* ____obj_1;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;
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

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>
struct AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Byte[]>
struct ConfiguredTaskAwaitable_1_t5B276E2BB21A140AFDE1FD3809C534C64BCB6E43 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198 ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ___m_configuredTaskAwaiter_0;
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

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable
struct ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 
{
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::_value
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value_0;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
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

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter
struct ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D 
{
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::_value
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value_0;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
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

// Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1
struct U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF 
{
	// System.Int32 Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]> Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1::<>t__builder
	AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 ___U3CU3Et__builder_1;
	// UnityEngine.AudioClip Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1::audioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip_2;
	// System.Boolean Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1::trim
	bool ___trim_3;
	// System.Threading.CancellationToken Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// System.Object Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1::<>u__1
	RuntimeObject* ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Byte[]> Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1::<>u__2
	ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198 ___U3CU3Eu__2_6;
};

// Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6
struct U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A 
{
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]> Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::<>t__builder
	AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 ___U3CU3Et__builder_1;
	// System.Single[] Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::samples
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___samples_2;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::channels
	int32_t ___channels_3;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::sampleRate
	int32_t ___sampleRate_4;
	// System.Single Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::quality
	float ___quality_5;
	// System.Threading.CancellationToken Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::<>u__1
	TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 ___U3CU3Eu__1_7;
};

// Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7
struct U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1 
{
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]> Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 ___U3CU3Et__builder_1;
	// System.Single[][] Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::samples
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___samples_2;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::channels
	int32_t ___channels_3;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::sampleRate
	int32_t ___sampleRate_4;
	// System.Single Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::quality
	float ___quality_5;
	// System.Threading.CancellationToken Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	// System.IO.MemoryStream Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<outputData>5__2
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___U3CoutputDataU3E5__2_7;
	// OggVorbisEncoder.VorbisInfo Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<info>5__3
	VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* ___U3CinfoU3E5__3_8;
	// OggVorbisEncoder.OggStream Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<oggStream>5__4
	OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* ___U3CoggStreamU3E5__4_9;
	// OggVorbisEncoder.ProcessingState Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<processingState>5__5
	ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* ___U3CprocessingStateU3E5__5_10;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<sampleLength>5__6
	int32_t ___U3CsampleLengthU3E5__6_11;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<writeBufferSize>5__7
	int32_t ___U3CwriteBufferSizeU3E5__7_12;
	// System.Byte[] Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<result>5__8
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CresultU3E5__8_13;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_14;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<readIndex>5__9
	int32_t ___U3CreadIndexU3E5__9_15;
	// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::<>u__2
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ___U3CU3Eu__2_16;
};

// Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8
struct U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C 
{
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>> Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD ___U3CU3Et__builder_1;
	// System.String Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::callingMethodName
	String_t* ___callingMethodName_2;
	// UnityEngine.AudioClip Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_3;
	// System.String Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::saveDirectory
	String_t* ___saveDirectory_4;
	// System.Threading.CancellationToken Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_5;
	// System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>> Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::callback
	Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* ___callback_6;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<lastPosition>5__2
	int32_t ___U3ClastPositionU3E5__2_7;
	// System.String Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<clipName>5__3
	String_t* ___U3CclipNameU3E5__3_8;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<maxClipLength>5__4
	int32_t ___U3CmaxClipLengthU3E5__4_9;
	// System.Single[] Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<samples>5__5
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___U3CsamplesU3E5__5_10;
	// System.String Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<path>5__6
	String_t* ___U3CpathU3E5__6_11;
	// System.IO.FileStream Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<outStream>5__7
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___U3CoutStreamU3E5__7_12;
	// System.Single[] Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<microphoneData>5__8
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___U3CmicrophoneDataU3E5__8_13;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_14;
	// System.Object Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<>7__wrap8
	RuntimeObject* ___U3CU3E7__wrap8_15;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<>7__wrap9
	int32_t ___U3CU3E7__wrap9_16;
	// System.Tuple`2<System.String,UnityEngine.AudioClip> Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<>7__wrap10
	Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* ___U3CU3E7__wrap10_17;
	// OggVorbisEncoder.VorbisInfo Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<info>5__12
	VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* ___U3CinfoU3E5__12_18;
	// OggVorbisEncoder.OggStream Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<oggStream>5__13
	OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* ___U3CoggStreamU3E5__13_19;
	// OggVorbisEncoder.OggPage Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<page>5__14
	OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* ___U3CpageU3E5__14_20;
	// OggVorbisEncoder.ProcessingState Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<processingState>5__15
	ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* ___U3CprocessingStateU3E5__15_21;
	// System.Single[][] Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<channelBuffer>5__16
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___U3CchannelBufferU3E5__16_22;
	// System.Boolean Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<shouldStop>5__17
	bool ___U3CshouldStopU3E5__17_23;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<currentPosition>5__18
	int32_t ___U3CcurrentPositionU3E5__18_24;
	// System.Int32 Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<distance>5__19
	int32_t ___U3CdistanceU3E5__19_25;
	// System.Object Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<>u__2
	RuntimeObject* ___U3CU3Eu__2_26;
	// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::<>u__3
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ___U3CU3Eu__3_27;
};

// System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.AccessViolationException
struct AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1
struct U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76 
{
	// System.Int32 Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// OggVorbisEncoder.OggStream Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::oggStream
	OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* ___oggStream_2;
	// System.Boolean Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::force
	bool ___force_3;
	// System.IO.Stream Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::output
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output_4;
	// System.Threading.CancellationToken Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_5;
	// OggVorbisEncoder.OggPage Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::<page>5__2
	OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* ___U3CpageU3E5__2_6;
	// System.Runtime.CompilerServices.TaskAwaiter Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_7;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Utilities.Audio.AbstractRecordingBehaviour`1<Utilities.Encoding.OggVorbis.OggEncoder>
struct AbstractRecordingBehaviour_1_t83CB6E6C5F77FD4FC6CCA4668FD5CA8C807C963A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Utilities.Audio.AbstractRecordingBehaviour`1::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_4;
	// UnityEngine.KeyCode Utilities.Audio.AbstractRecordingBehaviour`1::recordingKey
	int32_t ___recordingKey_5;
	// System.Boolean Utilities.Audio.AbstractRecordingBehaviour`1::debug
	bool ___debug_6;
	// System.String Utilities.Audio.AbstractRecordingBehaviour`1::defaultSaveLocation
	String_t* ___defaultSaveLocation_7;
	// System.Threading.CancellationTokenSource Utilities.Audio.AbstractRecordingBehaviour`1::gameObjectCts
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___gameObjectCts_8;
};

// Utilities.Encoding.OggVorbis.OggRecorderBehaviour
struct OggRecorderBehaviour_t047903533DE434B9C8788D25F6E28C5AD0F4E086  : public AbstractRecordingBehaviour_1_t83CB6E6C5F77FD4FC6CCA4668FD5CA8C807C963A
{
};

// <Module>

// <Module>

// System.Tuple`2<System.String,UnityEngine.AudioClip>

// System.Tuple`2<System.String,UnityEngine.AudioClip>

// Utilities.Encoding.OggVorbis.AudioClipExtensions

// Utilities.Encoding.OggVorbis.AudioClipExtensions

// Utilities.Async.Awaiters
struct Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_StaticFields
{
	// Utilities.Async.AwaitYieldInstructions.UnityMainThread Utilities.Async.Awaiters::<UnityMainThread>k__BackingField
	UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* ___U3CUnityMainThreadU3Ek__BackingField_0;
	// Utilities.Async.AwaitYieldInstructions.BackgroundThread Utilities.Async.Awaiters::<BackgroundThread>k__BackingField
	BackgroundThread_tB2680B5CC286F0CA05908460AE93E3DC655C5938* ___U3CBackgroundThreadU3Ek__BackingField_1;
};

// Utilities.Async.Awaiters

// OggVorbisEncoder.Comments

// OggVorbisEncoder.Comments

// Utilities.Encoding.OggVorbis.Constants

// Utilities.Encoding.OggVorbis.Constants

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// Utilities.Encoding.OggVorbis.OggEncoder

// Utilities.Encoding.OggVorbis.OggEncoder

// Utilities.Encoding.OggVorbis.OggExtensions

// Utilities.Encoding.OggVorbis.OggExtensions

// OggVorbisEncoder.OggPacket

// OggVorbisEncoder.OggPacket

// OggVorbisEncoder.OggPage

// OggVorbisEncoder.OggPage

// OggVorbisEncoder.OggStream
struct OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F_StaticFields
{
	// System.UInt32[] OggVorbisEncoder.OggStream::Checksum
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Checksum_1;
};

// OggVorbisEncoder.OggStream

// OggVorbisEncoder.ProcessingState

// OggVorbisEncoder.ProcessingState

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// Utilities.Audio.RecordingManager
struct RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_StaticFields
{
	// System.Int32 Utilities.Audio.RecordingManager::maxRecordingLength
	int32_t ___maxRecordingLength_0;
	// System.Object Utilities.Audio.RecordingManager::recordingLock
	RuntimeObject* ___recordingLock_1;
	// System.Threading.CancellationTokenSource Utilities.Audio.RecordingManager::cancellationTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___cancellationTokenSource_2;
	// System.Int32 Utilities.Audio.RecordingManager::<Frequency>k__BackingField
	int32_t ___U3CFrequencyU3Ek__BackingField_3;
	// System.Boolean Utilities.Audio.RecordingManager::isRecording
	bool ___isRecording_4;
	// System.Boolean Utilities.Audio.RecordingManager::isProcessing
	bool ___isProcessing_5;
	// System.Boolean Utilities.Audio.RecordingManager::<EnableDebug>k__BackingField
	bool ___U3CEnableDebugU3Ek__BackingField_6;
	// System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>> Utilities.Audio.RecordingManager::OnClipRecorded
	Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* ___OnClipRecorded_7;
	// System.String Utilities.Audio.RecordingManager::defaultSaveLocation
	String_t* ___defaultSaveLocation_8;
};

// Utilities.Audio.RecordingManager

// Utilities.Async.SimpleCoroutineAwaiter

// Utilities.Async.SimpleCoroutineAwaiter

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// OggVorbisEncoder.VorbisInfo
struct VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367_StaticFields
{
	// OggVorbisEncoder.Setup.Mode[] OggVorbisEncoder.VorbisInfo::ModeTemplate
	ModeU5BU5D_t5ADFF5BC334D4D32E1757D3C7B5327BAF5D82C6C* ___ModeTemplate_0;
};

// OggVorbisEncoder.VorbisInfo

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Byte[]>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Byte[]>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tBB104CB5AB77377E459CE42D40D6685CA6A51ECC* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>

// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tE78D5901E25DE030D64ED783B6E0BED8282D0148* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Byte[]>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// Utilities.Async.AwaitYieldInstructions.UnityMainThread

// Utilities.Async.AwaitYieldInstructions.UnityMainThread

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_StaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_canceledTask_0;
};

// System.Threading.Tasks.ValueTask

// System.Void

// System.Void

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>
struct AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>
struct AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t46575E75F710D631831E756B5DE20429700F6B95* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Byte[]>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Byte[]>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.FileStream

// System.IO.MemoryStream

// System.IO.MemoryStream

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1

// Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1

// Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6

// Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6

// Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7

// Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7

// Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8

// Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8

// System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>

// System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.AccessViolationException

// System.AccessViolationException

// System.ArgumentException

// System.ArgumentException

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// System.InvalidOperationException

// System.InvalidOperationException

// Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1

// Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1

// Utilities.Audio.AbstractRecordingBehaviour`1<Utilities.Encoding.OggVorbis.OggEncoder>

// Utilities.Audio.AbstractRecordingBehaviour`1<Utilities.Encoding.OggVorbis.OggEncoder>

// Utilities.Encoding.OggVorbis.OggRecorderBehaviour

// Utilities.Encoding.OggVorbis.OggRecorderBehaviour
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Single[][]
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4  : public RuntimeArray
{
	ALIGN_FIELD (8) SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* m_Items[1];

	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m9F9369CE731D0C5E47F950FD03D070A0641C2593_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Object,Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m39DFBCEE381F9C3F2578835E47314873DB8B2F0A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject** ___0_awaiter, U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m6248099A09E61318F941475F8400866068E46916_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_mA771E87F4AABDC90AB104CB536A4B634EA0CE811_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m4A21EDB560D4CEA3857A8A79AA42427D9E4A2905_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_mF06EE4D96661692FDB34D2FAE1D7085A32105ED5_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_mB6D7C85EB69BEAF6A284D40FBA5AC9BA797D7ACD_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_mC6DBA76061FCFE84D6C111C05E01820DCF603A32_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_mDCD32887C6ABE5224B4AA49196F3925B2CDD09B1_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___0_awaiter, U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m77DBC429BA283592D7EBB3B245EEC92A44FC44EE_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Object,Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m3705A68C88EDA82278C950CCBDC21C36E7337EFD_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject** ___0_awaiter, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m44EBE89B5124A4FD77849F90EB20E34B1D003976_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___0_awaiter, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_mF3FBB026A792B00BE69E5B7EF51B511F0B23F4F2_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_m392C1A1BE7A901149A0B0BDCADCAE2645B797D37_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void Utilities.Audio.AbstractRecordingBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractRecordingBehaviour_1__ctor_m953A51AC5843256D1571FD416286A629AB19735F_gshared (AbstractRecordingBehaviour_1_tB027D11CCC6843A055768A7D32CF3761A5B2F704* __this, const RuntimeMethod* method) ;

// System.Byte[] Utilities.Audio.AudioClipExtensions::EncodeToPCM(UnityEngine.AudioClip,Utilities.Audio.PCMFormatSize,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AudioClipExtensions_EncodeToPCM_mC2D3F689C0C6A75BF15C6540CA7DB4692B2F5B48 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_audioClip, int32_t ___1_size, bool ___2_trim, const RuntimeMethod* method) ;
// System.Single[] Utilities.Audio.PCMEncoder::Decode(System.Byte[],Utilities.Audio.PCMFormatSize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* PCMEncoder_Decode_m13B97B662188D5A9029992C20875672790D97365 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pcmData, int32_t ___1_size, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Byte[] Utilities.Encoding.OggVorbis.OggEncoder::ConvertToBytes(System.Single[],System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OggEncoder_ConvertToBytes_mF2BE2D48FB7081EC17FCEE9D4F8E030534BA83D0 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_sampleRate, int32_t ___2_channels, float ___3_quality, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::Create()
inline AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::Start<Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m009B0737B8C63AD2188DE111EC662262B57E123D (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m9F9369CE731D0C5E47F950FD03D070A0641C2593_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::get_Task()
inline Task_1_t46575E75F710D631831E756B5DE20429700F6B95* AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t46575E75F710D631831E756B5DE20429700F6B95* (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// Utilities.Async.AwaitYieldInstructions.UnityMainThread Utilities.Async.Awaiters::get_UnityMainThread()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline (const RuntimeMethod* method) ;
// Utilities.Async.SimpleCoroutineAwaiter Utilities.Async.AwaiterExtensions::GetAwaiter(Utilities.Async.AwaitYieldInstructions.UnityMainThread)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* AwaiterExtensions_GetAwaiter_m9380B1F06B59905326F5179D41B51398A3AFB501 (UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* ___0_instruction, const RuntimeMethod* method) ;
// System.Boolean Utilities.Async.SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7_inline (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::AwaitUnsafeOnCompleted<Utilities.Async.SimpleCoroutineAwaiter,Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m828DB83DD843DC0A5A94572AB7BF5886ADD34163 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC** ___0_awaiter, U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC**, U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m39DFBCEE381F9C3F2578835E47314873DB8B2F0A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void Utilities.Async.SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m9DBA8062060DD5EC647A669D104B3171384819CC (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Byte[]> Utilities.Encoding.OggVorbis.OggEncoder::ConvertToBytesAsync(System.Single[],System.Int32,System.Int32,System.Single,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t46575E75F710D631831E756B5DE20429700F6B95* OggEncoder_ConvertToBytesAsync_mA51B4149D3B5C79D4082D40705F0F033ECE05685 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_sampleRate, int32_t ___2_channels, float ___3_quality, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___4_cancellationToken, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Byte[]>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t5B276E2BB21A140AFDE1FD3809C534C64BCB6E43 Task_1_ConfigureAwait_mE516EE1D621DED3ABDABB912374320EC152730E1 (Task_1_t46575E75F710D631831E756B5DE20429700F6B95* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t5B276E2BB21A140AFDE1FD3809C534C64BCB6E43 (*) (Task_1_t46575E75F710D631831E756B5DE20429700F6B95*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___0_continueOnCapturedContext, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Byte[]>::GetAwaiter()
inline ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198 ConfiguredTaskAwaitable_1_GetAwaiter_mAA584E3F7D719917CBCE21EE79C69ADD984F7F0E_inline (ConfiguredTaskAwaitable_1_t5B276E2BB21A140AFDE1FD3809C534C64BCB6E43* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198 (*) (ConfiguredTaskAwaitable_1_t5B276E2BB21A140AFDE1FD3809C534C64BCB6E43*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Byte[]>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m624FFF9D167CC155AA8F124C79471FBDED408F22 (ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Byte[]>,Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m4F67DE48EB640BD37B9BDB9BEE03B3A85E082717 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198* ___0_awaiter, U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198*, U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m6248099A09E61318F941475F8400866068E46916_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Byte[]>::GetResult()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConfiguredTaskAwaiter_GetResult_m6BAD322C74730A75BE5EC7654FD70E68ECE1080D (ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEncodeToOggVorbisAsyncU3Ed__1_MoveNext_mB9E1E0F1A9B36E55021F57A5F1D3310F933EBD63 (U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEncodeToOggVorbisAsyncU3Ed__1_SetStateMachine_mAAC475888583A97B361FCC880DD096025F065A8C (U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single[][] Utilities.Encoding.OggVorbis.OggEncoder::ConvertPcmData(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* OggEncoder_ConvertPcmData_mB4C68EED96610E87BC3BBB944784142463C70DA2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pcmSamples, int32_t ___1_pcmSampleRate, int32_t ___2_pcmChannels, const RuntimeMethod* method) ;
// System.Single[][] Utilities.Encoding.OggVorbis.OggEncoder::ConvertSamples(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* OggEncoder_ConvertSamples_m571DBCAD663D7165A656038052580DD7003127A1 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channels, const RuntimeMethod* method) ;
// System.Byte[] Utilities.Encoding.OggVorbis.OggEncoder::ConvertToBytes(System.Single[][],System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OggEncoder_ConvertToBytes_mA15CFE280F6D99BDB80AD721668DEAF199AFF0FF (SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___0_samples, int32_t ___1_sampleRate, int32_t ___2_channels, float ___3_quality, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// OggVorbisEncoder.VorbisInfo OggVorbisEncoder.VorbisInfo::InitVariableBitRate(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* VorbisInfo_InitVariableBitRate_mDE3E3161DBCA3B560C6E5C7DD7AF4C64362DC482 (int32_t ___0_channels, int32_t ___1_sampleRate, float ___2_baseQuality, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void OggVorbisEncoder.OggStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OggStream__ctor_m8E4E1C00D39E711BBCCA27D5E169887486F9ABB4 (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* __this, int32_t ___0_serialNumber, const RuntimeMethod* method) ;
// System.Void OggVorbisEncoder.Comments::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comments__ctor_m833E1CB27AA74740302328AFCA37E59CACD7DF7C (Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D* __this, const RuntimeMethod* method) ;
// OggVorbisEncoder.OggPacket OggVorbisEncoder.HeaderPacketBuilder::BuildInfoPacket(OggVorbisEncoder.VorbisInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* HeaderPacketBuilder_BuildInfoPacket_m53F9804B62A2D74AC4CCE24D88841A21E66A5B8B (VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* ___0_info, const RuntimeMethod* method) ;
// OggVorbisEncoder.OggPacket OggVorbisEncoder.HeaderPacketBuilder::BuildCommentsPacket(OggVorbisEncoder.Comments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* HeaderPacketBuilder_BuildCommentsPacket_m6DE34C93E7608D7D73BE9ABD5A76AB7EEFC99E60 (Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D* ___0_comments, const RuntimeMethod* method) ;
// OggVorbisEncoder.OggPacket OggVorbisEncoder.HeaderPacketBuilder::BuildBooksPacket(OggVorbisEncoder.VorbisInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* HeaderPacketBuilder_BuildBooksPacket_mC09D883A0CE25C543CD7182F715370B923AB16B1 (VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* ___0_info, const RuntimeMethod* method) ;
// System.Void OggVorbisEncoder.OggStream::PacketIn(OggVorbisEncoder.OggPacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5 (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* __this, OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* ___0_packet, const RuntimeMethod* method) ;
// System.Void Utilities.Encoding.OggVorbis.OggExtensions::FlushPages(OggVorbisEncoder.OggStream,System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OggExtensions_FlushPages_m80A7451A01D64C42C118F3C0FD66EF85B47239D3 (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* ___0_oggStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_output, bool ___2_force, const RuntimeMethod* method) ;
// OggVorbisEncoder.ProcessingState OggVorbisEncoder.ProcessingState::Create(OggVorbisEncoder.VorbisInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* ProcessingState_Create_m3B94BC3F869785D2114DB6801968E8ECE9D03868 (VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* ___0_info, const RuntimeMethod* method) ;
// System.Void OggVorbisEncoder.ProcessingState::WriteEndOfStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessingState_WriteEndOfStream_m4DFC4FC0362C52F0E8C91C0D702C231E053A5C95 (ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* __this, const RuntimeMethod* method) ;
// System.Void OggVorbisEncoder.ProcessingState::WriteData(System.Single[][],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessingState_WriteData_mC3B253ED978C167C2CEB39C1CA963C014E840094 (ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* __this, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___0_data, int32_t ___1_length, int32_t ___2_read_offset, const RuntimeMethod* method) ;
// System.Boolean OggVorbisEncoder.ProcessingState::PacketOut(OggVorbisEncoder.OggPacket&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessingState_PacketOut_m23D6513BDCD727EBA656842BE0D21CB63E7806D2 (ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* __this, OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5** ___0_packet, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::Start<Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_mDDB17F352825E6731A4E8C16B058184966A13BD9 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_mA771E87F4AABDC90AB104CB536A4B634EA0CE811_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::Start<Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_mB312C202C927CD74C88990849B9A8524BD055D74 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m4A21EDB560D4CEA3857A8A79AA42427D9E4A2905_gshared)(__this, ___0_stateMachine, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::Create()
inline AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD AsyncTaskMethodBuilder_1_Create_mD5BCF8BB191765693AAA74313FB5A277550662A2 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::Start<Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m884390E8490BAF2B54C602FAFA637E4D27D85AF7 (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_mF06EE4D96661692FDB34D2FAE1D7085A32105ED5_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::get_Task()
inline Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* AsyncTaskMethodBuilder_1_get_Task_m7B3747000EF0438B67247FC38CB11C83D6A5741F (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.Byte[]> Utilities.Encoding.OggVorbis.OggEncoder::ConvertToBytesAsync(System.Single[][],System.Int32,System.Int32,System.Single,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t46575E75F710D631831E756B5DE20429700F6B95* OggEncoder_ConvertToBytesAsync_mE498B960F7029991AE45DA42B238331A0EF1BDED (SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___0_samples, int32_t ___1_sampleRate, int32_t ___2_channels, float ___3_quality, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___4_cancellationToken, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Byte[]>::GetAwaiter()
inline TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0 (Task_1_t46575E75F710D631831E756B5DE20429700F6B95* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 (*) (Task_1_t46575E75F710D631831E756B5DE20429700F6B95*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2 (TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>,Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_m2AF402F3903B914073DB423582BB55AA5D942BC4 (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* ___0_awaiter, U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808*, U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_mB6D7C85EB69BEAF6A284D40FBA5AC9BA797D7ACD_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]>::GetResult()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0 (TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertToBytesAsyncU3Ed__6_MoveNext_mA593401C64476E2BB35021B21BD1936E70276E3E (U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertToBytesAsyncU3Ed__6_SetStateMachine_m3D9B13DEE3506C21CBF191829AB657D3CC60A278 (U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Utilities.Encoding.OggVorbis.OggExtensions::FlushPagesAsync(OggVorbisEncoder.OggStream,System.IO.Stream,System.Boolean,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* OggExtensions_FlushPagesAsync_mD18E9E0C01BB557A9574B2CA14E12072F5D60790 (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* ___0_oggStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_output, bool ___2_force, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m85CB7744952F105541FD968791F92F87F063468C (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_mC6DBA76061FCFE84D6C111C05E01820DCF603A32_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable System.Threading.Tasks.ValueTask::ConfigureAwait(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m34C1A63D67E842B2B8A41E728D4804D5EBFB05CC (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___0_awaiter, U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81*, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D*, U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_mDCD32887C6ABE5224B4AA49196F3925B2CDD09B1_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertToBytesAsyncU3Ed__7_MoveNext_mEC4056973A6B1EE12332C0358BCC339C5B22674A (U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertToBytesAsyncU3Ed__7_SetStateMachine_mBC8AE9EA16CB31B693E14EA99416CFA849AD5EEE (U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Utilities.Audio.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m502EA30B20852ED68DC1C4713233D6EF3A43E45E (String_t* ___0_deviceName, const RuntimeMethod* method) ;
// System.Boolean Utilities.Audio.RecordingManager::get_IsProcessing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordingManager_get_IsProcessing_m88DE0039BF7E64229A4AB9C0CBCD844307173E66 (const RuntimeMethod* method) ;
// System.Void System.AccessViolationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessViolationException__ctor_mC7C8A804506B189383531FC1E1BACE8967D31F67 (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Utilities.Audio.RecordingManager::set_IsProcessing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingManager_set_IsProcessing_m1645A71070F453EDFC800D4083F5C3F5DCD2F8C1 (bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean Utilities.Audio.RecordingManager::get_EnableDebug()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48 (int32_t ___0_millisecondsDelay, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m77DBC429BA283592D7EBB3B245EEC92A44FC44EE_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___0_path, int32_t ___1_mode, int32_t ___2_access, const RuntimeMethod* method) ;
// System.Byte[] OggVorbisEncoder.OggPage::get_Header()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline (OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Stream_WriteAsync_m51D91C94481BB32FE1A876A789C9705F433B133D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Byte[] OggVorbisEncoder.OggPage::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline (OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* __this, const RuntimeMethod* method) ;
// System.Boolean OggVorbisEncoder.OggStream::PageOut(OggVorbisEncoder.OggPage&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OggStream_PageOut_mB4288217DDA3D64FFC298131D829A723B21DEF5D (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* __this, OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E** ___0_page, bool ___1_force, const RuntimeMethod* method) ;
// System.Int32 OggVorbisEncoder.VorbisInfo::get_Channels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VorbisInfo_get_Channels_m58E82686E62F94EB0F17288586FDC1BFB7FB4C2D_inline (VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::AwaitUnsafeOnCompleted<Utilities.Async.SimpleCoroutineAwaiter,Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m3EAA5E413090893E2A09B35FE7EB801DF4323418 (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC** ___0_awaiter, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC**, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m3705A68C88EDA82278C950CCBDC21C36E7337EFD_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Int32 Utilities.Audio.Microphone::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m2AC5DBD3CA663E937FD3F26D5A5461886D44F578 (String_t* ___0_deviceName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) ;
// System.Void Utilities.Audio.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mDFC9484573BB7DB2DB6FE86B48F45BFA65F6C17E (String_t* ___0_deviceName, const RuntimeMethod* method) ;
// System.Boolean OggVorbisEncoder.OggStream::get_Finished()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OggStream_get_Finished_m0F248A5DEE81F2AC0AF26393BEB996C6DCB71189_inline (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* __this, const RuntimeMethod* method) ;
// System.Boolean Utilities.Audio.RecordingManager::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecordingManager_get_IsRecording_m9608BD09AE881A6C754AA87D3FA0DBAAAE570842 (const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Utilities.Audio.RecordingManager::set_IsRecording(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingManager_set_IsRecording_mA048B915DF22BC4B0BC60AF4BEC7879D86934953 (bool ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.IO.Stream::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Stream_FlushAsync_m2C8614B69BF3C562B2BEFACAC1183FA5F3C2BBEF (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m473ABB3F48BD701A87B9BAC3A67C49338DF5F641 (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___0_awaiter, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D*, U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m44EBE89B5124A4FD77849F90EB20E34B1D003976_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.String,UnityEngine.AudioClip>::.ctor(T1,T2)
inline void Tuple_2__ctor_mB3628B71825226B713F07E9520DA6487ACBDEBCE (Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* __this, String_t* ___0_item1, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*, String_t*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*))Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared)(__this, ___0_item1, ___1_item2, method);
}
// System.Void System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::Invoke(T)
inline void Action_1_Invoke_mFF8241424A9BAD483DBC9139F1FB9A34D9AE62AE_inline (Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* __this, Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4*, Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m8A172BF2B83B7862484348C6E1DB5311C125BAC9 (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m68FC6A48AFEF15775269F9C82820919FCD0ED79A (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamSaveToDiskAsyncU3Ed__8_MoveNext_mCBC42E1EDBA2A50AE71C7A1ADF2D105692108800 (U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9B2D0EEB3A691A059AC744AC18B8815504A95483 (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamSaveToDiskAsyncU3Ed__8_SetStateMachine_m9F566FCDF7C6DA32B25FD459540595C3433D99E3 (U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_mF3FBB026A792B00BE69E5B7EF51B511F0B23F4F2 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_mF3FBB026A792B00BE69E5B7EF51B511F0B23F4F2_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_m392C1A1BE7A901149A0B0BDCADCAE2645B797D37 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_m392C1A1BE7A901149A0B0BDCADCAE2645B797D37_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushPagesAsyncU3Ed__1_MoveNext_mA7708BD6637BECE6A84C0FC2B99FB3FD436EACF2 (U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushPagesAsyncU3Ed__1_SetStateMachine_m45C40E583AD2790EAF7324C25C58FB31723F97D3 (U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Utilities.Audio.AbstractRecordingBehaviour`1<Utilities.Encoding.OggVorbis.OggEncoder>::.ctor()
inline void AbstractRecordingBehaviour_1__ctor_m84D1A99B2A9C3E78DDD4601A069948B435E4E71F (AbstractRecordingBehaviour_1_t83CB6E6C5F77FD4FC6CCA4668FD5CA8C807C963A* __this, const RuntimeMethod* method)
{
	((  void (*) (AbstractRecordingBehaviour_1_t83CB6E6C5F77FD4FC6CCA4668FD5CA8C807C963A*, const RuntimeMethod*))AbstractRecordingBehaviour_1__ctor_m953A51AC5843256D1571FD416286A629AB19735F_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Object,System.Int16,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m82EE965BA61F399181B8414BB6ABB146C3332D7B_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, RuntimeObject* ___0_obj, int16_t ___1_token, bool ___2_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_mD9583661A0F3E2D6A23C37313CC015A30097CA31_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_m063C936DEC3C86E2F3F1CB8B2C629084A95E91A1_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.ValueTask::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mC9BF7154FF125E1B49DF8D06804DBED4CBC364D9_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask::ThrowIfCompletedUnsuccessfully()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_mE62D61EB45AF96000EE4EDBB47991C7A1E62BBB1_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TaskAwaiter::ValidateEnd(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) ;
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
// System.Byte[] Utilities.Encoding.OggVorbis.AudioClipExtensions::EncodeToOggVorbis(UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AudioClipExtensions_EncodeToOggVorbis_mBE90933C80309968D35B55CBAB1CBA770F908809 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_audioClip, bool ___1_trim, const RuntimeMethod* method) 
{
	{
		// var pcmData = audioClip.EncodeToPCM(PCMFormatSize.SixteenBit, trim);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_audioClip;
		bool L_1 = ___1_trim;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AudioClipExtensions_EncodeToPCM_mC2D3F689C0C6A75BF15C6540CA7DB4692B2F5B48(L_0, 2, L_1, NULL);
		// var samples = PCMEncoder.Decode(pcmData, PCMFormatSize.SixteenBit);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3;
		L_3 = PCMEncoder_Decode_m13B97B662188D5A9029992C20875672790D97365(L_2, 2, NULL);
		// var rawOggBytes = OggEncoder.ConvertToBytes(samples, audioClip.frequency, audioClip.channels);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = ___0_audioClip;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B(L_4, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = ___0_audioClip;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = OggEncoder_ConvertToBytes_mF2BE2D48FB7081EC17FCEE9D4F8E030534BA83D0(L_3, L_5, L_7, (1.0f), NULL);
		// return rawOggBytes;
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Byte[]> Utilities.Encoding.OggVorbis.AudioClipExtensions::EncodeToOggVorbisAsync(UnityEngine.AudioClip,System.Boolean,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t46575E75F710D631831E756B5DE20429700F6B95* AudioClipExtensions_EncodeToOggVorbisAsync_m106F3AB921006A544F618EFF70394A83497C14EF (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_audioClip, bool ___1_trim, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m009B0737B8C63AD2188DE111EC662262B57E123D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891(AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_audioClip;
		(&V_0)->___audioClip_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___audioClip_2), (void*)L_1);
		bool L_2 = ___1_trim;
		(&V_0)->___trim_3 = L_2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___2_cancellationToken;
		(&V_0)->___cancellationToken_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_4))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m009B0737B8C63AD2188DE111EC662262B57E123D(L_4, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m009B0737B8C63AD2188DE111EC662262B57E123D_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A(L_5, AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var);
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
// System.Void Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEncodeToOggVorbisAsyncU3Ed__1_MoveNext_mB9E1E0F1A9B36E55021F57A5F1D3310F933EBD63 (U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m4F67DE48EB640BD37B9BDB9BEE03B3A85E082717_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m828DB83DD843DC0A5A94572AB7BF5886ADD34163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_mAA584E3F7D719917CBCE21EE79C69ADD984F7F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m6BAD322C74730A75BE5EC7654FD70E68ECE1080D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m624FFF9D167CC155AA8F124C79471FBDED408F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mE516EE1D621DED3ABDABB912374320EC152730E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* V_2 = NULL;
	ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_1_t5B276E2BB21A140AFDE1FD3809C534C64BCB6E43 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
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
				goto IL_0047_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00e0_1;
			}
		}
		{
			// await Awaiters.UnityMainThread;
			il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
			UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_3;
			L_3 = Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline(NULL);
			il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
			SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_4;
			L_4 = AwaiterExtensions_GetAwaiter_m9380B1F06B59905326F5179D41B51398A3AFB501(L_3, NULL);
			V_2 = L_4;
			SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_5 = V_2;
			NullCheck(L_5);
			bool L_6;
			L_6 = SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7_inline(L_5, NULL);
			if (L_6)
			{
				goto IL_0063_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_8 = V_2;
			__this->___U3CU3Eu__1_5 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_5), (void*)L_8);
			AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m828DB83DD843DC0A5A94572AB7BF5886ADD34163(L_9, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m828DB83DD843DC0A5A94572AB7BF5886ADD34163_RuntimeMethod_var);
			goto IL_0133;
		}

IL_0047_1:
		{
			RuntimeObject* L_10 = __this->___U3CU3Eu__1_5;
			V_2 = ((SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC*)CastclassClass((RuntimeObject*)L_10, SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__1_5 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__1_5), (void*)NULL);
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0063_1:
		{
			SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_12 = V_2;
			NullCheck(L_12);
			SimpleCoroutineAwaiter_GetResult_m9DBA8062060DD5EC647A669D104B3171384819CC(L_12, NULL);
			// var pcmData = audioClip.EncodeToPCM(PCMFormatSize.SixteenBit, trim);
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = __this->___audioClip_2;
			bool L_14 = __this->___trim_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
			L_15 = AudioClipExtensions_EncodeToPCM_mC2D3F689C0C6A75BF15C6540CA7DB4692B2F5B48(L_13, 2, L_14, NULL);
			// var samples = PCMEncoder.Decode(pcmData, PCMFormatSize.SixteenBit);
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16;
			L_16 = PCMEncoder_Decode_m13B97B662188D5A9029992C20875672790D97365(L_15, 2, NULL);
			// var rawOggBytes = await OggEncoder.ConvertToBytesAsync(samples, audioClip.frequency, audioClip.channels, cancellationToken: cancellationToken).ConfigureAwait(false);
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_17 = __this->___audioClip_2;
			NullCheck(L_17);
			int32_t L_18;
			L_18 = AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B(L_17, NULL);
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = __this->___audioClip_2;
			NullCheck(L_19);
			int32_t L_20;
			L_20 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_19, NULL);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_21 = __this->___cancellationToken_4;
			Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_22;
			L_22 = OggEncoder_ConvertToBytesAsync_mA51B4149D3B5C79D4082D40705F0F033ECE05685(L_16, L_18, L_20, (1.0f), L_21, NULL);
			NullCheck(L_22);
			ConfiguredTaskAwaitable_1_t5B276E2BB21A140AFDE1FD3809C534C64BCB6E43 L_23;
			L_23 = Task_1_ConfigureAwait_mE516EE1D621DED3ABDABB912374320EC152730E1(L_22, (bool)0, Task_1_ConfigureAwait_mE516EE1D621DED3ABDABB912374320EC152730E1_RuntimeMethod_var);
			V_4 = L_23;
			ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198 L_24;
			L_24 = ConfiguredTaskAwaitable_1_GetAwaiter_mAA584E3F7D719917CBCE21EE79C69ADD984F7F0E_inline((&V_4), ConfiguredTaskAwaitable_1_GetAwaiter_mAA584E3F7D719917CBCE21EE79C69ADD984F7F0E_RuntimeMethod_var);
			V_3 = L_24;
			bool L_25;
			L_25 = ConfiguredTaskAwaiter_get_IsCompleted_m624FFF9D167CC155AA8F124C79471FBDED408F22((&V_3), ConfiguredTaskAwaiter_get_IsCompleted_m624FFF9D167CC155AA8F124C79471FBDED408F22_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00fc_1;
			}
		}
		{
			int32_t L_26 = 1;
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
			ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198 L_27 = V_3;
			__this->___U3CU3Eu__2_6 = L_27;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_28 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m4F67DE48EB640BD37B9BDB9BEE03B3A85E082717(L_28, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198_TisU3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF_m4F67DE48EB640BD37B9BDB9BEE03B3A85E082717_RuntimeMethod_var);
			goto IL_0133;
		}

IL_00e0_1:
		{
			ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198 L_29 = __this->___U3CU3Eu__2_6;
			V_3 = L_29;
			ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198* L_30 = (&__this->___U3CU3Eu__2_6);
			il2cpp_codegen_initobj(L_30, sizeof(ConfiguredTaskAwaiter_t55E8B0809B670865495D2F805914DCE37F0A0198));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
		}

IL_00fc_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
			L_32 = ConfiguredTaskAwaiter_GetResult_m6BAD322C74730A75BE5EC7654FD70E68ECE1080D((&V_3), ConfiguredTaskAwaiter_GetResult_m6BAD322C74730A75BE5EC7654FD70E68ECE1080D_RuntimeMethod_var);
			// return rawOggBytes;
			V_1 = L_32;
			goto IL_011f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0106;
		}
		throw e;
	}

CATCH_0106:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_33 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_34 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6(L_33, L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0133;
	}// end catch (depth: 1)

IL_011f:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_35 = (&__this->___U3CU3Et__builder_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0(L_35, L_36, AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var);
	}

IL_0133:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEncodeToOggVorbisAsyncU3Ed__1_MoveNext_mB9E1E0F1A9B36E55021F57A5F1D3310F933EBD63_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF*>(__this + _offset);
	U3CEncodeToOggVorbisAsyncU3Ed__1_MoveNext_mB9E1E0F1A9B36E55021F57A5F1D3310F933EBD63(_thisAdjusted, method);
}
// System.Void Utilities.Encoding.OggVorbis.AudioClipExtensions/<EncodeToOggVorbisAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEncodeToOggVorbisAsyncU3Ed__1_SetStateMachine_mAAC475888583A97B361FCC880DD096025F065A8C (U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEncodeToOggVorbisAsyncU3Ed__1_SetStateMachine_mAAC475888583A97B361FCC880DD096025F065A8C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CEncodeToOggVorbisAsyncU3Ed__1_t09AA33A976EA6800AE57FCC72AF478161F39EBDF*>(__this + _offset);
	U3CEncodeToOggVorbisAsyncU3Ed__1_SetStateMachine_mAAC475888583A97B361FCC880DD096025F065A8C(_thisAdjusted, ___0_stateMachine, method);
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
// System.Void Utilities.Encoding.OggVorbis.OggEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OggEncoder__ctor_m2BDDEE94ECB66EAB61E6BD122FECC675995E9E36 (OggEncoder_tB4C1A77B6277FE505E9EC22BF65476EA69749A05* __this, const RuntimeMethod* method) 
{
	{
		// public OggEncoder() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public OggEncoder() { }
		return;
	}
}
// System.Single[][] Utilities.Encoding.OggVorbis.OggEncoder::ConvertPcmData(System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* OggEncoder_ConvertPcmData_m2342AD2DB1F03E1C84EDBDD2FF414EA8C2C57117 (int32_t ___0_outputSampleRage, int32_t ___1_outputChannels, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pcmSamples, int32_t ___3_pcmSampleRate, int32_t ___4_pcmChannels, const RuntimeMethod* method) 
{
	{
		// => ConvertPcmData(pcmSamples, pcmSampleRate, pcmChannels);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_pcmSamples;
		int32_t L_1 = ___3_pcmSampleRate;
		int32_t L_2 = ___4_pcmChannels;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_3;
		L_3 = OggEncoder_ConvertPcmData_mB4C68EED96610E87BC3BBB944784142463C70DA2(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Single[][] Utilities.Encoding.OggVorbis.OggEncoder::ConvertPcmData(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* OggEncoder_ConvertPcmData_mB4C68EED96610E87BC3BBB944784142463C70DA2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pcmSamples, int32_t ___1_pcmSampleRate, int32_t ___2_pcmChannels, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	{
		// var numPcmSamples = pcmSamples.Length / sizeof(short) / pcmChannels;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_pcmSamples;
		NullCheck(L_0);
		int32_t L_1 = ___2_pcmChannels;
		// var pcmDuration = numPcmSamples / (float)pcmSampleRate;
		int32_t L_2 = ___1_pcmSampleRate;
		// var numOutputSamples = (int)(pcmDuration * pcmSampleRate) / pcmChannels;
		int32_t L_3 = ___1_pcmSampleRate;
		int32_t L_4 = ___2_pcmChannels;
		V_0 = ((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)(((float)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_0)->max_length))/2))/L_1)))/((float)L_2))), ((float)L_3))))/L_4));
		// var outSamples = new float[pcmChannels][];
		int32_t L_5 = ___2_pcmChannels;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_6 = (SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)(SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)SZArrayNew(SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		// for (var ch = 0; ch < pcmChannels; ch++)
		V_2 = 0;
		goto IL_002a;
	}

IL_001d:
	{
		// outSamples[ch] = new float[numOutputSamples];
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)L_10);
		// for (var ch = 0; ch < pcmChannels; ch++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002a:
	{
		// for (var ch = 0; ch < pcmChannels; ch++)
		int32_t L_12 = V_2;
		int32_t L_13 = ___2_pcmChannels;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001d;
		}
	}
	{
		// for (var i = 0; i < numOutputSamples; i++)
		V_3 = 0;
		goto IL_007a;
	}

IL_0032:
	{
		// for (var channel = 0; channel < pcmChannels; channel++)
		V_4 = 0;
		goto IL_0071;
	}

IL_0037:
	{
		// var sampleIndex = i * pcmChannels * sizeof(short);
		int32_t L_14 = V_3;
		int32_t L_15 = ___2_pcmChannels;
		V_5 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_14, L_15)), 2));
		// if (channel < pcmChannels)
		int32_t L_16 = V_4;
		int32_t L_17 = ___2_pcmChannels;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_004c;
		}
	}
	{
		// sampleIndex += channel * sizeof(short);
		int32_t L_18 = V_5;
		int32_t L_19 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_multiply(L_19, 2))));
	}

IL_004c:
	{
		// var rawSample = (short)(pcmSamples[sampleIndex + 1] << 8 | pcmSamples[sampleIndex]) / (float)short.MaxValue;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_pcmSamples;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_pcmSamples;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = ((float)(((float)((int16_t)((int32_t)(((int32_t)((int32_t)L_23<<8))|(int32_t)L_27))))/(32767.0f)));
		// outSamples[channel][i] = rawSample;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_28 = V_1;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = V_3;
		float L_33 = V_6;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (float)L_33);
		// for (var channel = 0; channel < pcmChannels; channel++)
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0071:
	{
		// for (var channel = 0; channel < pcmChannels; channel++)
		int32_t L_35 = V_4;
		int32_t L_36 = ___2_pcmChannels;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0037;
		}
	}
	{
		// for (var i = 0; i < numOutputSamples; i++)
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_007a:
	{
		// for (var i = 0; i < numOutputSamples; i++)
		int32_t L_38 = V_3;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0032;
		}
	}
	{
		// return outSamples;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_40 = V_1;
		return L_40;
	}
}
// System.Single[][] Utilities.Encoding.OggVorbis.OggEncoder::ConvertSamples(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* OggEncoder_ConvertSamples_m571DBCAD663D7165A656038052580DD7003127A1 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channels, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	{
		// var buffer = new float[channels][];
		int32_t L_0 = ___1_channels;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_1 = (SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)(SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)SZArrayNew(SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for (var i = 0; i < channels; i++)
		V_1 = 0;
		goto IL_001a;
	}

IL_000b:
	{
		// buffer[i] = new float[samples.Length];
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_2 = V_0;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___0_samples;
		NullCheck(L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)L_5);
		// for (var i = 0; i < channels; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001a:
	{
		// for (var i = 0; i < channels; i++)
		int32_t L_7 = V_1;
		int32_t L_8 = ___1_channels;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		// for (var i = 0; i < samples.Length; i++)
		V_2 = 0;
		goto IL_0041;
	}

IL_0022:
	{
		// var pcm = samples[i];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___0_samples;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// for (var channel = 0; channel < channels; channel++)
		V_4 = 0;
		goto IL_0038;
	}

IL_002b:
	{
		// buffer[channel][i] = pcm;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_13 = V_0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_2;
		float L_18 = V_3;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (float)L_18);
		// for (var channel = 0; channel < channels; channel++)
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0038:
	{
		// for (var channel = 0; channel < channels; channel++)
		int32_t L_20 = V_4;
		int32_t L_21 = ___1_channels;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_002b;
		}
	}
	{
		// for (var i = 0; i < samples.Length; i++)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0041:
	{
		// for (var i = 0; i < samples.Length; i++)
		int32_t L_23 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = ___0_samples;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		// return buffer;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_25 = V_0;
		return L_25;
	}
}
// System.Byte[] Utilities.Encoding.OggVorbis.OggEncoder::ConvertToBytes(System.Single[],System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OggEncoder_ConvertToBytes_mF2BE2D48FB7081EC17FCEE9D4F8E030534BA83D0 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_sampleRate, int32_t ___2_channels, float ___3_quality, const RuntimeMethod* method) 
{
	{
		// => ConvertToBytes(ConvertSamples(samples, channels), sampleRate, channels, quality);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_samples;
		int32_t L_1 = ___2_channels;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_2;
		L_2 = OggEncoder_ConvertSamples_m571DBCAD663D7165A656038052580DD7003127A1(L_0, L_1, NULL);
		int32_t L_3 = ___1_sampleRate;
		int32_t L_4 = ___2_channels;
		float L_5 = ___3_quality;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = OggEncoder_ConvertToBytes_mA15CFE280F6D99BDB80AD721668DEAF199AFF0FF(L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Byte[] Utilities.Encoding.OggVorbis.OggEncoder::ConvertToBytes(System.Single[][],System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OggEncoder_ConvertToBytes_mA15CFE280F6D99BDB80AD721668DEAF199AFF0FF (SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___0_samples, int32_t ___1_sampleRate, int32_t ___2_channels, float ___3_quality, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* V_1 = NULL;
	OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* V_2 = NULL;
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_3 = NULL;
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_4 = NULL;
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_5 = NULL;
	ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	{
		// for (var i = 0; i < channels - 1; i++)
		V_9 = 0;
		goto IL_0026;
	}

IL_0005:
	{
		// if (samples[i].Length != samples[i + 1].Length)
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_0 = ___0_samples;
		int32_t L_1 = V_9;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_4 = ___0_samples;
		int32_t L_5 = V_9;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// throw new ArgumentException("Input sample channel length must be the same size.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD21A7BFE478B9363237CF90541813792015C6C02)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OggEncoder_ConvertToBytes_mA15CFE280F6D99BDB80AD721668DEAF199AFF0FF_RuntimeMethod_var)));
	}

IL_0020:
	{
		// for (var i = 0; i < channels - 1; i++)
		int32_t L_9 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0026:
	{
		// for (var i = 0; i < channels - 1; i++)
		int32_t L_10 = V_9;
		int32_t L_11 = ___2_channels;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_11, 1)))))
		{
			goto IL_0005;
		}
	}
	{
		// using MemoryStream outputData = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_12, NULL);
		V_0 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0115:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = V_0;
					if (!L_13)
					{
						goto IL_011e;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_0;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_011e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var info = VorbisInfo.InitVariableBitRate(channels, sampleRate, quality);
				int32_t L_15 = ___2_channels;
				int32_t L_16 = ___1_sampleRate;
				float L_17 = ___3_quality;
				il2cpp_codegen_runtime_class_init_inline(VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367_il2cpp_TypeInfo_var);
				VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_18;
				L_18 = VorbisInfo_InitVariableBitRate_mDE3E3161DBCA3B560C6E5C7DD7AF4C64362DC482(L_15, L_16, L_17, NULL);
				V_1 = L_18;
				// var serial = new Random().Next();
				Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_19 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
				NullCheck(L_19);
				Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_19, NULL);
				NullCheck(L_19);
				int32_t L_20;
				L_20 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_19);
				// var oggStream = new OggStream(serial);
				OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_21 = (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F*)il2cpp_codegen_object_new(OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F_il2cpp_TypeInfo_var);
				NullCheck(L_21);
				OggStream__ctor_m8E4E1C00D39E711BBCCA27D5E169887486F9ABB4(L_21, L_20, NULL);
				V_2 = L_21;
				// var comments = new Comments();
				Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D* L_22 = (Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D*)il2cpp_codegen_object_new(Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D_il2cpp_TypeInfo_var);
				NullCheck(L_22);
				Comments__ctor_m833E1CB27AA74740302328AFCA37E59CACD7DF7C(L_22, NULL);
				// var infoPacket = HeaderPacketBuilder.BuildInfoPacket(info);
				VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_23 = V_1;
				OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_24;
				L_24 = HeaderPacketBuilder_BuildInfoPacket_m53F9804B62A2D74AC4CCE24D88841A21E66A5B8B(L_23, NULL);
				V_3 = L_24;
				// var commentsPacket = HeaderPacketBuilder.BuildCommentsPacket(comments);
				OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_25;
				L_25 = HeaderPacketBuilder_BuildCommentsPacket_m6DE34C93E7608D7D73BE9ABD5A76AB7EEFC99E60(L_22, NULL);
				V_4 = L_25;
				// var booksPacket = HeaderPacketBuilder.BuildBooksPacket(info);
				VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_26 = V_1;
				OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_27;
				L_27 = HeaderPacketBuilder_BuildBooksPacket_mC09D883A0CE25C543CD7182F715370B923AB16B1(L_26, NULL);
				V_5 = L_27;
				// oggStream.PacketIn(infoPacket);
				OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_28 = V_2;
				OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_29 = V_3;
				NullCheck(L_28);
				OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_28, L_29, NULL);
				// oggStream.PacketIn(commentsPacket);
				OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_30 = V_2;
				OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_31 = V_4;
				NullCheck(L_30);
				OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_30, L_31, NULL);
				// oggStream.PacketIn(booksPacket);
				OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_32 = V_2;
				OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_33 = V_5;
				NullCheck(L_32);
				OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_32, L_33, NULL);
				// oggStream.FlushPages(outputData, true);
				OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_34 = V_2;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_35 = V_0;
				OggExtensions_FlushPages_m80A7451A01D64C42C118F3C0FD66EF85B47239D3(L_34, L_35, (bool)1, NULL);
				// var processingState = ProcessingState.Create(info);
				VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_36 = V_1;
				ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_37;
				L_37 = ProcessingState_Create_m3B94BC3F869785D2114DB6801968E8ECE9D03868(L_36, NULL);
				V_6 = L_37;
				// var sampleLength = samples[0].Length;
				SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_38 = ___0_samples;
				NullCheck(L_38);
				int32_t L_39 = 0;
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
				NullCheck(L_40);
				V_7 = ((int32_t)(((RuntimeArray*)L_40)->max_length));
				// var writeBufferSize = 1024;
				V_8 = ((int32_t)1024);
				// for (var readIndex = 0; readIndex <= sampleLength;)
				V_10 = 0;
				goto IL_00fd_1;
			}

IL_00a1_1:
			{
				// if (readIndex == sampleLength)
				int32_t L_41 = V_10;
				int32_t L_42 = V_7;
				if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
				{
					goto IL_00b0_1;
				}
			}
			{
				// processingState.WriteEndOfStream();
				ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_43 = V_6;
				NullCheck(L_43);
				ProcessingState_WriteEndOfStream_m4DFC4FC0362C52F0E8C91C0D702C231E053A5C95(L_43, NULL);
				// break;
				goto IL_0103_1;
			}

IL_00b0_1:
			{
				// processingState.WriteData(samples, writeBufferSize, readIndex);
				ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_44 = V_6;
				SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_45 = ___0_samples;
				int32_t L_46 = V_8;
				int32_t L_47 = V_10;
				NullCheck(L_44);
				ProcessingState_WriteData_mC3B253ED978C167C2CEB39C1CA963C014E840094(L_44, L_45, L_46, L_47, NULL);
			}

IL_00bc_1:
			{
				// while (processingState.PacketOut(out var packet))
				ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_48 = V_6;
				NullCheck(L_48);
				bool L_49;
				L_49 = ProcessingState_PacketOut_m23D6513BDCD727EBA656842BE0D21CB63E7806D2(L_48, (&V_12), NULL);
				if (!L_49)
				{
					goto IL_00d9_1;
				}
			}
			{
				// oggStream.PacketIn(packet);
				OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_50 = V_2;
				OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_51 = V_12;
				NullCheck(L_50);
				OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_50, L_51, NULL);
				// oggStream.FlushPages(outputData, false);
				OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_52 = V_2;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_53 = V_0;
				OggExtensions_FlushPages_m80A7451A01D64C42C118F3C0FD66EF85B47239D3(L_52, L_53, (bool)0, NULL);
				// }
				goto IL_00bc_1;
			}

IL_00d9_1:
			{
				// var nextIndex = readIndex + writeBufferSize;
				int32_t L_54 = V_10;
				int32_t L_55 = V_8;
				V_11 = ((int32_t)il2cpp_codegen_add(L_54, L_55));
				// if (nextIndex >= sampleLength - writeBufferSize)
				int32_t L_56 = V_11;
				int32_t L_57 = V_7;
				int32_t L_58 = V_8;
				if ((((int32_t)L_56) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_57, L_58)))))
				{
					goto IL_00f9_1;
				}
			}
			{
				// writeBufferSize = (sampleLength - readIndex) - writeBufferSize;
				int32_t L_59 = V_7;
				int32_t L_60 = V_10;
				int32_t L_61 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_59, L_60)), L_61));
				// readIndex = sampleLength;
				int32_t L_62 = V_7;
				V_10 = L_62;
				goto IL_00fd_1;
			}

IL_00f9_1:
			{
				// readIndex = nextIndex;
				int32_t L_63 = V_11;
				V_10 = L_63;
			}

IL_00fd_1:
			{
				// for (var readIndex = 0; readIndex <= sampleLength;)
				int32_t L_64 = V_10;
				int32_t L_65 = V_7;
				if ((((int32_t)L_64) <= ((int32_t)L_65)))
				{
					goto IL_00a1_1;
				}
			}

IL_0103_1:
			{
				// oggStream.FlushPages(outputData, true);
				OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_66 = V_2;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_67 = V_0;
				OggExtensions_FlushPages_m80A7451A01D64C42C118F3C0FD66EF85B47239D3(L_66, L_67, (bool)1, NULL);
				// return outputData.ToArray();
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_68 = V_0;
				NullCheck(L_68);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69;
				L_69 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_68);
				V_13 = L_69;
				goto IL_011f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011f:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_13;
		return L_70;
	}
}
// System.Threading.Tasks.Task`1<System.Byte[]> Utilities.Encoding.OggVorbis.OggEncoder::ConvertToBytesAsync(System.Single[],System.Int32,System.Int32,System.Single,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t46575E75F710D631831E756B5DE20429700F6B95* OggEncoder_ConvertToBytesAsync_mA51B4149D3B5C79D4082D40705F0F033ECE05685 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_sampleRate, int32_t ___2_channels, float ___3_quality, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___4_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_mDDB17F352825E6731A4E8C16B058184966A13BD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891(AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___0_samples;
		(&V_0)->___samples_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___samples_2), (void*)L_1);
		int32_t L_2 = ___1_sampleRate;
		(&V_0)->___sampleRate_4 = L_2;
		int32_t L_3 = ___2_channels;
		(&V_0)->___channels_3 = L_3;
		float L_4 = ___3_quality;
		(&V_0)->___quality_5 = L_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___4_cancellationToken;
		(&V_0)->___cancellationToken_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_6))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_mDDB17F352825E6731A4E8C16B058184966A13BD9(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_mDDB17F352825E6731A4E8C16B058184966A13BD9_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_7 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_8;
		L_8 = AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A(L_7, AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Byte[]> Utilities.Encoding.OggVorbis.OggEncoder::ConvertToBytesAsync(System.Single[][],System.Int32,System.Int32,System.Single,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t46575E75F710D631831E756B5DE20429700F6B95* OggEncoder_ConvertToBytesAsync_mE498B960F7029991AE45DA42B238331A0EF1BDED (SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___0_samples, int32_t ___1_sampleRate, int32_t ___2_channels, float ___3_quality, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___4_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_mB312C202C927CD74C88990849B9A8524BD055D74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891(AsyncTaskMethodBuilder_1_Create_m012D63730B8B8AE5D0740D902A328F4E0DC91891_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_1 = ___0_samples;
		(&V_0)->___samples_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___samples_2), (void*)L_1);
		int32_t L_2 = ___1_sampleRate;
		(&V_0)->___sampleRate_4 = L_2;
		int32_t L_3 = ___2_channels;
		(&V_0)->___channels_3 = L_3;
		float L_4 = ___3_quality;
		(&V_0)->___quality_5 = L_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___4_cancellationToken;
		(&V_0)->___cancellationToken_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_6))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_mB312C202C927CD74C88990849B9A8524BD055D74(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_mB312C202C927CD74C88990849B9A8524BD055D74_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_7 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_8;
		L_8 = AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A(L_7, AsyncTaskMethodBuilder_1_get_Task_mBF376E337D4B5678E2CA85B41B527FA18E340B4A_RuntimeMethod_var);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,UnityEngine.AudioClip>> Utilities.Encoding.OggVorbis.OggEncoder::StreamSaveToDiskAsync(UnityEngine.AudioClip,System.String,System.Threading.CancellationToken,System.Action`1<System.Tuple`2<System.String,UnityEngine.AudioClip>>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* OggEncoder_StreamSaveToDiskAsync_m243B7C1B6DFCCD01042A0442A39BB909729FE64A (OggEncoder_tB4C1A77B6277FE505E9EC22BF65476EA69749A05* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, String_t* ___1_saveDirectory, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* ___3_callback, String_t* ___4_callingMethodName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mD5BCF8BB191765693AAA74313FB5A277550662A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m884390E8490BAF2B54C602FAFA637E4D27D85AF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m7B3747000EF0438B67247FC38CB11C83D6A5741F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mD5BCF8BB191765693AAA74313FB5A277550662A2(AsyncTaskMethodBuilder_1_Create_mD5BCF8BB191765693AAA74313FB5A277550662A2_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_clip;
		(&V_0)->___clip_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clip_3), (void*)L_1);
		String_t* L_2 = ___1_saveDirectory;
		(&V_0)->___saveDirectory_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___saveDirectory_4), (void*)L_2);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___2_cancellationToken;
		(&V_0)->___cancellationToken_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_5))->____source_0), (void*)NULL);
		Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* L_4 = ___3_callback;
		(&V_0)->___callback_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___callback_6), (void*)L_4);
		String_t* L_5 = ___4_callingMethodName;
		(&V_0)->___callingMethodName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___callingMethodName_2), (void*)L_5);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m884390E8490BAF2B54C602FAFA637E4D27D85AF7(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m884390E8490BAF2B54C602FAFA637E4D27D85AF7_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_7 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t93E8E92743A33B7F0E5166D92567EC6007CAEB7E* L_8;
		L_8 = AsyncTaskMethodBuilder_1_get_Task_m7B3747000EF0438B67247FC38CB11C83D6A5741F(L_7, AsyncTaskMethodBuilder_1_get_Task_m7B3747000EF0438B67247FC38CB11C83D6A5741F_RuntimeMethod_var);
		return L_8;
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
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertToBytesAsyncU3Ed__6_MoveNext_mA593401C64476E2BB35021B21BD1936E70276E3E (U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_m2AF402F3903B914073DB423582BB55AA5D942BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 V_2;
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
				goto IL_0067_1;
			}
		}
		{
			// => await ConvertToBytesAsync(ConvertSamples(samples, channels), sampleRate, channels, quality, cancellationToken);
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___samples_2;
			int32_t L_3 = __this->___channels_3;
			SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_4;
			L_4 = OggEncoder_ConvertSamples_m571DBCAD663D7165A656038052580DD7003127A1(L_2, L_3, NULL);
			int32_t L_5 = __this->___sampleRate_4;
			int32_t L_6 = __this->___channels_3;
			float L_7 = __this->___quality_5;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8 = __this->___cancellationToken_6;
			Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_9;
			L_9 = OggEncoder_ConvertToBytesAsync_mE498B960F7029991AE45DA42B238331A0EF1BDED(L_4, L_5, L_6, L_7, L_8, NULL);
			NullCheck(L_9);
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_10;
			L_10 = Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0(L_9, Task_1_GetAwaiter_m5ACC74BF4CDE3FBDF91F2F26DF141DD79DDEE5C0_RuntimeMethod_var);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2((&V_2), TaskAwaiter_1_get_IsCompleted_m896CDD4304D3FD8B44E321EB886905CA845848F2_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0083_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_13 = V_2;
			__this->___U3CU3Eu__1_7 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_m2AF402F3903B914073DB423582BB55AA5D942BC4(L_14, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808_TisU3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A_m2AF402F3903B914073DB423582BB55AA5D942BC4_RuntimeMethod_var);
			goto IL_00b8;
		}

IL_0067_1:
		{
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808 L_15 = __this->___U3CU3Eu__1_7;
			V_2 = L_15;
			TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808* L_16 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t7E7C3F965F4ECF1DD3680288653A559E29B40808));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_0083_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
			L_18 = TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0((&V_2), TaskAwaiter_1_GetResult_m46820317903FD726C7B5337DD3861F0AB0DDD6B0_RuntimeMethod_var);
			V_1 = L_18;
			goto IL_00a4;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008d;
		}
		throw e;
	}

CATCH_008d:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6(L_19, L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b8;
	}// end catch (depth: 1)

IL_00a4:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_21 = (&__this->___U3CU3Et__builder_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0(L_21, L_22, AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var);
	}

IL_00b8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConvertToBytesAsyncU3Ed__6_MoveNext_mA593401C64476E2BB35021B21BD1936E70276E3E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A*>(__this + _offset);
	U3CConvertToBytesAsyncU3Ed__6_MoveNext_mA593401C64476E2BB35021B21BD1936E70276E3E(_thisAdjusted, method);
}
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertToBytesAsyncU3Ed__6_SetStateMachine_m3D9B13DEE3506C21CBF191829AB657D3CC60A278 (U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConvertToBytesAsyncU3Ed__6_SetStateMachine_m3D9B13DEE3506C21CBF191829AB657D3CC60A278_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CConvertToBytesAsyncU3Ed__6_tCD98FC07E17EA5C4289E79EC990E1901214A360A*>(__this + _offset);
	U3CConvertToBytesAsyncU3Ed__6_SetStateMachine_m3D9B13DEE3506C21CBF191829AB657D3CC60A278(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertToBytesAsyncU3Ed__7_MoveNext_mEC4056973A6B1EE12332C0358BCC339C5B22674A (U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m85CB7744952F105541FD968791F92F87F063468C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m34C1A63D67E842B2B8A41E728D4804D5EBFB05CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_3 = NULL;
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_4 = NULL;
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_5 = NULL;
	int32_t V_6 = 0;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_7;
	memset((&V_7), 0, sizeof(V_7));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_10 = NULL;
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D V_11;
	memset((&V_11), 0, sizeof(V_11));
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F V_12;
	memset((&V_12), 0, sizeof(V_12));
	ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
			{
				goto IL_0052_1;
			}
		}
		{
			// for (var i = 0; i < channels - 1; i++)
			V_6 = 0;
			goto IL_003b_1;
		}

IL_0010_1:
		{
			// if (samples[i].Length != samples[i + 1].Length)
			SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_2 = __this->___samples_2;
			int32_t L_3 = V_6;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			NullCheck(L_5);
			SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_6 = __this->___samples_2;
			int32_t L_7 = V_6;
			NullCheck(L_6);
			int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			NullCheck(L_9);
			if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
			{
				goto IL_0035_1;
			}
		}
		{
			// throw new ArgumentException("Input sample channel length must be the same size.");
			ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
			NullCheck(L_10);
			ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD21A7BFE478B9363237CF90541813792015C6C02)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CConvertToBytesAsyncU3Ed__7_MoveNext_mEC4056973A6B1EE12332C0358BCC339C5B22674A_RuntimeMethod_var)));
		}

IL_0035_1:
		{
			// for (var i = 0; i < channels - 1; i++)
			int32_t L_11 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		}

IL_003b_1:
		{
			// for (var i = 0; i < channels - 1; i++)
			int32_t L_12 = V_6;
			int32_t L_13 = __this->___channels_3;
			if ((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1)))))
			{
				goto IL_0010_1;
			}
		}
		{
			// using MemoryStream outputData = new MemoryStream();
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
			NullCheck(L_14);
			MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_14, NULL);
			__this->___U3CoutputDataU3E5__2_7 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutputDataU3E5__2_7), (void*)L_14);
		}

IL_0052_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_03d9_1:
				{// begin finally (depth: 2)
					{
						int32_t L_15 = V_0;
						if ((((int32_t)L_15) >= ((int32_t)0)))
						{
							goto IL_03f0_1;
						}
					}
					{
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_16 = __this->___U3CoutputDataU3E5__2_7;
						if (!L_16)
						{
							goto IL_03f0_1;
						}
					}
					{
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = __this->___U3CoutputDataU3E5__2_7;
						NullCheck(L_17);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
					}

IL_03f0_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_18 = V_0;
					switch (L_18)
					{
						case 0:
						{
							goto IL_013e_2;
						}
						case 1:
						{
							goto IL_024a_2;
						}
						case 2:
						{
							goto IL_032a_2;
						}
						case 3:
						{
							goto IL_03ac_2;
						}
					}
				}
				{
					// var info = VorbisInfo.InitVariableBitRate(channels, sampleRate, quality);
					int32_t L_19 = __this->___channels_3;
					int32_t L_20 = __this->___sampleRate_4;
					float L_21 = __this->___quality_5;
					il2cpp_codegen_runtime_class_init_inline(VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367_il2cpp_TypeInfo_var);
					VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_22;
					L_22 = VorbisInfo_InitVariableBitRate_mDE3E3161DBCA3B560C6E5C7DD7AF4C64362DC482(L_19, L_20, L_21, NULL);
					__this->___U3CinfoU3E5__3_8 = L_22;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinfoU3E5__3_8), (void*)L_22);
					// var serial = new Random().Next();
					Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_23 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
					NullCheck(L_23);
					Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_23, NULL);
					NullCheck(L_23);
					int32_t L_24;
					L_24 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_23);
					V_2 = L_24;
					// var oggStream = new OggStream(serial);
					int32_t L_25 = V_2;
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_26 = (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F*)il2cpp_codegen_object_new(OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F_il2cpp_TypeInfo_var);
					NullCheck(L_26);
					OggStream__ctor_m8E4E1C00D39E711BBCCA27D5E169887486F9ABB4(L_26, L_25, NULL);
					__this->___U3CoggStreamU3E5__4_9 = L_26;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoggStreamU3E5__4_9), (void*)L_26);
					// var comments = new Comments();
					Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D* L_27 = (Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D*)il2cpp_codegen_object_new(Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D_il2cpp_TypeInfo_var);
					NullCheck(L_27);
					Comments__ctor_m833E1CB27AA74740302328AFCA37E59CACD7DF7C(L_27, NULL);
					// var infoPacket = HeaderPacketBuilder.BuildInfoPacket(info);
					VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_28 = __this->___U3CinfoU3E5__3_8;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_29;
					L_29 = HeaderPacketBuilder_BuildInfoPacket_m53F9804B62A2D74AC4CCE24D88841A21E66A5B8B(L_28, NULL);
					V_3 = L_29;
					// var commentsPacket = HeaderPacketBuilder.BuildCommentsPacket(comments);
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_30;
					L_30 = HeaderPacketBuilder_BuildCommentsPacket_m6DE34C93E7608D7D73BE9ABD5A76AB7EEFC99E60(L_27, NULL);
					V_4 = L_30;
					// var booksPacket = HeaderPacketBuilder.BuildBooksPacket(info);
					VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_31 = __this->___U3CinfoU3E5__3_8;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_32;
					L_32 = HeaderPacketBuilder_BuildBooksPacket_mC09D883A0CE25C543CD7182F715370B923AB16B1(L_31, NULL);
					V_5 = L_32;
					// oggStream.PacketIn(infoPacket);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_33 = __this->___U3CoggStreamU3E5__4_9;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_34 = V_3;
					NullCheck(L_33);
					OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_33, L_34, NULL);
					// oggStream.PacketIn(commentsPacket);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_35 = __this->___U3CoggStreamU3E5__4_9;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_36 = V_4;
					NullCheck(L_35);
					OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_35, L_36, NULL);
					// oggStream.PacketIn(booksPacket);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_37 = __this->___U3CoggStreamU3E5__4_9;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_38 = V_5;
					NullCheck(L_37);
					OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_37, L_38, NULL);
					// await oggStream.FlushPagesAsync(outputData, true, cancellationToken).ConfigureAwait(false);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_39 = __this->___U3CoggStreamU3E5__4_9;
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_40 = __this->___U3CoutputDataU3E5__2_7;
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_41 = __this->___cancellationToken_6;
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_42;
					L_42 = OggExtensions_FlushPagesAsync_mD18E9E0C01BB557A9574B2CA14E12072F5D60790(L_39, L_40, (bool)1, L_41, NULL);
					NullCheck(L_42);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_43;
					L_43 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_42, (bool)0, NULL);
					V_8 = L_43;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_44;
					L_44 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_8), NULL);
					V_7 = L_44;
					bool L_45;
					L_45 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_7), NULL);
					if (L_45)
					{
						goto IL_015b_2;
					}
				}
				{
					int32_t L_46 = 0;
					V_0 = L_46;
					__this->___U3CU3E1__state_0 = L_46;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_47 = V_7;
					__this->___U3CU3Eu__1_14 = L_47;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_48 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m85CB7744952F105541FD968791F92F87F063468C(L_48, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m85CB7744952F105541FD968791F92F87F063468C_RuntimeMethod_var);
					goto IL_0464;
				}

IL_013e_2:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_49 = __this->___U3CU3Eu__1_14;
					V_7 = L_49;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_50 = (&__this->___U3CU3Eu__1_14);
					il2cpp_codegen_initobj(L_50, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_51 = (-1);
					V_0 = L_51;
					__this->___U3CU3E1__state_0 = L_51;
				}

IL_015b_2:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_7), NULL);
					// var processingState = ProcessingState.Create(info);
					VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_52 = __this->___U3CinfoU3E5__3_8;
					ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_53;
					L_53 = ProcessingState_Create_m3B94BC3F869785D2114DB6801968E8ECE9D03868(L_52, NULL);
					__this->___U3CprocessingStateU3E5__5_10 = L_53;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprocessingStateU3E5__5_10), (void*)L_53);
					// var sampleLength = samples[0].Length;
					SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_54 = __this->___samples_2;
					NullCheck(L_54);
					int32_t L_55 = 0;
					SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
					NullCheck(L_56);
					__this->___U3CsampleLengthU3E5__6_11 = ((int32_t)(((RuntimeArray*)L_56)->max_length));
					// var writeBufferSize = 1024;
					__this->___U3CwriteBufferSizeU3E5__7_12 = ((int32_t)1024);
					// for (var readIndex = 0; readIndex <= sampleLength;)
					__this->___U3CreadIndexU3E5__9_15 = 0;
					goto IL_02c3_2;
				}

IL_019a_2:
				{
					// if (readIndex == sampleLength)
					int32_t L_57 = __this->___U3CreadIndexU3E5__9_15;
					int32_t L_58 = __this->___U3CsampleLengthU3E5__6_11;
					if ((!(((uint32_t)L_57) == ((uint32_t)L_58))))
					{
						goto IL_01b8_2;
					}
				}
				{
					// processingState.WriteEndOfStream();
					ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_59 = __this->___U3CprocessingStateU3E5__5_10;
					NullCheck(L_59);
					ProcessingState_WriteEndOfStream_m4DFC4FC0362C52F0E8C91C0D702C231E053A5C95(L_59, NULL);
					// break;
					goto IL_02d4_2;
				}

IL_01b8_2:
				{
					// processingState.WriteData(samples, writeBufferSize, readIndex);
					ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_60 = __this->___U3CprocessingStateU3E5__5_10;
					SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_61 = __this->___samples_2;
					int32_t L_62 = __this->___U3CwriteBufferSizeU3E5__7_12;
					int32_t L_63 = __this->___U3CreadIndexU3E5__9_15;
					NullCheck(L_60);
					ProcessingState_WriteData_mC3B253ED978C167C2CEB39C1CA963C014E840094(L_60, L_61, L_62, L_63, NULL);
				}

IL_01d5_2:
				{
					// while (processingState.PacketOut(out var packet))
					ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_64 = __this->___U3CprocessingStateU3E5__5_10;
					NullCheck(L_64);
					bool L_65;
					L_65 = ProcessingState_PacketOut_m23D6513BDCD727EBA656842BE0D21CB63E7806D2(L_64, (&V_10), NULL);
					if (!L_65)
					{
						goto IL_0273_2;
					}
				}
				{
					// oggStream.PacketIn(packet);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_66 = __this->___U3CoggStreamU3E5__4_9;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_67 = V_10;
					NullCheck(L_66);
					OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_66, L_67, NULL);
					// await oggStream.FlushPagesAsync(outputData, false, cancellationToken).ConfigureAwait(false);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_68 = __this->___U3CoggStreamU3E5__4_9;
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_69 = __this->___U3CoutputDataU3E5__2_7;
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_70 = __this->___cancellationToken_6;
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_71;
					L_71 = OggExtensions_FlushPagesAsync_mD18E9E0C01BB557A9574B2CA14E12072F5D60790(L_68, L_69, (bool)0, L_70, NULL);
					NullCheck(L_71);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_72;
					L_72 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_71, (bool)0, NULL);
					V_8 = L_72;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_73;
					L_73 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_8), NULL);
					V_7 = L_73;
					bool L_74;
					L_74 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_7), NULL);
					if (L_74)
					{
						goto IL_0267_2;
					}
				}
				{
					int32_t L_75 = 1;
					V_0 = L_75;
					__this->___U3CU3E1__state_0 = L_75;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_76 = V_7;
					__this->___U3CU3Eu__1_14 = L_76;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_77 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m85CB7744952F105541FD968791F92F87F063468C(L_77, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m85CB7744952F105541FD968791F92F87F063468C_RuntimeMethod_var);
					goto IL_0464;
				}

IL_024a_2:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_78 = __this->___U3CU3Eu__1_14;
					V_7 = L_78;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_79 = (&__this->___U3CU3Eu__1_14);
					il2cpp_codegen_initobj(L_79, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_80 = (-1);
					V_0 = L_80;
					__this->___U3CU3E1__state_0 = L_80;
				}

IL_0267_2:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_7), NULL);
					// }
					goto IL_01d5_2;
				}

IL_0273_2:
				{
					// var nextIndex = readIndex + writeBufferSize;
					int32_t L_81 = __this->___U3CreadIndexU3E5__9_15;
					int32_t L_82 = __this->___U3CwriteBufferSizeU3E5__7_12;
					V_9 = ((int32_t)il2cpp_codegen_add(L_81, L_82));
					// if (nextIndex >= sampleLength - writeBufferSize)
					int32_t L_83 = V_9;
					int32_t L_84 = __this->___U3CsampleLengthU3E5__6_11;
					int32_t L_85 = __this->___U3CwriteBufferSizeU3E5__7_12;
					if ((((int32_t)L_83) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_84, L_85)))))
					{
						goto IL_02bb_2;
					}
				}
				{
					// writeBufferSize = (sampleLength - readIndex) - writeBufferSize;
					int32_t L_86 = __this->___U3CsampleLengthU3E5__6_11;
					int32_t L_87 = __this->___U3CreadIndexU3E5__9_15;
					int32_t L_88 = __this->___U3CwriteBufferSizeU3E5__7_12;
					__this->___U3CwriteBufferSizeU3E5__7_12 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_86, L_87)), L_88));
					// readIndex = sampleLength;
					int32_t L_89 = __this->___U3CsampleLengthU3E5__6_11;
					__this->___U3CreadIndexU3E5__9_15 = L_89;
					goto IL_02c3_2;
				}

IL_02bb_2:
				{
					// readIndex = nextIndex;
					int32_t L_90 = V_9;
					__this->___U3CreadIndexU3E5__9_15 = L_90;
				}

IL_02c3_2:
				{
					// for (var readIndex = 0; readIndex <= sampleLength;)
					int32_t L_91 = __this->___U3CreadIndexU3E5__9_15;
					int32_t L_92 = __this->___U3CsampleLengthU3E5__6_11;
					if ((((int32_t)L_91) <= ((int32_t)L_92)))
					{
						goto IL_019a_2;
					}
				}

IL_02d4_2:
				{
					// await oggStream.FlushPagesAsync(outputData, true, cancellationToken).ConfigureAwait(false);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_93 = __this->___U3CoggStreamU3E5__4_9;
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_94 = __this->___U3CoutputDataU3E5__2_7;
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_95 = __this->___cancellationToken_6;
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_96;
					L_96 = OggExtensions_FlushPagesAsync_mD18E9E0C01BB557A9574B2CA14E12072F5D60790(L_93, L_94, (bool)1, L_95, NULL);
					NullCheck(L_96);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_97;
					L_97 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_96, (bool)0, NULL);
					V_8 = L_97;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_98;
					L_98 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_8), NULL);
					V_7 = L_98;
					bool L_99;
					L_99 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_7), NULL);
					if (L_99)
					{
						goto IL_0347_2;
					}
				}
				{
					int32_t L_100 = 2;
					V_0 = L_100;
					__this->___U3CU3E1__state_0 = L_100;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_101 = V_7;
					__this->___U3CU3Eu__1_14 = L_101;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_102 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m85CB7744952F105541FD968791F92F87F063468C(L_102, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m85CB7744952F105541FD968791F92F87F063468C_RuntimeMethod_var);
					goto IL_0464;
				}

IL_032a_2:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_103 = __this->___U3CU3Eu__1_14;
					V_7 = L_103;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_104 = (&__this->___U3CU3Eu__1_14);
					il2cpp_codegen_initobj(L_104, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_105 = (-1);
					V_0 = L_105;
					__this->___U3CU3E1__state_0 = L_105;
				}

IL_0347_2:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_7), NULL);
					// var result = outputData.ToArray();
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_106 = __this->___U3CoutputDataU3E5__2_7;
					NullCheck(L_106);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107;
					L_107 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_106);
					__this->___U3CresultU3E5__8_13 = L_107;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__8_13), (void*)L_107);
					// await outputData.DisposeAsync().ConfigureAwait(false);
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_108 = __this->___U3CoutputDataU3E5__2_7;
					NullCheck(L_108);
					ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_109;
					L_109 = VirtualFuncInvoker0< ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F >::Invoke(38 /* System.Threading.Tasks.ValueTask System.IO.Stream::DisposeAsync() */, L_108);
					V_12 = L_109;
					ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 L_110;
					L_110 = ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline((&V_12), (bool)0, NULL);
					V_13 = L_110;
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_111;
					L_111 = ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline((&V_13), NULL);
					V_11 = L_111;
					bool L_112;
					L_112 = ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline((&V_11), NULL);
					if (L_112)
					{
						goto IL_03c9_2;
					}
				}
				{
					int32_t L_113 = 3;
					V_0 = L_113;
					__this->___U3CU3E1__state_0 = L_113;
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_114 = V_11;
					__this->___U3CU3Eu__2_16 = L_114;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->____value_0))->____obj_1), (void*)NULL);
					AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_115 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m34C1A63D67E842B2B8A41E728D4804D5EBFB05CC(L_115, (&V_11), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1_m34C1A63D67E842B2B8A41E728D4804D5EBFB05CC_RuntimeMethod_var);
					goto IL_0464;
				}

IL_03ac_2:
				{
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_116 = __this->___U3CU3Eu__2_16;
					V_11 = L_116;
					ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* L_117 = (&__this->___U3CU3Eu__2_16);
					il2cpp_codegen_initobj(L_117, sizeof(ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D));
					int32_t L_118 = (-1);
					V_0 = L_118;
					__this->___U3CU3E1__state_0 = L_118;
				}

IL_03c9_2:
				{
					ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline((&V_11), NULL);
					// return result;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = __this->___U3CresultU3E5__8_13;
					V_1 = L_119;
					goto IL_042d;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03f1;
		}
		throw e;
	}

CATCH_03f1:
	{// begin catch(System.Exception)
		V_14 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CoutputDataU3E5__2_7 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutputDataU3E5__2_7), (void*)(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL);
		__this->___U3CinfoU3E5__3_8 = (VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinfoU3E5__3_8), (void*)(VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367*)NULL);
		__this->___U3CoggStreamU3E5__4_9 = (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoggStreamU3E5__4_9), (void*)(OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F*)NULL);
		__this->___U3CprocessingStateU3E5__5_10 = (ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprocessingStateU3E5__5_10), (void*)(ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA*)NULL);
		__this->___U3CresultU3E5__8_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__8_13), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_120 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_121 = V_14;
		AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6(L_120, L_121, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF567C6A1FEA33A1EF9F395C24D9CD4095E2B70A6_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0464;
	}// end catch (depth: 1)

IL_042d:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CoutputDataU3E5__2_7 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutputDataU3E5__2_7), (void*)(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL);
		__this->___U3CinfoU3E5__3_8 = (VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinfoU3E5__3_8), (void*)(VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367*)NULL);
		__this->___U3CoggStreamU3E5__4_9 = (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoggStreamU3E5__4_9), (void*)(OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F*)NULL);
		__this->___U3CprocessingStateU3E5__5_10 = (ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprocessingStateU3E5__5_10), (void*)(ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA*)NULL);
		__this->___U3CresultU3E5__8_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__8_13), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_122 = (&__this->___U3CU3Et__builder_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0(L_122, L_123, AsyncTaskMethodBuilder_1_SetResult_mA33666F8F9751DDF31F6C4C22C991E9F4BDA52B0_RuntimeMethod_var);
	}

IL_0464:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConvertToBytesAsyncU3Ed__7_MoveNext_mEC4056973A6B1EE12332C0358BCC339C5B22674A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1*>(__this + _offset);
	U3CConvertToBytesAsyncU3Ed__7_MoveNext_mEC4056973A6B1EE12332C0358BCC339C5B22674A(_thisAdjusted, method);
}
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<ConvertToBytesAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertToBytesAsyncU3Ed__7_SetStateMachine_mBC8AE9EA16CB31B693E14EA99416CFA849AD5EEE (U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tF4B144BF5EE52E8AC70FFD31FC2684642AC52B81* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mAD061BEAE640C56538A74B398FCF9195BCED98E4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConvertToBytesAsyncU3Ed__7_SetStateMachine_mBC8AE9EA16CB31B693E14EA99416CFA849AD5EEE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CConvertToBytesAsyncU3Ed__7_t069AA1C86145AFC3C6C0BBB8A9ED0B7DF3BB92F1*>(__this + _offset);
	U3CConvertToBytesAsyncU3Ed__7_SetStateMachine_mBC8AE9EA16CB31B693E14EA99416CFA849AD5EEE(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamSaveToDiskAsyncU3Ed__8_MoveNext_mCBC42E1EDBA2A50AE71C7A1ADF2D105692108800 (U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m473ABB3F48BD701A87B9BAC3A67C49338DF5F641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m3EAA5E413090893E2A09B35FE7EB801DF4323418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m68FC6A48AFEF15775269F9C82820919FCD0ED79A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2__ctor_mB3628B71825226B713F07E9520DA6487ACBDEBCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A71CFFD786404158D51A0F7A79AE1902FAAF2A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20D93A6FEBBBBDAC8D8A470059938C46DCF62D90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28E9C92C481BC7D26F977E7EB74FE19D9639DC68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4330481298E05E651479321D3F2F1AF6D644E5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral507FAB1F5B697A4F6D4421FA45C85C74E8BA6C07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5617C415DAB0B64021CC2F09FEBF2897B0CB1D68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F48486DCAFDD71732AF9FBCB99B1BF3BAC89C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D64A34D3275966681FD9DADB57684C569829DD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral722E944F9F31C8EF9F20F7A53867EAA97FD36488);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E853B59147D1E3F5F59DB7F0C1558DEE6BEA92F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2B04C45B6ACB27F471AECBCE961380C670FBF95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAC8DD0A909CA8D0DD5AFBE6940689670F3607E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD499752FDC638D47EB8D55FF7F7664AA81F236E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0EC54FD9493DD95C328894C9CC1F35DEB57EC2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA385B67619E3DB03702032DC6EE1DD96F4E1616);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* V_1 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_2 = NULL;
	Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* V_3 = NULL;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_5;
	memset((&V_5), 0, sizeof(V_5));
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_6 = NULL;
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_7 = NULL;
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_8 = NULL;
	int32_t V_9 = 0;
	SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* V_14 = NULL;
	RuntimeObject* V_15 = NULL;
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D V_16;
	memset((&V_16), 0, sizeof(V_16));
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F V_17;
	memset((&V_17), 0, sizeof(V_17));
	ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	Exception_t* V_20 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
	int32_t G_B78_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B78_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B78_2 = NULL;
	String_t* G_B78_3 = NULL;
	int32_t G_B77_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B77_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B77_2 = NULL;
	String_t* G_B77_3 = NULL;
	int32_t G_B79_0 = 0;
	int32_t G_B79_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B79_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B79_3 = NULL;
	String_t* G_B79_4 = NULL;
	Exception_t* G_B111_0 = NULL;
	Exception_t* G_B110_0 = NULL;
	Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* G_B123_0 = NULL;
	Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* G_B122_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_011d_1;
				}
				case 1:
				{
					goto IL_01ce_1;
				}
				case 2:
				{
					goto IL_01ce_1;
				}
				case 3:
				{
					goto IL_01ce_1;
				}
				case 4:
				{
					goto IL_01ce_1;
				}
				case 5:
				{
					goto IL_01ce_1;
				}
				case 6:
				{
					goto IL_01ce_1;
				}
				case 7:
				{
					goto IL_01ce_1;
				}
				case 8:
				{
					goto IL_01ce_1;
				}
				case 9:
				{
					goto IL_01ce_1;
				}
				case 10:
				{
					goto IL_01ce_1;
				}
				case 11:
				{
					goto IL_0aaa_1;
				}
				case 12:
				{
					goto IL_0b8f_1;
				}
			}
		}
		{
			// if (callingMethodName != nameof(RecordingManager.StartRecordingAsync))
			String_t* L_2 = __this->___callingMethodName_2;
			bool L_3;
			L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_2, _stringLiteral7E853B59147D1E3F5F59DB7F0C1558DEE6BEA92F, NULL);
			if (!L_3)
			{
				goto IL_005e_1;
			}
		}
		{
			// throw new InvalidOperationException($"{nameof(StreamSaveToDiskAsync)} can only be called from {nameof(RecordingManager.StartRecordingAsync)}");
			InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
			NullCheck(L_4);
			InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B1B199097D409A8D6AE7A87F2052C1CAE7D2612)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStreamSaveToDiskAsyncU3Ed__8_MoveNext_mCBC42E1EDBA2A50AE71C7A1ADF2D105692108800_RuntimeMethod_var)));
		}

IL_005e_1:
		{
			// if (!Microphone.IsRecording(null))
			bool L_5;
			L_5 = Microphone_IsRecording_m502EA30B20852ED68DC1C4713233D6EF3A43E45E((String_t*)NULL, NULL);
			if (L_5)
			{
				goto IL_0071_1;
			}
		}
		{
			// throw new InvalidOperationException("Microphone is not initialized!");
			InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
			NullCheck(L_6);
			InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral639EDD13E80C7AB1E738F109795CB5AED20E741B)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStreamSaveToDiskAsyncU3Ed__8_MoveNext_mCBC42E1EDBA2A50AE71C7A1ADF2D105692108800_RuntimeMethod_var)));
		}

IL_0071_1:
		{
			// if (RecordingManager.IsProcessing)
			il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
			bool L_7;
			L_7 = RecordingManager_get_IsProcessing_m88DE0039BF7E64229A4AB9C0CBCD844307173E66(NULL);
			if (!L_7)
			{
				goto IL_0083_1;
			}
		}
		{
			// throw new AccessViolationException("Recoding already in progress!");
			AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190* L_8 = (AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessViolationException_t2359EDFDD20FE77D56A496DB4F6854A3D2DC4190_il2cpp_TypeInfo_var)));
			NullCheck(L_8);
			AccessViolationException__ctor_mC7C8A804506B189383531FC1E1BACE8967D31F67(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F1693E237127979E6840FE9503A56562F6763F2)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStreamSaveToDiskAsyncU3Ed__8_MoveNext_mCBC42E1EDBA2A50AE71C7A1ADF2D105692108800_RuntimeMethod_var)));
		}

IL_0083_1:
		{
			// RecordingManager.IsProcessing = true;
			il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
			RecordingManager_set_IsProcessing_m1645A71070F453EDFC800D4083F5C3F5DCD2F8C1((bool)1, NULL);
			// if (RecordingManager.EnableDebug)
			bool L_9;
			L_9 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
			if (!L_9)
			{
				goto IL_009a_1;
			}
		}
		{
			// Debug.Log($"[{nameof(RecordingManager)}] Recording process started...");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB2B04C45B6ACB27F471AECBCE961380C670FBF95, NULL);
		}

IL_009a_1:
		{
			// var lastPosition = 0;
			__this->___U3ClastPositionU3E5__2_7 = 0;
			// var clipName = clip.name;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = __this->___clip_3;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
			__this->___U3CclipNameU3E5__3_8 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclipNameU3E5__3_8), (void*)L_11);
			// var maxClipLength = clip.samples;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = __this->___clip_3;
			NullCheck(L_12);
			int32_t L_13;
			L_13 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_12, NULL);
			__this->___U3CmaxClipLengthU3E5__4_9 = L_13;
			// var samples = new float[clip.samples];
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_14 = __this->___clip_3;
			NullCheck(L_14);
			int32_t L_15;
			L_15 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_14, NULL);
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_15);
			__this->___U3CsamplesU3E5__5_10 = L_16;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsamplesU3E5__5_10), (void*)L_16);
			// await Task.Delay(1).ConfigureAwait(false);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_17;
			L_17 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(1, NULL);
			NullCheck(L_17);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_18;
			L_18 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_17, (bool)0, NULL);
			V_5 = L_18;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_19;
			L_19 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
			V_4 = L_19;
			bool L_20;
			L_20 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
			if (L_20)
			{
				goto IL_013a_1;
			}
		}
		{
			int32_t L_21 = 0;
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_22 = V_4;
			__this->___U3CU3Eu__1_14 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_23 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB(L_23, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB_RuntimeMethod_var);
			goto IL_0c89;
		}

IL_011d_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_24 = __this->___U3CU3Eu__1_14;
			V_4 = L_24;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_25 = (&__this->___U3CU3Eu__1_14);
			il2cpp_codegen_initobj(L_25, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
		}

IL_013a_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
			// if (!Directory.Exists(saveDirectory))
			String_t* L_27 = __this->___saveDirectory_4;
			bool L_28;
			L_28 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_27, NULL);
			if (L_28)
			{
				goto IL_015a_1;
			}
		}
		{
			// Directory.CreateDirectory(saveDirectory);
			String_t* L_29 = __this->___saveDirectory_4;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_30;
			L_30 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_29, NULL);
		}

IL_015a_1:
		{
			// var path = $"{saveDirectory}/{clipName}.ogg";
			String_t* L_31 = __this->___saveDirectory_4;
			String_t* L_32 = __this->___U3CclipNameU3E5__3_8;
			String_t* L_33;
			L_33 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_31, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_32, _stringLiteralF0EC54FD9493DD95C328894C9CC1F35DEB57EC2F, NULL);
			__this->___U3CpathU3E5__6_11 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3E5__6_11), (void*)L_33);
			// if (File.Exists(path))
			String_t* L_34 = __this->___U3CpathU3E5__6_11;
			bool L_35;
			L_35 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_34, NULL);
			if (!L_35)
			{
				goto IL_01ad_1;
			}
		}
		{
			// Debug.LogWarning($"[{nameof(RecordingManager)}] {path} already exists, attempting to delete");
			String_t* L_36 = __this->___U3CpathU3E5__6_11;
			String_t* L_37;
			L_37 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral28E9C92C481BC7D26F977E7EB74FE19D9639DC68, L_36, _stringLiteralBAC8DD0A909CA8D0DD5AFBE6940689670F3607E1, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_37, NULL);
			// File.Delete(path);
			String_t* L_38 = __this->___U3CpathU3E5__6_11;
			File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_38, NULL);
		}

IL_01ad_1:
		{
			// var outStream = new FileStream(path, FileMode.Create, FileAccess.Write);
			String_t* L_39 = __this->___U3CpathU3E5__6_11;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_40 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			NullCheck(L_40);
			FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9(L_40, L_39, 2, 2, NULL);
			__this->___U3CoutStreamU3E5__7_12 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutStreamU3E5__7_12), (void*)L_40);
			__this->___U3CU3E7__wrap8_15 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap8_15), (void*)NULL);
			__this->___U3CU3E7__wrap9_16 = 0;
		}

IL_01ce_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_41 = V_0;
			}
			try
			{// begin try (depth: 3)
				{
					int32_t L_42 = V_0;
					switch (((int32_t)il2cpp_codegen_subtract(L_42, 1)))
					{
						case 0:
						{
							goto IL_02e6_3;
						}
						case 1:
						{
							goto IL_036c_3;
						}
						case 2:
						{
							goto IL_040e_3;
						}
						case 3:
						{
							goto IL_0494_3;
						}
						case 4:
						{
							goto IL_056b_3;
						}
						case 5:
						{
							goto IL_0631_3;
						}
						case 6:
						{
							goto IL_075e_3;
						}
						case 7:
						{
							goto IL_07e4_3;
						}
						case 8:
						{
							goto IL_086e_3;
						}
						case 9:
						{
							goto IL_09dd_3;
						}
					}
				}
				{
					// var info = VorbisInfo.InitVariableBitRate(Constants.Channels, Constants.Frequency, 0.2f);
					il2cpp_codegen_runtime_class_init_inline(VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367_il2cpp_TypeInfo_var);
					VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_43;
					L_43 = VorbisInfo_InitVariableBitRate_mDE3E3161DBCA3B560C6E5C7DD7AF4C64362DC482(2, ((int32_t)44100), (0.200000003f), NULL);
					__this->___U3CinfoU3E5__12_18 = L_43;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinfoU3E5__12_18), (void*)L_43);
					// var oggStream = new OggStream(new Random().Next());
					Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_44 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
					NullCheck(L_44);
					Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_44, NULL);
					NullCheck(L_44);
					int32_t L_45;
					L_45 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_44);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_46 = (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F*)il2cpp_codegen_object_new(OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F_il2cpp_TypeInfo_var);
					NullCheck(L_46);
					OggStream__ctor_m8E4E1C00D39E711BBCCA27D5E169887486F9ABB4(L_46, L_45, NULL);
					__this->___U3CoggStreamU3E5__13_19 = L_46;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoggStreamU3E5__13_19), (void*)L_46);
					// var comments = new Comments();
					Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D* L_47 = (Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D*)il2cpp_codegen_object_new(Comments_t1AE2072DAC2E882A3C2288427FD461C9E8E2CD6D_il2cpp_TypeInfo_var);
					NullCheck(L_47);
					Comments__ctor_m833E1CB27AA74740302328AFCA37E59CACD7DF7C(L_47, NULL);
					// var infoPacket = HeaderPacketBuilder.BuildInfoPacket(info);
					VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_48 = __this->___U3CinfoU3E5__12_18;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_49;
					L_49 = HeaderPacketBuilder_BuildInfoPacket_m53F9804B62A2D74AC4CCE24D88841A21E66A5B8B(L_48, NULL);
					V_6 = L_49;
					// var commentsPacket = HeaderPacketBuilder.BuildCommentsPacket(comments);
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_50;
					L_50 = HeaderPacketBuilder_BuildCommentsPacket_m6DE34C93E7608D7D73BE9ABD5A76AB7EEFC99E60(L_47, NULL);
					V_7 = L_50;
					// var booksPacket = HeaderPacketBuilder.BuildBooksPacket(info);
					VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_51 = __this->___U3CinfoU3E5__12_18;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_52;
					L_52 = HeaderPacketBuilder_BuildBooksPacket_mC09D883A0CE25C543CD7182F715370B923AB16B1(L_51, NULL);
					V_8 = L_52;
					// oggStream.PacketIn(infoPacket);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_53 = __this->___U3CoggStreamU3E5__13_19;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_54 = V_6;
					NullCheck(L_53);
					OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_53, L_54, NULL);
					// oggStream.PacketIn(commentsPacket);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_55 = __this->___U3CoggStreamU3E5__13_19;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_56 = V_7;
					NullCheck(L_55);
					OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_55, L_56, NULL);
					// oggStream.PacketIn(booksPacket);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_57 = __this->___U3CoggStreamU3E5__13_19;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_58 = V_8;
					NullCheck(L_57);
					OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_57, L_58, NULL);
					goto IL_0390_3;
				}

IL_0284_3:
				{
					// await outStream.WriteAsync(page.Header, 0, page.Header.Length).ConfigureAwait(false);
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_59 = __this->___U3CoutStreamU3E5__7_12;
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_60 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_60);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61;
					L_61 = OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline(L_60, NULL);
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_62 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_62);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63;
					L_63 = OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline(L_62, NULL);
					NullCheck(L_63);
					NullCheck(L_59);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_64;
					L_64 = Stream_WriteAsync_m51D91C94481BB32FE1A876A789C9705F433B133D(L_59, L_61, 0, ((int32_t)(((RuntimeArray*)L_63)->max_length)), NULL);
					NullCheck(L_64);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_65;
					L_65 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_64, (bool)0, NULL);
					V_5 = L_65;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_66;
					L_66 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
					V_4 = L_66;
					bool L_67;
					L_67 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
					if (L_67)
					{
						goto IL_0303_3;
					}
				}
				{
					int32_t L_68 = 1;
					V_0 = L_68;
					__this->___U3CU3E1__state_0 = L_68;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_69 = V_4;
					__this->___U3CU3Eu__1_14 = L_69;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_70 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB(L_70, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB_RuntimeMethod_var);
					goto IL_0c89;
				}

IL_02e6_3:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_71 = __this->___U3CU3Eu__1_14;
					V_4 = L_71;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_72 = (&__this->___U3CU3Eu__1_14);
					il2cpp_codegen_initobj(L_72, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_73 = (-1);
					V_0 = L_73;
					__this->___U3CU3E1__state_0 = L_73;
				}

IL_0303_3:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
					// await outStream.WriteAsync(page.Body, 0, page.Body.Length).ConfigureAwait(false);
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_74 = __this->___U3CoutStreamU3E5__7_12;
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_75 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_75);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76;
					L_76 = OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline(L_75, NULL);
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_77 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_77);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78;
					L_78 = OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline(L_77, NULL);
					NullCheck(L_78);
					NullCheck(L_74);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_79;
					L_79 = Stream_WriteAsync_m51D91C94481BB32FE1A876A789C9705F433B133D(L_74, L_76, 0, ((int32_t)(((RuntimeArray*)L_78)->max_length)), NULL);
					NullCheck(L_79);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_80;
					L_80 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_79, (bool)0, NULL);
					V_5 = L_80;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_81;
					L_81 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
					V_4 = L_81;
					bool L_82;
					L_82 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
					if (L_82)
					{
						goto IL_0389_3;
					}
				}
				{
					int32_t L_83 = 2;
					V_0 = L_83;
					__this->___U3CU3E1__state_0 = L_83;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_84 = V_4;
					__this->___U3CU3Eu__1_14 = L_84;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_85 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB(L_85, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB_RuntimeMethod_var);
					goto IL_0c89;
				}

IL_036c_3:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_86 = __this->___U3CU3Eu__1_14;
					V_4 = L_86;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_87 = (&__this->___U3CU3Eu__1_14);
					il2cpp_codegen_initobj(L_87, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_88 = (-1);
					V_0 = L_88;
					__this->___U3CU3E1__state_0 = L_88;
				}

IL_0389_3:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
				}

IL_0390_3:
				{
					// while (oggStream.PageOut(out page, true))
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_89 = __this->___U3CoggStreamU3E5__13_19;
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E** L_90 = (&__this->___U3CpageU3E5__14_20);
					NullCheck(L_89);
					bool L_91;
					L_91 = OggStream_PageOut_mB4288217DDA3D64FFC298131D829A723B21DEF5D(L_89, L_90, (bool)1, NULL);
					if (L_91)
					{
						goto IL_0284_3;
					}
				}
				{
					goto IL_04b8_3;
				}

IL_03ac_3:
				{
					// await outStream.WriteAsync(page.Header, 0, page.Header.Length).ConfigureAwait(false);
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_92 = __this->___U3CoutStreamU3E5__7_12;
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_93 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_93);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94;
					L_94 = OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline(L_93, NULL);
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_95 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_95);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96;
					L_96 = OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline(L_95, NULL);
					NullCheck(L_96);
					NullCheck(L_92);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_97;
					L_97 = Stream_WriteAsync_m51D91C94481BB32FE1A876A789C9705F433B133D(L_92, L_94, 0, ((int32_t)(((RuntimeArray*)L_96)->max_length)), NULL);
					NullCheck(L_97);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_98;
					L_98 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_97, (bool)0, NULL);
					V_5 = L_98;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_99;
					L_99 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
					V_4 = L_99;
					bool L_100;
					L_100 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
					if (L_100)
					{
						goto IL_042b_3;
					}
				}
				{
					int32_t L_101 = 3;
					V_0 = L_101;
					__this->___U3CU3E1__state_0 = L_101;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_102 = V_4;
					__this->___U3CU3Eu__1_14 = L_102;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_103 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB(L_103, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB_RuntimeMethod_var);
					goto IL_0c89;
				}

IL_040e_3:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_104 = __this->___U3CU3Eu__1_14;
					V_4 = L_104;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_105 = (&__this->___U3CU3Eu__1_14);
					il2cpp_codegen_initobj(L_105, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_106 = (-1);
					V_0 = L_106;
					__this->___U3CU3E1__state_0 = L_106;
				}

IL_042b_3:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
					// await outStream.WriteAsync(page.Body, 0, page.Body.Length).ConfigureAwait(false);
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_107 = __this->___U3CoutStreamU3E5__7_12;
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_108 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_108);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109;
					L_109 = OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline(L_108, NULL);
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_110 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_110);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111;
					L_111 = OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline(L_110, NULL);
					NullCheck(L_111);
					NullCheck(L_107);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_112;
					L_112 = Stream_WriteAsync_m51D91C94481BB32FE1A876A789C9705F433B133D(L_107, L_109, 0, ((int32_t)(((RuntimeArray*)L_111)->max_length)), NULL);
					NullCheck(L_112);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_113;
					L_113 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_112, (bool)0, NULL);
					V_5 = L_113;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_114;
					L_114 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
					V_4 = L_114;
					bool L_115;
					L_115 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
					if (L_115)
					{
						goto IL_04b1_3;
					}
				}
				{
					int32_t L_116 = 4;
					V_0 = L_116;
					__this->___U3CU3E1__state_0 = L_116;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_117 = V_4;
					__this->___U3CU3Eu__1_14 = L_117;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_118 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB(L_118, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB_RuntimeMethod_var);
					goto IL_0c89;
				}

IL_0494_3:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_119 = __this->___U3CU3Eu__1_14;
					V_4 = L_119;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_120 = (&__this->___U3CU3Eu__1_14);
					il2cpp_codegen_initobj(L_120, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_121 = (-1);
					V_0 = L_121;
					__this->___U3CU3E1__state_0 = L_121;
				}

IL_04b1_3:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
				}

IL_04b8_3:
				{
					// while (oggStream.PageOut(out page, true))
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_122 = __this->___U3CoggStreamU3E5__13_19;
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E** L_123 = (&__this->___U3CpageU3E5__14_20);
					NullCheck(L_122);
					bool L_124;
					L_124 = OggStream_PageOut_mB4288217DDA3D64FFC298131D829A723B21DEF5D(L_122, L_123, (bool)1, NULL);
					if (L_124)
					{
						goto IL_03ac_3;
					}
				}
				{
					// var processingState = ProcessingState.Create(info);
					VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_125 = __this->___U3CinfoU3E5__12_18;
					ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_126;
					L_126 = ProcessingState_Create_m3B94BC3F869785D2114DB6801968E8ECE9D03868(L_125, NULL);
					__this->___U3CprocessingStateU3E5__15_21 = L_126;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprocessingStateU3E5__15_21), (void*)L_126);
					// var channelBuffer = new float[info.Channels][];
					VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_127 = __this->___U3CinfoU3E5__12_18;
					NullCheck(L_127);
					int32_t L_128;
					L_128 = VorbisInfo_get_Channels_m58E82686E62F94EB0F17288586FDC1BFB7FB4C2D_inline(L_127, NULL);
					SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_129 = (SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)(SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)SZArrayNew(SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4_il2cpp_TypeInfo_var, (uint32_t)L_128);
					__this->___U3CchannelBufferU3E5__16_22 = L_129;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchannelBufferU3E5__16_22), (void*)L_129);
					// for (var i = 0; i < info.Channels; i++)
					V_9 = 0;
					goto IL_0517_3;
				}

IL_04fb_3:
				{
					// channelBuffer[i] = new float[samples.Length];
					SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_130 = __this->___U3CchannelBufferU3E5__16_22;
					int32_t L_131 = V_9;
					SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_132 = __this->___U3CsamplesU3E5__5_10;
					NullCheck(L_132);
					SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_133 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_132)->max_length)));
					NullCheck(L_130);
					ArrayElementTypeCheck (L_130, L_133);
					(L_130)->SetAt(static_cast<il2cpp_array_size_t>(L_131), (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)L_133);
					// for (var i = 0; i < info.Channels; i++)
					int32_t L_134 = V_9;
					V_9 = ((int32_t)il2cpp_codegen_add(L_134, 1));
				}

IL_0517_3:
				{
					// for (var i = 0; i < info.Channels; i++)
					int32_t L_135 = V_9;
					VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* L_136 = __this->___U3CinfoU3E5__12_18;
					NullCheck(L_136);
					int32_t L_137;
					L_137 = VorbisInfo_get_Channels_m58E82686E62F94EB0F17288586FDC1BFB7FB4C2D_inline(L_136, NULL);
					if ((((int32_t)L_135) < ((int32_t)L_137)))
					{
						goto IL_04fb_3;
					}
				}
				{
					// var shouldStop = false;
					__this->___U3CshouldStopU3E5__17_23 = (bool)0;
					goto IL_0972_3;
				}

IL_0532_3:
				{
					// await Awaiters.UnityMainThread;
					il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
					UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_138;
					L_138 = Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline(NULL);
					il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
					SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_139;
					L_139 = AwaiterExtensions_GetAwaiter_m9380B1F06B59905326F5179D41B51398A3AFB501(L_138, NULL);
					V_10 = L_139;
					SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_140 = V_10;
					NullCheck(L_140);
					bool L_141;
					L_141 = SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7_inline(L_140, NULL);
					if (L_141)
					{
						goto IL_0588_3;
					}
				}
				{
					int32_t L_142 = 5;
					V_0 = L_142;
					__this->___U3CU3E1__state_0 = L_142;
					SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_143 = V_10;
					__this->___U3CU3Eu__2_26 = L_143;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_26), (void*)L_143);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_144 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m3EAA5E413090893E2A09B35FE7EB801DF4323418(L_144, (&V_10), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m3EAA5E413090893E2A09B35FE7EB801DF4323418_RuntimeMethod_var);
					goto IL_0c89;
				}

IL_056b_3:
				{
					RuntimeObject* L_145 = __this->___U3CU3Eu__2_26;
					V_10 = ((SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC*)CastclassClass((RuntimeObject*)L_145, SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_il2cpp_TypeInfo_var));
					__this->___U3CU3Eu__2_26 = NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_26), (void*)NULL);
					int32_t L_146 = (-1);
					V_0 = L_146;
					__this->___U3CU3E1__state_0 = L_146;
				}

IL_0588_3:
				{
					SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_147 = V_10;
					NullCheck(L_147);
					SimpleCoroutineAwaiter_GetResult_m9DBA8062060DD5EC647A669D104B3171384819CC(L_147, NULL);
					// var currentPosition = Microphone.GetPosition(null);
					int32_t L_148;
					L_148 = Microphone_GetPosition_m2AC5DBD3CA663E937FD3F26D5A5461886D44F578((String_t*)NULL, NULL);
					__this->___U3CcurrentPositionU3E5__18_24 = L_148;
					// var distance = currentPosition - lastPosition;
					int32_t L_149 = __this->___U3CcurrentPositionU3E5__18_24;
					int32_t L_150 = __this->___U3ClastPositionU3E5__2_7;
					__this->___U3CdistanceU3E5__19_25 = ((int32_t)il2cpp_codegen_subtract(L_149, L_150));
					// if (distance == 0)
					int32_t L_151 = __this->___U3CdistanceU3E5__19_25;
					if (!L_151)
					{
						goto IL_0972_3;
					}
				}
				{
					// if (clip != null)
					AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_152 = __this->___clip_3;
					il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
					bool L_153;
					L_153 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_152, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
					if (!L_153)
					{
						goto IL_05df_3;
					}
				}
				{
					// clip.GetData(samples, lastPosition);
					AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_154 = __this->___clip_3;
					SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_155 = __this->___U3CsamplesU3E5__5_10;
					int32_t L_156 = __this->___U3ClastPositionU3E5__2_7;
					NullCheck(L_154);
					bool L_157;
					L_157 = AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D(L_154, L_155, L_156, NULL);
				}

IL_05df_3:
				{
					// if (shouldStop)
					bool L_158 = __this->___U3CshouldStopU3E5__17_23;
					if (!L_158)
					{
						goto IL_05ed_3;
					}
				}
				{
					// Microphone.End(null);
					Microphone_End_mDFC9484573BB7DB2DB6FE86B48F45BFA65F6C17E((String_t*)NULL, NULL);
				}

IL_05ed_3:
				{
					// await Task.Delay(1).ConfigureAwait(false);
					il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_159;
					L_159 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(1, NULL);
					NullCheck(L_159);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_160;
					L_160 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_159, (bool)0, NULL);
					V_5 = L_160;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_161;
					L_161 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
					V_4 = L_161;
					bool L_162;
					L_162 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
					if (L_162)
					{
						goto IL_064e_3;
					}
				}
				{
					int32_t L_163 = 6;
					V_0 = L_163;
					__this->___U3CU3E1__state_0 = L_163;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_164 = V_4;
					__this->___U3CU3Eu__1_14 = L_164;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_165 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB(L_165, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB_RuntimeMethod_var);
					goto IL_0c89;
				}

IL_0631_3:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_166 = __this->___U3CU3Eu__1_14;
					V_4 = L_166;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_167 = (&__this->___U3CU3Eu__1_14);
					il2cpp_codegen_initobj(L_167, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_168 = (-1);
					V_0 = L_168;
					__this->___U3CU3E1__state_0 = L_168;
				}

IL_064e_3:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
					// if (currentPosition > lastPosition)
					int32_t L_169 = __this->___U3CcurrentPositionU3E5__18_24;
					int32_t L_170 = __this->___U3ClastPositionU3E5__2_7;
					if ((((int32_t)L_169) <= ((int32_t)L_170)))
					{
						goto IL_06c8_3;
					}
				}
				{
					// var length = currentPosition - lastPosition;
					int32_t L_171 = __this->___U3CcurrentPositionU3E5__18_24;
					int32_t L_172 = __this->___U3ClastPositionU3E5__2_7;
					V_11 = ((int32_t)il2cpp_codegen_subtract(L_171, L_172));
					// for (var i = 0; i < length; i++)
					V_12 = 0;
					goto IL_06a2_3;
				}

IL_0677_3:
				{
					// var pcm = samples[i];
					SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_173 = __this->___U3CsamplesU3E5__5_10;
					int32_t L_174 = V_12;
					NullCheck(L_173);
					int32_t L_175 = L_174;
					float L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
					V_13 = L_176;
					// channelBuffer[0][i] = pcm;
					SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_177 = __this->___U3CchannelBufferU3E5__16_22;
					NullCheck(L_177);
					int32_t L_178 = 0;
					SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_179 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
					int32_t L_180 = V_12;
					float L_181 = V_13;
					NullCheck(L_179);
					(L_179)->SetAt(static_cast<il2cpp_array_size_t>(L_180), (float)L_181);
					// channelBuffer[1][i] = pcm;
					SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_182 = __this->___U3CchannelBufferU3E5__16_22;
					NullCheck(L_182);
					int32_t L_183 = 1;
					SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_184 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
					int32_t L_185 = V_12;
					float L_186 = V_13;
					NullCheck(L_184);
					(L_184)->SetAt(static_cast<il2cpp_array_size_t>(L_185), (float)L_186);
					// for (var i = 0; i < length; i++)
					int32_t L_187 = V_12;
					V_12 = ((int32_t)il2cpp_codegen_add(L_187, 1));
				}

IL_06a2_3:
				{
					// for (var i = 0; i < length; i++)
					int32_t L_188 = V_12;
					int32_t L_189 = V_11;
					if ((((int32_t)L_188) < ((int32_t)L_189)))
					{
						goto IL_0677_3;
					}
				}
				{
					// processingState.WriteData(channelBuffer, length);
					ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_190 = __this->___U3CprocessingStateU3E5__15_21;
					SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_191 = __this->___U3CchannelBufferU3E5__16_22;
					int32_t L_192 = V_11;
					NullCheck(L_190);
					ProcessingState_WriteData_mC3B253ED978C167C2CEB39C1CA963C014E840094(L_190, L_191, L_192, 0, NULL);
					// lastPosition = currentPosition;
					int32_t L_193 = __this->___U3CcurrentPositionU3E5__18_24;
					__this->___U3ClastPositionU3E5__2_7 = L_193;
				}

IL_06c8_3:
				{
					// while (!oggStream.Finished &&
					//        processingState.PacketOut(out var packet))
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_194 = __this->___U3CoggStreamU3E5__13_19;
					NullCheck(L_194);
					bool L_195;
					L_195 = OggStream_get_Finished_m0F248A5DEE81F2AC0AF26393BEB996C6DCB71189_inline(L_194, NULL);
					if (L_195)
					{
						goto IL_0834_3;
					}
				}
				{
					ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_196 = __this->___U3CprocessingStateU3E5__15_21;
					NullCheck(L_196);
					bool L_197;
					L_197 = ProcessingState_PacketOut_m23D6513BDCD727EBA656842BE0D21CB63E7806D2(L_196, (&V_14), NULL);
					if (!L_197)
					{
						goto IL_0834_3;
					}
				}
				{
					// oggStream.PacketIn(packet);
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_198 = __this->___U3CoggStreamU3E5__13_19;
					OggPacket_t1006DF553F2E808DA9C711CB43ABCCDEDE4D7BA5* L_199 = V_14;
					NullCheck(L_198);
					OggStream_PacketIn_mEACF92AA122EF7477F92A6A2585D8AA09B69EAD5(L_198, L_199, NULL);
					goto IL_0808_3;
				}

IL_06fc_3:
				{
					// await outStream.WriteAsync(page.Header, 0, page.Header.Length).ConfigureAwait(false);
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_200 = __this->___U3CoutStreamU3E5__7_12;
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_201 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_201);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_202;
					L_202 = OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline(L_201, NULL);
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_203 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_203);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_204;
					L_204 = OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline(L_203, NULL);
					NullCheck(L_204);
					NullCheck(L_200);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_205;
					L_205 = Stream_WriteAsync_m51D91C94481BB32FE1A876A789C9705F433B133D(L_200, L_202, 0, ((int32_t)(((RuntimeArray*)L_204)->max_length)), NULL);
					NullCheck(L_205);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_206;
					L_206 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_205, (bool)0, NULL);
					V_5 = L_206;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_207;
					L_207 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
					V_4 = L_207;
					bool L_208;
					L_208 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
					if (L_208)
					{
						goto IL_077b_3;
					}
				}
				{
					int32_t L_209 = 7;
					V_0 = L_209;
					__this->___U3CU3E1__state_0 = L_209;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_210 = V_4;
					__this->___U3CU3Eu__1_14 = L_210;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_211 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB(L_211, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB_RuntimeMethod_var);
					goto IL_0c89;
				}

IL_075e_3:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_212 = __this->___U3CU3Eu__1_14;
					V_4 = L_212;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_213 = (&__this->___U3CU3Eu__1_14);
					il2cpp_codegen_initobj(L_213, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_214 = (-1);
					V_0 = L_214;
					__this->___U3CU3E1__state_0 = L_214;
				}

IL_077b_3:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
					// await outStream.WriteAsync(page.Body, 0, page.Body.Length).ConfigureAwait(false);
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_215 = __this->___U3CoutStreamU3E5__7_12;
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_216 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_216);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_217;
					L_217 = OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline(L_216, NULL);
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_218 = __this->___U3CpageU3E5__14_20;
					NullCheck(L_218);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219;
					L_219 = OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline(L_218, NULL);
					NullCheck(L_219);
					NullCheck(L_215);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_220;
					L_220 = Stream_WriteAsync_m51D91C94481BB32FE1A876A789C9705F433B133D(L_215, L_217, 0, ((int32_t)(((RuntimeArray*)L_219)->max_length)), NULL);
					NullCheck(L_220);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_221;
					L_221 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_220, (bool)0, NULL);
					V_5 = L_221;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_222;
					L_222 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
					V_4 = L_222;
					bool L_223;
					L_223 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
					if (L_223)
					{
						goto IL_0801_3;
					}
				}
				{
					int32_t L_224 = 8;
					V_0 = L_224;
					__this->___U3CU3E1__state_0 = L_224;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_225 = V_4;
					__this->___U3CU3Eu__1_14 = L_225;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_226 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB(L_226, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB_RuntimeMethod_var);
					goto IL_0c89;
				}

IL_07e4_3:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_227 = __this->___U3CU3Eu__1_14;
					V_4 = L_227;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_228 = (&__this->___U3CU3Eu__1_14);
					il2cpp_codegen_initobj(L_228, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_229 = (-1);
					V_0 = L_229;
					__this->___U3CU3E1__state_0 = L_229;
				}

IL_0801_3:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
				}

IL_0808_3:
				{
					// while (!oggStream.Finished &&
					//        oggStream.PageOut(out page, false))
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_230 = __this->___U3CoggStreamU3E5__13_19;
					NullCheck(L_230);
					bool L_231;
					L_231 = OggStream_get_Finished_m0F248A5DEE81F2AC0AF26393BEB996C6DCB71189_inline(L_230, NULL);
					if (L_231)
					{
						goto IL_06c8_3;
					}
				}
				{
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_232 = __this->___U3CoggStreamU3E5__13_19;
					OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E** L_233 = (&__this->___U3CpageU3E5__14_20);
					NullCheck(L_232);
					bool L_234;
					L_234 = OggStream_PageOut_mB4288217DDA3D64FFC298131D829A723B21DEF5D(L_232, L_233, (bool)0, NULL);
					if (L_234)
					{
						goto IL_06fc_3;
					}
				}
				{
					// }
					goto IL_06c8_3;
				}

IL_0834_3:
				{
					// await Awaiters.UnityMainThread;
					il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
					UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_235;
					L_235 = Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline(NULL);
					il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
					SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_236;
					L_236 = AwaiterExtensions_GetAwaiter_m9380B1F06B59905326F5179D41B51398A3AFB501(L_235, NULL);
					V_10 = L_236;
					SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_237 = V_10;
					NullCheck(L_237);
					bool L_238;
					L_238 = SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7_inline(L_237, NULL);
					if (L_238)
					{
						goto IL_088b_3;
					}
				}
				{
					int32_t L_239 = ((int32_t)9);
					V_0 = L_239;
					__this->___U3CU3E1__state_0 = L_239;
					SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_240 = V_10;
					__this->___U3CU3Eu__2_26 = L_240;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_26), (void*)L_240);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_241 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m3EAA5E413090893E2A09B35FE7EB801DF4323418(L_241, (&V_10), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m3EAA5E413090893E2A09B35FE7EB801DF4323418_RuntimeMethod_var);
					goto IL_0c89;
				}

IL_086e_3:
				{
					RuntimeObject* L_242 = __this->___U3CU3Eu__2_26;
					V_10 = ((SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC*)CastclassClass((RuntimeObject*)L_242, SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_il2cpp_TypeInfo_var));
					__this->___U3CU3Eu__2_26 = NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_26), (void*)NULL);
					int32_t L_243 = (-1);
					V_0 = L_243;
					__this->___U3CU3E1__state_0 = L_243;
				}

IL_088b_3:
				{
					SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_244 = V_10;
					NullCheck(L_244);
					SimpleCoroutineAwaiter_GetResult_m9DBA8062060DD5EC647A669D104B3171384819CC(L_244, NULL);
					// if (RecordingManager.EnableDebug)
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_245;
					L_245 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
					if (!L_245)
					{
						goto IL_08fb_3;
					}
				}
				{
					// Debug.Log($"[{nameof(RecordingManager)}] State: {nameof(RecordingManager.IsRecording)}? {RecordingManager.IsRecording} | {(RecordingManager.IsRecording ? distance : currentPosition)} | isCancelled? {cancellationToken.IsCancellationRequested}");
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_246 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_247 = L_246;
					NullCheck(L_247);
					ArrayElementTypeCheck (L_247, _stringLiteral507FAB1F5B697A4F6D4421FA45C85C74E8BA6C07);
					(L_247)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral507FAB1F5B697A4F6D4421FA45C85C74E8BA6C07);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_248 = L_247;
					NullCheck(L_248);
					ArrayElementTypeCheck (L_248, _stringLiteralFA385B67619E3DB03702032DC6EE1DD96F4E1616);
					(L_248)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralFA385B67619E3DB03702032DC6EE1DD96F4E1616);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_249 = L_248;
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_250;
					L_250 = RecordingManager_get_IsRecording_m9608BD09AE881A6C754AA87D3FA0DBAAAE570842(NULL);
					bool L_251 = L_250;
					RuntimeObject* L_252 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_251);
					NullCheck(L_249);
					ArrayElementTypeCheck (L_249, L_252);
					(L_249)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_252);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_253 = L_249;
					bool L_254;
					L_254 = RecordingManager_get_IsRecording_m9608BD09AE881A6C754AA87D3FA0DBAAAE570842(NULL);
					G_B77_0 = 3;
					G_B77_1 = L_253;
					G_B77_2 = L_253;
					G_B77_3 = _stringLiteral5F48486DCAFDD71732AF9FBCB99B1BF3BAC89C0E;
					if (L_254)
					{
						G_B78_0 = 3;
						G_B78_1 = L_253;
						G_B78_2 = L_253;
						G_B78_3 = _stringLiteral5F48486DCAFDD71732AF9FBCB99B1BF3BAC89C0E;
						goto IL_08d2_3;
					}
				}
				{
					int32_t L_255 = __this->___U3CcurrentPositionU3E5__18_24;
					G_B79_0 = L_255;
					G_B79_1 = G_B77_0;
					G_B79_2 = G_B77_1;
					G_B79_3 = G_B77_2;
					G_B79_4 = G_B77_3;
					goto IL_08d8_3;
				}

IL_08d2_3:
				{
					int32_t L_256 = __this->___U3CdistanceU3E5__19_25;
					G_B79_0 = L_256;
					G_B79_1 = G_B78_0;
					G_B79_2 = G_B78_1;
					G_B79_3 = G_B78_2;
					G_B79_4 = G_B78_3;
				}

IL_08d8_3:
				{
					int32_t L_257 = G_B79_0;
					RuntimeObject* L_258 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_257);
					NullCheck(G_B79_2);
					ArrayElementTypeCheck (G_B79_2, L_258);
					(G_B79_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B79_1), (RuntimeObject*)L_258);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_259 = G_B79_3;
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_260 = (&__this->___cancellationToken_5);
					bool L_261;
					L_261 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_260, NULL);
					bool L_262 = L_261;
					RuntimeObject* L_263 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_262);
					NullCheck(L_259);
					ArrayElementTypeCheck (L_259, L_263);
					(L_259)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_263);
					String_t* L_264;
					L_264 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B79_4, L_259, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_264, NULL);
				}

IL_08fb_3:
				{
					// if (currentPosition == maxClipLength ||
					//     cancellationToken.IsCancellationRequested)
					int32_t L_265 = __this->___U3CcurrentPositionU3E5__18_24;
					int32_t L_266 = __this->___U3CmaxClipLengthU3E5__4_9;
					if ((((int32_t)L_265) == ((int32_t)L_266)))
					{
						goto IL_0916_3;
					}
				}
				{
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_267 = (&__this->___cancellationToken_5);
					bool L_268;
					L_268 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_267, NULL);
					if (!L_268)
					{
						goto IL_0972_3;
					}
				}

IL_0916_3:
				{
					// if (RecordingManager.IsRecording)
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_269;
					L_269 = RecordingManager_get_IsRecording_m9608BD09AE881A6C754AA87D3FA0DBAAAE570842(NULL);
					if (!L_269)
					{
						goto IL_0934_3;
					}
				}
				{
					// RecordingManager.IsRecording = false;
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					RecordingManager_set_IsRecording_mA048B915DF22BC4B0BC60AF4BEC7879D86934953((bool)0, NULL);
					// if (RecordingManager.EnableDebug)
					bool L_270;
					L_270 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
					if (!L_270)
					{
						goto IL_0934_3;
					}
				}
				{
					// Debug.Log($"[{nameof(RecordingManager)}] Finished recording...");
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD499752FDC638D47EB8D55FF7F7664AA81F236E5, NULL);
				}

IL_0934_3:
				{
					// if (shouldStop)
					bool L_271 = __this->___U3CshouldStopU3E5__17_23;
					if (!L_271)
					{
						goto IL_095a_3;
					}
				}
				{
					// if (RecordingManager.EnableDebug)
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_272;
					L_272 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
					if (!L_272)
					{
						goto IL_094d_3;
					}
				}
				{
					// Debug.Log($"[{nameof(RecordingManager)}] Writing end of stream...");
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral20D93A6FEBBBBDAC8D8A470059938C46DCF62D90, NULL);
				}

IL_094d_3:
				{
					// processingState.WriteEndOfStream();
					ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA* L_273 = __this->___U3CprocessingStateU3E5__15_21;
					NullCheck(L_273);
					ProcessingState_WriteEndOfStream_m4DFC4FC0362C52F0E8C91C0D702C231E053A5C95(L_273, NULL);
					// break;
					goto IL_0982_3;
				}

IL_095a_3:
				{
					// if (RecordingManager.EnableDebug)
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_274;
					L_274 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
					if (!L_274)
					{
						goto IL_096b_3;
					}
				}
				{
					// Debug.Log($"[{nameof(RecordingManager)}] Stop stream requested...");
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5617C415DAB0B64021CC2F09FEBF2897B0CB1D68, NULL);
				}

IL_096b_3:
				{
					// shouldStop = true;
					__this->___U3CshouldStopU3E5__17_23 = (bool)1;
				}

IL_0972_3:
				{
					// while (!oggStream.Finished)
					OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_275 = __this->___U3CoggStreamU3E5__13_19;
					NullCheck(L_275);
					bool L_276;
					L_276 = OggStream_get_Finished_m0F248A5DEE81F2AC0AF26393BEB996C6DCB71189_inline(L_275, NULL);
					if (!L_276)
					{
						goto IL_0532_3;
					}
				}

IL_0982_3:
				{
					// if (RecordingManager.EnableDebug)
					il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
					bool L_277;
					L_277 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
					if (!L_277)
					{
						goto IL_0993_3;
					}
				}
				{
					// Debug.Log($"[{nameof(RecordingManager)}] Flush stream...");
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4330481298E05E651479321D3F2F1AF6D644E5F7, NULL);
				}

IL_0993_3:
				{
					// await outStream.FlushAsync().ConfigureAwait(false);
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_278 = __this->___U3CoutStreamU3E5__7_12;
					NullCheck(L_278);
					Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_279;
					L_279 = Stream_FlushAsync_m2C8614B69BF3C562B2BEFACAC1183FA5F3C2BBEF(L_278, NULL);
					NullCheck(L_279);
					ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_280;
					L_280 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_279, (bool)0, NULL);
					V_5 = L_280;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_281;
					L_281 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
					V_4 = L_281;
					bool L_282;
					L_282 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
					if (L_282)
					{
						goto IL_09fa_3;
					}
				}
				{
					int32_t L_283 = ((int32_t)10);
					V_0 = L_283;
					__this->___U3CU3E1__state_0 = L_283;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_284 = V_4;
					__this->___U3CU3Eu__1_14 = L_284;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_14))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_285 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB(L_285, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m8BEEFF3B557FBC27FB6FBC25DDDD17342B8199CB_RuntimeMethod_var);
					goto IL_0c89;
				}

IL_09dd_3:
				{
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_286 = __this->___U3CU3Eu__1_14;
					V_4 = L_286;
					ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_287 = (&__this->___U3CU3Eu__1_14);
					il2cpp_codegen_initobj(L_287, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
					int32_t L_288 = (-1);
					V_0 = L_288;
					__this->___U3CU3E1__state_0 = L_288;
				}

IL_09fa_3:
				{
					ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
					// }
					__this->___U3CinfoU3E5__12_18 = (VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinfoU3E5__12_18), (void*)(VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367*)NULL);
					__this->___U3CoggStreamU3E5__13_19 = (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoggStreamU3E5__13_19), (void*)(OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F*)NULL);
					__this->___U3CpageU3E5__14_20 = (OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpageU3E5__14_20), (void*)(OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E*)NULL);
					__this->___U3CprocessingStateU3E5__15_21 = (ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprocessingStateU3E5__15_21), (void*)(ProcessingState_tC19284227974205273F153FF43722EC7BDBD3CEA*)NULL);
					__this->___U3CchannelBufferU3E5__16_22 = (SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchannelBufferU3E5__16_22), (void*)(SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*)NULL);
					goto IL_0a34_2;
				}
			}// end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0a26_2;
				}
				throw e;
			}

CATCH_0a26_2:
			{// begin catch(System.Exception)
				// Debug.LogError(e);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// return null;
				__this->___U3CU3E7__wrap10_17 = (Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap10_17), (void*)(Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*)NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0a36_2;
			}// end catch (depth: 3)

IL_0a34_2:
			{
				goto IL_0a4b_1;
			}

IL_0a36_2:
			{
				__this->___U3CU3E7__wrap9_16 = 1;
				goto IL_0a4b_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0a3f_1;
			}
			throw e;
		}

CATCH_0a3f_1:
		{// begin catch(System.Object)
			V_15 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_289 = V_15;
			__this->___U3CU3E7__wrap8_15 = L_289;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap8_15), (void*)L_289);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0a4b_1;
		}// end catch (depth: 2)

IL_0a4b_1:
		{
			// if (RecordingManager.EnableDebug)
			il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
			bool L_290;
			L_290 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
			if (!L_290)
			{
				goto IL_0a5c_1;
			}
		}
		{
			// Debug.Log($"[{nameof(RecordingManager)}] Dispose stream...");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6D64A34D3275966681FD9DADB57684C569829DD3, NULL);
		}

IL_0a5c_1:
		{
			// await outStream.DisposeAsync().ConfigureAwait(false);
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_291 = __this->___U3CoutStreamU3E5__7_12;
			NullCheck(L_291);
			ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_292;
			L_292 = VirtualFuncInvoker0< ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F >::Invoke(38 /* System.Threading.Tasks.ValueTask System.IO.Stream::DisposeAsync() */, L_291);
			V_17 = L_292;
			ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 L_293;
			L_293 = ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline((&V_17), (bool)0, NULL);
			V_18 = L_293;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_294;
			L_294 = ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline((&V_18), NULL);
			V_16 = L_294;
			bool L_295;
			L_295 = ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline((&V_16), NULL);
			if (L_295)
			{
				goto IL_0ac7_1;
			}
		}
		{
			int32_t L_296 = ((int32_t)11);
			V_0 = L_296;
			__this->___U3CU3E1__state_0 = L_296;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_297 = V_16;
			__this->___U3CU3Eu__3_27 = L_297;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_27))->____value_0))->____obj_1), (void*)NULL);
			AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_298 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m473ABB3F48BD701A87B9BAC3A67C49338DF5F641(L_298, (&V_16), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m473ABB3F48BD701A87B9BAC3A67C49338DF5F641_RuntimeMethod_var);
			goto IL_0c89;
		}

IL_0aaa_1:
		{
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_299 = __this->___U3CU3Eu__3_27;
			V_16 = L_299;
			ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* L_300 = (&__this->___U3CU3Eu__3_27);
			il2cpp_codegen_initobj(L_300, sizeof(ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D));
			int32_t L_301 = (-1);
			V_0 = L_301;
			__this->___U3CU3E1__state_0 = L_301;
		}

IL_0ac7_1:
		{
			ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline((&V_16), NULL);
			RuntimeObject* L_302 = __this->___U3CU3E7__wrap8_15;
			V_15 = L_302;
			RuntimeObject* L_303 = V_15;
			if (!L_303)
			{
				goto IL_0af1_1;
			}
		}
		{
			RuntimeObject* L_304 = V_15;
			Exception_t* L_305 = ((Exception_t*)IsInstClass((RuntimeObject*)L_304, Exception_t_il2cpp_TypeInfo_var));
			G_B110_0 = L_305;
			if (L_305)
			{
				G_B111_0 = L_305;
				goto IL_0ae7_1;
			}
		}
		{
			RuntimeObject* L_306 = V_15;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_306, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStreamSaveToDiskAsyncU3Ed__8_MoveNext_mCBC42E1EDBA2A50AE71C7A1ADF2D105692108800_RuntimeMethod_var)));
		}

IL_0ae7_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_307;
			L_307 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B111_0, NULL);
			NullCheck(L_307);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_307, NULL);
		}

IL_0af1_1:
		{
			int32_t L_308 = __this->___U3CU3E7__wrap9_16;
			V_19 = L_308;
			int32_t L_309 = V_19;
			if ((!(((uint32_t)L_309) == ((uint32_t)1))))
			{
				goto IL_0b0a_1;
			}
		}
		{
			Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* L_310 = __this->___U3CU3E7__wrap10_17;
			V_1 = L_310;
			goto IL_0c52;
		}

IL_0b0a_1:
		{
			__this->___U3CU3E7__wrap8_15 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap8_15), (void*)NULL);
			__this->___U3CU3E7__wrap10_17 = (Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap10_17), (void*)(Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*)NULL);
			// if (RecordingManager.EnableDebug)
			il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
			bool L_311;
			L_311 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
			if (!L_311)
			{
				goto IL_0b29_1;
			}
		}
		{
			// Debug.Log($"[{nameof(RecordingManager)}] Copying recording data stream...");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0A71CFFD786404158D51A0F7A79AE1902FAAF2A7, NULL);
		}

IL_0b29_1:
		{
			// var microphoneData = new float[lastPosition];
			int32_t L_312 = __this->___U3ClastPositionU3E5__2_7;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_313 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_312);
			__this->___U3CmicrophoneDataU3E5__8_13 = L_313;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmicrophoneDataU3E5__8_13), (void*)L_313);
			// Array.Copy(samples, microphoneData, microphoneData.Length - 1);
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_314 = __this->___U3CsamplesU3E5__5_10;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_315 = __this->___U3CmicrophoneDataU3E5__8_13;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_316 = __this->___U3CmicrophoneDataU3E5__8_13;
			NullCheck(L_316);
			Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_314, (RuntimeArray*)L_315, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_316)->max_length)), 1)), NULL);
			// await Awaiters.UnityMainThread;
			il2cpp_codegen_runtime_class_init_inline(Awaiters_t32792416B95E3C6D6C7810C5B2F8F763DE8A835A_il2cpp_TypeInfo_var);
			UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* L_317;
			L_317 = Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline(NULL);
			il2cpp_codegen_runtime_class_init_inline(AwaiterExtensions_tA7E9886F75972709113F2E573D4099F5DDD0C23C_il2cpp_TypeInfo_var);
			SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_318;
			L_318 = AwaiterExtensions_GetAwaiter_m9380B1F06B59905326F5179D41B51398A3AFB501(L_317, NULL);
			V_10 = L_318;
			SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_319 = V_10;
			NullCheck(L_319);
			bool L_320;
			L_320 = SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7_inline(L_319, NULL);
			if (L_320)
			{
				goto IL_0bac_1;
			}
		}
		{
			int32_t L_321 = ((int32_t)12);
			V_0 = L_321;
			__this->___U3CU3E1__state_0 = L_321;
			SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_322 = V_10;
			__this->___U3CU3Eu__2_26 = L_322;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_26), (void*)L_322);
			AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_323 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m3EAA5E413090893E2A09B35FE7EB801DF4323418(L_323, (&V_10), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisSimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_TisU3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C_m3EAA5E413090893E2A09B35FE7EB801DF4323418_RuntimeMethod_var);
			goto IL_0c89;
		}

IL_0b8f_1:
		{
			RuntimeObject* L_324 = __this->___U3CU3Eu__2_26;
			V_10 = ((SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC*)CastclassClass((RuntimeObject*)L_324, SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC_il2cpp_TypeInfo_var));
			__this->___U3CU3Eu__2_26 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Eu__2_26), (void*)NULL);
			int32_t L_325 = (-1);
			V_0 = L_325;
			__this->___U3CU3E1__state_0 = L_325;
		}

IL_0bac_1:
		{
			SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* L_326 = V_10;
			NullCheck(L_326);
			SimpleCoroutineAwaiter_GetResult_m9DBA8062060DD5EC647A669D104B3171384819CC(L_326, NULL);
			// var newClip = AudioClip.Create(clipName, microphoneData.Length, 1, Constants.Frequency, false);
			String_t* L_327 = __this->___U3CclipNameU3E5__3_8;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_328 = __this->___U3CmicrophoneDataU3E5__8_13;
			NullCheck(L_328);
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_329;
			L_329 = AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB(L_327, ((int32_t)(((RuntimeArray*)L_328)->max_length)), 1, ((int32_t)44100), (bool)0, NULL);
			V_2 = L_329;
			// newClip.SetData(microphoneData, 0);
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_330 = V_2;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_331 = __this->___U3CmicrophoneDataU3E5__8_13;
			NullCheck(L_330);
			bool L_332;
			L_332 = AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3(L_330, L_331, 0, NULL);
			// var result = new Tuple<string, AudioClip>(path, newClip);
			String_t* L_333 = __this->___U3CpathU3E5__6_11;
			AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_334 = V_2;
			Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* L_335 = (Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744*)il2cpp_codegen_object_new(Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744_il2cpp_TypeInfo_var);
			NullCheck(L_335);
			Tuple_2__ctor_mB3628B71825226B713F07E9520DA6487ACBDEBCE(L_335, L_333, L_334, Tuple_2__ctor_mB3628B71825226B713F07E9520DA6487ACBDEBCE_RuntimeMethod_var);
			V_3 = L_335;
			// RecordingManager.IsProcessing = false;
			il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
			RecordingManager_set_IsProcessing_m1645A71070F453EDFC800D4083F5C3F5DCD2F8C1((bool)0, NULL);
			// if (RecordingManager.EnableDebug)
			bool L_336;
			L_336 = RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline(NULL);
			if (!L_336)
			{
				goto IL_0c00_1;
			}
		}
		{
			// Debug.Log($"[{nameof(RecordingManager)}] Finished processing...");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral722E944F9F31C8EF9F20F7A53867EAA97FD36488, NULL);
		}

IL_0c00_1:
		{
			// callback?.Invoke(result);
			Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* L_337 = __this->___callback_6;
			Action_1_t041A6D086D5C1306D365371848FC626691FE9BF4* L_338 = L_337;
			G_B122_0 = L_338;
			if (L_338)
			{
				G_B123_0 = L_338;
				goto IL_0c0c_1;
			}
		}
		{
			goto IL_0c12_1;
		}

IL_0c0c_1:
		{
			Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* L_339 = V_3;
			NullCheck(G_B123_0);
			Action_1_Invoke_mFF8241424A9BAD483DBC9139F1FB9A34D9AE62AE_inline(G_B123_0, L_339, NULL);
		}

IL_0c12_1:
		{
			// return result;
			Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* L_340 = V_3;
			V_1 = L_340;
			goto IL_0c52;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0c16;
		}
		throw e;
	}

CATCH_0c16:
	{// begin catch(System.Exception)
		V_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CclipNameU3E5__3_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclipNameU3E5__3_8), (void*)(String_t*)NULL);
		__this->___U3CsamplesU3E5__5_10 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsamplesU3E5__5_10), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL);
		__this->___U3CpathU3E5__6_11 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3E5__6_11), (void*)(String_t*)NULL);
		__this->___U3CoutStreamU3E5__7_12 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutStreamU3E5__7_12), (void*)(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)NULL);
		__this->___U3CmicrophoneDataU3E5__8_13 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmicrophoneDataU3E5__8_13), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL);
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_341 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_342 = V_20;
		AsyncTaskMethodBuilder_1_SetException_m8A172BF2B83B7862484348C6E1DB5311C125BAC9(L_341, L_342, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m8A172BF2B83B7862484348C6E1DB5311C125BAC9_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0c89;
	}// end catch (depth: 1)

IL_0c52:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CclipNameU3E5__3_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclipNameU3E5__3_8), (void*)(String_t*)NULL);
		__this->___U3CsamplesU3E5__5_10 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsamplesU3E5__5_10), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL);
		__this->___U3CpathU3E5__6_11 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3E5__6_11), (void*)(String_t*)NULL);
		__this->___U3CoutStreamU3E5__7_12 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutStreamU3E5__7_12), (void*)(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)NULL);
		__this->___U3CmicrophoneDataU3E5__8_13 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmicrophoneDataU3E5__8_13), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL);
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_343 = (&__this->___U3CU3Et__builder_1);
		Tuple_2_t51FBF01750D2657CDFCFC10CDE0176FE2B6DC744* L_344 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m68FC6A48AFEF15775269F9C82820919FCD0ED79A(L_343, L_344, AsyncTaskMethodBuilder_1_SetResult_m68FC6A48AFEF15775269F9C82820919FCD0ED79A_RuntimeMethod_var);
	}

IL_0c89:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStreamSaveToDiskAsyncU3Ed__8_MoveNext_mCBC42E1EDBA2A50AE71C7A1ADF2D105692108800_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C*>(__this + _offset);
	U3CStreamSaveToDiskAsyncU3Ed__8_MoveNext_mCBC42E1EDBA2A50AE71C7A1ADF2D105692108800(_thisAdjusted, method);
}
// System.Void Utilities.Encoding.OggVorbis.OggEncoder/<StreamSaveToDiskAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamSaveToDiskAsyncU3Ed__8_SetStateMachine_m9F566FCDF7C6DA32B25FD459540595C3433D99E3 (U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9B2D0EEB3A691A059AC744AC18B8815504A95483_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t14BD8B601EF132DBE61061372BC8D236627434CD* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9B2D0EEB3A691A059AC744AC18B8815504A95483(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9B2D0EEB3A691A059AC744AC18B8815504A95483_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStreamSaveToDiskAsyncU3Ed__8_SetStateMachine_m9F566FCDF7C6DA32B25FD459540595C3433D99E3_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStreamSaveToDiskAsyncU3Ed__8_t6C96E26AA8243E951E2CCB7D9DCFD1D36357653C*>(__this + _offset);
	U3CStreamSaveToDiskAsyncU3Ed__8_SetStateMachine_m9F566FCDF7C6DA32B25FD459540595C3433D99E3(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Utilities.Encoding.OggVorbis.OggExtensions::FlushPages(OggVorbisEncoder.OggStream,System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OggExtensions_FlushPages_m80A7451A01D64C42C118F3C0FD66EF85B47239D3 (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* ___0_oggStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_output, bool ___2_force, const RuntimeMethod* method) 
{
	OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* V_0 = NULL;

IL_0000:
	{
		// while (oggStream.PageOut(out var page, force))
		OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_0 = ___0_oggStream;
		bool L_1 = ___2_force;
		NullCheck(L_0);
		bool L_2;
		L_2 = OggStream_PageOut_mB4288217DDA3D64FFC298131D829A723B21DEF5D(L_0, (&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// output.Write(page.Header, 0, page.Header.Length);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___1_output;
		OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline(L_4, NULL);
		OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline(L_6, NULL);
		NullCheck(L_7);
		NullCheck(L_3);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_5, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)));
		// output.Write(page.Body, 0, page.Body.Length);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___1_output;
		OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline(L_9, NULL);
		OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_11 = V_0;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline(L_11, NULL);
		NullCheck(L_12);
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_10, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)));
		// }
		goto IL_0000;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task Utilities.Encoding.OggVorbis.OggExtensions::FlushPagesAsync(OggVorbisEncoder.OggStream,System.IO.Stream,System.Boolean,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* OggExtensions_FlushPagesAsync_mD18E9E0C01BB557A9574B2CA14E12072F5D60790 (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* ___0_oggStream, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_output, bool ___2_force, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_mF3FBB026A792B00BE69E5B7EF51B511F0B23F4F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76 V_0;
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
		OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_1 = ___0_oggStream;
		(&V_0)->___oggStream_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___oggStream_2), (void*)L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___1_output;
		(&V_0)->___output_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___output_4), (void*)L_2);
		bool L_3 = ___2_force;
		(&V_0)->___force_3 = L_3;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___3_cancellationToken;
		(&V_0)->___cancellationToken_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_5))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_mF3FBB026A792B00BE69E5B7EF51B511F0B23F4F2(L_5, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_mF3FBB026A792B00BE69E5B7EF51B511F0B23F4F2_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_6, NULL);
		return L_7;
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
// System.Void Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushPagesAsyncU3Ed__1_MoveNext_mA7708BD6637BECE6A84C0FC2B99FB3FD436EACF2 (U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_m392C1A1BE7A901149A0B0BDCADCAE2645B797D37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
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
				goto IL_0089_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0105_1;
			}
		}

IL_0011_1:
		{
			// while (oggStream.PageOut(out var page, force))
			OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* L_3 = __this->___oggStream_2;
			OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E** L_4 = (&__this->___U3CpageU3E5__2_6);
			bool L_5 = __this->___force_3;
			NullCheck(L_3);
			bool L_6;
			L_6 = OggStream_PageOut_mB4288217DDA3D64FFC298131D829A723B21DEF5D(L_3, L_4, L_5, NULL);
			if (!L_6)
			{
				goto IL_012d_1;
			}
		}
		{
			// await output.WriteAsync(page.Header, 0, page.Header.Length, cancellationToken);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___output_4;
			OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_8 = __this->___U3CpageU3E5__2_6;
			NullCheck(L_8);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
			L_9 = OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline(L_8, NULL);
			OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_10 = __this->___U3CpageU3E5__2_6;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline(L_10, NULL);
			NullCheck(L_11);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = __this->___cancellationToken_5;
			NullCheck(L_7);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_13;
			L_13 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(29 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_7, L_9, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12);
			NullCheck(L_13);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14;
			L_14 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_13, NULL);
			V_1 = L_14;
			bool L_15;
			L_15 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_15)
			{
				goto IL_00a5_1;
			}
		}
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_17 = V_1;
			__this->___U3CU3Eu__1_7 = L_17;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_18 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_m392C1A1BE7A901149A0B0BDCADCAE2645B797D37(L_18, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_m392C1A1BE7A901149A0B0BDCADCAE2645B797D37_RuntimeMethod_var);
			goto IL_0159;
		}

IL_0089_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_19 = __this->___U3CU3Eu__1_7;
			V_1 = L_19;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_20 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
		}

IL_00a5_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			// await output.WriteAsync(page.Body, 0, page.Body.Length, cancellationToken);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = __this->___output_4;
			OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_23 = __this->___U3CpageU3E5__2_6;
			NullCheck(L_23);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
			L_24 = OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline(L_23, NULL);
			OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* L_25 = __this->___U3CpageU3E5__2_6;
			NullCheck(L_25);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
			L_26 = OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline(L_25, NULL);
			NullCheck(L_26);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27 = __this->___cancellationToken_5;
			NullCheck(L_22);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_28;
			L_28 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(29 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_22, L_24, 0, ((int32_t)(((RuntimeArray*)L_26)->max_length)), L_27);
			NullCheck(L_28);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_29;
			L_29 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_28, NULL);
			V_1 = L_29;
			bool L_30;
			L_30 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_30)
			{
				goto IL_0121_1;
			}
		}
		{
			int32_t L_31 = 1;
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_32 = V_1;
			__this->___U3CU3Eu__1_7 = L_32;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_33 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_m392C1A1BE7A901149A0B0BDCADCAE2645B797D37(L_33, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76_m392C1A1BE7A901149A0B0BDCADCAE2645B797D37_RuntimeMethod_var);
			goto IL_0159;
		}

IL_0105_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_34 = __this->___U3CU3Eu__1_7;
			V_1 = L_34;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_35 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_35, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_36 = (-1);
			V_0 = L_36;
			__this->___U3CU3E1__state_0 = L_36;
		}

IL_0121_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			// }
			goto IL_0011_1;
		}

IL_012d_1:
		{
			goto IL_0146;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_012f;
		}
		throw e;
	}

CATCH_012f:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_37 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_38 = V_2;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_37, L_38, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0159;
	}// end catch (depth: 1)

IL_0146:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_39 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_39, NULL);
	}

IL_0159:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFlushPagesAsyncU3Ed__1_MoveNext_mA7708BD6637BECE6A84C0FC2B99FB3FD436EACF2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76*>(__this + _offset);
	U3CFlushPagesAsyncU3Ed__1_MoveNext_mA7708BD6637BECE6A84C0FC2B99FB3FD436EACF2(_thisAdjusted, method);
}
// System.Void Utilities.Encoding.OggVorbis.OggExtensions/<FlushPagesAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushPagesAsyncU3Ed__1_SetStateMachine_m45C40E583AD2790EAF7324C25C58FB31723F97D3 (U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFlushPagesAsyncU3Ed__1_SetStateMachine_m45C40E583AD2790EAF7324C25C58FB31723F97D3_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFlushPagesAsyncU3Ed__1_t01CDB65FCEE39E231CF589F781A5DF1154432F76*>(__this + _offset);
	U3CFlushPagesAsyncU3Ed__1_SetStateMachine_m45C40E583AD2790EAF7324C25C58FB31723F97D3(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Utilities.Encoding.OggVorbis.OggRecorderBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OggRecorderBehaviour__ctor_m960CB6943C173225B331D5ACC2A1F63F98F6A76D (OggRecorderBehaviour_t047903533DE434B9C8788D25F6E28C5AD0F4E086* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractRecordingBehaviour_1__ctor_m84D1A99B2A9C3E78DDD4601A069948B435E4E71F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AbstractRecordingBehaviour_1__ctor_m84D1A99B2A9C3E78DDD4601A069948B435E4E71F(__this, AbstractRecordingBehaviour_1__ctor_m84D1A99B2A9C3E78DDD4601A069948B435E4E71F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityMainThread_t82E2FE8589774A83D2AFC78CDEC12449E5B428BC* Awaiters_get_UnityMainThread_m47AD1DA04419B3566D58005278B22A3B638938DA_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mF9AB5B234A00876786360B2B281EA0C8301E97D7_inline (SimpleCoroutineAwaiter_t80817A9F1A63A61D32FDC68C5DD7471E21F65EDC* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 ValueTask_ConfigureAwait_mD017BB90D0662BB49334B6F21DECDFB2A1FEB3DB_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____obj_1;
		int16_t L_1 = __this->____token_2;
		bool L_2 = ___0_continueOnCapturedContext;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTask__ctor_m82EE965BA61F399181B8414BB6ABB146C3332D7B_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ConfiguredValueTaskAwaitable__ctor_mD9583661A0F3E2D6A23C37313CC015A30097CA31_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ConfiguredValueTaskAwaitable_GetAwaiter_m6395546B9B8DB9CD2D906C5D8A72D0EF29BC245A_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_0 = __this->____value_0;
		ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredValueTaskAwaiter__ctor_m063C936DEC3C86E2F3F1CB8B2C629084A95E91A1_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_mE5548FD86A673E6C1D2BD6E9A0B0A964C7EC60BC_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* L_0 = (&__this->____value_0);
		bool L_1;
		L_1 = ValueTask_get_IsCompleted_mC9BF7154FF125E1B49DF8D06804DBED4CBC364D9_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_mFBB47FD039A0362C444BFD04E190031DE6CFC182_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* L_0 = (&__this->____value_0);
		ValueTask_ThrowIfCompletedUnsuccessfully_mE62D61EB45AF96000EE4EDBB47991C7A1E62BBB1_inline(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RecordingManager_get_EnableDebug_m32A059C428121F0AECF23B26F10ADE31CF34F46A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool EnableDebug { get; set; }
		il2cpp_codegen_runtime_class_init_inline(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var);
		bool L_0 = ((RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_StaticFields*)il2cpp_codegen_static_fields_for(RecordingManager_tDD7480327E6E7F466B40C03397EDFFED41E34009_il2cpp_TypeInfo_var))->___U3CEnableDebugU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OggPage_get_Header_m7686C56211145A3946F568343C4AF53A45E7191D_inline (OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CHeaderU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OggPage_get_Body_m04D5AE420207EAD34A5681C8A336644589E0E497_inline (OggPage_t4EA37300F586779E81C2246FA00FA64605F2797E* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CBodyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VorbisInfo_get_Channels_m58E82686E62F94EB0F17288586FDC1BFB7FB4C2D_inline (VorbisInfo_t8142ABD3A8684BBEB3E3962BDABEADB03363A367* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChannelsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OggStream_get_Finished_m0F248A5DEE81F2AC0AF26393BEB996C6DCB71189_inline (OggStream_tCB662F259F495BFEE20E12DEAA6CBB5047A8976F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CFinishedU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 L_0 = (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2)__this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m82EE965BA61F399181B8414BB6ABB146C3332D7B_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, RuntimeObject* ___0_obj, int16_t ___1_token, bool ___2_continueOnCapturedContext, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->____obj_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_1), (void*)L_0);
		int16_t L_1 = ___1_token;
		__this->____token_2 = L_1;
		bool L_2 = ___2_continueOnCapturedContext;
		__this->____continueOnCapturedContext_3 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_mD9583661A0F3E2D6A23C37313CC015A30097CA31_inline (ConfiguredValueTaskAwaitable_tF9BBD676A27C3E73D2C1EC20C515272804ED0D04* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___0_value, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_0 = ___0_value;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_m063C936DEC3C86E2F3F1CB8B2C629084A95E91A1_inline (ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* __this, ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ___0_value, const RuntimeMethod* method) 
{
	{
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_0 = ___0_value;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mC9BF7154FF125E1B49DF8D06804DBED4CBC364D9_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var, L_7, L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_mE62D61EB45AF96000EE4EDBB47991C7A1E62BBB1_inline (ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751(L_4, NULL);
		return;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = il2cpp_unsafe_as<RuntimeObject*>(L_5);
		int16_t L_7 = __this->____token_2;
		NullCheck(L_6);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16) */, IValueTaskSource_t93C8A7EFD152181FEB28DE6ACF8C3AA792D0DACC_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_002c:
	{
		return;
	}
}
