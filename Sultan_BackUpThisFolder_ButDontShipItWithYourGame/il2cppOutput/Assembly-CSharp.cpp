#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct List_1_tE020B120302E34B781278C33685F2DA255337446;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Item>
struct List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<Soal/VoidFunction>
struct List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>[]
struct Dictionary_2U5BU5D_tF3731166E97A9D9E091E8FEDF8384CEAC68CF4D3;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.String[][]
struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Item[]
struct ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// Soal/VoidFunction[]
struct VoidFunctionU5BU5D_t6666CCDD4FE1F79B86476772443E6190E87177CD;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// A
struct A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// B
struct B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// C
struct C_t39E134027703E607475C15FB004AC0EA31005C06;
// CSVReader
struct CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// D
struct D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Dice
struct Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95;
// Jalan
struct Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094;
// Kartu
struct Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB;
// Keluar
struct Keluar_tD03D61962D91F6965A4226DD5619DED189A3FF0F;
// Kembali
struct Kembali_t54FD2C459F9F60A3DC171BE32AC1096E01406DCB;
// Kontrol
struct Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LoadCSV
struct LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuAwal
struct MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Mulai
struct Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Restart
struct Restart_t123AB8241FB07FFA868B2C6C56FDA2638364FF4A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Salah
struct Salah_tEB65405DF3C47401CC4CD141E42A297D8DB07793;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Soal
struct Soal_t1AF96D144A891A7124946889CDF91B1684FF2505;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// StoreData
struct StoreData_tDA5A298530FBA4D9E5480AEA50DA33F06BAE668D;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// help
struct help_tF6EE75C918F00451A5D6CF61915E6D366AC225A3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Dice/<RollTheDice>d__6
struct U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// Jalan/<Nyalakan>d__20
struct U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA;
// Kartu/<MunculkanKartu>d__9
struct U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MenuAwal/<FadeOut>d__9
struct U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A;
// Mulai/<FadeIn>d__9
struct U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774;
// Soal/VoidFunction
struct VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3;

IL2CPP_EXTERN_C RuntimeClass* A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE020B120302E34B781278C33685F2DA255337446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0735C06DC7B18E1DD5D5208DC0AA7076E9774478;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128;
IL2CPP_EXTERN_C String_t* _stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE;
IL2CPP_EXTERN_C String_t* _stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F;
IL2CPP_EXTERN_C String_t* _stringLiteral196F7695235A2CC59C5F69542CD8B53C3B62C3E6;
IL2CPP_EXTERN_C String_t* _stringLiteral212CACE74A306E5F2E286202649891FC4B915A25;
IL2CPP_EXTERN_C String_t* _stringLiteral27F39BCCF95C18FE43FDB864EC3B2FC30680797F;
IL2CPP_EXTERN_C String_t* _stringLiteral38AE8002A3B741336B5E36084A2A4F3F0FA4E2DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3986A1EB3EA59BD35767B70E9FC97A8441ADA58A;
IL2CPP_EXTERN_C String_t* _stringLiteral39DEB7D7646545BC68FC2254FC3CC3593D83371D;
IL2CPP_EXTERN_C String_t* _stringLiteral3E13E6FFD9CDF647FA033D6CE70A11CA57653EF2;
IL2CPP_EXTERN_C String_t* _stringLiteral3F89FC341926EE4942E2FA5E073C70F14289FC63;
IL2CPP_EXTERN_C String_t* _stringLiteral4C4B6D0A10771B78202D1D101A10EC2BE995C08B;
IL2CPP_EXTERN_C String_t* _stringLiteral4C7DA14E6D05FE0AF16C52E29EF11C0DB0CF28C9;
IL2CPP_EXTERN_C String_t* _stringLiteral51F4B09045C710069B5F5F2AC6E8102647FE6EDB;
IL2CPP_EXTERN_C String_t* _stringLiteral56A7B8CA181347B3DD05F58A1D7A092DAAC2E371;
IL2CPP_EXTERN_C String_t* _stringLiteral6BEAC275522F5FA9B3B3C4D4E0271A9CC978CE7E;
IL2CPP_EXTERN_C String_t* _stringLiteral8C2DFF813125502500BF8A3A1CEBD81E1EC51547;
IL2CPP_EXTERN_C String_t* _stringLiteral9677BF41814A7C78D8F9DE715C8D2BA395702C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral969B34DE6E3508B743D73FE21E0204A5CA131E42;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9C02C1537E02ED3FBFF8DDF0BED6EF635435D3D5;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralA8AFBFD25EE320527385D6499F636514E6B8CC10;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralB8EEA2710BAC02319E92AAB130C154FC8BED170E;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC1DBA8F8A459B58B160A52FFF63943F14490885E;
IL2CPP_EXTERN_C String_t* _stringLiteralC49039D31EFC2F2CE6BB1F0E3B3140935DC3C6F8;
IL2CPP_EXTERN_C String_t* _stringLiteralCE622F7BD169D6894CF99DEF0F9B907D807CAF0B;
IL2CPP_EXTERN_C String_t* _stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24;
IL2CPP_EXTERN_C String_t* _stringLiteralD34D7C678E5BF96F2D9816EBF38AACBF48670085;
IL2CPP_EXTERN_C String_t* _stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEACB1D3FF069E3D302E0F39C7AE85632800F0398;
IL2CPP_EXTERN_C String_t* _stringLiteralEC46EA3D3ED69FD8CC7BD4DE438C072F44C94AFF;
IL2CPP_EXTERN_C String_t* _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003;
IL2CPP_EXTERN_C String_t* _stringLiteralEFC14D07C57428544D8F0FB0D47C4B859FDC926F;
IL2CPP_EXTERN_C String_t* _stringLiteralF8556B44CC0E913176CA5859A270CD74E388E67C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB9395A6B85AE9594A83AD55D509784F48B2C95E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656_m69D0B55CAC764173DB75776A6FF0C53DCA5C1F4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSalah_tEB65405DF3C47401CC4CD141E42A297D8DB07793_mFEA5EA9730EE8F5E43EEA871C4AC0700C8E4859E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA293F10765359D70384794AA7DA94A25FA0AC15E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD54406C540A8F0606F7052FC5D01F3DBB814C833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m20882111EEB68BD10B9ACFDCF32B50755CFD1C95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB0CFC5E35B840AE25C5F2B640B98E5D9CE401B08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFB2CF4591B05AB804EB4471D97B1A41650456019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4E83FEFE6276E4874849911734E0514D5F447C07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Soal_Function1_m5483D65036FF055266FF7A02D0C29D27C87B1A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Soal_Function2_mB2560C1BCC26D77A4A086DBDDF0D9A43F33C45EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Soal_Function3_m320312D2D27264AB7BECAF7C0F052C8516492236_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Soal_Function4_mEE00790042B604CD2A6A8E7687A5E91CDF8C9582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Soal_Function5_mB03C359D36F9D60AC50E0251D6BE758AC6ACC734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInU3Ed__9_System_Collections_IEnumerator_Reset_m8278C2863D2A8C7CA016B0116FCEAA82AB7E39FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutU3Ed__9_System_Collections_IEnumerator_Reset_m8432243FCA7FE6ABD10541E10D390CA3DA9494C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMunculkanKartuU3Ed__9_System_Collections_IEnumerator_Reset_mC3B079E150C7C493182D5B344C0321449CDB7675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CNyalakanU3Ed__20_System_Collections_IEnumerator_Reset_m9AE5C3653A11EA70EF584161AE6BE7DFB4BA8781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRollTheDiceU3Ed__6_System_Collections_IEnumerator_Reset_m7902E2DA046D5DDF5883AE9FDA920654353B5149_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct List_1_tE020B120302E34B781278C33685F2DA255337446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Dictionary_2U5BU5D_tF3731166E97A9D9E091E8FEDF8384CEAC68CF4D3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE020B120302E34B781278C33685F2DA255337446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Dictionary_2U5BU5D_tF3731166E97A9D9E091E8FEDF8384CEAC68CF4D3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Item>
struct List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ItemU5BU5D_t4DD3B0CDED4FDEE29D6C29225CED0468C194295B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Soal/VoidFunction>
struct List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VoidFunctionU5BU5D_t6666CCDD4FE1F79B86476772443E6190E87177CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VoidFunctionU5BU5D_t6666CCDD4FE1F79B86476772443E6190E87177CD* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// CSVReader
struct CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7  : public RuntimeObject
{
};

struct CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields
{
	// System.String CSVReader::SPLIT_RE
	String_t* ___SPLIT_RE_0;
	// System.String CSVReader::LINE_SPLIT_RE
	String_t* ___LINE_SPLIT_RE_1;
	// System.Char[] CSVReader::TRIM_CHARS
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___TRIM_CHARS_2;
};

// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95  : public RuntimeObject
{
	// System.Int32 Item::id
	int32_t ___id_0;
	// System.String Item::soal
	String_t* ___soal_1;
	// System.String Item::A
	String_t* ___A_2;
	// System.String Item::B
	String_t* ___B_3;
	// System.String Item::C
	String_t* ___C_4;
	// System.String Item::D
	String_t* ___D_5;
	// System.String Item::kunci
	String_t* ___kunci_6;
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

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// Dice/<RollTheDice>d__6
struct U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2  : public RuntimeObject
{
	// System.Int32 Dice/<RollTheDice>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Dice/<RollTheDice>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Dice Dice/<RollTheDice>d__6::<>4__this
	Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* ___U3CU3E4__this_2;
	// System.Int32 Dice/<RollTheDice>d__6::<randomDiceSide>5__2
	int32_t ___U3CrandomDiceSideU3E5__2_3;
	// System.Int32 Dice/<RollTheDice>d__6::<i>5__3
	int32_t ___U3CiU3E5__3_4;
};

// Jalan/<Nyalakan>d__20
struct U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA  : public RuntimeObject
{
	// System.Int32 Jalan/<Nyalakan>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Jalan/<Nyalakan>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Jalan Jalan/<Nyalakan>d__20::<>4__this
	Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* ___U3CU3E4__this_2;
};

// Kartu/<MunculkanKartu>d__9
struct U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6  : public RuntimeObject
{
	// System.Int32 Kartu/<MunculkanKartu>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Kartu/<MunculkanKartu>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Kartu Kartu/<MunculkanKartu>d__9::<>4__this
	Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* ___U3CU3E4__this_2;
	// System.Int32 Kartu/<MunculkanKartu>d__9::indekskartu
	int32_t ___indekskartu_3;
	// System.Single Kartu/<MunculkanKartu>d__9::<f>5__2
	float ___U3CfU3E5__2_4;
};

// MenuAwal/<FadeOut>d__9
struct U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A  : public RuntimeObject
{
	// System.Int32 MenuAwal/<FadeOut>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MenuAwal/<FadeOut>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MenuAwal MenuAwal/<FadeOut>d__9::<>4__this
	MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* ___U3CU3E4__this_2;
	// System.Single MenuAwal/<FadeOut>d__9::<f>5__2
	float ___U3CfU3E5__2_3;
};

// Mulai/<FadeIn>d__9
struct U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774  : public RuntimeObject
{
	// System.Int32 Mulai/<FadeIn>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mulai/<FadeIn>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Mulai Mulai/<FadeIn>d__9::<>4__this
	Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C* ___U3CU3E4__this_2;
	// System.Single Mulai/<FadeIn>d__9::<f>5__2
	float ___U3CfU3E5__2_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
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
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Soal/VoidFunction
struct VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// A
struct A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator A::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
};

struct A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields
{
	// UnityEngine.GameObject A::jawaban
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jawaban_4;
	// UnityEngine.GameObject A::pemain
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pemain_5;
	// UnityEngine.GameObject A::dadu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dadu_7;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// B
struct B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator B::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
};

struct B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields
{
	// UnityEngine.GameObject B::jawaban
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jawaban_4;
	// UnityEngine.GameObject B::pemain
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pemain_5;
	// UnityEngine.GameObject B::dadu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dadu_7;
};

// C
struct C_t39E134027703E607475C15FB004AC0EA31005C06  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator C::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
};

struct C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields
{
	// UnityEngine.GameObject C::jawaban
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jawaban_4;
	// UnityEngine.GameObject C::pemain
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pemain_5;
	// UnityEngine.GameObject C::dadu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dadu_7;
};

// D
struct D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator D::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
};

struct D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields
{
	// UnityEngine.GameObject D::jawaban
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jawaban_4;
	// UnityEngine.GameObject D::pemain
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pemain_5;
	// UnityEngine.GameObject D::dadu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dadu_7;
};

// Dice
struct Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite[] Dice::diceSides
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___diceSides_5;
	// UnityEngine.SpriteRenderer Dice::rend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___rend_6;
	// System.Boolean Dice::coroutineAllowed
	bool ___coroutineAllowed_7;
};

struct Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_StaticFields
{
	// System.Int32 Dice::countDadu
	int32_t ___countDadu_4;
};

// Jalan
struct Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Jalan::titik
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___titik_4;
	// System.Single Jalan::moveSpeed
	float ___moveSpeed_5;
	// System.Int32 Jalan::titikIndex
	int32_t ___titikIndex_6;
	// System.Int32 Jalan::selisih_update
	int32_t ___selisih_update_7;
	// UnityEngine.AudioClip Jalan::hore
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___hore_8;
	// System.Boolean Jalan::bolehJalan
	bool ___bolehJalan_9;
	// System.Boolean Jalan::bolehPlay
	bool ___bolehPlay_10;
	// TMPro.TMP_Text Jalan::menangText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___menangText_12;
	// UnityEngine.GameObject Jalan::boxMenang
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boxMenang_13;
	// UnityEngine.GameObject Jalan::skor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___skor_14;
	// UnityEngine.GameObject Jalan::restart
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___restart_15;
	// UnityEngine.GameObject Jalan::close
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___close_16;
	// UnityEngine.GameObject Jalan::kartu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___kartu_17;
	// UnityEngine.GameObject Jalan::help
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___help_18;
	// UnityEngine.GameObject Jalan::waktu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waktu_19;
	// UnityEngine.GameObject Jalan::up
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___up_20;
	// UnityEngine.AudioSource Jalan::bar
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bar_21;
};

struct Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_StaticFields
{
	// System.Single Jalan::time_fixed
	float ___time_fixed_11;
};

// Kartu
struct Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Kartu::kartu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___kartu_4;
	// UnityEngine.GameObject Kartu::teksmenang
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___teksmenang_5;
	// UnityEngine.GameObject Kartu::close
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___close_6;
	// UnityEngine.Sprite[] Kartu::kartuu
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___kartuu_7;
	// UnityEngine.SpriteRenderer Kartu::penampilKartu
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___penampilKartu_8;
	// UnityEngine.SpriteRenderer Kartu::rend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___rend_9;
	// System.Boolean Kartu::bolehKlik
	bool ___bolehKlik_10;
};

// Keluar
struct Keluar_tD03D61962D91F6965A4226DD5619DED189A3FF0F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Kembali
struct Kembali_t54FD2C459F9F60A3DC171BE32AC1096E01406DCB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Kontrol
struct Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Kontrol::data
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___data_7;
	// UnityEngine.UI.Text Kontrol::waktuText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___waktuText_13;
	// System.String[][] Kontrol::masterSoal
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___masterSoal_15;
};

struct Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields
{
	// UnityEngine.GameObject Kontrol::pemain
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pemain_4;
	// UnityEngine.GameObject Kontrol::dadu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dadu_5;
	// UnityEngine.GameObject Kontrol::waktu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waktu_6;
	// System.Int32 Kontrol::nofPlayers
	int32_t ___nofPlayers_8;
	// System.Int32 Kontrol::posisiPemain
	int32_t ___posisiPemain_9;
	// System.Boolean Kontrol::gameOver
	bool ___gameOver_10;
	// System.Int32 Kontrol::lemparDadu
	int32_t ___lemparDadu_11;
	// System.Int32 Kontrol::penentu
	int32_t ___penentu_12;
	// System.Single Kontrol::time
	float ___time_14;
};

// LoadCSV
struct LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Item LoadCSV::blankItem
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___blankItem_5;
	// System.Collections.Generic.List`1<Item> LoadCSV::itemDatabase
	List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* ___itemDatabase_6;
};

// MenuAwal
struct MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MenuAwal::menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu_4;
	// UnityEngine.SpriteRenderer MenuAwal::menuu
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___menuu_5;
	// System.Boolean MenuAwal::bolehHilang
	bool ___bolehHilang_6;
	// UnityEngine.AudioSource MenuAwal::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_7;
};

// Mulai
struct Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField Mulai::usernameInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___usernameInput_4;
	// UnityEngine.SpriteRenderer Mulai::renn
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___renn_6;
	// UnityEngine.GameObject Mulai::menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu_7;
	// System.Single Mulai::myCounter
	float ___myCounter_8;
	// System.Single Mulai::myTime
	float ___myTime_9;
};

struct Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_StaticFields
{
	// System.String Mulai::username
	String_t* ___username_5;
};

// Restart
struct Restart_t123AB8241FB07FFA868B2C6C56FDA2638364FF4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Salah
struct Salah_tEB65405DF3C47401CC4CD141E42A297D8DB07793  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Salah::salaah
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___salaah_4;
	// UnityEngine.Animator Salah::salah
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___salah_5;
	// UnityEngine.AudioSource Salah::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_6;
};

// Soal
struct Soal_t1AF96D144A891A7124946889CDF91B1684FF2505  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Soal::kunciSoal
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___kunciSoal_4;
	// UnityEngine.GameObject Soal::soalBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___soalBox_14;
	// UnityEngine.GameObject Soal::balloon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___balloon_15;
	// UnityEngine.GameObject Soal::salah
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___salah_16;
	// UnityEngine.GameObject Soal::posisiA
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___posisiA_17;
	// UnityEngine.GameObject Soal::posisiB
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___posisiB_18;
	// UnityEngine.GameObject Soal::posisiC
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___posisiC_19;
	// UnityEngine.GameObject Soal::posisiD
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___posisiD_20;
	// UnityEngine.GameObject Soal::pccA
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pccA_21;
	// UnityEngine.GameObject Soal::pccB
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pccB_22;
	// UnityEngine.GameObject Soal::pccC
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pccC_23;
	// UnityEngine.GameObject Soal::pccD
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pccD_24;
	// UnityEngine.Animator Soal::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_25;
	// UnityEngine.Animator Soal::balon
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___balon_26;
	// TMPro.TMP_Text Soal::soalText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___soalText_27;
	// TMPro.TMP_Text Soal::aText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___aText_28;
	// TMPro.TMP_Text Soal::bText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___bText_29;
	// TMPro.TMP_Text Soal::cText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___cText_30;
	// TMPro.TMP_Text Soal::dText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___dText_31;
	// UnityEngine.UI.Text Soal::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_32;
	// UnityEngine.GameObject Soal::pemain
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pemain_33;
	// System.Single Soal::moveSpeed
	float ___moveSpeed_35;
	// UnityEngine.GameObject Soal::data
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___data_36;
};

struct Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields
{
	// UnityEngine.GameObject Soal::jawaban
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jawaban_5;
	// System.Int32 Soal::skor
	int32_t ___skor_6;
	// System.Int32 Soal::batas1
	int32_t ___batas1_7;
	// System.Int32 Soal::batas2
	int32_t ___batas2_8;
	// System.Int32 Soal::batas3
	int32_t ___batas3_9;
	// System.Int32 Soal::batas4
	int32_t ___batas4_10;
	// System.Int32 Soal::batas5
	int32_t ___batas5_11;
	// System.Int32 Soal::countMunculSoal
	int32_t ___countMunculSoal_12;
	// System.Int32 Soal::countBenar
	int32_t ___countBenar_13;
	// UnityEngine.GameObject Soal::dadu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dadu_34;
};

// StoreData
struct StoreData_tDA5A298530FBA4D9E5480AEA50DA33F06BAE668D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.DateTime StoreData::currentTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___currentTime_4;
	// System.DateTime StoreData::lastTimeClicked
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lastTimeClicked_5;
	// System.Collections.Generic.List`1<System.String> StoreData::playerData
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___playerData_6;
	// System.String StoreData::waktu
	String_t* ___waktu_7;
	// System.String StoreData::nilai
	String_t* ___nilai_8;
	// System.String StoreData::inputData
	String_t* ___inputData_9;
	// UnityEngine.GameObject StoreData::pemain
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pemain_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// help
struct help_tF6EE75C918F00451A5D6CF61915E6D366AC225A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject help::menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu_4;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[][]
struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF  : public RuntimeArray
{
	ALIGN_FIELD (8) StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* m_Items[1];

	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_LoadAll_TisRuntimeObject_m69B3BC41DB42071369375275587F5A5FF5040487_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// T UnityEngine.GameObject::GetComponent<Jalan>()
inline Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Dice>()
inline Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Soal>()
inline Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Soal::koreksiSoal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_koreksiSoal_m1EA614C284329939F364E64BB1B7D4DF2C7E58B7 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, String_t* ___kunci0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF (const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::.ctor()
inline void List_1__ctor_mB0CFC5E35B840AE25C5F2B640B98E5D9CE401B08 (List_1_tE020B120302E34B781278C33685F2DA255337446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA (String_t* ___path0, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Regex_Split_mA6C13D588244018786564864F683C13DDBEF5CF2 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.String System.String::TrimStart(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimStart_m67833D80326BEA11CC3517CE03CD7B16669BCEEC (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Add(T)
inline void List_1_Add_mA293F10765359D70384794AA7DA94A25FA0AC15E_inline (List_1_tE020B120302E34B781278C33685F2DA255337446* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T[] UnityEngine.Resources::LoadAll<UnityEngine.Sprite>(System.String)
inline SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m69B3BC41DB42071369375275587F5A5FF5040487_gshared)(___path0, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Dice/<RollTheDice>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRollTheDiceU3Ed__6__ctor_m4BFC1D6032396F83E7341F017572CF067B3BF179 (U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void Kontrol::Pindah()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kontrol_Pindah_m7D6A0836C8440877881D068D3DD1A695DCF8C843 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<MenuAwal>()
inline MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* GameObject_GetComponent_TisMenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656_m69D0B55CAC764173DB75776A6FF0C53DCA5C1F4C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Jalan::Gerak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jalan_Gerak_m8A55891E8F27D021A56014B01EB178736F67A5FB (Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void Jalan/<Nyalakan>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNyalakanU3Ed__20__ctor_mA4C32E49E45077DF647215D43B7F672CAAD45BA7 (U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Kartu::MunculkanKartu(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Kartu_MunculkanKartu_m07F998A8181CAC31E9782EF30A58EF223A50860E (Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* __this, int32_t ___indekskartu0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Kartu/<MunculkanKartu>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMunculkanKartuU3Ed__9__ctor_mB8CA8D5423513EE4BD7ABB745C1433CEE880BEB7 (U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<LoadCSV>()
inline LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void LoadCSV::LoadItemData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCSV_LoadItemData_mADD94693F4A9B339C156C7476C860924F2AC81A4 (LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Item>::get_Count()
inline int32_t List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<Item>::get_Item(System.Int32)
inline Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50 (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Kontrol::pemainLempardadu(System.Int32,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0 (Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893* __this, int32_t ___posisi0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___soalJawab1, const RuntimeMethod* method) ;
// System.Void Soal::munculSoal(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_munculSoal_m281CDE40977AFB6F14AFA569349F07775F4FA8E3 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, String_t* ___teks0, String_t* ___a1, String_t* ___b2, String_t* ___c3, String_t* ___d4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Item>::Clear()
inline void List_1_Clear_mD54406C540A8F0606F7052FC5D01F3DBB814C833_inline (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> CSVReader::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE020B120302E34B781278C33685F2DA255337446* CSVReader_Read_mFE131C8B6711B10E5AC643B12B21C165920AAFA0 (String_t* ___file0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::get_Item(System.Int32)
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752 (List_1_tE020B120302E34B781278C33685F2DA255337446* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method) ;
// System.Void LoadCSV::AddItem(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCSV_AddItem_mF4B135169C8541CF518B41076CEE08727DC0ABF3 (LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* __this, int32_t ___id0, String_t* ___soal1, String_t* ___A2, String_t* ___B3, String_t* ___C4, String_t* ___D5, String_t* ___kunci6, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::get_Count()
inline int32_t List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_inline (List_1_tE020B120302E34B781278C33685F2DA255337446* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void Item::.ctor(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m750A421E111BF218E5CB17697126B18E57C84E3D (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___d0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Item>::Add(T)
inline void List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_inline (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Collections.Generic.List`1<Item>::.ctor()
inline void List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void MenuAwal::PlayMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuAwal_PlayMusic_mDEB23C1C4E70F1A56B7902A7A6108AF4234CE554 (MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* __this, const RuntimeMethod* method) ;
// System.Void MenuAwal/<FadeOut>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__9__ctor_mB8D4C7FABFB8475B1A72BF75F66F850A77B4C2C9 (U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Mulai/<FadeIn>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__9__ctor_mB634F1D871285B18C72212FF0370040936BFA960 (U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Soal/VoidFunction>::.ctor()
inline void List_1__ctor_m20882111EEB68BD10B9ACFDCF32B50755CFD1C95 (List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void Soal/VoidFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoidFunction__ctor_mC84815B86AA7CFB6F0A8E128B4F5052B7D63CAE6 (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Soal/VoidFunction>::Add(T)
inline void List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_inline (List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* __this, VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Soal/VoidFunction>::get_Count()
inline int32_t List_1_get_Count_mFB2CF4591B05AB804EB4471D97B1A41650456019_inline (List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<Soal/VoidFunction>::get_Item(System.Int32)
inline VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* List_1_get_Item_m4E83FEFE6276E4874849911734E0514D5F447C07 (List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* __this, int32_t ___index0, const RuntimeMethod* method)
{
	VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Soal/VoidFunction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_inline (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Soal::RandomPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_RandomPos_m56DA731EDF85F438EF67A9313D348F87A9064B87 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) ;
// System.Void Soal::MoveGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_MoveGameObject_m354EC1D0EC7E220AF245234642D4A774AF209D55 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Salah>()
inline Salah_tEB65405DF3C47401CC4CD141E42A297D8DB07793* GameObject_GetComponent_TisSalah_tEB65405DF3C47401CC4CD141E42A297D8DB07793_mFEA5EA9730EE8F5E43EEA871C4AC0700C8E4859E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Salah_tEB65405DF3C47401CC4CD141E42A297D8DB07793* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Salah::PlayMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Salah_PlayMusic_m3AA1C8EA8C3B3A020F4A916B752933896C5ABB52 (Salah_tEB65405DF3C47401CC4CD141E42A297D8DB07793* __this, const RuntimeMethod* method) ;
// System.Void Soal::ReturnGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_ReturnGameObject_m5C0F397F4EDA052C827D4B104F255F005EB61C2D (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) ;
// System.Void Soal::prosesKoreksitangga(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_prosesKoreksitangga_mD14B531BAE0D9BB6D5AA11BF8416A036487F01F7 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, String_t* ___kunci0, int32_t ___a1, int32_t ___b2, int32_t ___c3, const RuntimeMethod* method) ;
// System.Void Soal::prosesKoreksiular(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_prosesKoreksiular_m29E0025FFB901220A00E04534E71D77983CF426E (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, String_t* ___kunci0, int32_t ___a1, int32_t ___b2, int32_t ___c3, const RuntimeMethod* method) ;
// System.Void StoreData::HitungNilaiHuruf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreData_HitungNilaiHuruf_m985588F3ED9AA5285A2EF323C1AB415FD5E36A17 (StoreData_tDA5A298530FBA4D9E5480AEA50DA33F06BAE668D* __this, const RuntimeMethod* method) ;
// System.Void StoreData::UpdateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreData_UpdateData_m3EDD020323268FC0162F6FE9D9D3663183766A5E (StoreData_tDA5A298530FBA4D9E5480AEA50DA33F06BAE668D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String StoreData::getPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StoreData_getPath_m362F6B8F1BA243A35F020279EAA0751835359D66 (StoreData_tDA5A298530FBA4D9E5480AEA50DA33F06BAE668D* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m6432CEFDE44A6B720887B85AADC39303F8D0689D (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, String_t* ___path0, bool ___append1, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void A::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_OnMouseDown_mBAA1580812238F5B84BC77854768F1A309B04192 (A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pemain.GetComponent<Jalan>().bolehJalan = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___pemain_5;
		NullCheck(L_0);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_1;
		L_1 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_0, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___bolehJalan_9 = (bool)1;
		// dadu = GameObject.Find("Dadu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25, NULL);
		((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___dadu_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___dadu_7), (void*)L_2);
		// dadu.GetComponent<Dice>().coroutineAllowed = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_3);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_4;
		L_4 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_3, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___coroutineAllowed_7 = (bool)1;
		// dadu.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_5);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6;
		L_6 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_5, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_6);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)1, NULL);
		// Soal koreksi = GameObject.Find("Soal").GetComponent<Soal>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE, NULL);
		NullCheck(L_7);
		Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* L_8;
		L_8 = GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A(L_7, GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		// koreksi.koreksiSoal("A");
		NullCheck(L_8);
		Soal_koreksiSoal_m1EA614C284329939F364E64BB1B7D4DF2C7E58B7(L_8, _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003, NULL);
		// animator.SetTrigger("selesai");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___animator_6;
		NullCheck(L_9);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_9, _stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F, NULL);
		// }
		return;
	}
}
// System.Void A::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_Start_m14CE10AED5813F4E74019AD9FFC59D56255EF534 (A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969B34DE6E3508B743D73FE21E0204A5CA131E42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pemain = GameObject.Find("Pemain");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24, NULL);
		((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___pemain_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___pemain_5), (void*)L_0);
		// jawaban = GameObject.Find("GameObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral969B34DE6E3508B743D73FE21E0204A5CA131E42, NULL);
		((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___jawaban_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___jawaban_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void A::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_Update_m454755AD62E6F289737B72663F4BCC7549F0C061 (A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isMobilePlatform)
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		// }
		return;
	}
}
// System.Void A::CheckTouchInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_CheckTouchInput_m74FBEE8479BBB30F463392C9252C6D8E24964FAC (A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		// if (Input.touches[0].phase == TouchPhase.Began)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_1;
		L_1 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if (L_2)
		{
			goto IL_0082;
		}
	}
	{
		// pemain.GetComponent<Jalan>().bolehJalan = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___pemain_5;
		NullCheck(L_3);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_4;
		L_4 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_3, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___bolehJalan_9 = (bool)1;
		// dadu = GameObject.Find("Dadu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25, NULL);
		((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___dadu_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___dadu_7), (void*)L_5);
		// dadu.GetComponent<Dice>().coroutineAllowed = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_6);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_7;
		L_7 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_6, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___coroutineAllowed_7 = (bool)1;
		// dadu.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_StaticFields*)il2cpp_codegen_static_fields_for(A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_8);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9;
		L_9 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_8, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_9);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, (bool)1, NULL);
		// Soal koreksi = GameObject.Find("Soal").GetComponent<Soal>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE, NULL);
		NullCheck(L_10);
		Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* L_11;
		L_11 = GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A(L_10, GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		// koreksi.koreksiSoal("A");
		NullCheck(L_11);
		Soal_koreksiSoal_m1EA614C284329939F364E64BB1B7D4DF2C7E58B7(L_11, _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003, NULL);
		// animator.SetTrigger("selesai");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___animator_6;
		NullCheck(L_12);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_12, _stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void A::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A__ctor_mDEAF5CC565A48E0BBF37B638E29C5276390AD968 (A_t1744B2ED1C3A8C496AEBAEF0DD9D2EDCEE4AD441* __this, const RuntimeMethod* method) 
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
// System.Void B::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void B_Start_m527B04B874E37AE934EC3C9DADD601D2A3720E39 (B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969B34DE6E3508B743D73FE21E0204A5CA131E42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pemain = GameObject.Find("Pemain");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24, NULL);
		((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___pemain_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___pemain_5), (void*)L_0);
		// jawaban = GameObject.Find("GameObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral969B34DE6E3508B743D73FE21E0204A5CA131E42, NULL);
		((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___jawaban_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___jawaban_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void B::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void B_Update_mE193ABB0FB86FD6D3A899EE695DE1B8873079BCA (B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isMobilePlatform)
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		// }
		return;
	}
}
// System.Void B::CheckTouchInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void B_CheckTouchInput_mCB3C2192085EB7F9FBEF8F9168ACCB56ABC53AB9 (B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		// if (Input.touches[0].phase == TouchPhase.Began)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_1;
		L_1 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if (L_2)
		{
			goto IL_0082;
		}
	}
	{
		// pemain.GetComponent<Jalan>().bolehJalan = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___pemain_5;
		NullCheck(L_3);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_4;
		L_4 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_3, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___bolehJalan_9 = (bool)1;
		// dadu = GameObject.Find("Dadu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25, NULL);
		((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___dadu_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___dadu_7), (void*)L_5);
		// dadu.GetComponent<Dice>().coroutineAllowed = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_6);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_7;
		L_7 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_6, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___coroutineAllowed_7 = (bool)1;
		// dadu.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_8);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9;
		L_9 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_8, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_9);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, (bool)1, NULL);
		// Soal koreksi = GameObject.Find("Soal").GetComponent<Soal>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE, NULL);
		NullCheck(L_10);
		Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* L_11;
		L_11 = GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A(L_10, GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		// koreksi.koreksiSoal("B");
		NullCheck(L_11);
		Soal_koreksiSoal_m1EA614C284329939F364E64BB1B7D4DF2C7E58B7(L_11, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, NULL);
		// animator.SetTrigger("selesai");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___animator_6;
		NullCheck(L_12);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_12, _stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void B::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void B_OnMouseDown_mC79BB6E0E7B94CCD8A8F3EF473811082CB828F7B (B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pemain.GetComponent<Jalan>().bolehJalan = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___pemain_5;
		NullCheck(L_0);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_1;
		L_1 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_0, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___bolehJalan_9 = (bool)1;
		// dadu = GameObject.Find("Dadu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25, NULL);
		((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___dadu_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___dadu_7), (void*)L_2);
		// dadu.GetComponent<Dice>().coroutineAllowed = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_3);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_4;
		L_4 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_3, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___coroutineAllowed_7 = (bool)1;
		// dadu.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_StaticFields*)il2cpp_codegen_static_fields_for(B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_5);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6;
		L_6 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_5, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_6);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)1, NULL);
		// Soal koreksi = GameObject.Find("Soal").GetComponent<Soal>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE, NULL);
		NullCheck(L_7);
		Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* L_8;
		L_8 = GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A(L_7, GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		// koreksi.koreksiSoal("B");
		NullCheck(L_8);
		Soal_koreksiSoal_m1EA614C284329939F364E64BB1B7D4DF2C7E58B7(L_8, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, NULL);
		// animator.SetTrigger("selesai");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___animator_6;
		NullCheck(L_9);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_9, _stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F, NULL);
		// }
		return;
	}
}
// System.Void B::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void B__ctor_m288BDABF1B897D8C0529C6E1FE86191ED2477B16 (B_t1D3C54819FD5AF9697E6D6D8E5EA7366576898A9* __this, const RuntimeMethod* method) 
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
// System.Void C::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Start_m1FD0A536BA6CB7009CDB62C16003929F3BC0DE1C (C_t39E134027703E607475C15FB004AC0EA31005C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969B34DE6E3508B743D73FE21E0204A5CA131E42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pemain = GameObject.Find("Pemain");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24, NULL);
		((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___pemain_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___pemain_5), (void*)L_0);
		// jawaban = GameObject.Find("GameObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral969B34DE6E3508B743D73FE21E0204A5CA131E42, NULL);
		((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___jawaban_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___jawaban_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void C::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Update_m459DA4F2DEA9E27C90C359B58CCEF1B5E3353A74 (C_t39E134027703E607475C15FB004AC0EA31005C06* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isMobilePlatform)
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		// }
		return;
	}
}
// System.Void C::CheckTouchInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_CheckTouchInput_m9A5B6570635BB89264F0EC07373172CAAA34DA7E (C_t39E134027703E607475C15FB004AC0EA31005C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		// if (Input.touches[0].phase == TouchPhase.Began)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_1;
		L_1 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if (L_2)
		{
			goto IL_0082;
		}
	}
	{
		// pemain.GetComponent<Jalan>().bolehJalan = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___pemain_5;
		NullCheck(L_3);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_4;
		L_4 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_3, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___bolehJalan_9 = (bool)1;
		// dadu = GameObject.Find("Dadu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25, NULL);
		((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___dadu_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___dadu_7), (void*)L_5);
		// dadu.GetComponent<Dice>().coroutineAllowed = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_6);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_7;
		L_7 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_6, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___coroutineAllowed_7 = (bool)1;
		// dadu.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_8);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9;
		L_9 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_8, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_9);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, (bool)1, NULL);
		// Soal koreksi = GameObject.Find("Soal").GetComponent<Soal>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE, NULL);
		NullCheck(L_10);
		Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* L_11;
		L_11 = GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A(L_10, GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		// koreksi.koreksiSoal("C");
		NullCheck(L_11);
		Soal_koreksiSoal_m1EA614C284329939F364E64BB1B7D4DF2C7E58B7(L_11, _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC, NULL);
		// animator.SetTrigger("selesai");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___animator_6;
		NullCheck(L_12);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_12, _stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void C::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_OnMouseDown_m39831ED61269192A70A3E8BAABDB778DDFCD530C (C_t39E134027703E607475C15FB004AC0EA31005C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pemain.GetComponent<Jalan>().bolehJalan = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___pemain_5;
		NullCheck(L_0);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_1;
		L_1 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_0, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___bolehJalan_9 = (bool)1;
		// dadu = GameObject.Find("Dadu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25, NULL);
		((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___dadu_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___dadu_7), (void*)L_2);
		// dadu.GetComponent<Dice>().coroutineAllowed = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_3);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_4;
		L_4 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_3, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___coroutineAllowed_7 = (bool)1;
		// dadu.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((C_t39E134027703E607475C15FB004AC0EA31005C06_StaticFields*)il2cpp_codegen_static_fields_for(C_t39E134027703E607475C15FB004AC0EA31005C06_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_5);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6;
		L_6 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_5, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_6);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)1, NULL);
		// Soal koreksi = GameObject.Find("Soal").GetComponent<Soal>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE, NULL);
		NullCheck(L_7);
		Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* L_8;
		L_8 = GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A(L_7, GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		// koreksi.koreksiSoal("C");
		NullCheck(L_8);
		Soal_koreksiSoal_m1EA614C284329939F364E64BB1B7D4DF2C7E58B7(L_8, _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC, NULL);
		// animator.SetTrigger("selesai");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___animator_6;
		NullCheck(L_9);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_9, _stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F, NULL);
		// }
		return;
	}
}
// System.Void C::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C__ctor_mD5D5DDB5F47DD05F1C5345D3FF113008F2CCE970 (C_t39E134027703E607475C15FB004AC0EA31005C06* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> CSVReader::Read(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE020B120302E34B781278C33685F2DA255337446* CSVReader_Read_mFE131C8B6711B10E5AC643B12B21C165920AAFA0 (String_t* ___file0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA293F10765359D70384794AA7DA94A25FA0AC15E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB0CFC5E35B840AE25C5F2B640B98E5D9CE401B08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE020B120302E34B781278C33685F2DA255337446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE020B120302E34B781278C33685F2DA255337446* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	{
		// var list = new List<Dictionary<string, object>>();
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_0 = (List_1_tE020B120302E34B781278C33685F2DA255337446*)il2cpp_codegen_object_new(List_1_tE020B120302E34B781278C33685F2DA255337446_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB0CFC5E35B840AE25C5F2B640B98E5D9CE401B08(L_0, List_1__ctor_mB0CFC5E35B840AE25C5F2B640B98E5D9CE401B08_RuntimeMethod_var);
		V_0 = L_0;
		// var lines = Regex.Split((Resources.Load(file) as TextAsset).text, LINE_SPLIT_RE);
		String_t* L_1 = ___file0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(L_1, NULL);
		NullCheck(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_2, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_2, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)), NULL);
		il2cpp_codegen_runtime_class_init_inline(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var);
		String_t* L_4 = ((CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields*)il2cpp_codegen_static_fields_for(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var))->___LINE_SPLIT_RE_1;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = Regex_Split_mA6C13D588244018786564864F683C13DDBEF5CF2(L_3, L_4, NULL);
		V_1 = L_5;
		// if (lines.Length <= 1) return list;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) > ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		// if (lines.Length <= 1) return list;
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_7 = V_0;
		return L_7;
	}

IL_0029:
	{
		// var header = Regex.Split(lines[0], SPLIT_RE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var);
		String_t* L_11 = ((CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields*)il2cpp_codegen_static_fields_for(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var))->___SPLIT_RE_0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = Regex_Split_mA6C13D588244018786564864F683C13DDBEF5CF2(L_10, L_11, NULL);
		V_2 = L_12;
		// for (var i = 1; i < lines.Length; i++)
		V_3 = 1;
		goto IL_00fe;
	}

IL_003e:
	{
		// var values = Regex.Split(lines[i], SPLIT_RE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		il2cpp_codegen_runtime_class_init_inline(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var);
		String_t* L_17 = ((CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields*)il2cpp_codegen_static_fields_for(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var))->___SPLIT_RE_0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18;
		L_18 = Regex_Split_mA6C13D588244018786564864F683C13DDBEF5CF2(L_16, L_17, NULL);
		V_4 = L_18;
		// if (values.Length == 0 || values[0] == "") continue;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_4;
		NullCheck(L_19);
		if (!(((RuntimeArray*)L_19)->max_length))
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = 0;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (L_23)
		{
			goto IL_00fa;
		}
	}
	{
		// var entry = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_24 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_24, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_5 = L_24;
		// for (var j = 0; j < header.Length && j < values.Length; j++)
		V_6 = 0;
		goto IL_00e3;
	}

IL_0074:
	{
		// string value = values[j];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_4;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		String_t* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_7 = L_28;
		// value = value.TrimStart(TRIM_CHARS).TrimEnd(TRIM_CHARS).Replace("\\", "");
		String_t* L_29 = V_7;
		il2cpp_codegen_runtime_class_init_inline(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = ((CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields*)il2cpp_codegen_static_fields_for(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var))->___TRIM_CHARS_2;
		NullCheck(L_29);
		String_t* L_31;
		L_31 = String_TrimStart_m67833D80326BEA11CC3517CE03CD7B16669BCEEC(L_29, L_30, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_32 = ((CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields*)il2cpp_codegen_static_fields_for(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var))->___TRIM_CHARS_2;
		NullCheck(L_31);
		String_t* L_33;
		L_33 = String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529(L_31, L_32, NULL);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_33, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_7 = L_34;
		// object finalvalue = value;
		String_t* L_35 = V_7;
		V_8 = L_35;
		// if (int.TryParse(value, out n))
		String_t* L_36 = V_7;
		bool L_37;
		L_37 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_36, (&V_9), NULL);
		if (!L_37)
		{
			goto IL_00bc;
		}
	}
	{
		// finalvalue = n;
		int32_t L_38 = V_9;
		int32_t L_39 = L_38;
		RuntimeObject* L_40 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_39);
		V_8 = L_40;
		goto IL_00d0;
	}

IL_00bc:
	{
		// else if (float.TryParse(value, out f))
		String_t* L_41 = V_7;
		bool L_42;
		L_42 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_41, (&V_10), NULL);
		if (!L_42)
		{
			goto IL_00d0;
		}
	}
	{
		// finalvalue = f;
		float L_43 = V_10;
		float L_44 = L_43;
		RuntimeObject* L_45 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_44);
		V_8 = L_45;
	}

IL_00d0:
	{
		// entry[header[j]] = finalvalue;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_46 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_2;
		int32_t L_48 = V_6;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		String_t* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		RuntimeObject* L_51 = V_8;
		NullCheck(L_46);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_46, L_50, L_51, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// for (var j = 0; j < header.Length && j < values.Length; j++)
		int32_t L_52 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00e3:
	{
		// for (var j = 0; j < header.Length && j < values.Length; j++)
		int32_t L_53 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = V_2;
		NullCheck(L_54);
		if ((((int32_t)L_53) >= ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_55 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = V_4;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_0074;
		}
	}

IL_00f2:
	{
		// list.Add(entry);
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_57 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_58 = V_5;
		NullCheck(L_57);
		List_1_Add_mA293F10765359D70384794AA7DA94A25FA0AC15E_inline(L_57, L_58, List_1_Add_mA293F10765359D70384794AA7DA94A25FA0AC15E_RuntimeMethod_var);
	}

IL_00fa:
	{
		// for (var i = 1; i < lines.Length; i++)
		int32_t L_59 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_00fe:
	{
		// for (var i = 1; i < lines.Length; i++)
		int32_t L_60 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = V_1;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		// return list;
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_62 = V_0;
		return L_62;
	}
}
// System.Void CSVReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CSVReader__ctor_m54F86B66A936233105D0BC1B9993D66D23D5C85B (CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void CSVReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CSVReader__cctor_mE7ED453238AD3FDAC0E2D015DB6F2822CC2BD1C8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BEAC275522F5FA9B3B3C4D4E0271A9CC978CE7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC49039D31EFC2F2CE6BB1F0E3B3140935DC3C6F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static string SPLIT_RE = @",(?=(?:[^""]*""[^""]*"")*(?![^""]*""))";
		((CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields*)il2cpp_codegen_static_fields_for(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var))->___SPLIT_RE_0 = _stringLiteralC49039D31EFC2F2CE6BB1F0E3B3140935DC3C6F8;
		Il2CppCodeGenWriteBarrier((void**)(&((CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields*)il2cpp_codegen_static_fields_for(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var))->___SPLIT_RE_0), (void*)_stringLiteralC49039D31EFC2F2CE6BB1F0E3B3140935DC3C6F8);
		// static string LINE_SPLIT_RE = @"\r\n|\n\r|\n|\r";
		((CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields*)il2cpp_codegen_static_fields_for(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var))->___LINE_SPLIT_RE_1 = _stringLiteral6BEAC275522F5FA9B3B3C4D4E0271A9CC978CE7E;
		Il2CppCodeGenWriteBarrier((void**)(&((CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields*)il2cpp_codegen_static_fields_for(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var))->___LINE_SPLIT_RE_1), (void*)_stringLiteral6BEAC275522F5FA9B3B3C4D4E0271A9CC978CE7E);
		// static char[] TRIM_CHARS = { '\"' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)34));
		((CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields*)il2cpp_codegen_static_fields_for(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var))->___TRIM_CHARS_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_StaticFields*)il2cpp_codegen_static_fields_for(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var))->___TRIM_CHARS_2), (void*)L_1);
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
// System.Void D::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void D_Start_m2FEC3FF309A47A5561A7B1BF374C7BF49A16C4C6 (D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969B34DE6E3508B743D73FE21E0204A5CA131E42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pemain = GameObject.Find("Pemain");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24, NULL);
		((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___pemain_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___pemain_5), (void*)L_0);
		// jawaban = GameObject.Find("GameObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral969B34DE6E3508B743D73FE21E0204A5CA131E42, NULL);
		((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___jawaban_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___jawaban_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void D::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void D_Update_m5A10EE54C278B24036198A67A94A8FAFCC73AEB4 (D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isMobilePlatform)
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		// }
		return;
	}
}
// System.Void D::CheckTouchInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void D_CheckTouchInput_m642759985F475EF03A4FE6435B582EA0EA56CAD3 (D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		// if (Input.touches[0].phase == TouchPhase.Began)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_1;
		L_1 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if (L_2)
		{
			goto IL_0082;
		}
	}
	{
		// pemain.GetComponent<Jalan>().bolehJalan = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___pemain_5;
		NullCheck(L_3);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_4;
		L_4 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_3, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___bolehJalan_9 = (bool)1;
		// dadu = GameObject.Find("Dadu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25, NULL);
		((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___dadu_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___dadu_7), (void*)L_5);
		// dadu.GetComponent<Dice>().coroutineAllowed = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_6);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_7;
		L_7 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_6, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___coroutineAllowed_7 = (bool)1;
		// dadu.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_8);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9;
		L_9 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_8, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_9);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, (bool)1, NULL);
		// Soal koreksi = GameObject.Find("Soal").GetComponent<Soal>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE, NULL);
		NullCheck(L_10);
		Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* L_11;
		L_11 = GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A(L_10, GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		// koreksi.koreksiSoal("D");
		NullCheck(L_11);
		Soal_koreksiSoal_m1EA614C284329939F364E64BB1B7D4DF2C7E58B7(L_11, _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, NULL);
		// animator.SetTrigger("selesai");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___animator_6;
		NullCheck(L_12);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_12, _stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void D::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void D_OnMouseDown_m53A11D5388B93F882524A9350A2F0BC58BDB3A9C (D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pemain.GetComponent<Jalan>().bolehJalan = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___pemain_5;
		NullCheck(L_0);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_1;
		L_1 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_0, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___bolehJalan_9 = (bool)1;
		// dadu = GameObject.Find("Dadu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25, NULL);
		((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___dadu_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___dadu_7), (void*)L_2);
		// dadu.GetComponent<Dice>().coroutineAllowed = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_3);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_4;
		L_4 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_3, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___coroutineAllowed_7 = (bool)1;
		// dadu.GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_StaticFields*)il2cpp_codegen_static_fields_for(D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3_il2cpp_TypeInfo_var))->___dadu_7;
		NullCheck(L_5);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6;
		L_6 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_5, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_6);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)1, NULL);
		// Soal koreksi = GameObject.Find("Soal").GetComponent<Soal>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE, NULL);
		NullCheck(L_7);
		Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* L_8;
		L_8 = GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A(L_7, GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		// koreksi.koreksiSoal("D");
		NullCheck(L_8);
		Soal_koreksiSoal_m1EA614C284329939F364E64BB1B7D4DF2C7E58B7(L_8, _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, NULL);
		// animator.SetTrigger("selesai");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___animator_6;
		NullCheck(L_9);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_9, _stringLiteral12E9B3FBE9E6E7610AA0AEA791BF1AE2CC201F4F, NULL);
		// }
		return;
	}
}
// System.Void D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void D__ctor_m26E02FDD049B7E1CA6A89B8C45E20C0BC26B2731 (D_tEF28ACE0D5BEEF0EB41CCC102580C71DC2E73BE3* __this, const RuntimeMethod* method) 
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
// System.Void Dice::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dice_Start_m7F1C812791BB3B4E94A153E0A7EC3D442B732E88 (Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38AE8002A3B741336B5E36084A2A4F3F0FA4E2DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countDadu = 0;
		((Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_StaticFields*)il2cpp_codegen_static_fields_for(Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_il2cpp_TypeInfo_var))->___countDadu_4 = 0;
		// rend = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___rend_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_6), (void*)L_0);
		// diceSides = Resources.LoadAll<Sprite>("DiceSides/");
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1;
		L_1 = Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E(_stringLiteral38AE8002A3B741336B5E36084A2A4F3F0FA4E2DF, Resources_LoadAll_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m5AB56F241D4637483AB93C9A1AADA0A304C8607E_RuntimeMethod_var);
		__this->___diceSides_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___diceSides_5), (void*)L_1);
		// rend.sprite = diceSides[5];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___rend_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_3 = __this->___diceSides_5;
		NullCheck(L_3);
		int32_t L_4 = 5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_2);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_2, L_5, NULL);
		// }
		return;
	}
}
// System.Void Dice::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dice_OnMouseDown_m548EE8AE1B4032795C09ED6E8BF6B1FEBE285561 (Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0735C06DC7B18E1DD5D5208DC0AA7076E9774478);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Kontrol.gameOver && coroutineAllowed)
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		bool L_0 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___gameOver_10;
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = __this->___coroutineAllowed_7;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// StartCoroutine("RollTheDice");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral0735C06DC7B18E1DD5D5208DC0AA7076E9774478, NULL);
		// GetComponent<AudioSource>().Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		return;
	}

IL_0027:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Dice::RollTheDice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dice_RollTheDice_m7EC7A4BE3B509F003AF71D903093264F36096423 (Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2* L_0 = (U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2*)il2cpp_codegen_object_new(U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRollTheDiceU3Ed__6__ctor_m4BFC1D6032396F83E7341F017572CF067B3BF179(L_0, 0, NULL);
		U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Dice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dice__ctor_m87855C30EA2329EE8A0D93F0A8CCC061186054F7 (Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* __this, const RuntimeMethod* method) 
{
	{
		// public bool coroutineAllowed = true;
		__this->___coroutineAllowed_7 = (bool)1;
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
// System.Void Dice/<RollTheDice>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRollTheDiceU3Ed__6__ctor_m4BFC1D6032396F83E7341F017572CF067B3BF179 (U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Dice/<RollTheDice>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRollTheDiceU3Ed__6_System_IDisposable_Dispose_mF932954FEBFF0BC03571363781F56453156D0BFE (U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Dice/<RollTheDice>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRollTheDiceU3Ed__6_MoveNext_mE5AEF98FECCB5A9605D4A1583DD9FC84FDD6D54F (U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00ef;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// coroutineAllowed = false;
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_3 = V_1;
		NullCheck(L_3);
		L_3->___coroutineAllowed_7 = (bool)0;
		// countDadu += 1;
		int32_t L_4 = ((Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_StaticFields*)il2cpp_codegen_static_fields_for(Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_il2cpp_TypeInfo_var))->___countDadu_4;
		((Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_StaticFields*)il2cpp_codegen_static_fields_for(Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_il2cpp_TypeInfo_var))->___countDadu_4 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// int randomDiceSide = 0;
		__this->___U3CrandomDiceSideU3E5__2_3 = 0;
		// for (int i = 0; i <= 20; i++)
		__this->___U3CiU3E5__3_4 = 0;
		goto IL_00a1;
	}

IL_004c:
	{
		// randomDiceSide = Random.Range(0, 6);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 6, NULL);
		__this->___U3CrandomDiceSideU3E5__2_3 = L_5;
		// rend.sprite = diceSides[randomDiceSide];
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_6 = V_1;
		NullCheck(L_6);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = L_6->___rend_6;
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_8 = V_1;
		NullCheck(L_8);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_9 = L_8->___diceSides_5;
		int32_t L_10 = __this->___U3CrandomDiceSideU3E5__2_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_7, L_12, NULL);
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, (0.00999999978f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i <= 20; i++)
		int32_t L_14 = __this->___U3CiU3E5__3_4;
		V_2 = L_14;
		int32_t L_15 = V_2;
		__this->___U3CiU3E5__3_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_00a1:
	{
		// for (int i = 0; i <= 20; i++)
		int32_t L_16 = __this->___U3CiU3E5__3_4;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)20))))
		{
			goto IL_004c;
		}
	}
	{
		// Kontrol.lemparDadu = randomDiceSide + 1;
		int32_t L_17 = __this->___U3CrandomDiceSideU3E5__2_3;
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___lemparDadu_11 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		// Kontrol.Pindah();
		Kontrol_Pindah_m7D6A0836C8440877881D068D3DD1A695DCF8C843(NULL);
		// Soal.skor -= Kontrol.lemparDadu;
		int32_t L_18 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_19 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___lemparDadu_11;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6 = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		// yield return new WaitForSeconds(1f*(Kontrol.lemparDadu/2));
		int32_t L_20 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___lemparDadu_11;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_21 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_21, ((float)il2cpp_codegen_multiply((1.0f), ((float)((int32_t)(L_20/2))))), NULL);
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ef:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// coroutineAllowed = true;
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_22 = V_1;
		NullCheck(L_22);
		L_22->___coroutineAllowed_7 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object Dice/<RollTheDice>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRollTheDiceU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4C8BCA72FB51EB9F79F1BB8962FF6244C5882774 (U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Dice/<RollTheDice>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRollTheDiceU3Ed__6_System_Collections_IEnumerator_Reset_m7902E2DA046D5DDF5883AE9FDA920654353B5149 (U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRollTheDiceU3Ed__6_System_Collections_IEnumerator_Reset_m7902E2DA046D5DDF5883AE9FDA920654353B5149_RuntimeMethod_var)));
	}
}
// System.Object Dice/<RollTheDice>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRollTheDiceU3Ed__6_System_Collections_IEnumerator_get_Current_mAAC0910F7CB67BE3D588585AE8C5E5817BE8975D (U3CRollTheDiceU3Ed__6_t3C2BFAE2F9B297817C46B238ADC86A8BBC0DCFF2* __this, const RuntimeMethod* method) 
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
// System.Void help::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void help_Start_mAD0C65A6547C59F95AAB5636E4E6D6B837BF8627 (help_tF6EE75C918F00451A5D6CF61915E6D366AC225A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128);
		s_Il2CppMethodInitialized = true;
	}
	{
		// menu = GameObject.Find("menu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128, NULL);
		__this->___menu_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menu_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void help::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void help_OnMouseDown_mD2FC525A7F174FA7F09A53FE3D086121565CDF4D (help_tF6EE75C918F00451A5D6CF61915E6D366AC225A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656_m69D0B55CAC764173DB75776A6FF0C53DCA5C1F4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F89FC341926EE4942E2FA5E073C70F14289FC63);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Bantuan");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3F89FC341926EE4942E2FA5E073C70F14289FC63, NULL);
		// menu.GetComponent<MenuAwal>().bolehHilang = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___menu_4;
		NullCheck(L_0);
		MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* L_1;
		L_1 = GameObject_GetComponent_TisMenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656_m69D0B55CAC764173DB75776A6FF0C53DCA5C1F4C(L_0, GameObject_GetComponent_TisMenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656_m69D0B55CAC764173DB75776A6FF0C53DCA5C1F4C_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___bolehHilang_6 = (bool)1;
		// }
		return;
	}
}
// System.Void help::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void help__ctor_m404FF401B2E42D38E1F890052A89E280FE9CF2B0 (help_tF6EE75C918F00451A5D6CF61915E6D366AC225A3* __this, const RuntimeMethod* method) 
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
// System.Void Item::.ctor(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m750A421E111BF218E5CB17697126B18E57C84E3D (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* ___d0, const RuntimeMethod* method) 
{
	{
		// public Item(Item d)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// id = d.id;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = ___d0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___id_0;
		__this->___id_0 = L_1;
		// soal = d.soal;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_2 = ___d0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___soal_1;
		__this->___soal_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___soal_1), (void*)L_3);
		// A = d.A;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_4 = ___d0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___A_2;
		__this->___A_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___A_2), (void*)L_5);
		// B = d.B;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_6 = ___d0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___B_3;
		__this->___B_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___B_3), (void*)L_7);
		// C = d.C;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_8 = ___d0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___C_4;
		__this->___C_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___C_4), (void*)L_9);
		// D = d.D;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_10 = ___d0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___D_5;
		__this->___D_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___D_5), (void*)L_11);
		// kunci = d.kunci;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_12 = ___d0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___kunci_6;
		__this->___kunci_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kunci_6), (void*)L_13);
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
// System.Void Jalan::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jalan_Start_mEA8915821A54FDA2B3344EB9BCD4BD70EE87DF6C (Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// skor.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___skor_14;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// restart.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___restart_15;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// close.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___close_16;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// boxMenang.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___boxMenang_13;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// transform.position = titik[titikIndex].transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___titik_4;
		int32_t L_6 = __this->___titikIndex_6;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_9, NULL);
		// }
		return;
	}
}
// System.Void Jalan::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jalan_Update_m84CB9F7FB990D5D58E3A5AAAD34DC8C546362BEC (Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3986A1EB3EA59BD35767B70E9FC97A8441ADA58A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C2DFF813125502500BF8A3A1CEBD81E1EC51547);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEACB1D3FF069E3D302E0F39C7AE85632800F0398);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFC14D07C57428544D8F0FB0D47C4B859FDC926F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8556B44CC0E913176CA5859A270CD74E388E67C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// selisih_update = 24 - titikIndex;
		int32_t L_0 = __this->___titikIndex_6;
		__this->___selisih_update_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)24), L_0));
		// if (bolehJalan)
		bool L_1 = __this->___bolehJalan_9;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// Gerak();
		Jalan_Gerak_m8A55891E8F27D021A56014B01EB178736F67A5FB(__this, NULL);
	}

IL_0024:
	{
		// if (titikIndex > 24)
		int32_t L_2 = __this->___titikIndex_6;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)24))))
		{
			goto IL_0159;
		}
	}
	{
		// Jalan.time_fixed = Kontrol.time;
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		float L_3 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___time_14;
		((Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_StaticFields*)il2cpp_codegen_static_fields_for(Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_il2cpp_TypeInfo_var))->___time_fixed_11 = L_3;
		// bolehPlay = true;
		__this->___bolehPlay_10 = (bool)1;
		// GetComponent<AudioSource>().Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		NullCheck(L_4);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_4, NULL);
		// GetComponent<AudioSource>().clip = hore;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___hore_8;
		NullCheck(L_5);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_5, L_6, NULL);
		// if (bolehPlay)
		bool L_7 = __this->___bolehPlay_10;
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		// StartCoroutine("Nyalakan");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralF8556B44CC0E913176CA5859A270CD74E388E67C, NULL);
		// bolehPlay = false;
		__this->___bolehPlay_10 = (bool)0;
	}

IL_0079:
	{
		// Soal.skor = Soal.skor + (Kontrol.lemparDadu-selisih_update);
		int32_t L_9 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___lemparDadu_11;
		int32_t L_11 = __this->___selisih_update_7;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6 = ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11))));
		// menangText.text = "Selamat " + Mulai.username + "! Anda Menang dengan Skor " + Soal.skor.ToString() + " dan waktu selama " + time_fixed.ToString() + " detik. Klik 'Dapatkan' untuk Mengambil Hadiah Kartu!";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_12 = __this->___menangText_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral8C2DFF813125502500BF8A3A1CEBD81E1EC51547);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8C2DFF813125502500BF8A3A1CEBD81E1EC51547);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16 = ((Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_StaticFields*)il2cpp_codegen_static_fields_for(Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_il2cpp_TypeInfo_var))->___username_5;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral3986A1EB3EA59BD35767B70E9FC97A8441ADA58A);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3986A1EB3EA59BD35767B70E9FC97A8441ADA58A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_18;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralEACB1D3FF069E3D302E0F39C7AE85632800F0398);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEACB1D3FF069E3D302E0F39C7AE85632800F0398);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		String_t* L_22;
		L_22 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_StaticFields*)il2cpp_codegen_static_fields_for(Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_il2cpp_TypeInfo_var))->___time_fixed_11), NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralEFC14D07C57428544D8F0FB0D47C4B859FDC926F);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralEFC14D07C57428544D8F0FB0D47C4B859FDC926F);
		String_t* L_24;
		L_24 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_23, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_24);
		// waktu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___waktu_19;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// help.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___help_18;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// kartu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___kartu_17;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)1, NULL);
		// boxMenang.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___boxMenang_13;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// skor.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___skor_14;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)0, NULL);
		// restart.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___restart_15;
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
		// close.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___close_16;
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)1, NULL);
		// Kontrol.gameOver = true;
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___gameOver_10 = (bool)1;
		// Kontrol.dadu.GetComponent<Renderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___dadu_5;
		NullCheck(L_32);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_33;
		L_33 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_32, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_33);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_33, (bool)0, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0159:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Jalan::Nyalakan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Jalan_Nyalakan_m567E933988349D3E44AEA98C709556DC88C1F39F (Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA* L_0 = (U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA*)il2cpp_codegen_object_new(U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CNyalakanU3Ed__20__ctor_mA4C32E49E45077DF647215D43B7F672CAAD45BA7(L_0, 0, NULL);
		U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Jalan::Gerak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jalan_Gerak_m8A55891E8F27D021A56014B01EB178736F67A5FB (Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (titikIndex <= titik.Count - 1)
		int32_t L_0 = __this->___titikIndex_6;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___titik_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_00a8;
		}
	}
	{
		// transform.position = Vector2.MoveTowards(transform.position,
		// titik[titikIndex].transform.position,
		// moveSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___titik_4;
		int32_t L_8 = __this->___titikIndex_6;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_7, L_8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_11, NULL);
		float L_13 = __this->___moveSpeed_5;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline(L_6, L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_15, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_16, NULL);
		// if (transform.position == titik[titikIndex].transform.position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = __this->___titik_4;
		int32_t L_20 = __this->___titikIndex_6;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_19, L_20, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		bool L_24;
		L_24 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_18, L_23, NULL);
		if (!L_24)
		{
			goto IL_014c;
		}
	}
	{
		// titikIndex += 1;
		int32_t L_25 = __this->___titikIndex_6;
		__this->___titikIndex_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}

IL_00a8:
	{
		// else if (selisih_update - Kontrol.lemparDadu < 0)
		int32_t L_26 = __this->___selisih_update_7;
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		int32_t L_27 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___lemparDadu_11;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_26, L_27))) >= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		// transform.position = Vector2.MoveTowards(transform.position,
		// titik[24-selisih_update].transform.position,
		// moveSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_30, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_32 = __this->___titik_4;
		int32_t L_33 = __this->___selisih_update_7;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_32, ((int32_t)il2cpp_codegen_subtract(((int32_t)24), L_33)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_36, NULL);
		float L_38 = __this->___moveSpeed_5;
		float L_39;
		L_39 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline(L_31, L_37, ((float)il2cpp_codegen_multiply(L_38, L_39)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_40, NULL);
		NullCheck(L_28);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_28, L_41, NULL);
		// if (transform.position == titik[24 - selisih_update].transform.position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_44 = __this->___titik_4;
		int32_t L_45 = __this->___selisih_update_7;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_44, ((int32_t)il2cpp_codegen_subtract(((int32_t)24), L_45)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_47, NULL);
		bool L_49;
		L_49 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_43, L_48, NULL);
		if (!L_49)
		{
			goto IL_014c;
		}
	}
	{
		// titikIndex -= 1;
		int32_t L_50 = __this->___titikIndex_6;
		__this->___titikIndex_6 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
	}

IL_014c:
	{
		// }
		return;
	}
}
// System.Void Jalan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jalan__ctor_m5A0FAE5251919995421899F6BCF28A18DFD8051B (Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> titik = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___titik_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___titik_4), (void*)L_0);
		// private float moveSpeed = 1f;
		__this->___moveSpeed_5 = (1.0f);
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
// System.Void Jalan/<Nyalakan>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNyalakanU3Ed__20__ctor_mA4C32E49E45077DF647215D43B7F672CAAD45BA7 (U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Jalan/<Nyalakan>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNyalakanU3Ed__20_System_IDisposable_Dispose_mDCA627F5D5E5C6AFE4861696D215C2018B59417A (U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Jalan/<Nyalakan>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CNyalakanU3Ed__20_MoveNext_m2C0CBB86DC4CBAF221DE43C682F6B64BA9857376 (U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GetComponent<AudioSource>().Play();
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_4 = V_1;
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_4, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// yield return new WaitForSeconds(hore.length);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_6 = V_1;
		NullCheck(L_6);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = L_6->___hore_8;
		NullCheck(L_7);
		float L_8;
		L_8 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_7, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GetComponent<AudioSource>().Stop();
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_10 = V_1;
		NullCheck(L_10);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11;
		L_11 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_10, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		NullCheck(L_11);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Jalan/<Nyalakan>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNyalakanU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5627DDA2A2674165DA959938AE3418DA77C7E4B6 (U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Jalan/<Nyalakan>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNyalakanU3Ed__20_System_Collections_IEnumerator_Reset_m9AE5C3653A11EA70EF584161AE6BE7DFB4BA8781 (U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CNyalakanU3Ed__20_System_Collections_IEnumerator_Reset_m9AE5C3653A11EA70EF584161AE6BE7DFB4BA8781_RuntimeMethod_var)));
	}
}
// System.Object Jalan/<Nyalakan>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNyalakanU3Ed__20_System_Collections_IEnumerator_get_Current_m02D9C25A7E744F667968E1E3A93C5F13934938DF (U3CNyalakanU3Ed__20_tB64BEA77521E8DE55278E7D8E7FECDF8F9E707FA* __this, const RuntimeMethod* method) 
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
// System.Void Kartu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kartu_Start_m9986FEF65FD67C6DD7073294881EED380DC5956E (Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bolehKlik = true;
		__this->___bolehKlik_10 = (bool)1;
		// penampilKartu = gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___penampilKartu_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___penampilKartu_8), (void*)L_1);
		// kartu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___kartu_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// rend = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___rend_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_9), (void*)L_3);
		// Color c = rend.material.color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___rend_9;
		NullCheck(L_4);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_4, NULL);
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_5, NULL);
		V_0 = L_6;
		// rend.material.color = c;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___rend_9;
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		NullCheck(L_8);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Kartu::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kartu_OnMouseDown_m207F91E2CA9E00C9C9FEC64FF42F6078EB37E316 (Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bolehKlik)
		bool L_0 = __this->___bolehKlik_10;
		if (!L_0)
		{
			goto IL_00d7;
		}
	}
	{
		// if (Soal.skor <= Soal.batas5)
		int32_t L_1 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_2 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas5_11;
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_0025;
		}
	}
	{
		// StartCoroutine(MunculkanKartu(0));
		RuntimeObject* L_3;
		L_3 = Kartu_MunculkanKartu_m07F998A8181CAC31E9782EF30A58EF223A50860E(__this, 0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0025:
	{
		// if (Soal.skor > Soal.batas5 && Soal.skor <= Soal.batas4)
		int32_t L_5 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_6 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas5_11;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_7 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_8 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas4_10;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_004b;
		}
	}
	{
		// StartCoroutine(MunculkanKartu(1));
		RuntimeObject* L_9;
		L_9 = Kartu_MunculkanKartu_m07F998A8181CAC31E9782EF30A58EF223A50860E(__this, 1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
	}

IL_004b:
	{
		// if (Soal.skor > Soal.batas4 && Soal.skor <= Soal.batas3)
		int32_t L_11 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_12 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas4_10;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_13 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_14 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas3_9;
		if ((((int32_t)L_13) > ((int32_t)L_14)))
		{
			goto IL_0071;
		}
	}
	{
		// StartCoroutine(MunculkanKartu(2));
		RuntimeObject* L_15;
		L_15 = Kartu_MunculkanKartu_m07F998A8181CAC31E9782EF30A58EF223A50860E(__this, 2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_15, NULL);
	}

IL_0071:
	{
		// if (Soal.skor > Soal.batas3 && Soal.skor <= Soal.batas2)
		int32_t L_17 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_18 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas3_9;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_19 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_20 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas2_8;
		if ((((int32_t)L_19) > ((int32_t)L_20)))
		{
			goto IL_0097;
		}
	}
	{
		// StartCoroutine(MunculkanKartu(3));
		RuntimeObject* L_21;
		L_21 = Kartu_MunculkanKartu_m07F998A8181CAC31E9782EF30A58EF223A50860E(__this, 3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_21, NULL);
	}

IL_0097:
	{
		// if (Soal.skor > Soal.batas2 && Soal.skor <= Soal.batas1)
		int32_t L_23 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_24 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas2_8;
		if ((((int32_t)L_23) <= ((int32_t)L_24)))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_25 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_26 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas1_7;
		if ((((int32_t)L_25) > ((int32_t)L_26)))
		{
			goto IL_00bd;
		}
	}
	{
		// StartCoroutine(MunculkanKartu(4));
		RuntimeObject* L_27;
		L_27 = Kartu_MunculkanKartu_m07F998A8181CAC31E9782EF30A58EF223A50860E(__this, 4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_28;
		L_28 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_27, NULL);
	}

IL_00bd:
	{
		// if (Soal.skor > Soal.batas1)
		int32_t L_29 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_30 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas1_7;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00d7;
		}
	}
	{
		// StartCoroutine(MunculkanKartu(5));
		RuntimeObject* L_31;
		L_31 = Kartu_MunculkanKartu_m07F998A8181CAC31E9782EF30A58EF223A50860E(__this, 5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_32;
		L_32 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_31, NULL);
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Kartu::MunculkanKartu(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Kartu_MunculkanKartu_m07F998A8181CAC31E9782EF30A58EF223A50860E (Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* __this, int32_t ___indekskartu0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6* L_0 = (U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6*)il2cpp_codegen_object_new(U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMunculkanKartuU3Ed__9__ctor_mB8CA8D5423513EE4BD7ABB745C1433CEE880BEB7(L_0, 0, NULL);
		U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6* L_2 = L_1;
		int32_t L_3 = ___indekskartu0;
		NullCheck(L_2);
		L_2->___indekskartu_3 = L_3;
		return L_2;
	}
}
// System.Void Kartu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kartu__ctor_m60AE63BC310C308FF70C7EFBCCF2A0C9AE7A7CE0 (Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* __this, const RuntimeMethod* method) 
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
// System.Void Kartu/<MunculkanKartu>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMunculkanKartuU3Ed__9__ctor_mB8CA8D5423513EE4BD7ABB745C1433CEE880BEB7 (U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Kartu/<MunculkanKartu>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMunculkanKartuU3Ed__9_System_IDisposable_Dispose_mC00389CF8077D89DC64DDDF8EB3FF28F8F35598C (U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Kartu/<MunculkanKartu>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMunculkanKartuU3Ed__9_MoveNext_mFFB05A710F645910CA966E9D57EDBDFDB1F0AD45 (U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_010b;
			}
			case 2:
			{
				goto IL_018a;
			}
			case 3:
			{
				goto IL_01c9;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bolehKlik = false;
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_3 = V_1;
		NullCheck(L_3);
		L_3->___bolehKlik_10 = (bool)0;
		// teksmenang.SetActive(false);
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___teksmenang_5;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// close.SetActive(false);
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___close_6;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// penampilKartu.sprite = kartuu[7];
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_8 = V_1;
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = L_8->___penampilKartu_8;
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_10 = V_1;
		NullCheck(L_10);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_11 = L_10->___kartuu_7;
		NullCheck(L_11);
		int32_t L_12 = 7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_9, L_13, NULL);
		// kartu.transform.localScale = new Vector2(kartu.transform.localScale.x + 0.6f, kartu.transform.localScale.y + 0.6f);
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_14 = V_1;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___kartu_4;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___kartu_4;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_19, NULL);
		float L_21 = L_20.___x_2;
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_22 = V_1;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22->___kartu_4;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_24, NULL);
		float L_26 = L_25.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), ((float)il2cpp_codegen_add(L_21, (0.600000024f))), ((float)il2cpp_codegen_add(L_26, (0.600000024f))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_27, NULL);
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_28, NULL);
		// kartu.transform.position = new Vector3(0, 0, -50f);
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_29 = V_1;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29->___kartu_4;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), (0.0f), (0.0f), (-50.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_32, NULL);
		// kartu.transform.Rotate(Vector3.forward * 90);
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_33 = V_1;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = L_33->___kartu_4;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_36, (90.0f), NULL);
		NullCheck(L_35);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_35, L_37, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_38 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_38, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_38);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_010b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GetComponent<AudioSource>().Play();
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_39 = V_1;
		NullCheck(L_39);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_40;
		L_40 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_39, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		NullCheck(L_40);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_40, NULL);
		// penampilKartu.sprite = kartuu[indekskartu];
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_41 = V_1;
		NullCheck(L_41);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = L_41->___penampilKartu_8;
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_43 = V_1;
		NullCheck(L_43);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_44 = L_43->___kartuu_7;
		int32_t L_45 = __this->___indekskartu_3;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_42);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_42, L_47, NULL);
		// for (float f = 0f; f <= 1; f += 0.05f)
		__this->___U3CfU3E5__2_4 = (0.0f);
		goto IL_01a3;
	}

IL_0142:
	{
		// Color c = rend.material.color;
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_48 = V_1;
		NullCheck(L_48);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_49 = L_48->___rend_9;
		NullCheck(L_49);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50;
		L_50 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_49, NULL);
		NullCheck(L_50);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51;
		L_51 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_50, NULL);
		V_2 = L_51;
		// c.a = f;
		float L_52 = __this->___U3CfU3E5__2_4;
		(&V_2)->___a_3 = L_52;
		// rend.material.color = c;
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_53 = V_1;
		NullCheck(L_53);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_54 = L_53->___rend_9;
		NullCheck(L_54);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_55;
		L_55 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_54, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56 = V_2;
		NullCheck(L_55);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_55, L_56, NULL);
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_57 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_57, (0.0500000007f), NULL);
		__this->___U3CU3E2__current_1 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_57);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_018a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float f = 0f; f <= 1; f += 0.05f)
		float L_58 = __this->___U3CfU3E5__2_4;
		__this->___U3CfU3E5__2_4 = ((float)il2cpp_codegen_add(L_58, (0.0500000007f)));
	}

IL_01a3:
	{
		// for (float f = 0f; f <= 1; f += 0.05f)
		float L_59 = __this->___U3CfU3E5__2_4;
		if ((((float)L_59) <= ((float)(1.0f))))
		{
			goto IL_0142;
		}
	}
	{
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_60 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_60, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_60);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_01c9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// teksmenang.SetActive(true);
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_61 = V_1;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = L_61->___teksmenang_5;
		NullCheck(L_62);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)1, NULL);
		// close.SetActive(true);
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_63 = V_1;
		NullCheck(L_63);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = L_63->___close_6;
		NullCheck(L_64);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)1, NULL);
		// penampilKartu.sprite = kartuu[6];
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_65 = V_1;
		NullCheck(L_65);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_66 = L_65->___penampilKartu_8;
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_67 = V_1;
		NullCheck(L_67);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_68 = L_67->___kartuu_7;
		NullCheck(L_68);
		int32_t L_69 = 6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_66);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_66, L_70, NULL);
		// kartu.transform.localScale = new Vector2(0.4f, 0.4f);
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_71 = V_1;
		NullCheck(L_71);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = L_71->___kartu_4;
		NullCheck(L_72);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_72, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_74), (0.400000006f), (0.400000006f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_74, NULL);
		NullCheck(L_73);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_73, L_75, NULL);
		// kartu.transform.position = new Vector3(0, -1.3f, -50f);
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_76 = V_1;
		NullCheck(L_76);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = L_76->___kartu_4;
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_77, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_79), (0.0f), (-1.29999995f), (-50.0f), /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_78, L_79, NULL);
		// kartu.transform.Rotate(Vector3.forward * -90);
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_80 = V_1;
		NullCheck(L_80);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = L_80->___kartu_4;
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_81, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_83, (-90.0f), NULL);
		NullCheck(L_82);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_82, L_84, NULL);
		// bolehKlik = true;
		Kartu_t75149F4B84FC214CD75DB2A8B66B74C1C0F9FCEB* L_85 = V_1;
		NullCheck(L_85);
		L_85->___bolehKlik_10 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object Kartu/<MunculkanKartu>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMunculkanKartuU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAE916888EEDBB2253B55FD23A5B41577D68AEEB0 (U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Kartu/<MunculkanKartu>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMunculkanKartuU3Ed__9_System_Collections_IEnumerator_Reset_mC3B079E150C7C493182D5B344C0321449CDB7675 (U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMunculkanKartuU3Ed__9_System_Collections_IEnumerator_Reset_mC3B079E150C7C493182D5B344C0321449CDB7675_RuntimeMethod_var)));
	}
}
// System.Object Kartu/<MunculkanKartu>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMunculkanKartuU3Ed__9_System_Collections_IEnumerator_get_Current_m87AA5AE17A3CCBE9C75490EAE838F397593D408C (U3CMunculkanKartuU3Ed__9_tFFD5428433E00686B118BA37C4055DC2481341C6* __this, const RuntimeMethod* method) 
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
// System.Void Keluar::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keluar_OnMouseDown_m86900D270455267A765E7C7219F245AC8966E3BC (Keluar_tD03D61962D91F6965A4226DD5619DED189A3FF0F* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void Keluar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keluar__ctor_m5BA608C742217456F712E1BF54CA248F3372498F (Keluar_tD03D61962D91F6965A4226DD5619DED189A3FF0F* __this, const RuntimeMethod* method) 
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
// System.Void Kembali::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kembali_OnMouseDown_m21F9728C0CCEDB93957A5903F5AD9784091620BC (Kembali_t54FD2C459F9F60A3DC171BE32AC1096E01406DCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral196F7695235A2CC59C5F69542CD8B53C3B62C3E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MenuAwal");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral196F7695235A2CC59C5F69542CD8B53C3B62C3E6, NULL);
		// }
		return;
	}
}
// System.Void Kembali::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kembali_Update_m60FE9A56185B031975184FA4F0C1DB6A6299647B (Kembali_t54FD2C459F9F60A3DC171BE32AC1096E01406DCB* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isMobilePlatform)
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		// }
		return;
	}
}
// System.Void Kembali::CheckTouchInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kembali_CheckTouchInput_mF2C8476DEC0B70D5F2601EB10727B1E8746686CA (Kembali_t54FD2C459F9F60A3DC171BE32AC1096E01406DCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral196F7695235A2CC59C5F69542CD8B53C3B62C3E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// if (Input.touches[0].phase == TouchPhase.Began)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_1;
		L_1 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		// SceneManager.LoadScene("MenuAwal");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral196F7695235A2CC59C5F69542CD8B53C3B62C3E6, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Kembali::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kembali__ctor_m01B6CDA8E16C211E1747AEEEA3DCE7B077FB1EDE (Kembali_t54FD2C459F9F60A3DC171BE32AC1096E01406DCB* __this, const RuntimeMethod* method) 
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
// System.Void Kontrol::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kontrol_Start_m1144A51250665C0EF87F76E64192C61497CC69D7 (Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9677BF41814A7C78D8F9DE715C8D2BA395702C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC46EA3D3ED69FD8CC7BD4DE438C072F44C94AFF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// waktu = GameObject.Find("Waktu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralEC46EA3D3ED69FD8CC7BD4DE438C072F44C94AFF, NULL);
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___waktu_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___waktu_6), (void*)L_0);
		// waktu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___waktu_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// posisiPemain = 0;
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___posisiPemain_9 = 0;
		// gameOver = false;
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___gameOver_10 = (bool)0;
		// pemain = GameObject.Find("Pemain");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24, NULL);
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___pemain_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___pemain_4), (void*)L_2);
		// pemain.GetComponent<Jalan>().bolehJalan = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___pemain_4;
		NullCheck(L_3);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_4;
		L_4 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_3, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___bolehJalan_9 = (bool)0;
		// dadu = GameObject.Find("Dadu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25, NULL);
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___dadu_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___dadu_5), (void*)L_5);
		// data = GameObject.Find("Kontrol");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral9677BF41814A7C78D8F9DE715C8D2BA395702C6A, NULL);
		__this->___data_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_7), (void*)L_6);
		// data.GetComponent<LoadCSV>().LoadItemData();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___data_7;
		NullCheck(L_7);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_8;
		L_8 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_7, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_8);
		LoadCSV_LoadItemData_mADD94693F4A9B339C156C7476C860924F2AC81A4(L_8, NULL);
		// masterSoal = new string[data.GetComponent<LoadCSV>().itemDatabase.Count][];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___data_7;
		NullCheck(L_9);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_10;
		L_10 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_9, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_11 = L_10->___itemDatabase_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_11, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_13 = (StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF*)(StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF*)SZArrayNew(StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->___masterSoal_15 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___masterSoal_15), (void*)L_13);
		// for (var i = 0; i< data.GetComponent<LoadCSV>().itemDatabase.Count; i++)
		V_0 = 0;
		goto IL_0163;
	}

IL_00a2:
	{
		// masterSoal[i] = new string[] {data.GetComponent<LoadCSV>().itemDatabase[i].soal.ToString(),
		// data.GetComponent<LoadCSV>().itemDatabase[i].A.ToString(),
		// data.GetComponent<LoadCSV>().itemDatabase[i].B.ToString(),
		// data.GetComponent<LoadCSV>().itemDatabase[i].C.ToString(),
		// data.GetComponent<LoadCSV>().itemDatabase[i].D.ToString()};
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_14 = __this->___masterSoal_15;
		int32_t L_15 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___data_7;
		NullCheck(L_18);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_19;
		L_19 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_18, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_19);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_20 = L_19->___itemDatabase_6;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_22;
		L_22 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_20, L_21, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_22);
		String_t* L_23 = L_22->___soal_1;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_24);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___data_7;
		NullCheck(L_26);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_27;
		L_27 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_26, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_27);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_28 = L_27->___itemDatabase_6;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_30;
		L_30 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_28, L_29, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_30);
		String_t* L_31 = L_30->___A_2;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_32);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_25;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___data_7;
		NullCheck(L_34);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_35;
		L_35 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_34, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_35);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_36 = L_35->___itemDatabase_6;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_38;
		L_38 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_36, L_37, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_38);
		String_t* L_39 = L_38->___B_3;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_40);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_40);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___data_7;
		NullCheck(L_42);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_43;
		L_43 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_42, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_43);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_44 = L_43->___itemDatabase_6;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_46;
		L_46 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_44, L_45, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_46);
		String_t* L_47 = L_46->___C_4;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_48);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_48);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_41;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___data_7;
		NullCheck(L_50);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_51;
		L_51 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_50, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_51);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_52 = L_51->___itemDatabase_6;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_54;
		L_54 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_52, L_53, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_54);
		String_t* L_55 = L_54->___D_5;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_55);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_56);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_56);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_49);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)L_49);
		// for (var i = 0; i< data.GetComponent<LoadCSV>().itemDatabase.Count; i++)
		int32_t L_57 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0163:
	{
		// for (var i = 0; i< data.GetComponent<LoadCSV>().itemDatabase.Count; i++)
		int32_t L_58 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___data_7;
		NullCheck(L_59);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_60;
		L_60 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_59, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_60);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_61 = L_60->___itemDatabase_6;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_61, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		if ((((int32_t)L_58) < ((int32_t)L_62)))
		{
			goto IL_00a2;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Kontrol::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kontrol_Update_m09FD7087E5106CFA5D27BEC36A82CEFFE50450B9 (Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8EEA2710BAC02319E92AAB130C154FC8BED170E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// time = Mathf.Round(Time.timeSinceLevelLoad);
		float L_0;
		L_0 = Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921(NULL);
		float L_1;
		L_1 = bankers_roundf(L_0);
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___time_14 = L_1;
		// waktuText.text = "Waktu = " + time.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___waktuText_13;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___time_14), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB8EEA2710BAC02319E92AAB130C154FC8BED170E, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// if (pemain.GetComponent<Jalan>().titikIndex >
		//     posisiPemain + lemparDadu)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___pemain_4;
		NullCheck(L_5);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_6;
		L_6 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_5, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7 = L_6->___titikIndex_6;
		int32_t L_8 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___posisiPemain_9;
		int32_t L_9 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___lemparDadu_11;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_8, L_9)))))
		{
			goto IL_0120;
		}
	}
	{
		// penentu = posisiPemain + lemparDadu;
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___posisiPemain_9;
		int32_t L_11 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___lemparDadu_11;
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___penentu_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		// pemainLempardadu(7,masterSoal[0]);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_12 = __this->___masterSoal_15;
		NullCheck(L_12);
		int32_t L_13 = 0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0(__this, 7, L_14, NULL);
		// pemainLempardadu(18,masterSoal[1]);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_15 = __this->___masterSoal_15;
		NullCheck(L_15);
		int32_t L_16 = 1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0(__this, ((int32_t)18), L_17, NULL);
		// pemainLempardadu(22,masterSoal[2]);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_18 = __this->___masterSoal_15;
		NullCheck(L_18);
		int32_t L_19 = 2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0(__this, ((int32_t)22), L_20, NULL);
		// pemainLempardadu(16,masterSoal[3]);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_21 = __this->___masterSoal_15;
		NullCheck(L_21);
		int32_t L_22 = 3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0(__this, ((int32_t)16), L_23, NULL);
		// pemainLempardadu(8,masterSoal[4]);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_24 = __this->___masterSoal_15;
		NullCheck(L_24);
		int32_t L_25 = 4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0(__this, 8, L_26, NULL);
		// pemainLempardadu(1,masterSoal[5]);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_27 = __this->___masterSoal_15;
		NullCheck(L_27);
		int32_t L_28 = 5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0(__this, 1, L_29, NULL);
		// pemainLempardadu(10,masterSoal[6]);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_30 = __this->___masterSoal_15;
		NullCheck(L_30);
		int32_t L_31 = 6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0(__this, ((int32_t)10), L_32, NULL);
		// pemainLempardadu(14,masterSoal[7]);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_33 = __this->___masterSoal_15;
		NullCheck(L_33);
		int32_t L_34 = 7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0(__this, ((int32_t)14), L_35, NULL);
		// pemainLempardadu(15,masterSoal[8]);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_36 = __this->___masterSoal_15;
		NullCheck(L_36);
		int32_t L_37 = 8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0(__this, ((int32_t)15), L_38, NULL);
		// pemainLempardadu(2,masterSoal[9]);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_39 = __this->___masterSoal_15;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0(__this, 2, L_41, NULL);
		// pemain.GetComponent<Jalan>().bolehJalan = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___pemain_4;
		NullCheck(L_42);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_43;
		L_43 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_42, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_43);
		L_43->___bolehJalan_9 = (bool)0;
		// posisiPemain = pemain.GetComponent<Jalan>().titikIndex - 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___pemain_4;
		NullCheck(L_44);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_45;
		L_45 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_44, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_45);
		int32_t L_46 = L_45->___titikIndex_6;
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___posisiPemain_9 = ((int32_t)il2cpp_codegen_subtract(L_46, 1));
	}

IL_0120:
	{
		// if (pemain.GetComponent<Jalan>().titikIndex > 24)
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___pemain_4;
		NullCheck(L_47);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_48;
		L_48 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_47, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_48);
		int32_t L_49 = L_48->___titikIndex_6;
		if ((((int32_t)L_49) <= ((int32_t)((int32_t)24))))
		{
			goto IL_013a;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_013a:
	{
		// }
		return;
	}
}
// System.Void Kontrol::Pindah()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kontrol_Pindah_m7D6A0836C8440877881D068D3DD1A695DCF8C843 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pemain.GetComponent<Jalan>().bolehJalan = true;
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___pemain_4;
		NullCheck(L_0);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_1;
		L_1 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_0, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___bolehJalan_9 = (bool)1;
		// }
		return;
	}
}
// System.Void Kontrol::pemainLempardadu(System.Int32,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kontrol_pemainLempardadu_m5EBB2AEFD109FFC777ABB747F2060A2728DFF1B0 (Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893* __this, int32_t ___posisi0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___soalJawab1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (posisiPemain + lemparDadu == posisi)
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___posisiPemain_9;
		int32_t L_1 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___lemparDadu_11;
		int32_t L_2 = ___posisi0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) == ((uint32_t)L_2))))
		{
			goto IL_0051;
		}
	}
	{
		// dadu.GetComponent<Dice>().coroutineAllowed = false;
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___dadu_5;
		NullCheck(L_3);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_4;
		L_4 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_3, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___coroutineAllowed_7 = (bool)0;
		// Soal muncul = GameObject.Find("Soal").GetComponent<Soal>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0E89144D01545010E47CA6EA7A6F9F05F16F6CFE, NULL);
		NullCheck(L_5);
		Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* L_6;
		L_6 = GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A(L_5, GameObject_GetComponent_TisSoal_t1AF96D144A891A7124946889CDF91B1684FF2505_mABBC4A59488EBD5A15A5FE12AD9BF22661BA660A_RuntimeMethod_var);
		// muncul.munculSoal(soalJawab[0],soalJawab[1],soalJawab[2],soalJawab[3],soalJawab[4]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___soalJawab1;
		NullCheck(L_7);
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___soalJawab1;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ___soalJawab1;
		NullCheck(L_13);
		int32_t L_14 = 2;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ___soalJawab1;
		NullCheck(L_16);
		int32_t L_17 = 3;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = ___soalJawab1;
		NullCheck(L_19);
		int32_t L_20 = 4;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_6);
		Soal_munculSoal_m281CDE40977AFB6F14AFA569349F07775F4FA8E3(L_6, L_9, L_12, L_15, L_18, L_21, NULL);
		// dadu.GetComponent<Renderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___dadu_5;
		NullCheck(L_22);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_23;
		L_23 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_22, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_23);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_23, (bool)0, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Kontrol::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kontrol__ctor_m8735530604DDF1C041F792A6677943780166F75D (Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Kontrol::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kontrol__cctor_mF8ECBDDE2E490E2A9FCC73FEA52CE1F7B23F1C43 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int nofPlayers = 1;
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___nofPlayers_8 = 1;
		// public static int posisiPemain = 0;
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___posisiPemain_9 = 0;
		// public static bool gameOver = false;
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___gameOver_10 = (bool)0;
		// public static int lemparDadu = 0;
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___lemparDadu_11 = 0;
		// public static int penentu = 0;
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___penentu_12 = 0;
		// public static float time = 0.0f;
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___time_14 = (0.0f);
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
// System.Void LoadCSV::LoadItemData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCSV_LoadItemData_mADD94693F4A9B339C156C7476C860924F2AC81A4 (LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD54406C540A8F0606F7052FC5D01F3DBB814C833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39DEB7D7646545BC68FC2254FC3CC3593D83371D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C7DA14E6D05FE0AF16C52E29EF11C0DB0CF28C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1DBA8F8A459B58B160A52FFF63943F14490885E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE020B120302E34B781278C33685F2DA255337446* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		// itemDatabase.Clear();
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_0 = __this->___itemDatabase_6;
		NullCheck(L_0);
		List_1_Clear_mD54406C540A8F0606F7052FC5D01F3DBB814C833_inline(L_0, List_1_Clear_mD54406C540A8F0606F7052FC5D01F3DBB814C833_RuntimeMethod_var);
		// List<Dictionary<string, object>> data = CSVReader.Read(File);
		il2cpp_codegen_runtime_class_init_inline(CSVReader_t81E131E0036651D5355B57F94E8DBA7AE2DAA3E7_il2cpp_TypeInfo_var);
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_1;
		L_1 = CSVReader_Read_mFE131C8B6711B10E5AC643B12B21C165920AAFA0(_stringLiteral39DEB7D7646545BC68FC2254FC3CC3593D83371D, NULL);
		V_0 = L_1;
		// for (var i = 0; i< data.Count; i++)
		V_1 = 0;
		goto IL_00df;
	}

IL_001d:
	{
		// int id = int.Parse(data[i]["id"].ToString(), System.Globalization.NumberStyles.Integer);
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4;
		L_4 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_2, L_3, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_4, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		int32_t L_7;
		L_7 = Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E(L_6, 7, NULL);
		V_2 = L_7;
		// string soal = data[i]["soal"].ToString();
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_10;
		L_10 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_8, L_9, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_10, _stringLiteralC1DBA8F8A459B58B160A52FFF63943F14490885E, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		V_3 = L_12;
		// string A = data[i]["A"].ToString();
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15;
		L_15 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_13, L_14, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_15, _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		V_4 = L_17;
		// string B = data[i]["B"].ToString();
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_20;
		L_20 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_18, L_19, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_20, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		V_5 = L_22;
		// string C = data[i]["C"].ToString();
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_25;
		L_25 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_23, L_24, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_25, _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_6 = L_27;
		// string D = data[i]["D"].ToString();
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_30;
		L_30 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_28, L_29, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_30, _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		V_7 = L_32;
		// string kunci = data[i]["kunci"].ToString();
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_33 = V_0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_35;
		L_35 = List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752(L_33, L_34, List_1_get_Item_m0C76489809FFD07F5320A6D62040DCE70D1DF752_RuntimeMethod_var);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_35, _stringLiteral4C7DA14E6D05FE0AF16C52E29EF11C0DB0CF28C9, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		V_8 = L_37;
		// AddItem(id, soal, A, B, C, D, kunci);
		int32_t L_38 = V_2;
		String_t* L_39 = V_3;
		String_t* L_40 = V_4;
		String_t* L_41 = V_5;
		String_t* L_42 = V_6;
		String_t* L_43 = V_7;
		String_t* L_44 = V_8;
		LoadCSV_AddItem_mF4B135169C8541CF518B41076CEE08727DC0ABF3(__this, L_38, L_39, L_40, L_41, L_42, L_43, L_44, NULL);
		// for (var i = 0; i< data.Count; i++)
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00df:
	{
		// for (var i = 0; i< data.Count; i++)
		int32_t L_46 = V_1;
		List_1_tE020B120302E34B781278C33685F2DA255337446* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_inline(L_47, List_1_get_Count_mBE391563AD77CA4C4E18715CEF71AFE50866F8F7_RuntimeMethod_var);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LoadCSV::AddItem(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCSV_AddItem_mF4B135169C8541CF518B41076CEE08727DC0ABF3 (LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* __this, int32_t ___id0, String_t* ___soal1, String_t* ___A2, String_t* ___B3, String_t* ___C4, String_t* ___D5, String_t* ___kunci6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* V_0 = NULL;
	{
		// Item tempItem = new Item(blankItem);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_0 = __this->___blankItem_5;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_1 = (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95*)il2cpp_codegen_object_new(Item_tFAF77888D49883A321EB596A7D93CB5615D37E95_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Item__ctor_m750A421E111BF218E5CB17697126B18E57C84E3D(L_1, L_0, NULL);
		V_0 = L_1;
		// tempItem.id = id;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_2 = V_0;
		int32_t L_3 = ___id0;
		NullCheck(L_2);
		L_2->___id_0 = L_3;
		// tempItem.soal = soal;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_4 = V_0;
		String_t* L_5 = ___soal1;
		NullCheck(L_4);
		L_4->___soal_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___soal_1), (void*)L_5);
		// tempItem.A = A;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_6 = V_0;
		String_t* L_7 = ___A2;
		NullCheck(L_6);
		L_6->___A_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___A_2), (void*)L_7);
		// tempItem.B = B;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_8 = V_0;
		String_t* L_9 = ___B3;
		NullCheck(L_8);
		L_8->___B_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___B_3), (void*)L_9);
		// tempItem.C = C;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_10 = V_0;
		String_t* L_11 = ___C4;
		NullCheck(L_10);
		L_10->___C_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___C_4), (void*)L_11);
		// tempItem.D = D;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_12 = V_0;
		String_t* L_13 = ___D5;
		NullCheck(L_12);
		L_12->___D_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___D_5), (void*)L_13);
		// tempItem.kunci = kunci;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_14 = V_0;
		String_t* L_15 = ___kunci6;
		NullCheck(L_14);
		L_14->___kunci_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___kunci_6), (void*)L_15);
		// itemDatabase.Add(tempItem);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_16 = __this->___itemDatabase_6;
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_17 = V_0;
		NullCheck(L_16);
		List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_inline(L_16, L_17, List_1_Add_mEFF978F1EE45936A0DB9A4710667A807F7007228_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LoadCSV::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCSV__ctor_m4909647031315771CC307789242CAFE7C54C903C (LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Item> itemDatabase = new List<Item>();
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_0 = (List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2*)il2cpp_codegen_object_new(List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF(L_0, List_1__ctor_m26C196A4CFA5C469F0AFCD2BC7045356F500D5DF_RuntimeMethod_var);
		__this->___itemDatabase_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemDatabase_6), (void*)L_0);
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
// System.Void MenuAwal::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuAwal_Awake_mAA54EE2F6728E6559163ACFE71736864D1EABC08 (MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128);
		s_Il2CppMethodInitialized = true;
	}
	{
		// menu = GameObject.Find("menu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128, NULL);
		__this->___menu_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menu_4), (void*)L_0);
		// DontDestroyOnLoad(menu);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___menu_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_1, NULL);
		// _audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->____audioSource_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void MenuAwal::PlayMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuAwal_PlayMusic_mDEB23C1C4E70F1A56B7902A7A6108AF4234CE554 (MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* __this, const RuntimeMethod* method) 
{
	{
		// if (_audioSource.isPlaying) return;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (_audioSource.isPlaying) return;
		return;
	}

IL_000e:
	{
		// _audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->____audioSource_7;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void MenuAwal::StopMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuAwal_StopMusic_m8AA4173F9A478CB6FF56ABB16095920D2A8B7F68 (MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* __this, const RuntimeMethod* method) 
{
	{
		// _audioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource_7;
		NullCheck(L_0);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// }
		return;
	}
}
// System.Void MenuAwal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuAwal_Start_m4D08B3ACB92A46F465529BB7894FAE36C6EB9141 (MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656_m69D0B55CAC764173DB75776A6FF0C53DCA5C1F4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128);
		s_Il2CppMethodInitialized = true;
	}
	{
		// menuu = menu.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___menu_4;
		NullCheck(L_0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___menuu_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menuu_5), (void*)L_1);
		// bolehHilang = false;
		__this->___bolehHilang_6 = (bool)0;
		// GameObject.FindGameObjectWithTag("menu").GetComponent<MenuAwal>().PlayMusic();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128, NULL);
		NullCheck(L_2);
		MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* L_3;
		L_3 = GameObject_GetComponent_TisMenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656_m69D0B55CAC764173DB75776A6FF0C53DCA5C1F4C(L_2, GameObject_GetComponent_TisMenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656_m69D0B55CAC764173DB75776A6FF0C53DCA5C1F4C_RuntimeMethod_var);
		NullCheck(L_3);
		MenuAwal_PlayMusic_mDEB23C1C4E70F1A56B7902A7A6108AF4234CE554(L_3, NULL);
		// }
		return;
	}
}
// System.Void MenuAwal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuAwal_Update_m0A52AEF9D278E4ED3722FCE1705A367522968259 (MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51F4B09045C710069B5F5F2AC6E8102647FE6EDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bolehHilang)
		bool L_0 = __this->___bolehHilang_6;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// StartCoroutine("FadeOut");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral51F4B09045C710069B5F5F2AC6E8102647FE6EDB, NULL);
		// bolehHilang = false;
		__this->___bolehHilang_6 = (bool)0;
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MenuAwal::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MenuAwal_FadeOut_m59A94E1FAF85E2B3A04F84A26CFEA751B2488C76 (MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A* L_0 = (U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A*)il2cpp_codegen_object_new(U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeOutU3Ed__9__ctor_mB8D4C7FABFB8475B1A72BF75F66F850A77B4C2C9(L_0, 0, NULL);
		U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MenuAwal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuAwal__ctor_m497942101523CC0DEC8A83BFD30526E806652C7B (MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* __this, const RuntimeMethod* method) 
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
// System.Void MenuAwal/<FadeOut>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__9__ctor_mB8D4C7FABFB8475B1A72BF75F66F850A77B4C2C9 (U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MenuAwal/<FadeOut>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__9_System_IDisposable_Dispose_m28389399EE99800255169749ACC00DD129F4FF53 (U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MenuAwal/<FadeOut>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutU3Ed__9_MoveNext_m839CBAF05A65A2AE0470FD78CB025472ED879928 (U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0073;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float f = 1f; f >= -0.1f; f -= 0.1f)
		__this->___U3CfU3E5__2_3 = (1.0f);
		goto IL_008c;
	}

IL_002b:
	{
		// Color c = menuu.material.color;
		MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* L_4 = V_1;
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = L_4->___menuu_5;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_6, NULL);
		V_2 = L_7;
		// c.a = f;
		float L_8 = __this->___U3CfU3E5__2_3;
		(&V_2)->___a_3 = L_8;
		// menuu.material.color = c;
		MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* L_9 = V_1;
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = L_9->___menuu_5;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_10, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_2;
		NullCheck(L_11);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_11, L_12, NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0073:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float f = 1f; f >= -0.1f; f -= 0.1f)
		float L_14 = __this->___U3CfU3E5__2_3;
		__this->___U3CfU3E5__2_3 = ((float)il2cpp_codegen_subtract(L_14, (0.100000001f)));
	}

IL_008c:
	{
		// for (float f = 1f; f >= -0.1f; f -= 0.1f)
		float L_15 = __this->___U3CfU3E5__2_3;
		if ((((float)L_15) >= ((float)(-0.100000001f))))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object MenuAwal/<FadeOut>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA4CEE931B4DAC80ACF56408D569F37E1A33919BF (U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MenuAwal/<FadeOut>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__9_System_Collections_IEnumerator_Reset_m8432243FCA7FE6ABD10541E10D390CA3DA9494C5 (U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutU3Ed__9_System_Collections_IEnumerator_Reset_m8432243FCA7FE6ABD10541E10D390CA3DA9494C5_RuntimeMethod_var)));
	}
}
// System.Object MenuAwal/<FadeOut>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutU3Ed__9_System_Collections_IEnumerator_get_Current_mF83EFA0C28D255B5A145CAB240C292368533D221 (U3CFadeOutU3Ed__9_t6FD84C80639B118F56666807800147DBE599E51A* __this, const RuntimeMethod* method) 
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
// System.Void Mulai::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mulai_OnMouseDown_m403D035589C90A391BE176B690C6A37970F187C5 (Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656_m69D0B55CAC764173DB75776A6FF0C53DCA5C1F4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27F39BCCF95C18FE43FDB864EC3B2FC30680797F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(myCounter >= myTime)
		float L_0 = __this->___myCounter_8;
		float L_1 = __this->___myTime_9;
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_003e;
		}
	}
	{
		// username = usernameInput.text.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___usernameInput_4;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		((Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_StaticFields*)il2cpp_codegen_static_fields_for(Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_il2cpp_TypeInfo_var))->___username_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_StaticFields*)il2cpp_codegen_static_fields_for(Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_il2cpp_TypeInfo_var))->___username_5), (void*)L_4);
		// SceneManager.LoadScene("Utama");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral27F39BCCF95C18FE43FDB864EC3B2FC30680797F, NULL);
		// menu.GetComponent<MenuAwal>().bolehHilang = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___menu_7;
		NullCheck(L_5);
		MenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656* L_6;
		L_6 = GameObject_GetComponent_TisMenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656_m69D0B55CAC764173DB75776A6FF0C53DCA5C1F4C(L_5, GameObject_GetComponent_TisMenuAwal_t52E6E23C430DCD54FC766181CC4AC71D66282656_m69D0B55CAC764173DB75776A6FF0C53DCA5C1F4C_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___bolehHilang_6 = (bool)1;
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Mulai::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mulai_Start_mCBBF707013F16262546114DBD12ECFA2400404DC (Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// usernameInput.text = username;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___usernameInput_4;
		String_t* L_1 = ((Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_StaticFields*)il2cpp_codegen_static_fields_for(Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_il2cpp_TypeInfo_var))->___username_5;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_1, NULL);
		// menu = GameObject.Find("menu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128, NULL);
		__this->___menu_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___menu_7), (void*)L_2);
		// renn = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___renn_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renn_6), (void*)L_3);
		// Color c = renn.material.color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___renn_6;
		NullCheck(L_4);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_4, NULL);
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_5, NULL);
		V_0 = L_6;
		// c.a = 0f;
		(&V_0)->___a_3 = (0.0f);
		// renn.material.color = c;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___renn_6;
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		NullCheck(L_8);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_8, L_9, NULL);
		// StartCoroutine("FadeIn");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445, NULL);
		// }
		return;
	}
}
// System.Void Mulai::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mulai_Update_m76E8CCA53F1611D0AA0B83D986DA5ABFB1CB42A3 (Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isMobilePlatform)
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		// myCounter += Time.deltaTime;
		float L_1 = __this->___myCounter_8;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___myCounter_8 = ((float)il2cpp_codegen_add(L_1, L_2));
		// }
		return;
	}
}
// System.Collections.IEnumerator Mulai::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mulai_FadeIn_mA4A86776DD90B14A33D3B4550A004A3B9B87F117 (Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774* L_0 = (U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774*)il2cpp_codegen_object_new(U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInU3Ed__9__ctor_mB634F1D871285B18C72212FF0370040936BFA960(L_0, 0, NULL);
		U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Mulai::CheckTouchInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mulai_CheckTouchInput_m6461E9711638B30DE110BE3CDA096BE555797511 (Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27F39BCCF95C18FE43FDB864EC3B2FC30680797F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// if (Input.touches[0].phase == TouchPhase.Began)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_1;
		L_1 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		// SceneManager.LoadScene("Utama");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral27F39BCCF95C18FE43FDB864EC3B2FC30680797F, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Mulai::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mulai__ctor_m287108C851AFAE3DCCBB0F6ECD6F5BE5BFC74521 (Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C* __this, const RuntimeMethod* method) 
{
	{
		// float myTime = 3f;
		__this->___myTime_9 = (3.0f);
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
// System.Void Mulai/<FadeIn>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__9__ctor_mB634F1D871285B18C72212FF0370040936BFA960 (U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Mulai/<FadeIn>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__9_System_IDisposable_Dispose_m9BFEF64C8666BCFF17927C589316F7666142D779 (U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Mulai/<FadeIn>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInU3Ed__9_MoveNext_m7F42673EABEDE211EE22C5528B55D89B609BA26D (U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_009e;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float f = 0f; f <= 1f; f += 0.05f)
		__this->___U3CfU3E5__2_3 = (0.0f);
		goto IL_00b7;
	}

IL_0056:
	{
		// Color c = renn.material.color;
		Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C* L_4 = V_1;
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = L_4->___renn_6;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_6, NULL);
		V_2 = L_7;
		// c.a = f;
		float L_8 = __this->___U3CfU3E5__2_3;
		(&V_2)->___a_3 = L_8;
		// renn.material.color = c;
		Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C* L_9 = V_1;
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = L_9->___renn_6;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_10, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_2;
		NullCheck(L_11);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_11, L_12, NULL);
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, (0.0500000007f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_009e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float f = 0f; f <= 1f; f += 0.05f)
		float L_14 = __this->___U3CfU3E5__2_3;
		__this->___U3CfU3E5__2_3 = ((float)il2cpp_codegen_add(L_14, (0.0500000007f)));
	}

IL_00b7:
	{
		// for (float f = 0f; f <= 1f; f += 0.05f)
		float L_15 = __this->___U3CfU3E5__2_3;
		if ((((float)L_15) <= ((float)(1.0f))))
		{
			goto IL_0056;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Mulai/<FadeIn>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m13D2A28B5E63970F9A7B7E1B0A5A02DF686386E2 (U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Mulai/<FadeIn>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__9_System_Collections_IEnumerator_Reset_m8278C2863D2A8C7CA016B0116FCEAA82AB7E39FC (U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInU3Ed__9_System_Collections_IEnumerator_Reset_m8278C2863D2A8C7CA016B0116FCEAA82AB7E39FC_RuntimeMethod_var)));
	}
}
// System.Object Mulai/<FadeIn>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__9_System_Collections_IEnumerator_get_Current_m87C2E507560628A20E3F4693092520DE8693E7F4 (U3CFadeInU3Ed__9_tCDBB4ACB44082D6F91A9FF64AE50F48EC8DDB774* __this, const RuntimeMethod* method) 
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
// System.Void Restart::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Restart_OnMouseDown_m4F245B79DE4BCBB6ACA444316066655659A5019D (Restart_t123AB8241FB07FFA868B2C6C56FDA2638364FF4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_1, NULL);
		// }
		return;
	}
}
// System.Void Restart::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Restart_Update_m60E9CBA92AEED24C68093A01DB20142688D0852E (Restart_t123AB8241FB07FFA868B2C6C56FDA2638364FF4A* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isMobilePlatform)
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		// }
		return;
	}
}
// System.Void Restart::CheckTouchInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Restart_CheckTouchInput_mF4147B77A3C929918E5A97939101DEEB0931524B (Restart_t123AB8241FB07FFA868B2C6C56FDA2638364FF4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// if (Input.touches[0].phase == TouchPhase.Began)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_1;
		L_1 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Restart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Restart__ctor_m93B334B8C5F5E8202069056D44EDC3CC903B2CBB (Restart_t123AB8241FB07FFA868B2C6C56FDA2638364FF4A* __this, const RuntimeMethod* method) 
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
// System.Void Salah::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Salah_Start_m8360DE79A5B512C96D7D6776D584F014EB7350F3 (Salah_tEB65405DF3C47401CC4CD141E42A297D8DB07793* __this, const RuntimeMethod* method) 
{
	{
		// salaah.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___salaah_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Salah::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Salah_Awake_m418931363562DE738009517723F7A58A38F02AC4 (Salah_tEB65405DF3C47401CC4CD141E42A297D8DB07793* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->____audioSource_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Salah::PlayMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Salah_PlayMusic_m3AA1C8EA8C3B3A020F4A916B752933896C5ABB52 (Salah_tEB65405DF3C47401CC4CD141E42A297D8DB07793* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD34D7C678E5BF96F2D9816EBF38AACBF48670085);
		s_Il2CppMethodInitialized = true;
	}
	{
		// salaah.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___salaah_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// if (_audioSource.isPlaying) return;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->____audioSource_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if (_audioSource.isPlaying) return;
		return;
	}

IL_001a:
	{
		// _audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->____audioSource_6;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// salah.SetTrigger("salah");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___salah_5;
		NullCheck(L_4);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_4, _stringLiteralD34D7C678E5BF96F2D9816EBF38AACBF48670085, NULL);
		// }
		return;
	}
}
// System.Void Salah::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Salah__ctor_m5CCD99F9762503B7B7D305BDB2356264C5A2329D (Salah_tEB65405DF3C47401CC4CD141E42A297D8DB07793* __this, const RuntimeMethod* method) 
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
// System.Void Soal::RandomPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_RandomPos_m56DA731EDF85F438EF67A9313D348F87A9064B87 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m20882111EEB68BD10B9ACFDCF32B50755CFD1C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFB2CF4591B05AB804EB4471D97B1A41650456019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4E83FEFE6276E4874849911734E0514D5F447C07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_Function1_m5483D65036FF055266FF7A02D0C29D27C87B1A71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_Function2_mB2560C1BCC26D77A4A086DBDDF0D9A43F33C45EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_Function3_m320312D2D27264AB7BECAF7C0F052C8516492236_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_Function4_mEE00790042B604CD2A6A8E7687A5E91CDF8C9582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_Function5_mB03C359D36F9D60AC50E0251D6BE758AC6ACC734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<VoidFunction> functionList = new List<VoidFunction>();
		List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* L_0 = (List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81*)il2cpp_codegen_object_new(List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m20882111EEB68BD10B9ACFDCF32B50755CFD1C95(L_0, List_1__ctor_m20882111EEB68BD10B9ACFDCF32B50755CFD1C95_RuntimeMethod_var);
		V_0 = L_0;
		// functionList.Add(Function1);
		List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* L_1 = V_0;
		VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* L_2 = (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3*)il2cpp_codegen_object_new(VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		VoidFunction__ctor_mC84815B86AA7CFB6F0A8E128B4F5052B7D63CAE6(L_2, __this, (intptr_t)((void*)Soal_Function1_m5483D65036FF055266FF7A02D0C29D27C87B1A71_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_inline(L_1, L_2, List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_RuntimeMethod_var);
		// functionList.Add(Function2);
		List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* L_3 = V_0;
		VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* L_4 = (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3*)il2cpp_codegen_object_new(VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		VoidFunction__ctor_mC84815B86AA7CFB6F0A8E128B4F5052B7D63CAE6(L_4, __this, (intptr_t)((void*)Soal_Function2_mB2560C1BCC26D77A4A086DBDDF0D9A43F33C45EE_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_inline(L_3, L_4, List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_RuntimeMethod_var);
		// functionList.Add(Function3);
		List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* L_5 = V_0;
		VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* L_6 = (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3*)il2cpp_codegen_object_new(VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		VoidFunction__ctor_mC84815B86AA7CFB6F0A8E128B4F5052B7D63CAE6(L_6, __this, (intptr_t)((void*)Soal_Function3_m320312D2D27264AB7BECAF7C0F052C8516492236_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_inline(L_5, L_6, List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_RuntimeMethod_var);
		// functionList.Add(Function4);
		List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* L_7 = V_0;
		VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* L_8 = (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3*)il2cpp_codegen_object_new(VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		VoidFunction__ctor_mC84815B86AA7CFB6F0A8E128B4F5052B7D63CAE6(L_8, __this, (intptr_t)((void*)Soal_Function4_mEE00790042B604CD2A6A8E7687A5E91CDF8C9582_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_inline(L_7, L_8, List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_RuntimeMethod_var);
		// functionList.Add(Function5);
		List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* L_9 = V_0;
		VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* L_10 = (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3*)il2cpp_codegen_object_new(VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		VoidFunction__ctor_mC84815B86AA7CFB6F0A8E128B4F5052B7D63CAE6(L_10, __this, (intptr_t)((void*)Soal_Function5_mB03C359D36F9D60AC50E0251D6BE758AC6ACC734_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_inline(L_9, L_10, List_1_Add_m07BA3AA68ADCEE88EE6F2652D600B82156D28872_RuntimeMethod_var);
		// int index = UnityEngine.Random.Range(0, functionList.Count);
		List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mFB2CF4591B05AB804EB4471D97B1A41650456019_inline(L_11, List_1_get_Count_mFB2CF4591B05AB804EB4471D97B1A41650456019_RuntimeMethod_var);
		int32_t L_13;
		L_13 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_12, NULL);
		V_1 = L_13;
		// functionList[index]();
		List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* L_16;
		L_16 = List_1_get_Item_m4E83FEFE6276E4874849911734E0514D5F447C07(L_14, L_15, List_1_get_Item_m4E83FEFE6276E4874849911734E0514D5F447C07_RuntimeMethod_var);
		NullCheck(L_16);
		VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_inline(L_16, NULL);
		// }
		return;
	}
}
// System.Void Soal::Function1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_Function1_m5483D65036FF055266FF7A02D0C29D27C87B1A71 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) 
{
	{
		// posisiC.transform.localPosition = new Vector3(-2.0f, -0.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___posisiC_19;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-2.0f), (-0.600000024f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// posisiA.transform.localPosition = new Vector3(2.0f, -0.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___posisiA_17;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (2.0f), (-0.600000024f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// posisiD.transform.localPosition = new Vector3(-2.0f, -2.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___posisiD_20;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (-2.0f), (-2.5999999f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// posisiB.transform.localPosition = new Vector3(2.0f, -2.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___posisiB_18;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (2.0f), (-2.5999999f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_11, NULL);
		// pccC.transform.localPosition = new Vector3(-210.0f, -72.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___pccC_23;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (-210.0f), (-72.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_14, NULL);
		// pccA.transform.localPosition = new Vector3(180.0f, -72.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pccA_21;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (180.0f), (-72.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_17, NULL);
		// pccD.transform.localPosition = new Vector3(-210.0f, -240.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___pccD_24;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (-210.0f), (-240.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_20, NULL);
		// pccB.transform.localPosition = new Vector3(180.0f, -240.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___pccB_22;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (180.0f), (-240.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void Soal::Function2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_Function2_mB2560C1BCC26D77A4A086DBDDF0D9A43F33C45EE (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) 
{
	{
		// posisiB.transform.localPosition = new Vector3(-2.0f, -0.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___posisiB_18;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-2.0f), (-0.600000024f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// posisiC.transform.localPosition = new Vector3(2.0f, -0.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___posisiC_19;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (2.0f), (-0.600000024f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// posisiA.transform.localPosition = new Vector3(-2.0f, -2.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___posisiA_17;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (-2.0f), (-2.5999999f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// posisiD.transform.localPosition = new Vector3(2.0f, -2.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___posisiD_20;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (2.0f), (-2.5999999f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_11, NULL);
		// pccB.transform.localPosition = new Vector3(-210.0f, -72.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___pccB_22;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (-210.0f), (-72.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_14, NULL);
		// pccC.transform.localPosition = new Vector3(180.0f, -72.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pccC_23;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (180.0f), (-72.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_17, NULL);
		// pccA.transform.localPosition = new Vector3(-210.0f, -240.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___pccA_21;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (-210.0f), (-240.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_20, NULL);
		// pccD.transform.localPosition = new Vector3(180.0f, -240.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___pccD_24;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (180.0f), (-240.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void Soal::Function3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_Function3_m320312D2D27264AB7BECAF7C0F052C8516492236 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) 
{
	{
		// posisiD.transform.localPosition = new Vector3(-2.0f, -0.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___posisiD_20;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-2.0f), (-0.600000024f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// posisiB.transform.localPosition = new Vector3(2.0f, -0.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___posisiB_18;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (2.0f), (-0.600000024f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// posisiA.transform.localPosition = new Vector3(-2.0f, -2.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___posisiA_17;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (-2.0f), (-2.5999999f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// posisiC.transform.localPosition = new Vector3(2.0f, -2.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___posisiC_19;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (2.0f), (-2.5999999f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_11, NULL);
		// pccD.transform.localPosition = new Vector3(-210.0f, -72.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___pccD_24;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (-210.0f), (-72.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_14, NULL);
		// pccB.transform.localPosition = new Vector3(180.0f, -72.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pccB_22;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (180.0f), (-72.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_17, NULL);
		// pccA.transform.localPosition = new Vector3(-210.0f, -240.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___pccA_21;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (-210.0f), (-240.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_20, NULL);
		// pccC.transform.localPosition = new Vector3(180.0f, -240.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___pccC_23;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (180.0f), (-240.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void Soal::Function4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_Function4_mEE00790042B604CD2A6A8E7687A5E91CDF8C9582 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) 
{
	{
		// posisiD.transform.localPosition = new Vector3(-2.0f, -0.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___posisiD_20;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-2.0f), (-0.600000024f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// posisiC.transform.localPosition = new Vector3(2.0f, -0.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___posisiC_19;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (2.0f), (-0.600000024f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// posisiA.transform.localPosition = new Vector3(-2.0f, -2.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___posisiA_17;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (-2.0f), (-2.5999999f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// posisiB.transform.localPosition = new Vector3(2.0f, -2.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___posisiB_18;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (2.0f), (-2.5999999f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_11, NULL);
		// pccD.transform.localPosition = new Vector3(-210.0f, -72.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___pccD_24;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (-210.0f), (-72.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_14, NULL);
		// pccC.transform.localPosition = new Vector3(180.0f, -72.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pccC_23;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (180.0f), (-72.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_17, NULL);
		// pccA.transform.localPosition = new Vector3(-210.0f, -240.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___pccA_21;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (-210.0f), (-240.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_20, NULL);
		// pccB.transform.localPosition = new Vector3(180.0f, -240.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___pccB_22;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (180.0f), (-240.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void Soal::Function5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_Function5_mB03C359D36F9D60AC50E0251D6BE758AC6ACC734 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) 
{
	{
		// posisiA.transform.localPosition = new Vector3(-2.0f, -0.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___posisiA_17;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-2.0f), (-0.600000024f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// posisiD.transform.localPosition = new Vector3(2.0f, -0.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___posisiD_20;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (2.0f), (-0.600000024f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// posisiB.transform.localPosition = new Vector3(-2.0f, -2.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___posisiB_18;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (-2.0f), (-2.5999999f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// posisiC.transform.localPosition = new Vector3(2.0f, -2.6f, -0.35f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___posisiC_19;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (2.0f), (-2.5999999f), (-0.349999994f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_11, NULL);
		// pccA.transform.localPosition = new Vector3(-210.0f, -72.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___pccA_21;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (-210.0f), (-72.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_14, NULL);
		// pccD.transform.localPosition = new Vector3(180.0f, -72.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pccD_24;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (180.0f), (-72.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_17, NULL);
		// pccB.transform.localPosition = new Vector3(-210.0f, -240.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___pccB_22;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (-210.0f), (-240.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_20, NULL);
		// pccC.transform.localPosition = new Vector3(180.0f, -240.0f, -48.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___pccC_23;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (180.0f), (-240.0f), (-48.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void Soal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_Start_mEDD75DB2C4E8265756C0F6877587BA2FCA12FCB2 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m20882111EEB68BD10B9ACFDCF32B50755CFD1C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9677BF41814A7C78D8F9DE715C8D2BA395702C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969B34DE6E3508B743D73FE21E0204A5CA131E42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// List<VoidFunction> functionList = new List<VoidFunction>();
		List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81* L_0 = (List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81*)il2cpp_codegen_object_new(List_1_t0926413D92DA3D3900E46C4DC7E0B81CF2EFED81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m20882111EEB68BD10B9ACFDCF32B50755CFD1C95(L_0, List_1__ctor_m20882111EEB68BD10B9ACFDCF32B50755CFD1C95_RuntimeMethod_var);
		// balloon.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___balloon_15;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// skor = 95;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6 = ((int32_t)95);
		// countMunculSoal = 0;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___countMunculSoal_12 = 0;
		// countBenar = 0;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___countBenar_13 = 0;
		// batas1 = 87;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas1_7 = ((int32_t)87);
		// batas2 = 80;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas2_8 = ((int32_t)80);
		// batas3 = 76;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas3_9 = ((int32_t)76);
		// batas4 = 70;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas4_10 = ((int32_t)70);
		// batas5 = 66;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas5_11 = ((int32_t)66);
		// pemain = GameObject.Find("Pemain");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24, NULL);
		__this->___pemain_33 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pemain_33), (void*)L_2);
		// jawaban = GameObject.Find("GameObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral969B34DE6E3508B743D73FE21E0204A5CA131E42, NULL);
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___jawaban_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___jawaban_5), (void*)L_3);
		// dadu = GameObject.Find("Dadu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral212CACE74A306E5F2E286202649891FC4B915A25, NULL);
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___dadu_34 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___dadu_34), (void*)L_4);
		// data = GameObject.Find("Kontrol");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral9677BF41814A7C78D8F9DE715C8D2BA395702C6A, NULL);
		__this->___data_36 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_36), (void*)L_5);
		// data.GetComponent<LoadCSV>().LoadItemData();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___data_36;
		NullCheck(L_6);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_7;
		L_7 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_6, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_7);
		LoadCSV_LoadItemData_mADD94693F4A9B339C156C7476C860924F2AC81A4(L_7, NULL);
		// kunciSoal = new string[data.GetComponent<LoadCSV>().itemDatabase.Count];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___data_36;
		NullCheck(L_8);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_9;
		L_9 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_8, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_10 = L_9->___itemDatabase_6;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_10, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->___kunciSoal_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kunciSoal_4), (void*)L_12);
		// for (var i = 0; i < data.GetComponent<LoadCSV>().itemDatabase.Count; i++)
		V_0 = 0;
		goto IL_00e3;
	}

IL_00ba:
	{
		// string kunci = data.GetComponent<LoadCSV>().itemDatabase[i].kunci;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___data_36;
		NullCheck(L_13);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_14;
		L_14 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_13, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_15 = L_14->___itemDatabase_6;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* L_17;
		L_17 = List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50(L_15, L_16, List_1_get_Item_m3F1930E69CDAFDFA852F1F1086B6D2035D4FCF50_RuntimeMethod_var);
		NullCheck(L_17);
		String_t* L_18 = L_17->___kunci_6;
		V_1 = L_18;
		// kunciSoal[i] = kunci;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = __this->___kunciSoal_4;
		int32_t L_20 = V_0;
		String_t* L_21 = V_1;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (String_t*)L_21);
		// for (var i = 0; i < data.GetComponent<LoadCSV>().itemDatabase.Count; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_00e3:
	{
		// for (var i = 0; i < data.GetComponent<LoadCSV>().itemDatabase.Count; i++)
		int32_t L_23 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___data_36;
		NullCheck(L_24);
		LoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7* L_25;
		L_25 = GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF(L_24, GameObject_GetComponent_TisLoadCSV_t1AD0A206FB3DCE90FDA13E88D1CB648DD96F40E7_mF7ED2432ED7D09E57DA6451F84D5251489881DAF_RuntimeMethod_var);
		NullCheck(L_25);
		List_1_tBB4BFB497BCF47BCBBEC63B4E8645B49487294C2* L_26 = L_25->___itemDatabase_6;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_inline(L_26, List_1_get_Count_m87979E69F2B1EDFABEB3DC2413839F0E599D4AA5_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_27)))
		{
			goto IL_00ba;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Soal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_Update_mF1FF9F7FFCE28CCC1FA37CB6E0241E1CD682C4FF (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE622F7BD169D6894CF99DEF0F9B907D807CAF0B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text = "Skor = " + skor.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___scoreText_32;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCE622F7BD169D6894CF99DEF0F9B907D807CAF0B, L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Soal::MoveGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_MoveGameObject_m354EC1D0EC7E220AF245234642D4A774AF209D55 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dadu.transform.position = new Vector3(-6.42f, -9f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___dadu_34;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-6.42000008f), (-9.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Soal::ReturnGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_ReturnGameObject_m5C0F397F4EDA052C827D4B104F255F005EB61C2D (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dadu.transform.position = new Vector3(-6.42f, -3.1f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___dadu_34;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-6.42000008f), (-3.0999999f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Soal::munculSoal(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_munculSoal_m281CDE40977AFB6F14AFA569349F07775F4FA8E3 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, String_t* ___teks0, String_t* ___a1, String_t* ___b2, String_t* ___c3, String_t* ___d4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB9395A6B85AE9594A83AD55D509784F48B2C95E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countMunculSoal += 1;
		int32_t L_0 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___countMunculSoal_12;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___countMunculSoal_12 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// dadu.GetComponent<Dice>().coroutineAllowed = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___dadu_34;
		NullCheck(L_1);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_2;
		L_2 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_1, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___coroutineAllowed_7 = (bool)0;
		// RandomPos();
		Soal_RandomPos_m56DA731EDF85F438EF67A9313D348F87A9064B87(__this, NULL);
		// MoveGameObject();
		Soal_MoveGameObject_m354EC1D0EC7E220AF245234642D4A774AF209D55(__this, NULL);
		// soalBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___soalBox_14;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// animator.SetTrigger("muncul");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___animator_25;
		NullCheck(L_4);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_4, _stringLiteralFB9395A6B85AE9594A83AD55D509784F48B2C95E, NULL);
		// soalText.text = teks;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___soalText_27;
		String_t* L_6 = ___teks0;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_6);
		// aText.text = a;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___aText_28;
		String_t* L_8 = ___a1;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_8);
		// bText.text = b;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_9 = __this->___bText_29;
		String_t* L_10 = ___b2;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_10);
		// cText.text = c;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = __this->___cText_30;
		String_t* L_12 = ___c3;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, L_12);
		// dText.text = d;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_13 = __this->___dText_31;
		String_t* L_14 = ___d4;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_14);
		// }
		return;
	}
}
// System.Void Soal::prosesKoreksiular(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_prosesKoreksiular_m29E0025FFB901220A00E04534E71D77983CF426E (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, String_t* ___kunci0, int32_t ___a1, int32_t ___b2, int32_t ___c3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSalah_tEB65405DF3C47401CC4CD141E42A297D8DB07793_mFEA5EA9730EE8F5E43EEA871C4AC0700C8E4859E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C02C1537E02ED3FBFF8DDF0BED6EF635435D3D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (kunci != kunciSoal[a] && Kontrol.penentu == b)
		String_t* L_0 = ___kunci0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___kunciSoal_4;
		int32_t L_2 = ___a1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5;
		L_5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, L_4, NULL);
		if (!L_5)
		{
			goto IL_00eb;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___penentu_12;
		int32_t L_7 = ___b2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_00eb;
		}
	}
	{
		// salah.GetComponent<Salah>().PlayMusic();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___salah_16;
		NullCheck(L_8);
		Salah_tEB65405DF3C47401CC4CD141E42A297D8DB07793* L_9;
		L_9 = GameObject_GetComponent_TisSalah_tEB65405DF3C47401CC4CD141E42A297D8DB07793_mFEA5EA9730EE8F5E43EEA871C4AC0700C8E4859E(L_8, GameObject_GetComponent_TisSalah_tEB65405DF3C47401CC4CD141E42A297D8DB07793_mFEA5EA9730EE8F5E43EEA871C4AC0700C8E4859E_RuntimeMethod_var);
		NullCheck(L_9);
		Salah_PlayMusic_m3AA1C8EA8C3B3A020F4A916B752933896C5ABB52(L_9, NULL);
		// dadu.GetComponent<Dice>().coroutineAllowed = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___dadu_34;
		NullCheck(L_10);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_11;
		L_11 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_10, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___coroutineAllowed_7 = (bool)1;
		// pemain.GetComponent<Jalan>().bolehJalan = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___pemain_33;
		NullCheck(L_12);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_13;
		L_13 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_12, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->___bolehJalan_9 = (bool)1;
		// pemain.GetComponent<Jalan>().transform.position = Vector2.MoveTowards(pemain.GetComponent<Jalan>().transform.position,
		// pemain.GetComponent<Jalan>().titik[11].transform.position,
		// moveSpeed * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___pemain_33;
		NullCheck(L_14);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_15;
		L_15 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_14, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___pemain_33;
		NullCheck(L_17);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_18;
		L_18 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_17, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___pemain_33;
		NullCheck(L_22);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_23;
		L_23 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_22, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_23);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = L_23->___titik_4;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_24, ((int32_t)11), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_27, NULL);
		float L_29 = __this->___moveSpeed_35;
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline(L_21, L_28, ((float)il2cpp_codegen_multiply(L_29, L_30)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_31, NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_32, NULL);
		// pemain.GetComponent<Jalan>().titikIndex = c;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___pemain_33;
		NullCheck(L_33);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_34;
		L_34 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_33, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		int32_t L_35 = ___c3;
		NullCheck(L_34);
		L_34->___titikIndex_6 = L_35;
		// pemain.GetComponent<Jalan>().titikIndex += 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___pemain_33;
		NullCheck(L_36);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_37;
		L_37 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_36, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_38 = L_37;
		NullCheck(L_38);
		int32_t L_39 = L_38->___titikIndex_6;
		NullCheck(L_38);
		L_38->___titikIndex_6 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		// ReturnGameObject();
		Soal_ReturnGameObject_m5C0F397F4EDA052C827D4B104F255F005EB61C2D(__this, NULL);
		return;
	}

IL_00eb:
	{
		// else if (kunci == kunciSoal[a] && Kontrol.penentu == b)
		String_t* L_40 = ___kunci0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = __this->___kunciSoal_4;
		int32_t L_42 = ___a1;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		String_t* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, L_44, NULL);
		if (!L_45)
		{
			goto IL_0158;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		int32_t L_46 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___penentu_12;
		int32_t L_47 = ___b2;
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_0158;
		}
	}
	{
		// countBenar += 1;
		int32_t L_48 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___countBenar_13;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___countBenar_13 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		// GetComponent<AudioSource>().Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_49;
		L_49 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		NullCheck(L_49);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_49, NULL);
		// dadu.GetComponent<Dice>().coroutineAllowed = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___dadu_34;
		NullCheck(L_50);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_51;
		L_51 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_50, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_51);
		L_51->___coroutineAllowed_7 = (bool)1;
		// balloon.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___balloon_15;
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)1, NULL);
		// balon.SetTrigger("balon");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_53 = __this->___balon_26;
		NullCheck(L_53);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_53, _stringLiteral9C02C1537E02ED3FBFF8DDF0BED6EF635435D3D5, NULL);
		// skor += 5;
		int32_t L_54 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6 = ((int32_t)il2cpp_codegen_add(L_54, 5));
		// ReturnGameObject();
		Soal_ReturnGameObject_m5C0F397F4EDA052C827D4B104F255F005EB61C2D(__this, NULL);
	}

IL_0158:
	{
		// }
		return;
	}
}
// System.Void Soal::prosesKoreksitangga(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_prosesKoreksitangga_mD14B531BAE0D9BB6D5AA11BF8416A036487F01F7 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, String_t* ___kunci0, int32_t ___a1, int32_t ___b2, int32_t ___c3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSalah_tEB65405DF3C47401CC4CD141E42A297D8DB07793_mFEA5EA9730EE8F5E43EEA871C4AC0700C8E4859E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C02C1537E02ED3FBFF8DDF0BED6EF635435D3D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(kunci == kunciSoal[a] && Kontrol.penentu == b)
		String_t* L_0 = ___kunci0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___kunciSoal_4;
		int32_t L_2 = ___a1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_4, NULL);
		if (!L_5)
		{
			goto IL_011a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___penentu_12;
		int32_t L_7 = ___b2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_011a;
		}
	}
	{
		// countBenar += 1;
		int32_t L_8 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___countBenar_13;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___countBenar_13 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// GetComponent<AudioSource>().Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9;
		L_9 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
		// dadu.GetComponent<Dice>().coroutineAllowed = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___dadu_34;
		NullCheck(L_10);
		Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A* L_11;
		L_11 = GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7(L_10, GameObject_GetComponent_TisDice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_m3B3106766FA19AA1E20771EEDC620EBDD21DF7C7_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___coroutineAllowed_7 = (bool)1;
		// pemain.GetComponent<Jalan>().bolehJalan = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___pemain_33;
		NullCheck(L_12);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_13;
		L_13 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_12, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->___bolehJalan_9 = (bool)1;
		// balloon.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___balloon_15;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// balon.SetTrigger("balon");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___balon_26;
		NullCheck(L_15);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_15, _stringLiteral9C02C1537E02ED3FBFF8DDF0BED6EF635435D3D5, NULL);
		// pemain.GetComponent<Jalan>().transform.position = Vector2.MoveTowards(pemain.GetComponent<Jalan>().transform.position,
		// pemain.GetComponent<Jalan>().titik[c].transform.position,
		// moveSpeed * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___pemain_33;
		NullCheck(L_16);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_17;
		L_17 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_16, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___pemain_33;
		NullCheck(L_19);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_20;
		L_20 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_19, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_22, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___pemain_33;
		NullCheck(L_24);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_25;
		L_25 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_24, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_25);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = L_25->___titik_4;
		int32_t L_27 = ___c3;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_26, L_27, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_30, NULL);
		float L_32 = __this->___moveSpeed_35;
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline(L_23, L_31, ((float)il2cpp_codegen_multiply(L_32, L_33)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_34, NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_35, NULL);
		// pemain.GetComponent<Jalan>().titikIndex = c;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___pemain_33;
		NullCheck(L_36);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_37;
		L_37 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_36, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		int32_t L_38 = ___c3;
		NullCheck(L_37);
		L_37->___titikIndex_6 = L_38;
		// pemain.GetComponent<Jalan>().titikIndex += 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___pemain_33;
		NullCheck(L_39);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_40;
		L_40 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_39, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_41 = L_40;
		NullCheck(L_41);
		int32_t L_42 = L_41->___titikIndex_6;
		NullCheck(L_41);
		L_41->___titikIndex_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		// skor += 5;
		int32_t L_43 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6 = ((int32_t)il2cpp_codegen_add(L_43, 5));
		// ReturnGameObject();
		Soal_ReturnGameObject_m5C0F397F4EDA052C827D4B104F255F005EB61C2D(__this, NULL);
		return;
	}

IL_011a:
	{
		// else if(kunci != kunciSoal[a] && Kontrol.penentu == b)
		String_t* L_44 = ___kunci0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = __this->___kunciSoal_4;
		int32_t L_46 = ___a1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		String_t* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		bool L_49;
		L_49 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_44, L_48, NULL);
		if (!L_49)
		{
			goto IL_0148;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		int32_t L_50 = ((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___penentu_12;
		int32_t L_51 = ___b2;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_51))))
		{
			goto IL_0148;
		}
	}
	{
		// salah.GetComponent<Salah>().PlayMusic();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___salah_16;
		NullCheck(L_52);
		Salah_tEB65405DF3C47401CC4CD141E42A297D8DB07793* L_53;
		L_53 = GameObject_GetComponent_TisSalah_tEB65405DF3C47401CC4CD141E42A297D8DB07793_mFEA5EA9730EE8F5E43EEA871C4AC0700C8E4859E(L_52, GameObject_GetComponent_TisSalah_tEB65405DF3C47401CC4CD141E42A297D8DB07793_mFEA5EA9730EE8F5E43EEA871C4AC0700C8E4859E_RuntimeMethod_var);
		NullCheck(L_53);
		Salah_PlayMusic_m3AA1C8EA8C3B3A020F4A916B752933896C5ABB52(L_53, NULL);
		// ReturnGameObject();
		Soal_ReturnGameObject_m5C0F397F4EDA052C827D4B104F255F005EB61C2D(__this, NULL);
	}

IL_0148:
	{
		// }
		return;
	}
}
// System.Void Soal::koreksiSoal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal_koreksiSoal_m1EA614C284329939F364E64BB1B7D4DF2C7E58B7 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, String_t* ___kunci0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// prosesKoreksitangga(kunci, 0,7,12);
		String_t* L_0 = ___kunci0;
		Soal_prosesKoreksitangga_mD14B531BAE0D9BB6D5AA11BF8416A036487F01F7(__this, L_0, 0, 7, ((int32_t)12), NULL);
		// prosesKoreksitangga(kunci, 1,18,23);
		String_t* L_1 = ___kunci0;
		Soal_prosesKoreksitangga_mD14B531BAE0D9BB6D5AA11BF8416A036487F01F7(__this, L_1, 1, ((int32_t)18), ((int32_t)23), NULL);
		// prosesKoreksiular(kunci, 2,22,11);
		String_t* L_2 = ___kunci0;
		Soal_prosesKoreksiular_m29E0025FFB901220A00E04534E71D77983CF426E(__this, L_2, 2, ((int32_t)22), ((int32_t)11), NULL);
		// prosesKoreksiular(kunci, 3,16,13);
		String_t* L_3 = ___kunci0;
		Soal_prosesKoreksiular_m29E0025FFB901220A00E04534E71D77983CF426E(__this, L_3, 3, ((int32_t)16), ((int32_t)13), NULL);
		// prosesKoreksiular(kunci, 4,8,0);
		String_t* L_4 = ___kunci0;
		Soal_prosesKoreksiular_m29E0025FFB901220A00E04534E71D77983CF426E(__this, L_4, 4, 8, 0, NULL);
		// prosesKoreksitangga(kunci, 5,1,9);
		String_t* L_5 = ___kunci0;
		Soal_prosesKoreksitangga_mD14B531BAE0D9BB6D5AA11BF8416A036487F01F7(__this, L_5, 5, 1, ((int32_t)9), NULL);
		// prosesKoreksitangga(kunci, 6,10,19);
		String_t* L_6 = ___kunci0;
		Soal_prosesKoreksitangga_mD14B531BAE0D9BB6D5AA11BF8416A036487F01F7(__this, L_6, 6, ((int32_t)10), ((int32_t)19), NULL);
		// prosesKoreksiular(kunci, 7,14,3);
		String_t* L_7 = ___kunci0;
		Soal_prosesKoreksiular_m29E0025FFB901220A00E04534E71D77983CF426E(__this, L_7, 7, ((int32_t)14), 3, NULL);
		// prosesKoreksiular(kunci, 8,15,5);
		String_t* L_8 = ___kunci0;
		Soal_prosesKoreksiular_m29E0025FFB901220A00E04534E71D77983CF426E(__this, L_8, 8, ((int32_t)15), 5, NULL);
		// prosesKoreksitangga(kunci, 9,2,6);
		String_t* L_9 = ___kunci0;
		Soal_prosesKoreksitangga_mD14B531BAE0D9BB6D5AA11BF8416A036487F01F7(__this, L_9, ((int32_t)9), 2, 6, NULL);
		// pemain.GetComponent<Jalan>().bolehJalan = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___pemain_33;
		NullCheck(L_10);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_11;
		L_11 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_10, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___bolehJalan_9 = (bool)0;
		// Kontrol.posisiPemain = pemain.GetComponent<Jalan>().titikIndex - 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___pemain_33;
		NullCheck(L_12);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_13;
		L_13 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_12, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_14 = L_13->___titikIndex_6;
		il2cpp_codegen_runtime_class_init_inline(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var);
		((Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_StaticFields*)il2cpp_codegen_static_fields_for(Kontrol_t9A43C529178C6570CDE6C0B3A8281856D5DDF893_il2cpp_TypeInfo_var))->___posisiPemain_9 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		// }
		return;
	}
}
// System.Void Soal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soal__ctor_m696A42DAB9C81F1689772284E2B6D2551B247019 (Soal_t1AF96D144A891A7124946889CDF91B1684FF2505* __this, const RuntimeMethod* method) 
{
	{
		// private float moveSpeed = 1f;
		__this->___moveSpeed_35 = (1.0f);
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
void VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_Multicast(VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* currentDelegate = reinterpret_cast<VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_OpenInst(VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_OpenStatic(VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_OpenStaticInvoker(VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_ClosedStaticInvoker(VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3 (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Soal/VoidFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoidFunction__ctor_mC84815B86AA7CFB6F0A8E128B4F5052B7D63CAE6 (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_Multicast;
}
// System.Void Soal/VoidFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25 (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Soal/VoidFunction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoidFunction_BeginInvoke_m0896A332DC67775060C34B137BFEB23FA7265C85 (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Soal/VoidFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoidFunction_EndInvoke_m8DF1B928A52589F91B986C68956877469C367BA1 (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void StoreData::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreData_Start_m3247666115D24A3F65A03E687A91A245CF41E016 (StoreData_tDA5A298530FBA4D9E5480AEA50DA33F06BAE668D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// pemain = GameObject.Find("Pemain");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD0795630B6632E37ADA4290F83505A68D8C53B24, NULL);
		__this->___pemain_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pemain_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void StoreData::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreData_Update_mD1E91BB46D0A9DFCF7B9A3EED81C6AE011AD3C4E (StoreData_tDA5A298530FBA4D9E5480AEA50DA33F06BAE668D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pemain.GetComponent<Jalan>().titikIndex > 24)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pemain_10;
		NullCheck(L_0);
		Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094* L_1;
		L_1 = GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7(L_0, GameObject_GetComponent_TisJalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_mBFC2EE5223E6854A73D6F4ACD37952E551561EA7_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->___titikIndex_6;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)24))))
		{
			goto IL_0020;
		}
	}
	{
		// HitungNilaiHuruf();
		StoreData_HitungNilaiHuruf_m985588F3ED9AA5285A2EF323C1AB415FD5E36A17(__this, NULL);
		// UpdateData();
		StoreData_UpdateData_m3EDD020323268FC0162F6FE9D9D3663183766A5E(__this, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void StoreData::UpdateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreData_UpdateData_m3EDD020323268FC0162F6FE9D9D3663183766A5E (StoreData_tDA5A298530FBA4D9E5480AEA50DA33F06BAE668D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C4B6D0A10771B78202D1D101A10EC2BE995C08B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// waktu = Jalan.time_fixed.ToString();
		String_t* L_0;
		L_0 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&((Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_StaticFields*)il2cpp_codegen_static_fields_for(Jalan_tE4A1D2BD21E708FF8082365A5DAC697AECC5F094_il2cpp_TypeInfo_var))->___time_fixed_11), NULL);
		__this->___waktu_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waktu_7), (void*)L_0);
		// playerData = new List<string> {Mulai.username, nilai, waktu, Dice.countDadu.ToString(), Soal.countMunculSoal.ToString(), Soal.countBenar.ToString()};
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1;
		String_t* L_3 = ((Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_StaticFields*)il2cpp_codegen_static_fields_for(Mulai_t579920E5A380CFF545DC3C3BDB12E364E6E0A89C_il2cpp_TypeInfo_var))->___username_5;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_2;
		String_t* L_5 = __this->___nilai_8;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_4;
		String_t* L_7 = __this->___waktu_7;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = L_6;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_StaticFields*)il2cpp_codegen_static_fields_for(Dice_t0E92A2DB9F3BE47801348369649C47FC15F1B42A_il2cpp_TypeInfo_var))->___countDadu_4), NULL);
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, L_9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = L_8;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___countMunculSoal_12), NULL);
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, L_11, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = L_10;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___countBenar_13), NULL);
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___playerData_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerData_6), (void*)L_12);
		// inputData = DateTime.Now.ToString("dd/MM/yyyy   hh:mm:ss tt") + "," + playerData[0] + "," + playerData[1] + "," + playerData[2] + "," + playerData[3] + "," + playerData[4] + "," + playerData[5];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16;
		L_16 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_16;
		String_t* L_17;
		L_17 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), _stringLiteral4C4B6D0A10771B78202D1D101A10EC2BE995C08B, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = __this->___playerData_6;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_20, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_19;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = __this->___playerData_6;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_24, 1, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_23;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = __this->___playerData_6;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_28, 2, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_27;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_32 = __this->___playerData_6;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_32, 3, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_31;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_36 = __this->___playerData_6;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_36, 4, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_35;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_40 = __this->___playerData_6;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_40, 5, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_41);
		String_t* L_42;
		L_42 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_39, NULL);
		__this->___inputData_9 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputData_9), (void*)L_42);
		// string filePath = getPath();
		String_t* L_43;
		L_43 = StoreData_getPath_m362F6B8F1BA243A35F020279EAA0751835359D66(__this, NULL);
		// StreamWriter writer = new StreamWriter(filePath, append: true);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_44 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		StreamWriter__ctor_m6432CEFDE44A6B720887B85AADC39303F8D0689D(L_44, L_43, (bool)1, NULL);
		// writer.WriteLine(inputData);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_45 = L_44;
		String_t* L_46 = __this->___inputData_9;
		NullCheck(L_45);
		VirtualActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_45, L_46);
		// writer.Flush();
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_47 = L_45;
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, L_47);
		// writer.Close();
		NullCheck(L_47);
		VirtualActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_47);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void StoreData::HitungNilaiHuruf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreData_HitungNilaiHuruf_m985588F3ED9AA5285A2EF323C1AB415FD5E36A17 (StoreData_tDA5A298530FBA4D9E5480AEA50DA33F06BAE668D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E13E6FFD9CDF647FA033D6CE70A11CA57653EF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8AFBFD25EE320527385D6499F636514E6B8CC10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Soal.skor <= Soal.batas5)
		int32_t L_0 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_1 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas5_11;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		// nilai = "D";
		__this->___nilai_8 = _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nilai_8), (void*)_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
	}

IL_0017:
	{
		// if (Soal.skor > Soal.batas5 && Soal.skor <= Soal.batas4)
		int32_t L_2 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_3 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas5_11;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_4 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_5 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas4_10;
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_003a;
		}
	}
	{
		// nilai = "C";
		__this->___nilai_8 = _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nilai_8), (void*)_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
	}

IL_003a:
	{
		// if (Soal.skor > Soal.batas4 && Soal.skor <= Soal.batas3)
		int32_t L_6 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_7 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas4_10;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_8 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_9 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas3_9;
		if ((((int32_t)L_8) > ((int32_t)L_9)))
		{
			goto IL_005d;
		}
	}
	{
		// nilai = "BC";
		__this->___nilai_8 = _stringLiteralA8AFBFD25EE320527385D6499F636514E6B8CC10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nilai_8), (void*)_stringLiteralA8AFBFD25EE320527385D6499F636514E6B8CC10);
	}

IL_005d:
	{
		// if (Soal.skor > Soal.batas3 && Soal.skor <= Soal.batas2)
		int32_t L_10 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_11 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas3_9;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_12 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_13 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas2_8;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_0080;
		}
	}
	{
		// nilai = "B";
		__this->___nilai_8 = _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nilai_8), (void*)_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
	}

IL_0080:
	{
		// if (Soal.skor > Soal.batas2 && Soal.skor <= Soal.batas1)
		int32_t L_14 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_15 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas2_8;
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_16 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_17 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas1_7;
		if ((((int32_t)L_16) > ((int32_t)L_17)))
		{
			goto IL_00a3;
		}
	}
	{
		// nilai = "AB";
		__this->___nilai_8 = _stringLiteral3E13E6FFD9CDF647FA033D6CE70A11CA57653EF2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nilai_8), (void*)_stringLiteral3E13E6FFD9CDF647FA033D6CE70A11CA57653EF2);
	}

IL_00a3:
	{
		// if (Soal.skor > Soal.batas1)
		int32_t L_18 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___skor_6;
		int32_t L_19 = ((Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_StaticFields*)il2cpp_codegen_static_fields_for(Soal_t1AF96D144A891A7124946889CDF91B1684FF2505_il2cpp_TypeInfo_var))->___batas1_7;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_00ba;
		}
	}
	{
		// nilai = "A";
		__this->___nilai_8 = _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nilai_8), (void*)_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.String StoreData::getPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StoreData_getPath_m362F6B8F1BA243A35F020279EAA0751835359D66 (StoreData_tDA5A298530FBA4D9E5480AEA50DA33F06BAE668D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56A7B8CA181347B3DD05F58A1D7A092DAAC2E371);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Application.persistentDataPath+"Saved_Inventory.csv";
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral56A7B8CA181347B3DD05F58A1D7A092DAAC2E371, NULL);
		return L_1;
	}
}
// System.Void StoreData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreData__ctor_m312DCECBE5CF0500C01A67A9F1DA56913C705C14 (StoreData_tDA5A298530FBA4D9E5480AEA50DA33F06BAE668D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DateTime currentTime = DateTime.UtcNow;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		__this->___currentTime_4 = L_0;
		// public List<string> playerData = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___playerData_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerData_6), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___target1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___current0;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___target1;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___current0;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))));
		float L_12 = V_2;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}
	{
		float L_13 = ___maxDistanceDelta2;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_14 = V_2;
		float L_15 = ___maxDistanceDelta2;
		float L_16 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_14) <= ((float)((float)il2cpp_codegen_multiply(L_15, L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		G_B6_0 = G_B4_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		V_4 = (bool)G_B6_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___target1;
		V_5 = L_18;
		goto IL_0079;
	}

IL_004f:
	{
		float L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = sqrt(((double)L_19));
		V_3 = ((float)L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___current0;
		float L_22 = L_21.___x_0;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___current0;
		float L_27 = L_26.___y_1;
		float L_28 = V_1;
		float L_29 = V_3;
		float L_30 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)(L_23/L_24)), L_25)))), ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(((float)(L_28/L_29)), L_30)))), /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_0079;
	}

IL_0079:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_5;
		return L_32;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoidFunction_Invoke_mAB9E0BDF79454FA9E1F6112158F2E61B7D877F25_inline (VoidFunction_tD8010547A19C69F54B92192670094DE1F64292B3* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
