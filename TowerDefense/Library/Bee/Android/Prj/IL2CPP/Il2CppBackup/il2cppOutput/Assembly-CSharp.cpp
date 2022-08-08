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
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding>
struct IEnumerable_1_tB0371F6D0932F0C778CAEED128603B65772AC357;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
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
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AdminJuego
struct AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90;
// AdministradorToques
struct AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF;
// AdministradorTorres
struct AdministradorTorres_t0084483F5C0CB6B82C4E6F30C094A9D63F149309;
// AdministradorUI
struct AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Bala
struct Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Boss
struct Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Enemigo
struct Enemigo_t522607FECD6F61814ECE2AB17FDE1E040DF0688C;
// EnemigoBase
struct EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// MenuInicio
struct MenuInicio_t8FF8F43F8C7D6E05BE4B6302F94E8ABC75015D19;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Objetivo
struct Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4;
// UnityEngine.InputSystem.ProtoInputActions
struct ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// SpawnerEnemigos
struct SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC;
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
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TorreAntena
struct TorreAntena_t2B675D8B7D93373C2CF7068BF023796CBA457640;
// TorreBase
struct TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1;
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
// AdminJuego/RecursosModificados
struct RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E;
// AdministradorToques/PlataformaTocada
struct PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E;
// AdministradorTorres/EnemigoObjetivoActualizado
struct EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Objetivo/ObjetivoDestruido
struct ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54;
// UnityEngine.InputSystem.ProtoInputActions/IPlayerActions
struct IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C;
// UnityEngine.InputSystem.ProtoInputActions/IToquesActions
struct IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0;
// UnityEngine.InputSystem.ProtoInputActions/IUIActions
struct IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F;
// SpawnerEnemigos/EstadoOleada
struct EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral017B351DA3E50FAF2CFBB408359C6C0480F02932;
IL2CPP_EXTERN_C String_t* _stringLiteral117C34CEF055E54D018BB5CB8A52E1D66434C6E6;
IL2CPP_EXTERN_C String_t* _stringLiteral14DCDE3AE772E5436662FC864D91073443325F7C;
IL2CPP_EXTERN_C String_t* _stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895;
IL2CPP_EXTERN_C String_t* _stringLiteral20265357F96C863C747BDDCB8CB50C9DB7DC428B;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7;
IL2CPP_EXTERN_C String_t* _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC;
IL2CPP_EXTERN_C String_t* _stringLiteral4FE4085F379058ABFB262AB0183534B67F103F90;
IL2CPP_EXTERN_C String_t* _stringLiteral536CBD4A879DA915379A9ED0D05C58B1349FD098;
IL2CPP_EXTERN_C String_t* _stringLiteral60B1334B63FD718829AA38949E1E9BEF3E80F288;
IL2CPP_EXTERN_C String_t* _stringLiteral61225B335304C6BE91EE0EC8CF385BBE9B633F17;
IL2CPP_EXTERN_C String_t* _stringLiteral68E991B5616F5769AB6069C14D3F44D98828C2F9;
IL2CPP_EXTERN_C String_t* _stringLiteral6AFA172CB1C96580E493407FF3AAAED7DF1C4513;
IL2CPP_EXTERN_C String_t* _stringLiteral6B1CE1510ED5DF607B88CA3A91E2D5031B2F8113;
IL2CPP_EXTERN_C String_t* _stringLiteral6DAFA13902889D87F78CBB17C755359835935339;
IL2CPP_EXTERN_C String_t* _stringLiteral76E64999AC9428D75B31CD40BCA2270B19CDAE1B;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteral9C66599FE1C10510EF86972A25652A53B4C5F63B;
IL2CPP_EXTERN_C String_t* _stringLiteral9F84632196531FA2B3BB0B4225C53CDB837E9393;
IL2CPP_EXTERN_C String_t* _stringLiteral9FEFD136EF26D7B05E5CCF16376EF651CBFB5E2C;
IL2CPP_EXTERN_C String_t* _stringLiteralA19C0EE359490C7448E9205AD51E3A6544B2CE4D;
IL2CPP_EXTERN_C String_t* _stringLiteralA96620F37E8B974807A9F73E85A5D2EE7A4A1479;
IL2CPP_EXTERN_C String_t* _stringLiteralAA2ACAAC77884477FF705FAA326CAE0ACFAFB316;
IL2CPP_EXTERN_C String_t* _stringLiteralAC335197F26CDAC117B9C53198144F48D7F270B9;
IL2CPP_EXTERN_C String_t* _stringLiteralAD23F1807EC3F728BA43D64905EBF6D2F2B3660D;
IL2CPP_EXTERN_C String_t* _stringLiteralAD4A9574723CC91A37EE1B9DDD1714A2A8E82C4D;
IL2CPP_EXTERN_C String_t* _stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412;
IL2CPP_EXTERN_C String_t* _stringLiteralB502A186982A83A6C402B5753C1120061504E6EB;
IL2CPP_EXTERN_C String_t* _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F;
IL2CPP_EXTERN_C String_t* _stringLiteralBC4515E344CAA528FBB65CD1A4C06B90761465BC;
IL2CPP_EXTERN_C String_t* _stringLiteralBE86D91E15EAA24CBCC61CB8820E5135BBE7271B;
IL2CPP_EXTERN_C String_t* _stringLiteralC0337DCE556E8A375C9337CDA50BEC27C7CC40D3;
IL2CPP_EXTERN_C String_t* _stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30;
IL2CPP_EXTERN_C String_t* _stringLiteralC63533D7E97B41EB9EC8122A46CB313BA2A0DDC4;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCF31AC035F6E66E3F97EF69A5043674FB4C95527;
IL2CPP_EXTERN_C String_t* _stringLiteralD068D01543BD6439ECEBA2F8356F454597A9E24F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0973F730C31CE8BAFF360715F4C99013FED50E5;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4ABBC31DF55FA8A95A4F1E5A40B20C467A212F;
IL2CPP_EXTERN_C String_t* _stringLiteralDAA8D3345D5A3AD0F665F130BCD3CFA251D7B55B;
IL2CPP_EXTERN_C String_t* _stringLiteralE62AD37C80ED5EC61969E2CCBA713DD71563E1D4;
IL2CPP_EXTERN_C String_t* _stringLiteralF0BF20CBD268F90A787D6E7ECDF53D109641E311;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F;
IL2CPP_EXTERN_C String_t* _stringLiteralFD0435B52744A5AFFF28300666900E8CF8F369F2;
IL2CPP_EXTERN_C const RuntimeMethod* AdministradorToques_Toque_m03D0CF811B3E5AEF358D078218D56B649044638B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdministradorTorres_ActualizarObjetivo_m68087BBFE9AAD7DF0AD20AEC9E34EBBA774EC125_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdministradorTorres_CrearTorre_m78B307F53460D6A6948C09D3625002015E618F4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdministradorUI_ActualizarOla_m742BBAED9091D9E289A81261A930F9C975999338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdministradorUI_ActualizarRecursos_m320F6168926199351CC85F92DC7ACAB927152FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdministradorUI_MostrarMensajeUltimoEnemigo_m87B8F9BB943BA3BCE628FD30DBB1A91AB879CAE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdministradorUI_MostrarMenuGameOver_m28C8576FB6F669C8440F048F2CFF3E05B631783A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdministradorUI_MostrarMenuOlaGanada_m014D237324C4C4DDCC6884A9ED9FA966C829ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnemigoBase_Detener_mF886283F27BFAF8FC39CE54E753A391FF0294F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90_m2B9374D4FA38FC8E0AA3948067058A0D290EB51A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37_m000DA0D35D8C5677FA1C3867F0EBDB8B30E681E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB_m523957666CDD1416E344217C09037E5137D0023B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisObjetivo_t763B524583CCDD90EEF81435A5AF585E668693D4_m5AD68F73BA7EA190AD5A65114961F9A09DAE4120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC_mB26B0CC9AD51313041EC4CAFD40E6451F21EC42D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1_mBB128BCA433852B8A3ED7DEF80CBFCA8323F73E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TorreSeleccionada_t6296A32F7F0B9F7A672C2C61E1B42F5B42A198AE_0_0_0_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.InputSystem.ProtoInputActions
struct ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.ProtoInputActions::<asset>k__BackingField
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions::m_Player
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Player_1;
	// UnityEngine.InputSystem.ProtoInputActions/IPlayerActions UnityEngine.InputSystem.ProtoInputActions::m_PlayerActionsCallbackInterface
	RuntimeObject* ___m_PlayerActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_Player_Move
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_Move_3;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_Player_Look
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_Look_4;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_Player_Fire
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_Fire_5;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions::m_UI
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_UI_6;
	// UnityEngine.InputSystem.ProtoInputActions/IUIActions UnityEngine.InputSystem.ProtoInputActions::m_UIActionsCallbackInterface
	RuntimeObject* ___m_UIActionsCallbackInterface_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_UI_Navigate
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_Navigate_8;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_UI_Submit
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_Submit_9;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_UI_Cancel
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_Cancel_10;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_UI_Point
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_Point_11;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_UI_Click
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_Click_12;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_UI_ScrollWheel
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_ScrollWheel_13;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_UI_MiddleClick
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_MiddleClick_14;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_UI_RightClick
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_RightClick_15;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_UI_TrackedDevicePosition
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_TrackedDevicePosition_16;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_UI_TrackedDeviceOrientation
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_TrackedDeviceOrientation_17;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions::m_Toques
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Toques_18;
	// UnityEngine.InputSystem.ProtoInputActions/IToquesActions UnityEngine.InputSystem.ProtoInputActions::m_ToquesActionsCallbackInterface
	RuntimeObject* ___m_ToquesActionsCallbackInterface_19;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_Toques_Toque
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Toques_Toque_20;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::m_Toques_PosicionToque
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Toques_PosicionToque_21;
	// System.Int32 UnityEngine.InputSystem.ProtoInputActions::m_KeyboardMouseSchemeIndex
	int32_t ___m_KeyboardMouseSchemeIndex_22;
	// System.Int32 UnityEngine.InputSystem.ProtoInputActions::m_GamepadSchemeIndex
	int32_t ___m_GamepadSchemeIndex_23;
	// System.Int32 UnityEngine.InputSystem.ProtoInputActions::m_TouchSchemeIndex
	int32_t ___m_TouchSchemeIndex_24;
	// System.Int32 UnityEngine.InputSystem.ProtoInputActions::m_JoystickSchemeIndex
	int32_t ___m_JoystickSchemeIndex_25;
	// System.Int32 UnityEngine.InputSystem.ProtoInputActions::m_XRSchemeIndex
	int32_t ___m_XRSchemeIndex_26;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements_2;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// UnityEngine.InputSystem.ProtoInputActions/PlayerActions
struct PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498 
{
	// UnityEngine.InputSystem.ProtoInputActions UnityEngine.InputSystem.ProtoInputActions/PlayerActions::m_Wrapper
	ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.ProtoInputActions/PlayerActions
struct PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshaled_pinvoke
{
	ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___m_Wrapper_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.ProtoInputActions/PlayerActions
struct PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshaled_com
{
	ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___m_Wrapper_0;
};

// UnityEngine.InputSystem.ProtoInputActions/ToquesActions
struct ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD 
{
	// UnityEngine.InputSystem.ProtoInputActions UnityEngine.InputSystem.ProtoInputActions/ToquesActions::m_Wrapper
	ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.ProtoInputActions/ToquesActions
struct ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshaled_pinvoke
{
	ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___m_Wrapper_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.ProtoInputActions/ToquesActions
struct ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshaled_com
{
	ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___m_Wrapper_0;
};

// UnityEngine.InputSystem.ProtoInputActions/UIActions
struct UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97 
{
	// UnityEngine.InputSystem.ProtoInputActions UnityEngine.InputSystem.ProtoInputActions/UIActions::m_Wrapper
	ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.ProtoInputActions/UIActions
struct UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshaled_pinvoke
{
	ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___m_Wrapper_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.ProtoInputActions/UIActions
struct UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshaled_com
{
	ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___m_Wrapper_0;
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

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
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

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_ControlsForEachActionInitialized
	bool ___m_ControlsForEachActionInitialized_7;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_BindingsForEachActionInitialized
	bool ___m_BindingsForEachActionInitialized_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_9;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_10;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_11;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_12;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_13;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
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

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_9;
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

// AdminJuego/RecursosModificados
struct RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E  : public MulticastDelegate_t
{
};

// AdministradorToques/PlataformaTocada
struct PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E  : public MulticastDelegate_t
{
};

// AdministradorTorres/EnemigoObjetivoActualizado
struct EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433  : public MulticastDelegate_t
{
};

// Objetivo/ObjetivoDestruido
struct ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54  : public MulticastDelegate_t
{
};

// SpawnerEnemigos/EstadoOleada
struct EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D  : public MulticastDelegate_t
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

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AdminJuego
struct AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 AdminJuego::enemigosBaseDerrotados
	int32_t ___enemigosBaseDerrotados_4;
	// System.Int32 AdminJuego::enemigosJefeDerrotados
	int32_t ___enemigosJefeDerrotados_5;
	// System.Int32 AdminJuego::recursos
	int32_t ___recursos_6;
	// AdminJuego/RecursosModificados AdminJuego::EnRecursosModificados
	RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* ___EnRecursosModificados_7;
};

// AdministradorToques
struct AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionAsset AdministradorToques::inputs
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___inputs_4;
	// UnityEngine.InputSystem.InputAction AdministradorToques::toque
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___toque_5;
	// UnityEngine.InputSystem.InputAction AdministradorToques::posicionToque
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___posicionToque_6;
	// UnityEngine.Camera AdministradorToques::mainCam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCam_7;
	// AdministradorToques/PlataformaTocada AdministradorToques::EnPlataformaTocada
	PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* ___EnPlataformaTocada_8;
};

// AdministradorTorres
struct AdministradorTorres_t0084483F5C0CB6B82C4E6F30C094A9D63F149309  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AdministradorToques AdministradorTorres::referenciaAdminToques
	AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* ___referenciaAdminToques_4;
	// AdminJuego AdministradorTorres::referenciaAdminJuego
	AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* ___referenciaAdminJuego_5;
	// SpawnerEnemigos AdministradorTorres::referenciaSpawner
	SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* ___referenciaSpawner_6;
	// UnityEngine.GameObject AdministradorTorres::Objetivo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Objetivo_7;
	// AdministradorTorres/TorreSeleccionada AdministradorTorres::torreSeleccionada
	int32_t ___torreSeleccionada_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AdministradorTorres::prefabsTorres
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___prefabsTorres_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AdministradorTorres::torresInstanciadas
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___torresInstanciadas_10;
	// AdministradorTorres/EnemigoObjetivoActualizado AdministradorTorres::EnEnemigoObjetivoActualizado
	EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* ___EnEnemigoObjetivoActualizado_11;
};

// AdministradorUI
struct AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AdministradorUI::CanvasPrincipal
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CanvasPrincipal_4;
	// UnityEngine.GameObject AdministradorUI::GameOverMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameOverMenu_5;
	// UnityEngine.GameObject AdministradorUI::MenuOlaGanada
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MenuOlaGanada_6;
	// UnityEngine.GameObject AdministradorUI::MensjaeFinOla
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MensjaeFinOla_7;
	// SpawnerEnemigos AdministradorUI::referenciaSpawner
	SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* ___referenciaSpawner_8;
	// Objetivo AdministradorUI::referenciaObjetivo
	Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* ___referenciaObjetivo_9;
	// AdminJuego AdministradorUI::referenciaAdminJuego
	AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* ___referenciaAdminJuego_10;
	// TMPro.TMP_Text AdministradorUI::textoRecursos
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textoRecursos_11;
	// TMPro.TMP_Text AdministradorUI::textoOleada
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textoOleada_12;
	// TMPro.TMP_Text AdministradorUI::textoEnemigos
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textoEnemigos_13;
	// TMPro.TMP_Text AdministradorUI::textoJefes
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textoJefes_14;
};

// Bala
struct Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Bala::destino
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destino_4;
	// System.Single Bala::velocidad
	float ___velocidad_5;
	// UnityEngine.GameObject Bala::enemigo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemigo_6;
	// System.Int32 Bala::_dano
	int32_t ____dano_7;
};

// EnemigoBase
struct EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EnemigoBase::Objetivo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Objetivo_4;
	// System.Int32 EnemigoBase::vida
	int32_t ___vida_5;
	// System.Int32 EnemigoBase::_dano
	int32_t ____dano_6;
	// System.Int32 EnemigoBase::recursosGanados
	int32_t ___recursosGanados_7;
	// AdminJuego EnemigoBase::referenciaAdminJuego
	AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* ___referenciaAdminJuego_8;
	// SpawnerEnemigos EnemigoBase::referenciaSpawner
	SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* ___referenciaSpawner_9;
	// UnityEngine.Animator EnemigoBase::Anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___Anim_10;
};

// MenuInicio
struct MenuInicio_t8FF8F43F8C7D6E05BE4B6302F94E8ABC75015D19  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MenuInicio::CanvasMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CanvasMenu_4;
	// UnityEngine.GameObject MenuInicio::Opciones
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Opciones_5;
	// UnityEngine.GameObject MenuInicio::SalirJuego
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SalirJuego_6;
	// UnityEngine.GameObject MenuInicio::IniciarJuego
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___IniciarJuego_7;
	// UnityEngine.GameObject MenuInicio::MenuPrincipal
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MenuPrincipal_8;
};

// Objetivo
struct Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Objetivo::vida
	int32_t ___vida_4;
	// Objetivo/ObjetivoDestruido Objetivo::EnObjetivoDestruido
	ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* ___EnObjetivoDestruido_5;
};

// SpawnerEnemigos
struct SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerEnemigos::prefabsEnemigos
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___prefabsEnemigos_4;
	// System.Int32 SpawnerEnemigos::oleada
	int32_t ___oleada_5;
	// System.Collections.Generic.List`1<System.Int32> SpawnerEnemigos::enemigosPorOleada
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___enemigosPorOleada_6;
	// System.Int32 SpawnerEnemigos::enemigosDuranteEstaOleada
	int32_t ___enemigosDuranteEstaOleada_7;
	// System.Boolean SpawnerEnemigos::LaOleadaHaIniciado
	bool ___LaOleadaHaIniciado_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerEnemigos::EnemigosGenerados
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___EnemigosGenerados_9;
	// SpawnerEnemigos/EstadoOleada SpawnerEnemigos::EnOleadaTerminada
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___EnOleadaTerminada_10;
	// SpawnerEnemigos/EstadoOleada SpawnerEnemigos::EnOleadaIniciada
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___EnOleadaIniciada_11;
	// SpawnerEnemigos/EstadoOleada SpawnerEnemigos::EnOleadaGandada
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___EnOleadaGandada_12;
};

// TorreBase
struct TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TorreBase::enemigo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemigo_4;
	// UnityEngine.GameObject TorreBase::prefabBala
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabBala_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TorreBase::puntasCanon
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___puntasCanon_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Boss
struct Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35  : public EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB
{
};

// Enemigo
struct Enemigo_t522607FECD6F61814ECE2AB17FDE1E040DF0688C  : public EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB
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

// TorreAntena
struct TorreAntena_t2B675D8B7D93373C2CF7068BF023796CBA457640  : public TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1
{
	// System.Single TorreAntena::divisionesRayo
	float ___divisionesRayo_7;
	// UnityEngine.LineRenderer TorreAntena::LRRayo
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___LRRayo_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> TorreAntena::puntos
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___puntos_9;
	// System.Int32 TorreAntena::potenciaRayo
	int32_t ___potenciaRayo_10;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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


// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_gshared (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.EnhancedTouch.TouchSimulation::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchSimulation_Enable_mFED0119E7B41A3DB16D095E89D389F50827EAFCD (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.EnhancedTouch.TouchSimulation::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchSimulation_Disable_m66EC1AE8ECDFFBDF6E929D164A1A1C58E3307557 (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void AdministradorToques/PlataformaTocada::Invoke(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_inline (PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plataforma0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void AdministradorToques/PlataformaTocada::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlataformaTocada__ctor_m36438CF56A6F677CCF06A4DA370F1843DF097C39 (PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void AdministradorToques::add_EnPlataformaTocada(AdministradorToques/PlataformaTocada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorToques_add_EnPlataformaTocada_mEEE1E8465C31AC9E481DBDEC3CEA3573CF065694 (AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* __this, PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* ___value0, const RuntimeMethod* method) ;
// System.Void SpawnerEnemigos/EstadoOleada::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EstadoOleada__ctor_mC5D3966BA15854E8A17FDDDFE0B7A7BD60F37FA4 (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SpawnerEnemigos::add_EnOleadaIniciada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_add_EnOleadaIniciada_m271D54AF9C022B39942A17545725D3A3DFD6EB6C (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void AdministradorToques::remove_EnPlataformaTocada(AdministradorToques/PlataformaTocada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorToques_remove_EnPlataformaTocada_m2261A4FB60635FD20D2EE7CBC24D1FCF7503248F (AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* __this, PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* ___value0, const RuntimeMethod* method) ;
// System.Void SpawnerEnemigos::remove_EnOleadaIniciada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_remove_EnOleadaIniciada_m23CE14AD670894E329181E328BBF1BF60B2E777D (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TorreBase>()
inline TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1* GameObject_GetComponent_TisTorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1_mBB128BCA433852B8A3ED7DEF80CBFCA8323F73E8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void AdministradorTorres/EnemigoObjetivoActualizado::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB_inline (EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void AdminJuego::ModificarRecursos(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdminJuego_ModificarRecursos_mEF8CEDE4FDA8ECF6E13E6103BBAC54FBFDA2E465 (AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* __this, int32_t ___modificacion0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m715E9AAD26B4AAA4B08E4D6AED73237174E82BB4 (Type_t* ___enumType0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Objetivo/ObjetivoDestruido::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjetivoDestruido__ctor_m7B126CA4D1C2579387AB7D0A9ACC68931EA7ACFA (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Objetivo::add_EnObjetivoDestruido(Objetivo/ObjetivoDestruido)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objetivo_add_EnObjetivoDestruido_m102CA9E5BCF347C24B4116D85E09ACAC08245658 (Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* __this, ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* ___value0, const RuntimeMethod* method) ;
// System.Void SpawnerEnemigos::add_EnOleadaTerminada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_add_EnOleadaTerminada_mCC5CE7B31F5F2628256BA3BC88ADFFA23B6710C7 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) ;
// System.Void SpawnerEnemigos::add_EnOleadaGandada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_add_EnOleadaGandada_mE64E8B1E862C48FC2A6EF72EB38BCEF76E92CEC9 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) ;
// System.Void AdminJuego/RecursosModificados::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecursosModificados__ctor_m7332ACB28AD73D5085744582AC1624CF964060C8 (RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void AdminJuego::add_EnRecursosModificados(AdminJuego/RecursosModificados)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdminJuego_add_EnRecursosModificados_m105A5FD3070F8984A48AFEA9ACCE824B28E3D3D1 (AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* __this, RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* ___value0, const RuntimeMethod* method) ;
// System.Void Objetivo::remove_EnObjetivoDestruido(Objetivo/ObjetivoDestruido)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objetivo_remove_EnObjetivoDestruido_mB0EDE932199377138C02A675829D87A054967356 (Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* __this, ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* ___value0, const RuntimeMethod* method) ;
// System.Void SpawnerEnemigos::remove_EnOleadaTerminada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_remove_EnOleadaTerminada_m958A97FF70E7A781BA8031897F8D1504E8C57A48 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) ;
// System.Void SpawnerEnemigos::remove_EnOleadaGandada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_remove_EnOleadaGandada_mBDF14F49CB60CAC270415354D5E8135AAC580446 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) ;
// System.Void AdminJuego::remove_EnRecursosModificados(AdminJuego/RecursosModificados)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdminJuego_remove_EnRecursosModificados_m9A1B131C669232AAA1E63FB8C103688A057E8C69 (AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* __this, RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void AdministradorUI::ocultarMenuJuegoGanado()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_ocultarMenuJuegoGanado_m7A39E21AD3234E9BCEA3FBC9001BC1A8769081C5 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void AdminJuego/RecursosModificados::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C_inline (RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void Bala::Danar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bala_Danar_m8C811790E07902D5FB1EBBD8DAA6621EF2185051 (Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* __this, int32_t ___dano0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EnemigoBase>()
inline EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* GameObject_GetComponent_TisEnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB_m523957666CDD1416E344217C09037E5137D0023B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EnemigoBase::RecibirDano(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase_RecibirDano_m13C6D0169BDEE4C0241DEA5C7CE246C46D10CEBF (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, int32_t ___dano0, const RuntimeMethod* method) ;
// System.Void EnemigoBase::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase_OnDestroy_mC20760E1F0A6F22EB52A85663945B2AB5CBD6882 (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, const RuntimeMethod* method) ;
// System.Void EnemigoBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase__ctor_mDBF1EF71D274EC6DCC936DA485BC8ADDD0CDF29A (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<AdminJuego>()
inline AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* GameObject_GetComponent_TisAdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90_m2B9374D4FA38FC8E0AA3948067058A0D290EB51A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<SpawnerEnemigos>()
inline SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* GameObject_GetComponent_TisSpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC_mB26B0CC9AD51313041EC4CAFD40E6451F21EC42D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Objetivo>()
inline Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* GameObject_GetComponent_TisObjetivo_t763B524583CCDD90EEF81435A5AF585E668693D4_m5AD68F73BA7EA190AD5A65114961F9A09DAE4120 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void Objetivo::RecibirDano(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objetivo_RecibirDano_m742EB996258D6F3C868D5A644E0CD85ACCF67BA6 (Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* __this, int32_t ___dano0, const RuntimeMethod* method) ;
// System.Void Objetivo/ObjetivoDestruido::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C_inline (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void SpawnerEnemigos::GanarOla()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_GanarOla_mEC959DAF3B13A8967B555A5039771E6ADFD2364F (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) ;
// System.Void SpawnerEnemigos/EstadoOleada::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_inline (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, const RuntimeMethod* method) ;
// System.Void SpawnerEnemigos::ConfigurarCantidadDeEnemigos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_ConfigurarCantidadDeEnemigos_m5CCEF87F12475A524677AE95850EA52F2CADDBBB (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) ;
// System.Void SpawnerEnemigos::InstanciarEnemigo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_InstanciarEnemigo_m6C80A493EB78695D930BCDAD9CADCA9CF3B74CF7 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void SpawnerEnemigos::TerminarOla()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_TerminarOla_mDB93B31DD71C24860B94D90218F72B4E4CD81750 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TorreAntena::Danar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreAntena_Danar_m79CDF55BADF0B45375A1E2C628488D45958F5589 (TorreAntena_t2B675D8B7D93373C2CF7068BF023796CBA457640* __this, int32_t ___dano0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Vector3> TorreAntena::ObtenerPuntos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* TorreAntena_ObtenerPuntos_mEC24F1AB5E0E0B6EB1C48C6675177F523AA1F676 (TorreAntena_t2B675D8B7D93373C2CF7068BF023796CBA457640* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
inline void List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_gshared)(__this, ___index0, ___item1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43 (const RuntimeMethod* method) ;
// System.Void TorreBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreBase__ctor_m33DBDCE3E36FCC7E16B2F48D176A7ACD14926B9B (TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1* __this, const RuntimeMethod* method) ;
// System.Void TorreBase::Apuntar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreBase_Apuntar_m5F59C7AD2B83D2B13ABCD8EC069C62193E32D0B0 (TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Bala>()
inline Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* GameObject_GetComponent_TisBala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37_m000DA0D35D8C5677FA1C3867F0EBDB8B30E681E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionAsset_FromJson_mA8AF88895F49DB0F0BAB47B60744E927E6234347 (String_t* ___json0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.ProtoInputActions::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.ProtoInputActions::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProtoInputActions_GetEnumerator_mE1FD5665ADC8CF2BA30AB641B117EFB6A8B51B1C (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___mask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/PlayerActions::.ctor(UnityEngine.InputSystem.ProtoInputActions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerActions__ctor_mE18985192A41375D63DCA50A825FF31555D4D133_inline (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/UIActions::.ctor(UnityEngine.InputSystem.ProtoInputActions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIActions__ctor_m3912983C2EF9DFB75AC30682F0EB087A8C1AFCCE_inline (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/ToquesActions::.ctor(UnityEngine.InputSystem.ProtoInputActions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToquesActions__ctor_m9582D36AB7554080A7F742987C112835035C44A1_inline (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindControlSchemeIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___name0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>::get_Item(System.Int32)
inline InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 (*) (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9*, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_gshared)(__this, ___index0, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/PlayerActions::get_Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Move_m433DFFA675227B94A6B5477AD809D09E998D1FE2 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/PlayerActions::get_Look()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Look_m0C507EE4DEA5C56765C0F8303BF80B6BD26CBFF9 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/PlayerActions::get_Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Fire_m49AE3A4F86DFC6242682C6227257A3A53882ACF9 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_mF460D9144E792CAB5239667E3894DAB57710B97C (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_m2BA85BE795479E07AD6F23222B95A031F19C6558 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_mF3D5E745465C4F5236119C43056981F6A4AB204E (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.ProtoInputActions/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_m882243F92EBBB8F7D0142C7A69754EB76898DF82 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/PlayerActions::SetCallbacks(UnityEngine.InputSystem.ProtoInputActions/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_m236299F714C3C509F83133F3FA0DC9D2E76A0FAD (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_Navigate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Navigate_m4EF08E5A937B7DD9A3A97B69AAADD650FE3ACB83 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_Submit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Submit_mCA278E2C88C727A29049428965DB28E408AA86BA (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Cancel_mDF7CCF958B112205C16E6D75EB516A865C380E60 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_Point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Point_mC9CAB7021FA57885D2C9162442E581F24DA54E1A (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Click_m3BA6A58364D596CFE32944A65432A7CFBDA34CE6 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_ScrollWheel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_ScrollWheel_m27F6A5AD6FE4C0ABE7927ACDDA9E684F43033A0B (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_MiddleClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_MiddleClick_mF1EEF8F09BBB4A273E363A7B36AF23FF424C840D (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_RightClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_RightClick_m894997ECBAB36DA1B2EBF1D48978514535B9CEA3 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_TrackedDevicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDevicePosition_mE35CE9AAF13D86E282E25221AFC12A387F403350 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_TrackedDeviceOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDeviceOrientation_mA4B734C44E0419328E96984AE9E42F5CAE435FB8 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions/UIActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* UIActions_Get_m3CE484A87A01441CD69373F377B4F1A7116AE314 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/UIActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_Enable_mC70DA0912FFE1FFAF2647E13F7014FCFA29566A8 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/UIActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_Disable_m932B45E23D9E8CDB1DD452E5B44CEC703CA29CBB (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.ProtoInputActions/UIActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIActions_get_enabled_m9C35D0948A2B8C456A6817D6AA9898BC0F79DE2C (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/UIActions::SetCallbacks(UnityEngine.InputSystem.ProtoInputActions/IUIActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_SetCallbacks_mBF13197653F0E7D19B28AA4574A4972CB4A360FC (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/ToquesActions::get_Toque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ToquesActions_get_Toque_mBAB63CFBFB771F61173CBC9CCBCEA4F5233B1318 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/ToquesActions::get_PosicionToque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ToquesActions_get_PosicionToque_m0432B836643EE607B0C0B4C143D7AA6184C53BE7 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions/ToquesActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ToquesActions_Get_mD66DEAFB791A6710B9FD47F2D4A12E66C4A0D757 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/ToquesActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToquesActions_Enable_m995823BB427EBE22576DF08B84B9D1B738E4BA93 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/ToquesActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToquesActions_Disable_m9C781318082A3A7A6009104ABE77345F912E916A (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.ProtoInputActions/ToquesActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToquesActions_get_enabled_m6D2AA31071EF247055915B65132F50699FDB81D6 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.ProtoInputActions/ToquesActions::SetCallbacks(UnityEngine.InputSystem.ProtoInputActions/IToquesActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToquesActions_SetCallbacks_m33CD7BC5B886DC157B9107C77823140C132A92F1 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
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
// System.Void AdministradorToques::add_EnPlataformaTocada(AdministradorToques/PlataformaTocada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorToques_add_EnPlataformaTocada_mEEE1E8465C31AC9E481DBDEC3CEA3573CF065694 (AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* __this, PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* V_0 = NULL;
	PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* V_1 = NULL;
	PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* V_2 = NULL;
	{
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_0 = __this->___EnPlataformaTocada_8;
		V_0 = L_0;
	}

IL_0007:
	{
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_1 = V_0;
		V_1 = L_1;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_2 = V_1;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E*)CastclassSealed((RuntimeObject*)L_4, PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E_il2cpp_TypeInfo_var));
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E** L_5 = (&__this->___EnPlataformaTocada_8);
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_6 = V_2;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_7 = V_1;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_8;
		L_8 = InterlockedCompareExchangeImpl<PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E*>(L_5, L_6, L_7);
		V_0 = L_8;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_9 = V_0;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E*)L_9) == ((RuntimeObject*)(PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AdministradorToques::remove_EnPlataformaTocada(AdministradorToques/PlataformaTocada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorToques_remove_EnPlataformaTocada_m2261A4FB60635FD20D2EE7CBC24D1FCF7503248F (AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* __this, PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* V_0 = NULL;
	PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* V_1 = NULL;
	PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* V_2 = NULL;
	{
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_0 = __this->___EnPlataformaTocada_8;
		V_0 = L_0;
	}

IL_0007:
	{
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_1 = V_0;
		V_1 = L_1;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_2 = V_1;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E*)CastclassSealed((RuntimeObject*)L_4, PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E_il2cpp_TypeInfo_var));
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E** L_5 = (&__this->___EnPlataformaTocada_8);
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_6 = V_2;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_7 = V_1;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_8;
		L_8 = InterlockedCompareExchangeImpl<PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E*>(L_5, L_6, L_7);
		V_0 = L_8;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_9 = V_0;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E*)L_9) == ((RuntimeObject*)(PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AdministradorToques::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorToques_OnEnable_mAEF679EAE30CBED0DFCFCDD2C19F2062704A4DA4 (AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorToques_Toque_m03D0CF811B3E5AEF358D078218D56B649044638B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76E64999AC9428D75B31CD40BCA2270B19CDAE1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC4515E344CAA528FBB65CD1A4C06B90761465BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TouchSimulation.Enable();
		TouchSimulation_Enable_mFED0119E7B41A3DB16D095E89D389F50827EAFCD(NULL);
		// inputs.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___inputs_4;
		NullCheck(L_0);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// toque = inputs.FindAction("Toque");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1 = __this->___inputs_4;
		NullCheck(L_1);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_1, _stringLiteralBC4515E344CAA528FBB65CD1A4C06B90761465BC, (bool)0, NULL);
		__this->___toque_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toque_5), (void*)L_2);
		// posicionToque = inputs.FindAction("PosicionToque");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_3 = __this->___inputs_4;
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_3, _stringLiteral76E64999AC9428D75B31CD40BCA2270B19CDAE1B, (bool)0, NULL);
		__this->___posicionToque_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___posicionToque_6), (void*)L_4);
		// toque.performed += Toque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = __this->___toque_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_6 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_6, __this, (intptr_t)((void*)AdministradorToques_Toque_m03D0CF811B3E5AEF358D078218D56B649044638B_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void AdministradorToques::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorToques_OnDisable_m87ED92A31702FF211CEE0ADB4866D7BE1695E9BB (AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorToques_Toque_m03D0CF811B3E5AEF358D078218D56B649044638B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputs.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___inputs_4;
		NullCheck(L_0);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// TouchSimulation.Disable();
		TouchSimulation_Disable_m66EC1AE8ECDFFBDF6E929D164A1A1C58E3307557(NULL);
		// toque.performed -= Toque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = __this->___toque_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_2 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_2, __this, (intptr_t)((void*)AdministradorToques_Toque_m03D0CF811B3E5AEF358D078218D56B649044638B_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void AdministradorToques::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorToques_Start_m9EE5AB61841D6FA7A0E5F8856CD12D288A2B84BC (AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* __this, const RuntimeMethod* method) 
{
	{
		// mainCam = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->___mainCam_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCam_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void AdministradorToques::Toque(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorToques_Toque_m03D0CF811B3E5AEF358D078218D56B649044638B (AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60B1334B63FD718829AA38949E1E9BEF3E80F288);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C66599FE1C10510EF86972A25652A53B4C5F63B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD4A9574723CC91A37EE1B9DDD1714A2A8E82C4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE62AD37C80ED5EC61969E2CCBA713DD71563E1D4);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 poseToque2D = posicionToque.ReadValue<Vector2>();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___posicionToque_6;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_0, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		V_0 = L_1;
		// Vector3 poseToque3D = new Vector3(poseToque2D.x, poseToque2D.y, mainCam.farClipPlane);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___y_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___mainCam_7;
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_6, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_3, L_5, L_7, NULL);
		// Ray rayoPantalla = mainCam.ScreenPointToRay(poseToque3D);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___mainCam_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		NullCheck(L_8);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10;
		L_10 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_8, L_9, NULL);
		// Debug.Log($"la pantalla fue tocada en la posicion: {poseToque2D}");
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = L_11;
		RuntimeObject* L_13 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralE62AD37C80ED5EC61969E2CCBA713DD71563E1D4, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_14, NULL);
		// if(Physics.Raycast(rayoPantalla, out hit, Mathf.Infinity))
		bool L_15;
		L_15 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_10, (&V_2), (std::numeric_limits<float>::infinity()), NULL);
		if (!L_15)
		{
			goto IL_00b6;
		}
	}
	{
		// Debug.Log(hit.transform.gameObject.name);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_2), NULL);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_18, NULL);
		// if (hit.transform.gameObject.tag == "Plataforma")
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_2), NULL);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_20, NULL);
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteral9C66599FE1C10510EF86972A25652A53B4C5F63B, NULL);
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		// Debug.Log("Plataforma tocada");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralAD4A9574723CC91A37EE1B9DDD1714A2A8E82C4D, NULL);
		// if (EnPlataformaTocada != null)
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_23 = __this->___EnPlataformaTocada_8;
		if (!L_23)
		{
			goto IL_00c0;
		}
	}
	{
		// EnPlataformaTocada(hit.transform.gameObject);
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_24 = __this->___EnPlataformaTocada_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_2), NULL);
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		NullCheck(L_24);
		PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_inline(L_24, L_26, NULL);
		return;
	}

IL_00b6:
	{
		// Debug.Log("no hubo un hit del raycast");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral60B1334B63FD718829AA38949E1E9BEF3E80F288, NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void AdministradorToques::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorToques__ctor_mA201E2A176781259446B4F10D2A4FD4434717B30 (AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* __this, const RuntimeMethod* method) 
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
void PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_Multicast(PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plataforma0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* currentDelegate = reinterpret_cast<PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___plataforma0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_Open(PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plataforma0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___plataforma0, method);
}
void PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_OpenStaticInvoker(PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plataforma0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, ___plataforma0);
}
void PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_ClosedStaticInvoker(PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plataforma0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___plataforma0);
}
// System.Void AdministradorToques/PlataformaTocada::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlataformaTocada__ctor_m36438CF56A6F677CCF06A4DA370F1843DF097C39 (PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_Multicast;
}
// System.Void AdministradorToques/PlataformaTocada::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508 (PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plataforma0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___plataforma0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AdministradorToques/PlataformaTocada::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlataformaTocada_BeginInvoke_m7CA77CA51789C088A1E5E4166FDD9AE44C2FF25C (PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plataforma0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___plataforma0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void AdministradorToques/PlataformaTocada::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlataformaTocada_EndInvoke_m93A38ABB84F438368CCF8943ACA10B2071EB73FA (PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void AdministradorTorres::add_EnEnemigoObjetivoActualizado(AdministradorTorres/EnemigoObjetivoActualizado)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorTorres_add_EnEnemigoObjetivoActualizado_mCB5E4AA46669EB95818CF2D54374D7324A6BE78F (AdministradorTorres_t0084483F5C0CB6B82C4E6F30C094A9D63F149309* __this, EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* V_0 = NULL;
	EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* V_1 = NULL;
	EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* V_2 = NULL;
	{
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_0 = __this->___EnEnemigoObjetivoActualizado_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_1 = V_0;
		V_1 = L_1;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_2 = V_1;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433*)CastclassSealed((RuntimeObject*)L_4, EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433_il2cpp_TypeInfo_var));
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433** L_5 = (&__this->___EnEnemigoObjetivoActualizado_11);
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_6 = V_2;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_7 = V_1;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_8;
		L_8 = InterlockedCompareExchangeImpl<EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433*>(L_5, L_6, L_7);
		V_0 = L_8;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_9 = V_0;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_10 = V_1;
		if ((!(((RuntimeObject*)(EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433*)L_9) == ((RuntimeObject*)(EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AdministradorTorres::remove_EnEnemigoObjetivoActualizado(AdministradorTorres/EnemigoObjetivoActualizado)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorTorres_remove_EnEnemigoObjetivoActualizado_mF198B43EEF4FDE086BA1223A6A638EF1EB02C84C (AdministradorTorres_t0084483F5C0CB6B82C4E6F30C094A9D63F149309* __this, EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* V_0 = NULL;
	EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* V_1 = NULL;
	EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* V_2 = NULL;
	{
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_0 = __this->___EnEnemigoObjetivoActualizado_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_1 = V_0;
		V_1 = L_1;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_2 = V_1;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433*)CastclassSealed((RuntimeObject*)L_4, EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433_il2cpp_TypeInfo_var));
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433** L_5 = (&__this->___EnEnemigoObjetivoActualizado_11);
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_6 = V_2;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_7 = V_1;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_8;
		L_8 = InterlockedCompareExchangeImpl<EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433*>(L_5, L_6, L_7);
		V_0 = L_8;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_9 = V_0;
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_10 = V_1;
		if ((!(((RuntimeObject*)(EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433*)L_9) == ((RuntimeObject*)(EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AdministradorTorres::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorTorres_OnEnable_m115176FAAADCCBD72B686F22B9689EE0F83AE236 (AdministradorTorres_t0084483F5C0CB6B82C4E6F30C094A9D63F149309* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorTorres_ActualizarObjetivo_m68087BBFE9AAD7DF0AD20AEC9E34EBBA774EC125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorTorres_CrearTorre_m78B307F53460D6A6948C09D3625002015E618F4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// referenciaAdminToques.EnPlataformaTocada += CrearTorre;
		AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* L_0 = __this->___referenciaAdminToques_4;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_1 = (PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E*)il2cpp_codegen_object_new(PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PlataformaTocada__ctor_m36438CF56A6F677CCF06A4DA370F1843DF097C39(L_1, __this, (intptr_t)((void*)AdministradorTorres_CrearTorre_m78B307F53460D6A6948C09D3625002015E618F4C_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		AdministradorToques_add_EnPlataformaTocada_mEEE1E8465C31AC9E481DBDEC3CEA3573CF065694(L_0, L_1, NULL);
		// referenciaSpawner.EnOleadaIniciada += ActualizarObjetivo;
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_2 = __this->___referenciaSpawner_6;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_3 = (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)il2cpp_codegen_object_new(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EstadoOleada__ctor_mC5D3966BA15854E8A17FDDDFE0B7A7BD60F37FA4(L_3, __this, (intptr_t)((void*)AdministradorTorres_ActualizarObjetivo_m68087BBFE9AAD7DF0AD20AEC9E34EBBA774EC125_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		SpawnerEnemigos_add_EnOleadaIniciada_m271D54AF9C022B39942A17545725D3A3DFD6EB6C(L_2, L_3, NULL);
		// torresInstanciadas = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_4, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___torresInstanciadas_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___torresInstanciadas_10), (void*)L_4);
		// }
		return;
	}
}
// System.Void AdministradorTorres::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorTorres_OnDisable_m556905AB0D05ADC22E7834EE7BA9967CB79C22B5 (AdministradorTorres_t0084483F5C0CB6B82C4E6F30C094A9D63F149309* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorTorres_ActualizarObjetivo_m68087BBFE9AAD7DF0AD20AEC9E34EBBA774EC125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorTorres_CrearTorre_m78B307F53460D6A6948C09D3625002015E618F4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// referenciaAdminToques.EnPlataformaTocada -= CrearTorre;
		AdministradorToques_t79BCF4B4E7F58FA0D6210F22CB5C85AED912E0CF* L_0 = __this->___referenciaAdminToques_4;
		PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* L_1 = (PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E*)il2cpp_codegen_object_new(PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PlataformaTocada__ctor_m36438CF56A6F677CCF06A4DA370F1843DF097C39(L_1, __this, (intptr_t)((void*)AdministradorTorres_CrearTorre_m78B307F53460D6A6948C09D3625002015E618F4C_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		AdministradorToques_remove_EnPlataformaTocada_m2261A4FB60635FD20D2EE7CBC24D1FCF7503248F(L_0, L_1, NULL);
		// referenciaSpawner.EnOleadaIniciada -= ActualizarObjetivo;
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_2 = __this->___referenciaSpawner_6;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_3 = (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)il2cpp_codegen_object_new(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EstadoOleada__ctor_mC5D3966BA15854E8A17FDDDFE0B7A7BD60F37FA4(L_3, __this, (intptr_t)((void*)AdministradorTorres_ActualizarObjetivo_m68087BBFE9AAD7DF0AD20AEC9E34EBBA774EC125_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		SpawnerEnemigos_remove_EnOleadaIniciada_m23CE14AD670894E329181E328BBF1BF60B2E777D(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void AdministradorTorres::ActualizarObjetivo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorTorres_ActualizarObjetivo_m68087BBFE9AAD7DF0AD20AEC9E34EBBA774EC125 (AdministradorTorres_t0084483F5C0CB6B82C4E6F30C094A9D63F149309* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1_mBB128BCA433852B8A3ED7DEF80CBFCA8323F73E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14DCDE3AE772E5436662FC864D91073443325F7C);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	float V_4 = 0.0f;
	{
		// if(referenciaSpawner.LaOleadaHaIniciado)
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_0 = __this->___referenciaSpawner_6;
		NullCheck(L_0);
		bool L_1 = L_0->___LaOleadaHaIniciado_8;
		if (!L_1)
		{
			goto IL_00d8;
		}
	}
	{
		// float distanciaMasCorta = float.MaxValue;
		V_0 = ((std::numeric_limits<float>::max)());
		// GameObject enemigoMasCercano = null;
		V_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach(GameObject enemigo in referenciaSpawner.EnemigosGenerados)
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_2 = __this->___referenciaSpawner_6;
		NullCheck(L_2);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = L_2->___EnemigosGenerados_9;
		NullCheck(L_3);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_4;
		L_4 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_3, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_2), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005f_1;
			}

IL_002b_1:
			{
				// foreach(GameObject enemigo in referenciaSpawner.EnemigosGenerados)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_2), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_3 = L_5;
				// float dist = Vector3.Distance(enemigo.transform.position, Objetivo.transform.position);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_3;
				NullCheck(L_6);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
				L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
				NullCheck(L_7);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
				L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Objetivo_7;
				NullCheck(L_9);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
				NullCheck(L_10);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
				float L_12;
				L_12 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_8, L_11, NULL);
				V_4 = L_12;
				// if(dist < distanciaMasCorta)
				float L_13 = V_4;
				float L_14 = V_0;
				if ((!(((float)L_13) < ((float)L_14))))
				{
					goto IL_005f_1;
				}
			}
			{
				// distanciaMasCorta = dist;
				float L_15 = V_4;
				V_0 = L_15;
				// enemigoMasCercano = enemigo;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_3;
				V_1 = L_16;
			}

IL_005f_1:
			{
				// foreach(GameObject enemigo in referenciaSpawner.EnemigosGenerados)
				bool L_17;
				L_17 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_2), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_0078;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0078:
	{
		// if(enemigoMasCercano != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_00d8;
		}
	}
	{
		// foreach(GameObject torre in torresInstanciadas)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->___torresInstanciadas_10;
		NullCheck(L_20);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_21;
		L_21 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_20, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_2 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_2), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ac_1;
			}

IL_008f_1:
			{
				// foreach(GameObject torre in torresInstanciadas)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
				L_22 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_2), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// torre.GetComponent<TorreBase>().enemigo = enemigoMasCercano;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22;
				NullCheck(L_23);
				TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1* L_24;
				L_24 = GameObject_GetComponent_TisTorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1_mBB128BCA433852B8A3ED7DEF80CBFCA8323F73E8(L_23, GameObject_GetComponent_TisTorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1_mBB128BCA433852B8A3ED7DEF80CBFCA8323F73E8_RuntimeMethod_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_1;
				NullCheck(L_24);
				L_24->___enemigo_4 = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&L_24->___enemigo_4), (void*)L_25);
				// torre.GetComponent<TorreBase>().Disparar();
				NullCheck(L_23);
				TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1* L_26;
				L_26 = GameObject_GetComponent_TisTorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1_mBB128BCA433852B8A3ED7DEF80CBFCA8323F73E8(L_23, GameObject_GetComponent_TisTorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1_mBB128BCA433852B8A3ED7DEF80CBFCA8323F73E8_RuntimeMethod_var);
				NullCheck(L_26);
				VirtualActionInvoker0::Invoke(4 /* System.Void TorreBase::Disparar() */, L_26);
			}

IL_00ac_1:
			{
				// foreach(GameObject torre in torresInstanciadas)
				bool L_27;
				L_27 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_2), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_008f_1;
				}
			}
			{
				goto IL_00c5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c5:
	{
		// if(EnEnemigoObjetivoActualizado != null)
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_28 = __this->___EnEnemigoObjetivoActualizado_11;
		if (!L_28)
		{
			goto IL_00d8;
		}
	}
	{
		// EnEnemigoObjetivoActualizado();
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* L_29 = __this->___EnEnemigoObjetivoActualizado_11;
		NullCheck(L_29);
		EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB_inline(L_29, NULL);
	}

IL_00d8:
	{
		// Invoke("ActualizarObjetivo", 3);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral14DCDE3AE772E5436662FC864D91073443325F7C, (3.0f), NULL);
		// }
		return;
	}
}
// System.Void AdministradorTorres::CrearTorre(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorTorres_CrearTorre_m78B307F53460D6A6948C09D3625002015E618F4C (AdministradorTorres_t0084483F5C0CB6B82C4E6F30C094A9D63F149309* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plataforma0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA19C0EE359490C7448E9205AD51E3A6544B2CE4D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// int costo = torreSeleccionada switch
		//     {
		//         TorreSeleccionada.Torre_1 => 400,
		//         TorreSeleccionada.Torre_2 => 600,
		//         TorreSeleccionada.Torre_3 => 800,
		//         TorreSeleccionada.Balista => 200,
		//         TorreSeleccionada.Laser => 800,
		//         _ => 0
		//     };
		int32_t L_0 = __this->___torreSeleccionada_8;
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_0033;
			}
			case 3:
			{
				goto IL_003b;
			}
			case 4:
			{
				goto IL_0043;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_0023:
	{
		// TorreSeleccionada.Torre_1 => 400,
		V_1 = ((int32_t)400);
		goto IL_004d;
	}

IL_002b:
	{
		// TorreSeleccionada.Torre_2 => 600,
		V_1 = ((int32_t)600);
		goto IL_004d;
	}

IL_0033:
	{
		// TorreSeleccionada.Torre_3 => 800,
		V_1 = ((int32_t)800);
		goto IL_004d;
	}

IL_003b:
	{
		// TorreSeleccionada.Balista => 200,
		V_1 = ((int32_t)200);
		goto IL_004d;
	}

IL_0043:
	{
		// TorreSeleccionada.Laser => 800,
		V_1 = ((int32_t)800);
		goto IL_004d;
	}

IL_004b:
	{
		// _ => 0
		V_1 = 0;
	}

IL_004d:
	{
		int32_t L_2 = V_1;
		V_0 = L_2;
		// if(plataforma.transform.childCount == 0 && referenciaAdminJuego.recursos>=costo)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___plataforma0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_4, NULL);
		if (L_5)
		{
			goto IL_00e1;
		}
	}
	{
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_6 = __this->___referenciaAdminJuego_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->___recursos_6;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_00e1;
		}
	}
	{
		// referenciaAdminJuego.ModificarRecursos(-costo);
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_9 = __this->___referenciaAdminJuego_5;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		AdminJuego_ModificarRecursos_mEF8CEDE4FDA8ECF6E13E6103BBAC54FBFDA2E465(L_9, ((-L_10)), NULL);
		// Debug.Log("Creando Torre");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA19C0EE359490C7448E9205AD51E3A6544B2CE4D, NULL);
		// int indiceTorre = (int)torreSeleccionada;
		int32_t L_11 = __this->___torreSeleccionada_8;
		V_3 = L_11;
		// Vector3 posParaIntanciar = plataforma.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___plataforma0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		V_4 = L_14;
		// posParaIntanciar.y += 0.5f;
		float* L_15 = (&(&V_4)->___y_3);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		*((float*)L_16) = (float)((float)il2cpp_codegen_add(L_17, (0.5f)));
		// GameObject torreInstanciada = Instantiate<GameObject>(prefabsTorres[indiceTorre], posParaIntanciar, Quaternion.identity);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = __this->___prefabsTorres_9;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_18, L_19, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_20, L_21, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_5 = L_23;
		// torreInstanciada.transform.SetParent(plataforma.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_5;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = ___plataforma0;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_25);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_25, L_27, NULL);
		// torresInstanciadas.Add(torreInstanciada);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_28 = __this->___torresInstanciadas_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_5;
		NullCheck(L_28);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_28, L_29, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void AdministradorTorres::ConfigurarTorre(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorTorres_ConfigurarTorre_mF48F034E9E71149EDA49A62814F3EEFC926748DF (AdministradorTorres_t0084483F5C0CB6B82C4E6F30C094A9D63F149309* __this, int32_t ___torre0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TorreSeleccionada_t6296A32F7F0B9F7A672C2C61E1B42F5B42A198AE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC335197F26CDAC117B9C53198144F48D7F270B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Enum.IsDefined(typeof(TorreSeleccionada), torre))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (TorreSeleccionada_t6296A32F7F0B9F7A672C2C61E1B42F5B42A198AE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		int32_t L_2 = ___torre0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m715E9AAD26B4AAA4B08E4D6AED73237174E82BB4(L_1, L_4, NULL);
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// torreSeleccionada = (TorreSeleccionada)torre;
		int32_t L_6 = ___torre0;
		__this->___torreSeleccionada_8 = L_6;
		return;
	}

IL_001f:
	{
		// Debug.LogError("esa torre no esta definida");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralAC335197F26CDAC117B9C53198144F48D7F270B9, NULL);
		// }
		return;
	}
}
// System.Void AdministradorTorres::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorTorres__ctor_m7A016597B7DE615F6969BF0D71D46C9B802CCF17 (AdministradorTorres_t0084483F5C0CB6B82C4E6F30C094A9D63F149309* __this, const RuntimeMethod* method) 
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
void EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB_Multicast(EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* currentDelegate = reinterpret_cast<EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB_Open(EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB_OpenStaticInvoker(EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB_ClosedStaticInvoker(EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433 (EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void AdministradorTorres/EnemigoObjetivoActualizado::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoObjetivoActualizado__ctor_mA4650D2B4518B8FB7448B09AAC78DFE9F746070B (EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB_Multicast;
}
// System.Void AdministradorTorres/EnemigoObjetivoActualizado::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB (EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AdministradorTorres/EnemigoObjetivoActualizado::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemigoObjetivoActualizado_BeginInvoke_m645DCE0CCF358292FCE5AB843DF562D81495F83A (EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void AdministradorTorres/EnemigoObjetivoActualizado::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoObjetivoActualizado_EndInvoke_mEB51B52D8D9A082E632E75A127B99411A913B231 (EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void AdministradorUI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_OnEnable_mC92B9F93F41D28A3CCFAE6A42EED4E0D1953FD18 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorUI_ActualizarOla_m742BBAED9091D9E289A81261A930F9C975999338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorUI_ActualizarRecursos_m320F6168926199351CC85F92DC7ACAB927152FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorUI_MostrarMensajeUltimoEnemigo_m87B8F9BB943BA3BCE628FD30DBB1A91AB879CAE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorUI_MostrarMenuGameOver_m28C8576FB6F669C8440F048F2CFF3E05B631783A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorUI_MostrarMenuOlaGanada_m014D237324C4C4DDCC6884A9ED9FA966C829ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// referenciaObjetivo.EnObjetivoDestruido += MostrarMenuGameOver;
		Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* L_0 = __this->___referenciaObjetivo_9;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_1 = (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*)il2cpp_codegen_object_new(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ObjetivoDestruido__ctor_m7B126CA4D1C2579387AB7D0A9ACC68931EA7ACFA(L_1, __this, (intptr_t)((void*)AdministradorUI_MostrarMenuGameOver_m28C8576FB6F669C8440F048F2CFF3E05B631783A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Objetivo_add_EnObjetivoDestruido_m102CA9E5BCF347C24B4116D85E09ACAC08245658(L_0, L_1, NULL);
		// referenciaSpawner.EnOleadaIniciada += ActualizarOla;
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_2 = __this->___referenciaSpawner_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_3 = (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)il2cpp_codegen_object_new(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EstadoOleada__ctor_mC5D3966BA15854E8A17FDDDFE0B7A7BD60F37FA4(L_3, __this, (intptr_t)((void*)AdministradorUI_ActualizarOla_m742BBAED9091D9E289A81261A930F9C975999338_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		SpawnerEnemigos_add_EnOleadaIniciada_m271D54AF9C022B39942A17545725D3A3DFD6EB6C(L_2, L_3, NULL);
		// referenciaSpawner.EnOleadaTerminada += MostrarMensajeUltimoEnemigo;
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_4 = __this->___referenciaSpawner_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_5 = (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)il2cpp_codegen_object_new(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EstadoOleada__ctor_mC5D3966BA15854E8A17FDDDFE0B7A7BD60F37FA4(L_5, __this, (intptr_t)((void*)AdministradorUI_MostrarMensajeUltimoEnemigo_m87B8F9BB943BA3BCE628FD30DBB1A91AB879CAE4_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		SpawnerEnemigos_add_EnOleadaTerminada_mCC5CE7B31F5F2628256BA3BC88ADFFA23B6710C7(L_4, L_5, NULL);
		// referenciaSpawner.EnOleadaGandada += MostrarMenuOlaGanada;
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_6 = __this->___referenciaSpawner_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_7 = (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)il2cpp_codegen_object_new(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EstadoOleada__ctor_mC5D3966BA15854E8A17FDDDFE0B7A7BD60F37FA4(L_7, __this, (intptr_t)((void*)AdministradorUI_MostrarMenuOlaGanada_m014D237324C4C4DDCC6884A9ED9FA966C829ED30_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		SpawnerEnemigos_add_EnOleadaGandada_mE64E8B1E862C48FC2A6EF72EB38BCEF76E92CEC9(L_6, L_7, NULL);
		// referenciaAdminJuego.EnRecursosModificados += ActualizarRecursos;
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_8 = __this->___referenciaAdminJuego_10;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_9 = (RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E*)il2cpp_codegen_object_new(RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		RecursosModificados__ctor_m7332ACB28AD73D5085744582AC1624CF964060C8(L_9, __this, (intptr_t)((void*)AdministradorUI_ActualizarRecursos_m320F6168926199351CC85F92DC7ACAB927152FDA_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		AdminJuego_add_EnRecursosModificados_m105A5FD3070F8984A48AFEA9ACCE824B28E3D3D1(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_OnDisable_mADE2FE0CD09DD77D38A6DE609CC858D5A3CBBB1D (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorUI_ActualizarOla_m742BBAED9091D9E289A81261A930F9C975999338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorUI_ActualizarRecursos_m320F6168926199351CC85F92DC7ACAB927152FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorUI_MostrarMensajeUltimoEnemigo_m87B8F9BB943BA3BCE628FD30DBB1A91AB879CAE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorUI_MostrarMenuGameOver_m28C8576FB6F669C8440F048F2CFF3E05B631783A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdministradorUI_MostrarMenuOlaGanada_m014D237324C4C4DDCC6884A9ED9FA966C829ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// referenciaObjetivo.EnObjetivoDestruido -= MostrarMenuGameOver;
		Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* L_0 = __this->___referenciaObjetivo_9;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_1 = (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*)il2cpp_codegen_object_new(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ObjetivoDestruido__ctor_m7B126CA4D1C2579387AB7D0A9ACC68931EA7ACFA(L_1, __this, (intptr_t)((void*)AdministradorUI_MostrarMenuGameOver_m28C8576FB6F669C8440F048F2CFF3E05B631783A_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Objetivo_remove_EnObjetivoDestruido_mB0EDE932199377138C02A675829D87A054967356(L_0, L_1, NULL);
		// referenciaSpawner.EnOleadaIniciada -= ActualizarOla;
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_2 = __this->___referenciaSpawner_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_3 = (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)il2cpp_codegen_object_new(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EstadoOleada__ctor_mC5D3966BA15854E8A17FDDDFE0B7A7BD60F37FA4(L_3, __this, (intptr_t)((void*)AdministradorUI_ActualizarOla_m742BBAED9091D9E289A81261A930F9C975999338_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		SpawnerEnemigos_remove_EnOleadaIniciada_m23CE14AD670894E329181E328BBF1BF60B2E777D(L_2, L_3, NULL);
		// referenciaSpawner.EnOleadaTerminada -= MostrarMensajeUltimoEnemigo;
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_4 = __this->___referenciaSpawner_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_5 = (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)il2cpp_codegen_object_new(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EstadoOleada__ctor_mC5D3966BA15854E8A17FDDDFE0B7A7BD60F37FA4(L_5, __this, (intptr_t)((void*)AdministradorUI_MostrarMensajeUltimoEnemigo_m87B8F9BB943BA3BCE628FD30DBB1A91AB879CAE4_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		SpawnerEnemigos_remove_EnOleadaTerminada_m958A97FF70E7A781BA8031897F8D1504E8C57A48(L_4, L_5, NULL);
		// referenciaSpawner.EnOleadaGandada -= MostrarMenuOlaGanada;
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_6 = __this->___referenciaSpawner_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_7 = (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)il2cpp_codegen_object_new(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EstadoOleada__ctor_mC5D3966BA15854E8A17FDDDFE0B7A7BD60F37FA4(L_7, __this, (intptr_t)((void*)AdministradorUI_MostrarMenuOlaGanada_m014D237324C4C4DDCC6884A9ED9FA966C829ED30_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		SpawnerEnemigos_remove_EnOleadaGandada_mBDF14F49CB60CAC270415354D5E8135AAC580446(L_6, L_7, NULL);
		// referenciaAdminJuego.EnRecursosModificados -= ActualizarRecursos;
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_8 = __this->___referenciaAdminJuego_10;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_9 = (RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E*)il2cpp_codegen_object_new(RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		RecursosModificados__ctor_m7332ACB28AD73D5085744582AC1624CF964060C8(L_9, __this, (intptr_t)((void*)AdministradorUI_ActualizarRecursos_m320F6168926199351CC85F92DC7ACAB927152FDA_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		AdminJuego_remove_EnRecursosModificados_m9A1B131C669232AAA1E63FB8C103688A057E8C69(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::ActualizarRecursos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_ActualizarRecursos_m320F6168926199351CC85F92DC7ACAB927152FDA (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0BF20CBD268F90A787D6E7ECDF53D109641E311);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textoRecursos.text = $"Recursos: {referenciaAdminJuego.recursos}";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___textoRecursos_11;
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_1 = __this->___referenciaAdminJuego_10;
		NullCheck(L_1);
		int32_t L_2 = L_1->___recursos_6;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralF0BF20CBD268F90A787D6E7ECDF53D109641E311, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void AdministradorUI::MostrarMensajeUltimoEnemigo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_MostrarMensajeUltimoEnemigo_m87B8F9BB943BA3BCE628FD30DBB1A91AB879CAE4 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA96620F37E8B974807A9F73E85A5D2EE7A4A1479);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MensjaeFinOla.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MensjaeFinOla_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Invoke("OcultarMensajeUltimoEnemigo",3);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralA96620F37E8B974807A9F73E85A5D2EE7A4A1479, (3.0f), NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::OcultarMensajeUltimoEnemigo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_OcultarMensajeUltimoEnemigo_m416A86507F836768244D437CC3096F6E6FF7AE85 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	{
		// MensjaeFinOla.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MensjaeFinOla_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::MostrarMenuOlaGanada()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_MostrarMenuOlaGanada_m014D237324C4C4DDCC6884A9ED9FA966C829ED30 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FE4085F379058ABFB262AB0183534B67F103F90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B1CE1510ED5DF607B88CA3A91E2D5031B2F8113);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textoEnemigos.text = $"ENEMIGOS: \t {referenciaAdminJuego.enemigosBaseDerrotados}";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___textoEnemigos_13;
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_1 = __this->___referenciaAdminJuego_10;
		NullCheck(L_1);
		int32_t L_2 = L_1->___enemigosBaseDerrotados_4;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4FE4085F379058ABFB262AB0183534B67F103F90, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// textoJefes.text = $"JEFES \t\t {referenciaAdminJuego.enemigosJefeDerrotados}";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___textoJefes_14;
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_7 = __this->___referenciaAdminJuego_10;
		NullCheck(L_7);
		int32_t L_8 = L_7->___enemigosJefeDerrotados_5;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral6B1CE1510ED5DF607B88CA3A91E2D5031B2F8113, L_10, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_11);
		// MenuOlaGanada.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___MenuOlaGanada_6;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::ocultarMenuJuegoGanado()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_ocultarMenuJuegoGanado_m7A39E21AD3234E9BCEA3FBC9001BC1A8769081C5 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	{
		// MenuOlaGanada.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MenuOlaGanada_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::ActualizarOla()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_ActualizarOla_m742BBAED9091D9E289A81261A930F9C975999338 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DAFA13902889D87F78CBB17C755359835935339);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textoOleada.text = $"Ola: {referenciaSpawner.oleada}";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___textoOleada_12;
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_1 = __this->___referenciaSpawner_8;
		NullCheck(L_1);
		int32_t L_2 = L_1->___oleada_5;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral6DAFA13902889D87F78CBB17C755359835935339, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// ocultarMenuJuegoGanado();
		AdministradorUI_ocultarMenuJuegoGanado_m7A39E21AD3234E9BCEA3FBC9001BC1A8769081C5(__this, NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::MostrarMenuFinOleada()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_MostrarMenuFinOleada_m84A6DE92FAC9D41F623C2A1C6513E6F991A7F3AC (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AdministradorUI::OcultarMenuFinOleada()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_OcultarMenuFinOleada_mA3BCD186728731A969D6EA712D2F6C69EB884759 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AdministradorUI::MostrarMenuGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_MostrarMenuGameOver_m28C8576FB6F669C8440F048F2CFF3E05B631783A (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	{
		// GameOverMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___GameOverMenu_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::OcultarMenuGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_OcultarMenuGameOver_m1CF3CCF55B8B43728B9F3FC923B9879355656812 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	{
		// GameOverMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___GameOverMenu_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::FinalizarJuego()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_FinalizarJuego_m6BB6D79686901EE40CA372B88C51A3C759F09B26 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::CargarMenuPrincipal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_CargarMenuPrincipal_m69E0FF2F74C19C48F51C1C37E58DCFC46B81FCA9 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::ReintentarNivel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_ReintentarNivel_mDC26DB4E5E562D6DE2729AF533E6340E625086AC (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
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
		// int escenaActual = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		// SceneManager.LoadScene(escenaActual);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_1, NULL);
		// }
		return;
	}
}
// System.Void AdministradorUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_Start_m7DD440CC8A289B1B3AAB5ABF984422338E3C5046 (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AdministradorUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI_Update_mE97F981F8A52DAF130183045E87B93EC9618012A (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AdministradorUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdministradorUI__ctor_mB7E64B6A8F03FF3639E8BF0E256379322F673CAD (AdministradorUI_tE7F6EF339D4B53BB55E9CC1F6FA4A19792082889* __this, const RuntimeMethod* method) 
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
// System.Void AdminJuego::add_EnRecursosModificados(AdminJuego/RecursosModificados)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdminJuego_add_EnRecursosModificados_m105A5FD3070F8984A48AFEA9ACCE824B28E3D3D1 (AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* __this, RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* V_0 = NULL;
	RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* V_1 = NULL;
	RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* V_2 = NULL;
	{
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_0 = __this->___EnRecursosModificados_7;
		V_0 = L_0;
	}

IL_0007:
	{
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_1 = V_0;
		V_1 = L_1;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_2 = V_1;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E*)CastclassSealed((RuntimeObject*)L_4, RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E_il2cpp_TypeInfo_var));
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E** L_5 = (&__this->___EnRecursosModificados_7);
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_6 = V_2;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_7 = V_1;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_9 = V_0;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E*)L_9) == ((RuntimeObject*)(RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AdminJuego::remove_EnRecursosModificados(AdminJuego/RecursosModificados)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdminJuego_remove_EnRecursosModificados_m9A1B131C669232AAA1E63FB8C103688A057E8C69 (AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* __this, RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* V_0 = NULL;
	RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* V_1 = NULL;
	RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* V_2 = NULL;
	{
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_0 = __this->___EnRecursosModificados_7;
		V_0 = L_0;
	}

IL_0007:
	{
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_1 = V_0;
		V_1 = L_1;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_2 = V_1;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E*)CastclassSealed((RuntimeObject*)L_4, RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E_il2cpp_TypeInfo_var));
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E** L_5 = (&__this->___EnRecursosModificados_7);
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_6 = V_2;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_7 = V_1;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_9 = V_0;
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E*)L_9) == ((RuntimeObject*)(RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AdminJuego::ModificarRecursos(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdminJuego_ModificarRecursos_mEF8CEDE4FDA8ECF6E13E6103BBAC54FBFDA2E465 (AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* __this, int32_t ___modificacion0, const RuntimeMethod* method) 
{
	{
		// recursos += modificacion;
		int32_t L_0 = __this->___recursos_6;
		int32_t L_1 = ___modificacion0;
		__this->___recursos_6 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// if(EnRecursosModificados != null)
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_2 = __this->___EnRecursosModificados_7;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// EnRecursosModificados();
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* L_3 = __this->___EnRecursosModificados_7;
		NullCheck(L_3);
		RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C_inline(L_3, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void AdminJuego::ResetValores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdminJuego_ResetValores_m930514D8649948F888F6CBB0BE51ADD2C44EE139 (AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* __this, const RuntimeMethod* method) 
{
	{
		// enemigosBaseDerrotados = 0;
		__this->___enemigosBaseDerrotados_4 = 0;
		// enemigosJefeDerrotados = 0;
		__this->___enemigosJefeDerrotados_5 = 0;
		// }
		return;
	}
}
// System.Void AdminJuego::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdminJuego__ctor_mD6AFCABD108B8F57DD7C2410903B21317B274850 (AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* __this, const RuntimeMethod* method) 
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
void RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C_Multicast(RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* currentDelegate = reinterpret_cast<RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C_Open(RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C_OpenStaticInvoker(RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C_ClosedStaticInvoker(RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E (RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void AdminJuego/RecursosModificados::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecursosModificados__ctor_m7332ACB28AD73D5085744582AC1624CF964060C8 (RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C_Multicast;
}
// System.Void AdminJuego/RecursosModificados::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C (RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AdminJuego/RecursosModificados::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecursosModificados_BeginInvoke_mD8A4CF30DF167F7C0A6D05A68C2A687F905A59E8 (RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void AdminJuego/RecursosModificados::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecursosModificados_EndInvoke_mFA97EABBD1360A60053D99CC35D0E0A310F13B6F (RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Bala::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bala_Start_m709F2B37E2B05A85BE1C018EC21244984211FC9B (Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* __this, const RuntimeMethod* method) 
{
	{
		// destino.y += 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___destino_4);
		float* L_1 = (&L_0->___y_3);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, (1.0f)));
		// }
		return;
	}
}
// System.Void Bala::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bala_Update_mAE9AC49D6353F55D22C066C72D1E905339461CAA (Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// var paso = velocidad * Time.deltaTime;
		float L_0 = __this->___velocidad_5;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// transform.position = Vector3.MoveTowards(transform.position, destino, paso);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___destino_4;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_4, L_5, L_6, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_7, NULL);
		// if (Vector3.Distance(transform.position, destino) < 0.01f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___destino_4;
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_9, L_10, NULL);
		if ((!(((float)L_11) < ((float)(0.00999999978f)))))
		{
			goto IL_0057;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_12, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Bala::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bala_OnCollisionEnter_mCB2309C91B7433724D6D118564231EAF8CB0A0E7 (Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20265357F96C863C747BDDCB8CB50C9DB7DC428B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Enemigo")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral20265357F96C863C747BDDCB8CB50C9DB7DC428B, NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// enemigo = collision.gameObject;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		__this->___enemigo_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemigo_6), (void*)L_5);
		// Danar(_dano);
		int32_t L_6 = __this->____dano_7;
		Bala_Danar_m8C811790E07902D5FB1EBBD8DAA6621EF2185051(__this, L_6, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Bala::Danar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bala_Danar_m8C811790E07902D5FB1EBBD8DAA6621EF2185051 (Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* __this, int32_t ___dano0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB_m523957666CDD1416E344217C09037E5137D0023B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemigo.GetComponent<EnemigoBase>().RecibirDano(dano);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___enemigo_6;
		NullCheck(L_0);
		EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* L_1;
		L_1 = GameObject_GetComponent_TisEnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB_m523957666CDD1416E344217C09037E5137D0023B(L_0, GameObject_GetComponent_TisEnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB_m523957666CDD1416E344217C09037E5137D0023B_RuntimeMethod_var);
		int32_t L_2 = ___dano0;
		NullCheck(L_1);
		EnemigoBase_RecibirDano_m13C6D0169BDEE4C0241DEA5C7CE246C46D10CEBF(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Bala::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bala__ctor_m7221ED9B6D5939A8DF7DBE39C290C0851F0469A8 (Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* __this, const RuntimeMethod* method) 
{
	{
		// public float velocidad = 20;
		__this->___velocidad_5 = (20.0f);
		// public int _dano = 10;
		__this->____dano_7 = ((int32_t)10);
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
// System.Void Boss::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_Awake_mEF74D6D04EADA66FB78DE4C392525562C1930F2B (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	{
		// vida = 300;
		((EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB*)__this)->___vida_5 = ((int32_t)300);
		// _dano = 80;
		((EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB*)__this)->____dano_6 = ((int32_t)80);
		// }
		return;
	}
}
// System.Void Boss::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_OnDestroy_mA0431B173537CDB19FB31139B2748FFA6F87CE23 (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	{
		// base.OnDestroy();
		EnemigoBase_OnDestroy_mC20760E1F0A6F22EB52A85663945B2AB5CBD6882(__this, NULL);
		// referenciaAdminJuego.enemigosJefeDerrotados++;
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_0 = ((EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB*)__this)->___referenciaAdminJuego_8;
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___enemigosJefeDerrotados_5;
		NullCheck(L_1);
		L_1->___enemigosJefeDerrotados_5 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// }
		return;
	}
}
// System.Void Boss::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss__ctor_m000CFB50E293CE96995ADD0E5395D4B830DF7EAF (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	{
		EnemigoBase__ctor_mDBF1EF71D274EC6DCC936DA485BC8ADDD0CDF29A(__this, NULL);
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
// System.Void Enemigo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemigo_Awake_m1C85A99E0D97A17CB6C5FDFA72525FB5AEB74E46 (Enemigo_t522607FECD6F61814ECE2AB17FDE1E040DF0688C* __this, const RuntimeMethod* method) 
{
	{
		// vida = 100;
		((EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB*)__this)->___vida_5 = ((int32_t)100);
		// _dano = 20;
		((EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB*)__this)->____dano_6 = ((int32_t)20);
		// }
		return;
	}
}
// System.Void Enemigo::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemigo_OnDestroy_m7C7CA130ACD854AF3EED33ADB66005D4BDF058C8 (Enemigo_t522607FECD6F61814ECE2AB17FDE1E040DF0688C* __this, const RuntimeMethod* method) 
{
	{
		// base.OnDestroy();
		EnemigoBase_OnDestroy_mC20760E1F0A6F22EB52A85663945B2AB5CBD6882(__this, NULL);
		// referenciaAdminJuego.enemigosBaseDerrotados++;
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_0 = ((EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB*)__this)->___referenciaAdminJuego_8;
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___enemigosBaseDerrotados_4;
		NullCheck(L_1);
		L_1->___enemigosBaseDerrotados_4 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// }
		return;
	}
}
// System.Void Enemigo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemigo__ctor_mE772466748BBA8C4F36BC656D6F11091E9077C47 (Enemigo_t522607FECD6F61814ECE2AB17FDE1E040DF0688C* __this, const RuntimeMethod* method) 
{
	{
		EnemigoBase__ctor_mDBF1EF71D274EC6DCC936DA485BC8ADDD0CDF29A(__this, NULL);
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
// System.Void EnemigoBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase_OnEnable_mE878DFBCC5559317D78D7D97434F575355D89893 (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemigoBase_Detener_mF886283F27BFAF8FC39CE54E753A391FF0294F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90_m2B9374D4FA38FC8E0AA3948067058A0D290EB51A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisObjetivo_t763B524583CCDD90EEF81435A5AF585E668693D4_m5AD68F73BA7EA190AD5A65114961F9A09DAE4120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC_mB26B0CC9AD51313041EC4CAFD40E6451F21EC42D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral536CBD4A879DA915379A9ED0D05C58B1349FD098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF31AC035F6E66E3F97EF69A5043674FB4C95527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD068D01543BD6439ECEBA2F8356F454597A9E24F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Objetivo = GameObject.Find("Objetivo");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralD068D01543BD6439ECEBA2F8356F454597A9E24F, NULL);
		__this->___Objetivo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Objetivo_4), (void*)L_0);
		// referenciaAdminJuego = GameObject.Find("AdminJuego").GetComponent<AdminJuego>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCF31AC035F6E66E3F97EF69A5043674FB4C95527, NULL);
		NullCheck(L_1);
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_2;
		L_2 = GameObject_GetComponent_TisAdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90_m2B9374D4FA38FC8E0AA3948067058A0D290EB51A(L_1, GameObject_GetComponent_TisAdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90_m2B9374D4FA38FC8E0AA3948067058A0D290EB51A_RuntimeMethod_var);
		__this->___referenciaAdminJuego_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___referenciaAdminJuego_8), (void*)L_2);
		// referenciaSpawner = GameObject.Find("SpawnerEnemigos").GetComponent<SpawnerEnemigos>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral536CBD4A879DA915379A9ED0D05C58B1349FD098, NULL);
		NullCheck(L_3);
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_4;
		L_4 = GameObject_GetComponent_TisSpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC_mB26B0CC9AD51313041EC4CAFD40E6451F21EC42D(L_3, GameObject_GetComponent_TisSpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC_mB26B0CC9AD51313041EC4CAFD40E6451F21EC42D_RuntimeMethod_var);
		__this->___referenciaSpawner_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___referenciaSpawner_9), (void*)L_4);
		// Objetivo.GetComponent<Objetivo>().EnObjetivoDestruido += Detener;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Objetivo_4;
		NullCheck(L_5);
		Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* L_6;
		L_6 = GameObject_GetComponent_TisObjetivo_t763B524583CCDD90EEF81435A5AF585E668693D4_m5AD68F73BA7EA190AD5A65114961F9A09DAE4120(L_5, GameObject_GetComponent_TisObjetivo_t763B524583CCDD90EEF81435A5AF585E668693D4_m5AD68F73BA7EA190AD5A65114961F9A09DAE4120_RuntimeMethod_var);
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_7 = (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*)il2cpp_codegen_object_new(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ObjetivoDestruido__ctor_m7B126CA4D1C2579387AB7D0A9ACC68931EA7ACFA(L_7, __this, (intptr_t)((void*)EnemigoBase_Detener_mF886283F27BFAF8FC39CE54E753A391FF0294F1A_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		Objetivo_add_EnObjetivoDestruido_m102CA9E5BCF347C24B4116D85E09ACAC08245658(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void EnemigoBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase_OnDisable_mB1A550AEDFE1D9CBD60F7CE1523CDF6A8C75C92B (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemigoBase_Detener_mF886283F27BFAF8FC39CE54E753A391FF0294F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisObjetivo_t763B524583CCDD90EEF81435A5AF585E668693D4_m5AD68F73BA7EA190AD5A65114961F9A09DAE4120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Objetivo.GetComponent<Objetivo>().EnObjetivoDestruido -= Detener;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Objetivo_4;
		NullCheck(L_0);
		Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* L_1;
		L_1 = GameObject_GetComponent_TisObjetivo_t763B524583CCDD90EEF81435A5AF585E668693D4_m5AD68F73BA7EA190AD5A65114961F9A09DAE4120(L_0, GameObject_GetComponent_TisObjetivo_t763B524583CCDD90EEF81435A5AF585E668693D4_m5AD68F73BA7EA190AD5A65114961F9A09DAE4120_RuntimeMethod_var);
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_2 = (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*)il2cpp_codegen_object_new(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ObjetivoDestruido__ctor_m7B126CA4D1C2579387AB7D0A9ACC68931EA7ACFA(L_2, __this, (intptr_t)((void*)EnemigoBase_Detener_mF886283F27BFAF8FC39CE54E753A391FF0294F1A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		Objetivo_remove_EnObjetivoDestruido_mB0EDE932199377138C02A675829D87A054967356(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void EnemigoBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase_Start_mE385DDFCFAACF7869ADB17A1AACE189AFBDA081F (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<NavMeshAgent>().SetDestination(Objetivo.transform.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Objetivo_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		bool L_4;
		L_4 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_0, L_3, NULL);
		// Anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___Anim_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Anim_10), (void*)L_5);
		// Anim.SetBool("IsMoving", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___Anim_10;
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void EnemigoBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase_Update_m3C917B783B314616A67B9C399E78F7F482E37675 (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0337DCE556E8A375C9337CDA50BEC27C7CC40D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (vida <= 0)
		int32_t L_0 = __this->___vida_5;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// Anim.SetTrigger("OnDeath");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___Anim_10;
		NullCheck(L_1);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteralC0337DCE556E8A375C9337CDA50BEC27C7CC40D3, NULL);
		// GetComponent<NavMeshAgent>().SetDestination(transform.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2;
		L_2 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_2, L_4, NULL);
		// Destroy(gameObject, 3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_6, (3.0f), NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void EnemigoBase::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase_OnDestroy_mC20760E1F0A6F22EB52A85663945B2AB5CBD6882 (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// referenciaAdminJuego.ModificarRecursos(recursosGanados);
		AdminJuego_tAFBFA0FD3E30C530CC7DA9213C32610DDAB49A90* L_0 = __this->___referenciaAdminJuego_8;
		int32_t L_1 = __this->___recursosGanados_7;
		NullCheck(L_0);
		AdminJuego_ModificarRecursos_mEF8CEDE4FDA8ECF6E13E6103BBAC54FBFDA2E465(L_0, L_1, NULL);
		// referenciaSpawner.EnemigosGenerados.Remove(this.gameObject);
		SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* L_2 = __this->___referenciaSpawner_9;
		NullCheck(L_2);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = L_2->___EnemigosGenerados_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_3, L_4, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EnemigoBase::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase_OnCollisionEnter_m5023ADED731EC78FEF50BBF9F07ADEC2569FD40E (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD068D01543BD6439ECEBA2F8356F454597A9E24F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD0435B52744A5AFFF28300666900E8CF8F369F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Objetivo")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralD068D01543BD6439ECEBA2F8356F454597A9E24F, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Anim.SetBool("IsMoving", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___Anim_10;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteralC53C15EA098684991F8F2C3F89C5829550973A30, (bool)0, NULL);
		// Anim.SetTrigger("OnObjectiveReached");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___Anim_10;
		NullCheck(L_5);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteralFD0435B52744A5AFFF28300666900E8CF8F369F2, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void EnemigoBase::Danar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase_Danar_mE59A43C31CCC470581D205137700B5E4919747C7 (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, int32_t ___dano0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisObjetivo_t763B524583CCDD90EEF81435A5AF585E668693D4_m5AD68F73BA7EA190AD5A65114961F9A09DAE4120_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// if (dano == 0) dano = _dano;
		int32_t L_0 = ___dano0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// if (dano == 0) dano = _dano;
		int32_t L_1 = __this->____dano_6;
		___dano0 = L_1;
	}

IL_000b:
	{
		// Objetivo?.GetComponent<Objetivo>().RecibirDano(40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Objetivo_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		NullCheck(G_B4_0);
		Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* L_4;
		L_4 = GameObject_GetComponent_TisObjetivo_t763B524583CCDD90EEF81435A5AF585E668693D4_m5AD68F73BA7EA190AD5A65114961F9A09DAE4120(G_B4_0, GameObject_GetComponent_TisObjetivo_t763B524583CCDD90EEF81435A5AF585E668693D4_m5AD68F73BA7EA190AD5A65114961F9A09DAE4120_RuntimeMethod_var);
		NullCheck(L_4);
		Objetivo_RecibirDano_m742EB996258D6F3C868D5A644E0CD85ACCF67BA6(L_4, ((int32_t)40), NULL);
		// }
		return;
	}
}
// System.Void EnemigoBase::RecibirDano(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase_RecibirDano_m13C6D0169BDEE4C0241DEA5C7CE246C46D10CEBF (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, int32_t ___dano0, const RuntimeMethod* method) 
{
	{
		// vida -= dano;
		int32_t L_0 = __this->___vida_5;
		int32_t L_1 = ___dano0;
		__this->___vida_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// }
		return;
	}
}
// System.Void EnemigoBase::Detener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase_Detener_mF886283F27BFAF8FC39CE54E753A391FF0294F1A (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4ABBC31DF55FA8A95A4F1E5A40B20C467A212F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Anim.SetTrigger("OnObjectiveDestroyed");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___Anim_10;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteralDA4ABBC31DF55FA8A95A4F1E5A40B20C467A212F, NULL);
		// GetComponent<NavMeshAgent>().SetDestination(transform.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_1;
		L_1 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void EnemigoBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemigoBase__ctor_mDBF1EF71D274EC6DCC936DA485BC8ADDD0CDF29A (EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* __this, const RuntimeMethod* method) 
{
	{
		// public int vida = 100;
		__this->___vida_5 = ((int32_t)100);
		// public int _dano = 5;
		__this->____dano_6 = 5;
		// public int recursosGanados = 200;
		__this->___recursosGanados_7 = ((int32_t)200);
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
// System.Void MenuInicio::MostrarMenuOpciones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInicio_MostrarMenuOpciones_mCA0215093EBD6AD25F8D4FC4662CBA6989C8B323 (MenuInicio_t8FF8F43F8C7D6E05BE4B6302F94E8ABC75015D19* __this, const RuntimeMethod* method) 
{
	{
		// Opciones.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Opciones_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// MenuPrincipal.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___MenuPrincipal_8;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuInicio::OcultarOpciones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInicio_OcultarOpciones_mA8CF3E403AB03C4A4D7F76689A834A3A68BD6252 (MenuInicio_t8FF8F43F8C7D6E05BE4B6302F94E8ABC75015D19* __this, const RuntimeMethod* method) 
{
	{
		// Opciones.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Opciones_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// MenuPrincipal.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___MenuPrincipal_8;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MenuInicio::IniciarJuego_()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInicio_IniciarJuego__mE753D4B1CCA6DE8EBF202945D6077CF90E74CCF2 (MenuInicio_t8FF8F43F8C7D6E05BE4B6302F94E8ABC75015D19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void MenuInicio::FinalizarJuego()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInicio_FinalizarJuego_m89CBED0D9F9F39E1DABA2294176C01547252DF8F (MenuInicio_t8FF8F43F8C7D6E05BE4B6302F94E8ABC75015D19* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void MenuInicio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInicio__ctor_mB5FC20517E7CAF241B6B0B0B5EB24BA984EBB78C (MenuInicio_t8FF8F43F8C7D6E05BE4B6302F94E8ABC75015D19* __this, const RuntimeMethod* method) 
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
// System.Void Objetivo::add_EnObjetivoDestruido(Objetivo/ObjetivoDestruido)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objetivo_add_EnObjetivoDestruido_m102CA9E5BCF347C24B4116D85E09ACAC08245658 (Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* __this, ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* V_0 = NULL;
	ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* V_1 = NULL;
	ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* V_2 = NULL;
	{
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_0 = __this->___EnObjetivoDestruido_5;
		V_0 = L_0;
	}

IL_0007:
	{
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_1 = V_0;
		V_1 = L_1;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_2 = V_1;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*)CastclassSealed((RuntimeObject*)L_4, ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var));
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54** L_5 = (&__this->___EnObjetivoDestruido_5);
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_6 = V_2;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_7 = V_1;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_8;
		L_8 = InterlockedCompareExchangeImpl<ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*>(L_5, L_6, L_7);
		V_0 = L_8;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_9 = V_0;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_10 = V_1;
		if ((!(((RuntimeObject*)(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*)L_9) == ((RuntimeObject*)(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Objetivo::remove_EnObjetivoDestruido(Objetivo/ObjetivoDestruido)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objetivo_remove_EnObjetivoDestruido_mB0EDE932199377138C02A675829D87A054967356 (Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* __this, ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* V_0 = NULL;
	ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* V_1 = NULL;
	ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* V_2 = NULL;
	{
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_0 = __this->___EnObjetivoDestruido_5;
		V_0 = L_0;
	}

IL_0007:
	{
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_1 = V_0;
		V_1 = L_1;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_2 = V_1;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*)CastclassSealed((RuntimeObject*)L_4, ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54_il2cpp_TypeInfo_var));
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54** L_5 = (&__this->___EnObjetivoDestruido_5);
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_6 = V_2;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_7 = V_1;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_8;
		L_8 = InterlockedCompareExchangeImpl<ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*>(L_5, L_6, L_7);
		V_0 = L_8;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_9 = V_0;
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_10 = V_1;
		if ((!(((RuntimeObject*)(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*)L_9) == ((RuntimeObject*)(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Objetivo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objetivo_Start_mC588FC264C64B8042CBEAE0EE1D067FCA8585B37 (Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Objetivo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objetivo_Update_m5BDFDD80E9ABB581B3B8CCAD36C89AEE2DD6A880 (Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (vida <= 0)
		int32_t L_0 = __this->___vida_4;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// if(EnObjetivoDestruido != null)
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_1 = __this->___EnObjetivoDestruido_5;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// EnObjetivoDestruido();
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* L_2 = __this->___EnObjetivoDestruido_5;
		NullCheck(L_2);
		ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C_inline(L_2, NULL);
	}

IL_001c:
	{
		// Destroy(this.gameObject,0.2f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_3, (0.200000003f), NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Objetivo::RecibirDano(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objetivo_RecibirDano_m742EB996258D6F3C868D5A644E0CD85ACCF67BA6 (Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* __this, int32_t ___dano0, const RuntimeMethod* method) 
{
	{
		// vida -= dano;
		int32_t L_0 = __this->___vida_4;
		int32_t L_1 = ___dano0;
		__this->___vida_4 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// }
		return;
	}
}
// System.Void Objetivo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Objetivo__ctor_m727950A1F7D9ACAB598211C6A576A21D7C1AAE21 (Objetivo_t763B524583CCDD90EEF81435A5AF585E668693D4* __this, const RuntimeMethod* method) 
{
	{
		// public int vida = 100;
		__this->___vida_4 = ((int32_t)100);
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
void ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C_Multicast(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* currentDelegate = reinterpret_cast<ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C_Open(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C_OpenStaticInvoker(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C_ClosedStaticInvoker(ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54 (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Objetivo/ObjetivoDestruido::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjetivoDestruido__ctor_m7B126CA4D1C2579387AB7D0A9ACC68931EA7ACFA (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C_Multicast;
}
// System.Void Objetivo/ObjetivoDestruido::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Objetivo/ObjetivoDestruido::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjetivoDestruido_BeginInvoke_mFB18167C490852B8E9905A1F06ADD6933F579C39 (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Objetivo/ObjetivoDestruido::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjetivoDestruido_EndInvoke_m47671B6134FDCE67CFDE30E736363BB1C41F1E09 (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void SpawnerEnemigos::add_EnOleadaTerminada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_add_EnOleadaTerminada_mCC5CE7B31F5F2628256BA3BC88ADFFA23B6710C7 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_0 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_1 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_2 = NULL;
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_0 = __this->___EnOleadaTerminada_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_1 = V_0;
		V_1 = L_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_2 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)CastclassSealed((RuntimeObject*)L_4, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var));
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D** L_5 = (&__this->___EnOleadaTerminada_10);
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_6 = V_2;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_7 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_8;
		L_8 = InterlockedCompareExchangeImpl<EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*>(L_5, L_6, L_7);
		V_0 = L_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_9 = V_0;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_10 = V_1;
		if ((!(((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_9) == ((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SpawnerEnemigos::remove_EnOleadaTerminada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_remove_EnOleadaTerminada_m958A97FF70E7A781BA8031897F8D1504E8C57A48 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_0 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_1 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_2 = NULL;
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_0 = __this->___EnOleadaTerminada_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_1 = V_0;
		V_1 = L_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_2 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)CastclassSealed((RuntimeObject*)L_4, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var));
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D** L_5 = (&__this->___EnOleadaTerminada_10);
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_6 = V_2;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_7 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_8;
		L_8 = InterlockedCompareExchangeImpl<EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*>(L_5, L_6, L_7);
		V_0 = L_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_9 = V_0;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_10 = V_1;
		if ((!(((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_9) == ((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SpawnerEnemigos::add_EnOleadaIniciada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_add_EnOleadaIniciada_m271D54AF9C022B39942A17545725D3A3DFD6EB6C (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_0 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_1 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_2 = NULL;
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_0 = __this->___EnOleadaIniciada_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_1 = V_0;
		V_1 = L_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_2 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)CastclassSealed((RuntimeObject*)L_4, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var));
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D** L_5 = (&__this->___EnOleadaIniciada_11);
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_6 = V_2;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_7 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_8;
		L_8 = InterlockedCompareExchangeImpl<EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*>(L_5, L_6, L_7);
		V_0 = L_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_9 = V_0;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_10 = V_1;
		if ((!(((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_9) == ((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SpawnerEnemigos::remove_EnOleadaIniciada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_remove_EnOleadaIniciada_m23CE14AD670894E329181E328BBF1BF60B2E777D (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_0 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_1 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_2 = NULL;
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_0 = __this->___EnOleadaIniciada_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_1 = V_0;
		V_1 = L_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_2 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)CastclassSealed((RuntimeObject*)L_4, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var));
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D** L_5 = (&__this->___EnOleadaIniciada_11);
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_6 = V_2;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_7 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_8;
		L_8 = InterlockedCompareExchangeImpl<EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*>(L_5, L_6, L_7);
		V_0 = L_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_9 = V_0;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_10 = V_1;
		if ((!(((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_9) == ((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SpawnerEnemigos::add_EnOleadaGandada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_add_EnOleadaGandada_mE64E8B1E862C48FC2A6EF72EB38BCEF76E92CEC9 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_0 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_1 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_2 = NULL;
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_0 = __this->___EnOleadaGandada_12;
		V_0 = L_0;
	}

IL_0007:
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_1 = V_0;
		V_1 = L_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_2 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)CastclassSealed((RuntimeObject*)L_4, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var));
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D** L_5 = (&__this->___EnOleadaGandada_12);
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_6 = V_2;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_7 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_8;
		L_8 = InterlockedCompareExchangeImpl<EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*>(L_5, L_6, L_7);
		V_0 = L_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_9 = V_0;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_10 = V_1;
		if ((!(((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_9) == ((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SpawnerEnemigos::remove_EnOleadaGandada(SpawnerEnemigos/EstadoOleada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_remove_EnOleadaGandada_mBDF14F49CB60CAC270415354D5E8135AAC580446 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_0 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_1 = NULL;
	EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* V_2 = NULL;
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_0 = __this->___EnOleadaGandada_12;
		V_0 = L_0;
	}

IL_0007:
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_1 = V_0;
		V_1 = L_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_2 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)CastclassSealed((RuntimeObject*)L_4, EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D_il2cpp_TypeInfo_var));
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D** L_5 = (&__this->___EnOleadaGandada_12);
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_6 = V_2;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_7 = V_1;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_8;
		L_8 = InterlockedCompareExchangeImpl<EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*>(L_5, L_6, L_7);
		V_0 = L_8;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_9 = V_0;
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_10 = V_1;
		if ((!(((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_9) == ((RuntimeObject*)(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SpawnerEnemigos::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_Start_m35229C2EA7C58D0270910120F9A7F3F65D5BE72E (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) 
{
	{
		// oleada = 0;
		__this->___oleada_5 = 0;
		// }
		return;
	}
}
// System.Void SpawnerEnemigos::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_FixedUpdate_m508C1BBED6B91BFDF210502195036A4300C1D49A (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(LaOleadaHaIniciado && EnemigosGenerados.Count == 0)
		bool L_0 = __this->___LaOleadaHaIniciado_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___EnemigosGenerados_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// GanarOla();
		SpawnerEnemigos_GanarOla_mEC959DAF3B13A8967B555A5039771E6ADFD2364F(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void SpawnerEnemigos::EmpezarOleada()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_EmpezarOleada_m17A7AF9B236DD836E9F2FF73A3C7CF15D1786D79 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) 
{
	{
		// LaOleadaHaIniciado = true;
		__this->___LaOleadaHaIniciado_8 = (bool)1;
		// if(EnOleadaIniciada != null)
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_0 = __this->___EnOleadaIniciada_11;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// EnOleadaIniciada();
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_1 = __this->___EnOleadaIniciada_11;
		NullCheck(L_1);
		EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_inline(L_1, NULL);
	}

IL_001a:
	{
		// ConfigurarCantidadDeEnemigos();
		SpawnerEnemigos_ConfigurarCantidadDeEnemigos_m5CCEF87F12475A524677AE95850EA52F2CADDBBB(__this, NULL);
		// InstanciarEnemigo();
		SpawnerEnemigos_InstanciarEnemigo_m6C80A493EB78695D930BCDAD9CADCA9CF3B74CF7(__this, NULL);
		// }
		return;
	}
}
// System.Void SpawnerEnemigos::GanarOla()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_GanarOla_mEC959DAF3B13A8967B555A5039771E6ADFD2364F (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) 
{
	{
		// if(LaOleadaHaIniciado && EnOleadaGandada != null)
		bool L_0 = __this->___LaOleadaHaIniciado_8;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_1 = __this->___EnOleadaGandada_12;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// EnOleadaGandada();
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_2 = __this->___EnOleadaGandada_12;
		NullCheck(L_2);
		EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_inline(L_2, NULL);
		// LaOleadaHaIniciado = false;
		__this->___LaOleadaHaIniciado_8 = (bool)0;
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void SpawnerEnemigos::TerminarOla()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_TerminarOla_mDB93B31DD71C24860B94D90218F72B4E4CD81750 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) 
{
	{
		// if(EnOleadaTerminada != null)
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_0 = __this->___EnOleadaTerminada_10;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// EnOleadaTerminada();
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* L_1 = __this->___EnOleadaTerminada_10;
		NullCheck(L_1);
		EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void SpawnerEnemigos::ConfigurarCantidadDeEnemigos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_ConfigurarCantidadDeEnemigos_m5CCEF87F12475A524677AE95850EA52F2CADDBBB (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemigosDuranteEstaOleada = enemigosPorOleada[oleada];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___enemigosPorOleada_6;
		int32_t L_1 = __this->___oleada_5;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_0, L_1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		__this->___enemigosDuranteEstaOleada_7 = L_2;
		// }
		return;
	}
}
// System.Void SpawnerEnemigos::InstanciarEnemigo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos_InstanciarEnemigo_m6C80A493EB78695D930BCDAD9CADCA9CF3B74CF7 (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AFA172CB1C96580E493407FF3AAAED7DF1C4513);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// int indiceAleatorio = Random.Range(0, prefabsEnemigos.Count);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___prefabsEnemigos_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_1, NULL);
		V_0 = L_2;
		// var enemigosTemporal = Instantiate<GameObject>(prefabsEnemigos[indiceAleatorio], transform.position, Quaternion.identity);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___prefabsEnemigos_4;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_1 = L_9;
		// EnemigosGenerados.Add(enemigosTemporal);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___EnemigosGenerados_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		NullCheck(L_10);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_10, L_11, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// enemigosDuranteEstaOleada--;
		int32_t L_12 = __this->___enemigosDuranteEstaOleada_7;
		__this->___enemigosDuranteEstaOleada_7 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		// if(enemigosDuranteEstaOleada < 0)
		int32_t L_13 = __this->___enemigosDuranteEstaOleada_7;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		// oleada++;
		int32_t L_14 = __this->___oleada_5;
		__this->___oleada_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		// ConfigurarCantidadDeEnemigos();
		SpawnerEnemigos_ConfigurarCantidadDeEnemigos_m5CCEF87F12475A524677AE95850EA52F2CADDBBB(__this, NULL);
		// TerminarOla();
		SpawnerEnemigos_TerminarOla_mDB93B31DD71C24860B94D90218F72B4E4CD81750(__this, NULL);
		// return;
		return;
	}

IL_0072:
	{
		// Invoke("InstanciarEnemigo", 2);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral6AFA172CB1C96580E493407FF3AAAED7DF1C4513, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void SpawnerEnemigos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerEnemigos__ctor_m1F8241260824CAFDA62E4A0C9B3ED4C2EE620F3A (SpawnerEnemigos_tD4FC598AEEA71C2C135FD9603CE96D3E86630CEC* __this, const RuntimeMethod* method) 
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
void EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_Multicast(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* currentDelegate = reinterpret_cast<EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_Open(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_OpenStaticInvoker(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_ClosedStaticInvoker(EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void SpawnerEnemigos/EstadoOleada::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EstadoOleada__ctor_mC5D3966BA15854E8A17FDDDFE0B7A7BD60F37FA4 (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_Multicast;
}
// System.Void SpawnerEnemigos/EstadoOleada::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SpawnerEnemigos/EstadoOleada::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EstadoOleada_BeginInvoke_m9D353E235523B2D47C60C8EBB0675ACF14A1BB77 (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void SpawnerEnemigos/EstadoOleada::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EstadoOleada_EndInvoke_m7C3B03A5BF665BE5903CC2A0E5DE667EC8ED461F (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void TorreAntena::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreAntena_Start_m0E86504D414F3840B6A8343B89A66C4718D4E815 (TorreAntena_t2B675D8B7D93373C2CF7068BF023796CBA457640* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LRRayo = GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0;
		L_0 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___LRRayo_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LRRayo_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void TorreAntena::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreAntena_FixedUpdate_m5BA7352878EA494726178297E9440EE9443ABEFD (TorreAntena_t2B675D8B7D93373C2CF7068BF023796CBA457640* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(enemigo != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1*)__this)->___enemigo_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// Disparar();
		VirtualActionInvoker0::Invoke(4 /* System.Void TorreBase::Disparar() */, __this);
		// Danar(potenciaRayo);
		int32_t L_2 = __this->___potenciaRayo_10;
		TorreAntena_Danar_m79CDF55BADF0B45375A1E2C628488D45958F5589(__this, L_2, NULL);
		return;
	}

IL_0021:
	{
		// LRRayo.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___LRRayo_8;
		NullCheck(L_3);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_3, 0, NULL);
		// }
		return;
	}
}
// System.Void TorreAntena::Disparar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreAntena_Disparar_m8D3BCB10F8B441840BC60A443DD9FA778C4AC904 (TorreAntena_t2B675D8B7D93373C2CF7068BF023796CBA457640* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// puntos = ObtenerPuntos();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0;
		L_0 = TorreAntena_ObtenerPuntos_mEC24F1AB5E0E0B6EB1C48C6675177F523AA1F676(__this, NULL);
		__this->___puntos_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___puntos_9), (void*)L_0);
		// puntos.Insert(0, puntasCanon[0].transform.position);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = __this->___puntos_9;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = ((TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1*)__this)->___puntasCanon_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_1);
		List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F(L_1, 0, L_5, List_1_Insert_mE7623D84AEA50E917A6371C1DD13D356C9190F2F_RuntimeMethod_var);
		// var posEnemigo = enemigo.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1*)__this)->___enemigo_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		V_0 = L_8;
		// posEnemigo.y += 1;
		float* L_9 = (&(&V_0)->___y_3);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		*((float*)L_10) = (float)((float)il2cpp_codegen_add(L_11, (1.0f)));
		// puntos.Add(posEnemigo);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = __this->___puntos_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_12, L_13, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// LRRayo.positionCount = puntos.Count;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_14 = __this->___LRRayo_8;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_15 = __this->___puntos_9;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_15, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_14);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_14, L_16, NULL);
		// LRRayo.SetPositions(puntos.ToArray());
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_17 = __this->___LRRayo_8;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18 = __this->___puntos_9;
		NullCheck(L_18);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19;
		L_19 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_18, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		NullCheck(L_17);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_17, L_19, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> TorreAntena::ObtenerPuntos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* TorreAntena_ObtenerPuntos_mEC24F1AB5E0E0B6EB1C48C6675177F523AA1F676 (TorreAntena_t2B675D8B7D93373C2CF7068BF023796CBA457640* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE86D91E15EAA24CBCC61CB8820E5135BBE7271B);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// List<Vector3> puntosTemporales = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_0;
		// float divisor = 1f / divisionesRayo;
		float L_1 = __this->___divisionesRayo_7;
		V_1 = ((float)((1.0f)/L_1));
		// float linear = 0f;
		V_2 = (0.0f);
		// bool esPositivo = false;
		V_3 = (bool)0;
		// if (divisionesRayo == 0)
		float L_2 = __this->___divisionesRayo_7;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogError("no podemos dividir entre cero por favor ingresa otro valor en el prefab");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralBE86D91E15EAA24CBCC61CB8820E5135BBE7271B, NULL);
		// return null;
		return (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)NULL;
	}

IL_0034:
	{
		// if (divisionesRayo == 1)
		float L_3 = __this->___divisionesRayo_7;
		if ((!(((float)L_3) == ((float)(1.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		// var punto = Vector3.Lerp(puntasCanon[0].transform.position, enemigo.transform.position, 0.5f);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = ((TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1*)__this)->___puntasCanon_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1*)__this)->___enemigo_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_7, L_10, (0.5f), NULL);
		V_4 = L_11;
		// puntosTemporales.Add(punto);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_4;
		NullCheck(L_12);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_12, L_13, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// return puntosTemporales;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = V_0;
		return L_14;
	}

IL_007d:
	{
		// for (int i = 0; i < divisionesRayo; i++)
		V_5 = 0;
		goto IL_0108;
	}

IL_0085:
	{
		// if(i == 0)
		int32_t L_15 = V_5;
		if (L_15)
		{
			goto IL_0093;
		}
	}
	{
		// linear = divisor / 2;
		float L_16 = V_1;
		V_2 = ((float)(L_16/(2.0f)));
		goto IL_0097;
	}

IL_0093:
	{
		// linear += divisor;
		float L_17 = V_2;
		float L_18 = V_1;
		V_2 = ((float)il2cpp_codegen_add(L_17, L_18));
	}

IL_0097:
	{
		// var punto = Vector3.Lerp(puntasCanon[0].transform.position, enemigo.transform.position, linear);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = ((TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1*)__this)->___puntasCanon_6;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_19, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = ((TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1*)__this)->___enemigo_4;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_22, L_25, L_26, NULL);
		V_6 = L_27;
		// if(esPositivo)
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_00e2;
		}
	}
	{
		// punto.x += Random.value * 2;
		float* L_29 = (&(&V_6)->___x_2);
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		float L_32;
		L_32 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		*((float*)L_30) = (float)((float)il2cpp_codegen_add(L_31, ((float)il2cpp_codegen_multiply(L_32, (2.0f)))));
		// esPositivo = false;
		V_3 = (bool)0;
		goto IL_00fa;
	}

IL_00e2:
	{
		// punto.x -= Random.value * 2;
		float* L_33 = (&(&V_6)->___x_2);
		float* L_34 = L_33;
		float L_35 = *((float*)L_34);
		float L_36;
		L_36 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		*((float*)L_34) = (float)((float)il2cpp_codegen_subtract(L_35, ((float)il2cpp_codegen_multiply(L_36, (2.0f)))));
		// esPositivo = true;
		V_3 = (bool)1;
	}

IL_00fa:
	{
		// puntosTemporales.Add(punto);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_37 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_6;
		NullCheck(L_37);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_37, L_38, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < divisionesRayo; i++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0108:
	{
		// for (int i = 0; i < divisionesRayo; i++)
		int32_t L_40 = V_5;
		float L_41 = __this->___divisionesRayo_7;
		if ((((float)((float)L_40)) < ((float)L_41)))
		{
			goto IL_0085;
		}
	}
	{
		// return puntosTemporales;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_42 = V_0;
		return L_42;
	}
}
// System.Void TorreAntena::Danar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreAntena_Danar_m79CDF55BADF0B45375A1E2C628488D45958F5589 (TorreAntena_t2B675D8B7D93373C2CF7068BF023796CBA457640* __this, int32_t ___dano0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB_m523957666CDD1416E344217C09037E5137D0023B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemigo.GetComponent<EnemigoBase>().RecibirDano(potenciaRayo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1*)__this)->___enemigo_4;
		NullCheck(L_0);
		EnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB* L_1;
		L_1 = GameObject_GetComponent_TisEnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB_m523957666CDD1416E344217C09037E5137D0023B(L_0, GameObject_GetComponent_TisEnemigoBase_t9C7E9C385C18EDD0BEBDD2907BBB4020435FC3BB_m523957666CDD1416E344217C09037E5137D0023B_RuntimeMethod_var);
		int32_t L_2 = __this->___potenciaRayo_10;
		NullCheck(L_1);
		EnemigoBase_RecibirDano_m13C6D0169BDEE4C0241DEA5C7CE246C46D10CEBF(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TorreAntena::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreAntena__ctor_mF6B2A7FCA884D09470ACE0E135F05A4F61AEAE17 (TorreAntena_t2B675D8B7D93373C2CF7068BF023796CBA457640* __this, const RuntimeMethod* method) 
{
	{
		// public float divisionesRayo = 10;
		__this->___divisionesRayo_7 = (10.0f);
		TorreBase__ctor_m33DBDCE3E36FCC7E16B2F48D176A7ACD14926B9B(__this, NULL);
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
// System.Void TorreBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreBase_Update_m9917BA85848F4CBB67D86F8137420F83EEE304B2 (TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(enemigo != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___enemigo_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Apuntar();
		TorreBase_Apuntar_m5F59C7AD2B83D2B13ABCD8EC069C62193E32D0B0(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void TorreBase::Apuntar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreBase_Apuntar_m5F59C7AD2B83D2B13ABCD8EC069C62193E32D0B0 (TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1* __this, const RuntimeMethod* method) 
{
	{
		// transform.LookAt(enemigo.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___enemigo_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_0);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void TorreBase::Disparar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreBase_Disparar_m9F9E78F0754D14CFDB662B6B0D4323B0F66BCF54 (TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37_m000DA0D35D8C5677FA1C3867F0EBDB8B30E681E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// foreach(GameObject punta in puntasCanon)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___puntasCanon_6;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_000e_1:
			{
				// foreach(GameObject punta in puntasCanon)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// var tempBala = Instantiate<GameObject>(prefabBala, punta.transform.position, Quaternion.identity);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___prefabBala_5;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
				NullCheck(L_4);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
				NullCheck(L_5);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
				L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
				L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
				// tempBala.GetComponent<Bala>().destino = enemigo.transform.position;
				NullCheck(L_8);
				Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* L_9;
				L_9 = GameObject_GetComponent_TisBala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37_m000DA0D35D8C5677FA1C3867F0EBDB8B30E681E5(L_8, GameObject_GetComponent_TisBala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37_m000DA0D35D8C5677FA1C3867F0EBDB8B30E681E5_RuntimeMethod_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___enemigo_4;
				NullCheck(L_10);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
				NullCheck(L_11);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
				L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
				NullCheck(L_9);
				L_9->___destino_4 = L_12;
			}

IL_004b_1:
			{
				// foreach(GameObject punta in puntasCanon)
				bool L_13;
				L_13 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void TorreBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TorreBase__ctor_m33DBDCE3E36FCC7E16B2F48D176A7ACD14926B9B (TorreBase_t57803FF26C80C98F2A50AA13541B2438B7802EF1* __this, const RuntimeMethod* method) 
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
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.ProtoInputActions::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.ProtoInputActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtoInputActions__ctor_mC0AE0455AD34836105CE1EF170BD8097E968FA80 (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral117C34CEF055E54D018BB5CB8A52E1D66434C6E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68E991B5616F5769AB6069C14D3F44D98828C2F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76E64999AC9428D75B31CD40BCA2270B19CDAE1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F84632196531FA2B3BB0B4225C53CDB837E9393);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA2ACAAC77884477FF705FAA326CAE0ACFAFB316);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD23F1807EC3F728BA43D64905EBF6D2F2B3660D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC4515E344CAA528FBB65CD1A4C06B90761465BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC63533D7E97B41EB9EC8122A46CB313BA2A0DDC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0973F730C31CE8BAFF360715F4C99013FED50E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAA8D3345D5A3AD0F665F130BCD3CFA251D7B55B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int m_KeyboardMouseSchemeIndex = -1;
		__this->___m_KeyboardMouseSchemeIndex_22 = (-1);
		// private int m_GamepadSchemeIndex = -1;
		__this->___m_GamepadSchemeIndex_23 = (-1);
		// private int m_TouchSchemeIndex = -1;
		__this->___m_TouchSchemeIndex_24 = (-1);
		// private int m_JoystickSchemeIndex = -1;
		__this->___m_JoystickSchemeIndex_25 = (-1);
		// private int m_XRSchemeIndex = -1;
		__this->___m_XRSchemeIndex_26 = (-1);
		// public @ProtoInputActions()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//             asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""ProtoInputActions"",
		//     ""maps"": [
		//         {
		//             ""name"": ""Player"",
		//             ""id"": ""df70fa95-8a34-4494-b137-73ab6b9c7d37"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Move"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""351f2ccd-1f9f-44bf-9bec-d62ac5c5f408"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""Look"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""6b444451-8a00-4d00-a97e-f47457f736a8"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""Fire"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""6c2ab1b8-8984-453a-af3d-a3c78ae1679a"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""978bfe49-cc26-4a3d-ab7b-7d7a29327403"",
		//                     ""path"": ""<Gamepad>/leftStick"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""WASD"",
		//                     ""id"": ""00ca640b-d935-4593-8157-c05846ea39b3"",
		//                     ""path"": ""Dpad"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""e2062cb9-1b15-46a2-838c-2f8d72a0bdd9"",
		//                     ""path"": ""<Keyboard>/w"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""8180e8bd-4097-4f4e-ab88-4523101a6ce9"",
		//                     ""path"": ""<Keyboard>/upArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""320bffee-a40b-4347-ac70-c210eb8bc73a"",
		//                     ""path"": ""<Keyboard>/s"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""1c5327b5-f71c-4f60-99c7-4e737386f1d1"",
		//                     ""path"": ""<Keyboard>/downArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""d2581a9b-1d11-4566-b27d-b92aff5fabbc"",
		//                     ""path"": ""<Keyboard>/a"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""2e46982e-44cc-431b-9f0b-c11910bf467a"",
		//                     ""path"": ""<Keyboard>/leftArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""fcfe95b8-67b9-4526-84b5-5d0bc98d6400"",
		//                     ""path"": ""<Keyboard>/d"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""77bff152-3580-4b21-b6de-dcd0c7e41164"",
		//                     ""path"": ""<Keyboard>/rightArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""1635d3fe-58b6-4ba9-a4e2-f4b964f6b5c8"",
		//                     ""path"": ""<XRController>/{Primary2DAxis}"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""XR"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""3ea4d645-4504-4529-b061-ab81934c3752"",
		//                     ""path"": ""<Joystick>/stick"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""c1f7a91b-d0fd-4a62-997e-7fb9b69bf235"",
		//                     ""path"": ""<Gamepad>/rightStick"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Look"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""8c8e490b-c610-4785-884f-f04217b23ca4"",
		//                     ""path"": ""<Pointer>/delta"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse;Touch"",
		//                     ""action"": ""Look"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""3e5f5442-8668-4b27-a940-df99bad7e831"",
		//                     ""path"": ""<Joystick>/{Hatswitch}"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Look"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""143bb1cd-cc10-4eca-a2f0-a3664166fe91"",
		//                     ""path"": ""<Gamepad>/rightTrigger"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Fire"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""05f6913d-c316-48b2-a6bb-e225f14c7960"",
		//                     ""path"": ""<Mouse>/leftButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Fire"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""886e731e-7071-4ae4-95c0-e61739dad6fd"",
		//                     ""path"": ""<Touchscreen>/primaryTouch/tap"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Touch"",
		//                     ""action"": ""Fire"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""ee3d0cd2-254e-47a7-a8cb-bc94d9658c54"",
		//                     ""path"": ""<Joystick>/trigger"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Fire"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""8255d333-5683-4943-a58a-ccb207ff1dce"",
		//                     ""path"": ""<XRController>/{PrimaryAction}"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""XR"",
		//                     ""action"": ""Fire"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""UI"",
		//             ""id"": ""272f6d14-89ba-496f-b7ff-215263d3219f"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Navigate"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""c95b2375-e6d9-4b88-9c4c-c5e76515df4b"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""Submit"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""7607c7b6-cd76-4816-beef-bd0341cfe950"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""Cancel"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""15cef263-9014-4fd5-94d9-4e4a6234a6ef"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""Point"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""32b35790-4ed0-4e9a-aa41-69ac6d629449"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""Click"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""3c7022bf-7922-4f7c-a998-c437916075ad"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""ScrollWheel"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""0489e84a-4833-4c40-bfae-cea84b696689"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""MiddleClick"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""dad70c86-b58c-4b17-88ad-f5e53adf419e"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""RightClick"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""44b200b1-1557-4083-816c-b22cbdf77ddf"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""TrackedDevicePosition"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""24908448-c609-4bc3-a128-ea258674378a"",
		//                     ""expectedControlType"": ""Vector3"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""TrackedDeviceOrientation"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""9caa3d8a-6b2f-4e8e-8bad-6ede561bd9be"",
		//                     ""expectedControlType"": ""Quaternion"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": ""Gamepad"",
		//                     ""id"": ""809f371f-c5e2-4e7a-83a1-d867598f40dd"",
		//                     ""path"": ""2DVector"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""14a5d6e8-4aaf-4119-a9ef-34b8c2c548bf"",
		//                     ""path"": ""<Gamepad>/leftStick/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""9144cbe6-05e1-4687-a6d7-24f99d23dd81"",
		//                     ""path"": ""<Gamepad>/rightStick/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""2db08d65-c5fb-421b-983f-c71163608d67"",
		//                     ""path"": ""<Gamepad>/leftStick/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""58748904-2ea9-4a80-8579-b500e6a76df8"",
		//                     ""path"": ""<Gamepad>/rightStick/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""8ba04515-75aa-45de-966d-393d9bbd1c14"",
		//                     ""path"": ""<Gamepad>/leftStick/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""712e721c-bdfb-4b23-a86c-a0d9fcfea921"",
		//                     ""path"": ""<Gamepad>/rightStick/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""fcd248ae-a788-4676-a12e-f4d81205600b"",
		//                     ""path"": ""<Gamepad>/leftStick/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""1f04d9bc-c50b-41a1-bfcc-afb75475ec20"",
		//                     ""path"": ""<Gamepad>/rightStick/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""fb8277d4-c5cd-4663-9dc7-ee3f0b506d90"",
		//                     ""path"": ""<Gamepad>/dpad"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""Joystick"",
		//                     ""id"": ""e25d9774-381c-4a61-b47c-7b6b299ad9f9"",
		//                     ""path"": ""2DVector"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""3db53b26-6601-41be-9887-63ac74e79d19"",
		//                     ""path"": ""<Joystick>/stick/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""0cb3e13e-3d90-4178-8ae6-d9c5501d653f"",
		//                     ""path"": ""<Joystick>/stick/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""0392d399-f6dd-4c82-8062-c1e9c0d34835"",
		//                     ""path"": ""<Joystick>/stick/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""942a66d9-d42f-43d6-8d70-ecb4ba5363bc"",
		//                     ""path"": ""<Joystick>/stick/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""Keyboard"",
		//                     ""id"": ""ff527021-f211-4c02-933e-5976594c46ed"",
		//                     ""path"": ""2DVector"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""563fbfdd-0f09-408d-aa75-8642c4f08ef0"",
		//                     ""path"": ""<Keyboard>/w"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""eb480147-c587-4a33-85ed-eb0ab9942c43"",
		//                     ""path"": ""<Keyboard>/upArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""2bf42165-60bc-42ca-8072-8c13ab40239b"",
		//                     ""path"": ""<Keyboard>/s"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""85d264ad-e0a0-4565-b7ff-1a37edde51ac"",
		//                     ""path"": ""<Keyboard>/downArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""74214943-c580-44e4-98eb-ad7eebe17902"",
		//                     ""path"": ""<Keyboard>/a"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""cea9b045-a000-445b-95b8-0c171af70a3b"",
		//                     ""path"": ""<Keyboard>/leftArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""8607c725-d935-4808-84b1-8354e29bab63"",
		//                     ""path"": ""<Keyboard>/d"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""4cda81dc-9edd-4e03-9d7c-a71a14345d0b"",
		//                     ""path"": ""<Keyboard>/rightArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""9e92bb26-7e3b-4ec4-b06b-3c8f8e498ddc"",
		//                     ""path"": ""*/{Submit}"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Submit"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""82627dcc-3b13-4ba9-841d-e4b746d6553e"",
		//                     ""path"": ""*/{Cancel}"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Cancel"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""c52c8e0b-8179-41d3-b8a1-d149033bbe86"",
		//                     ""path"": ""<Mouse>/position"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Point"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""e1394cbc-336e-44ce-9ea8-6007ed6193f7"",
		//                     ""path"": ""<Pen>/position"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Point"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""5693e57a-238a-46ed-b5ae-e64e6e574302"",
		//                     ""path"": ""<Touchscreen>/touch*/position"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Touch"",
		//                     ""action"": ""Point"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""4faf7dc9-b979-4210-aa8c-e808e1ef89f5"",
		//                     ""path"": ""<Mouse>/leftButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Click"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""8d66d5ba-88d7-48e6-b1cd-198bbfef7ace"",
		//                     ""path"": ""<Pen>/tip"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Click"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""47c2a644-3ebc-4dae-a106-589b7ca75b59"",
		//                     ""path"": ""<Touchscreen>/touch*/press"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Touch"",
		//                     ""action"": ""Click"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""bb9e6b34-44bf-4381-ac63-5aa15d19f677"",
		//                     ""path"": ""<XRController>/trigger"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""XR"",
		//                     ""action"": ""Click"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""38c99815-14ea-4617-8627-164d27641299"",
		//                     ""path"": ""<Mouse>/scroll"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""ScrollWheel"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""24066f69-da47-44f3-a07e-0015fb02eb2e"",
		//                     ""path"": ""<Mouse>/middleButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""MiddleClick"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""4c191405-5738-4d4b-a523-c6a301dbf754"",
		//                     ""path"": ""<Mouse>/rightButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""RightClick"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""7236c0d9-6ca3-47cf-a6ee-a97f5b59ea77"",
		//                     ""path"": ""<XRController>/devicePosition"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""XR"",
		//                     ""action"": ""TrackedDevicePosition"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""23e01e3a-f935-4948-8d8b-9bcac77714fb"",
		//                     ""path"": ""<XRController>/deviceRotation"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""XR"",
		//                     ""action"": ""TrackedDeviceOrientation"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""Toques"",
		//             ""id"": ""386e3c3f-2e90-496b-8bb5-10525aa7e8d3"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Toque"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""ae5e141c-dc39-4052-878f-f2c20ca9ce03"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""PosicionToque"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""ed42c673-1857-44e0-9fad-af5c685913df"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""c58c9a82-c609-4c33-a8d8-9e82383fd0cc"",
		//                     ""path"": ""<Touchscreen>/Press"",
		//                     ""interactions"": ""Press"",
		//                     ""processors"": """",
		//                     ""groups"": ""Touch"",
		//                     ""action"": ""Toque"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""a2e7ce85-636b-48c0-818b-f295a088b035"",
		//                     ""path"": ""<Touchscreen>/position"",
		//                     ""interactions"": ""Press"",
		//                     ""processors"": """",
		//                     ""groups"": ""Touch"",
		//                     ""action"": ""PosicionToque"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": [
		//         {
		//             ""name"": ""Keyboard&Mouse"",
		//             ""bindingGroup"": ""Keyboard&Mouse"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<Keyboard>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 },
		//                 {
		//                     ""devicePath"": ""<Mouse>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""Gamepad"",
		//             ""bindingGroup"": ""Gamepad"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<Gamepad>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""Touch"",
		//             ""bindingGroup"": ""Touch"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<Touchscreen>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""Joystick"",
		//             ""bindingGroup"": ""Joystick"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<Joystick>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""XR"",
		//             ""bindingGroup"": ""XR"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<XRController>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         }
		//     ]
		// }");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InputActionAsset_FromJson_mA8AF88895F49DB0F0BAB47B60744E927E6234347(_stringLiteralDAA8D3345D5A3AD0F665F130BCD3CFA251D7B55B, NULL);
		__this->___U3CassetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetU3Ek__BackingField_0), (void*)L_0);
		// m_Player = asset.FindActionMap("Player", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_1);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2;
		L_2 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, (bool)1, NULL);
		__this->___m_Player_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_1), (void*)L_2);
		// m_Player_Move = m_Player.FindAction("Move", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_3 = __this->___m_Player_1;
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_3, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, (bool)1, NULL);
		__this->___m_Player_Move_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_Move_3), (void*)L_4);
		// m_Player_Look = m_Player.FindAction("Look", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_5 = __this->___m_Player_1;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_5, _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F, (bool)1, NULL);
		__this->___m_Player_Look_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_Look_4), (void*)L_6);
		// m_Player_Fire = m_Player.FindAction("Fire", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_7 = __this->___m_Player_1;
		NullCheck(L_7);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_7, _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, (bool)1, NULL);
		__this->___m_Player_Fire_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_Fire_5), (void*)L_8);
		// m_UI = asset.FindActionMap("UI", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_9;
		L_9 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_9);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_10;
		L_10 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_9, _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F, (bool)1, NULL);
		__this->___m_UI_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_6), (void*)L_10);
		// m_UI_Navigate = m_UI.FindAction("Navigate", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_11 = __this->___m_UI_6;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_11, _stringLiteral117C34CEF055E54D018BB5CB8A52E1D66434C6E6, (bool)1, NULL);
		__this->___m_UI_Navigate_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_Navigate_8), (void*)L_12);
		// m_UI_Submit = m_UI.FindAction("Submit", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_13 = __this->___m_UI_6;
		NullCheck(L_13);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_13, _stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895, (bool)1, NULL);
		__this->___m_UI_Submit_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_Submit_9), (void*)L_14);
		// m_UI_Cancel = m_UI.FindAction("Cancel", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_15 = __this->___m_UI_6;
		NullCheck(L_15);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16;
		L_16 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_15, _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, (bool)1, NULL);
		__this->___m_UI_Cancel_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_Cancel_10), (void*)L_16);
		// m_UI_Point = m_UI.FindAction("Point", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_17 = __this->___m_UI_6;
		NullCheck(L_17);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18;
		L_18 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_17, _stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412, (bool)1, NULL);
		__this->___m_UI_Point_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_Point_11), (void*)L_18);
		// m_UI_Click = m_UI.FindAction("Click", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_19 = __this->___m_UI_6;
		NullCheck(L_19);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_20;
		L_20 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_19, _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC, (bool)1, NULL);
		__this->___m_UI_Click_12 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_Click_12), (void*)L_20);
		// m_UI_ScrollWheel = m_UI.FindAction("ScrollWheel", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_21 = __this->___m_UI_6;
		NullCheck(L_21);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_21, _stringLiteralAD23F1807EC3F728BA43D64905EBF6D2F2B3660D, (bool)1, NULL);
		__this->___m_UI_ScrollWheel_13 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_ScrollWheel_13), (void*)L_22);
		// m_UI_MiddleClick = m_UI.FindAction("MiddleClick", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_23 = __this->___m_UI_6;
		NullCheck(L_23);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_24;
		L_24 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_23, _stringLiteralAA2ACAAC77884477FF705FAA326CAE0ACFAFB316, (bool)1, NULL);
		__this->___m_UI_MiddleClick_14 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_MiddleClick_14), (void*)L_24);
		// m_UI_RightClick = m_UI.FindAction("RightClick", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_25 = __this->___m_UI_6;
		NullCheck(L_25);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_26;
		L_26 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_25, _stringLiteral68E991B5616F5769AB6069C14D3F44D98828C2F9, (bool)1, NULL);
		__this->___m_UI_RightClick_15 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_RightClick_15), (void*)L_26);
		// m_UI_TrackedDevicePosition = m_UI.FindAction("TrackedDevicePosition", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_27 = __this->___m_UI_6;
		NullCheck(L_27);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_27, _stringLiteral9F84632196531FA2B3BB0B4225C53CDB837E9393, (bool)1, NULL);
		__this->___m_UI_TrackedDevicePosition_16 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_TrackedDevicePosition_16), (void*)L_28);
		// m_UI_TrackedDeviceOrientation = m_UI.FindAction("TrackedDeviceOrientation", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_29 = __this->___m_UI_6;
		NullCheck(L_29);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_30;
		L_30 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_29, _stringLiteralC63533D7E97B41EB9EC8122A46CB313BA2A0DDC4, (bool)1, NULL);
		__this->___m_UI_TrackedDeviceOrientation_17 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_TrackedDeviceOrientation_17), (void*)L_30);
		// m_Toques = asset.FindActionMap("Toques", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_31;
		L_31 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_31);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_32;
		L_32 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_31, _stringLiteralD0973F730C31CE8BAFF360715F4C99013FED50E5, (bool)1, NULL);
		__this->___m_Toques_18 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Toques_18), (void*)L_32);
		// m_Toques_Toque = m_Toques.FindAction("Toque", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_33 = __this->___m_Toques_18;
		NullCheck(L_33);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_34;
		L_34 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_33, _stringLiteralBC4515E344CAA528FBB65CD1A4C06B90761465BC, (bool)1, NULL);
		__this->___m_Toques_Toque_20 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Toques_Toque_20), (void*)L_34);
		// m_Toques_PosicionToque = m_Toques.FindAction("PosicionToque", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_35 = __this->___m_Toques_18;
		NullCheck(L_35);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_36;
		L_36 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_35, _stringLiteral76E64999AC9428D75B31CD40BCA2270B19CDAE1B, (bool)1, NULL);
		__this->___m_Toques_PosicionToque_21 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Toques_PosicionToque_21), (void*)L_36);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.ProtoInputActions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtoInputActions_Dispose_m728C24C9172D46B1EB0410E8A6B48676B84CC22C (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.ProtoInputActions::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ProtoInputActions_get_bindingMask_mFEEA6D3CA17A34E3E03E1F629E683AA6E70593CE (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1;
		L_1 = InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.InputSystem.ProtoInputActions::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtoInputActions_set_bindingMask_mC520DB630C61ED0D8D8EB817E5AF7A111DB9F43A (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5(L_0, L_1, NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.ProtoInputActions::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ProtoInputActions_get_devices_m112523B68DE9FC88622455FA9FD829C848389B8E (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.devices;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1;
		L_1 = InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.InputSystem.ProtoInputActions::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtoInputActions_set_devices_mF8575A5B1338F6BA4B2BCDD9A54FD09682A3DE09 (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.devices = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.ProtoInputActions::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 ProtoInputActions_get_controlSchemes_m639B47C4AEA81732B6FE4A4CC4F0F3031C700C51 (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_0);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_1;
		L_1 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.InputSystem.ProtoInputActions::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProtoInputActions_Contains_m89274F3E2984FF69A14E8B1E2652BBA442BEE618 (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) 
{
	{
		// return asset.Contains(action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.ProtoInputActions::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProtoInputActions_GetEnumerator_mE1FD5665ADC8CF2BA30AB641B117EFB6A8B51B1C (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// return asset.GetEnumerator();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9(L_0, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator UnityEngine.InputSystem.ProtoInputActions::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProtoInputActions_System_Collections_IEnumerable_GetEnumerator_m6DC1FFE280D52E5159FB401FA13BB4ADD812854D (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = ProtoInputActions_GetEnumerator_mE1FD5665ADC8CF2BA30AB641B117EFB6A8B51B1C(__this, NULL);
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.ProtoInputActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtoInputActions_Enable_m484982436E49E56CDAFDEA54FDC321E28971798B (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// asset.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.ProtoInputActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtoInputActions_Disable_mBE24C6AE90183743DA8C141C121640C3CD79156E (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// asset.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.ProtoInputActions::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProtoInputActions_get_bindings_m962F633AFDBC41DC046FC53A572437AB4BBDCCBD (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<InputBinding> bindings => asset.bindings;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ProtoInputActions_FindAction_m729EB8DB811034745AADB51C8080A69B95783F17 (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) 
{
	{
		// return asset.FindAction(actionNameOrId, throwIfNotFound);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		String_t* L_1 = ___actionNameOrId0;
		bool L_2 = ___throwIfNotFound1;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.InputSystem.ProtoInputActions::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProtoInputActions_FindBinding_m0269DA627CF79932FC53845C088C9AE5A7A46AA0 (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___bindingMask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) 
{
	{
		// return asset.FindBinding(bindingMask, out action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_1 = ___bindingMask0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** L_2 = ___action1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.InputSystem.ProtoInputActions/PlayerActions UnityEngine.InputSystem.ProtoInputActions::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498 ProtoInputActions_get_Player_mBD7730942AD5D1E02B0B468049B6C4D40A2CFFBE (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// public PlayerActions @Player => new PlayerActions(this);
		PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498 L_0;
		memset((&L_0), 0, sizeof(L_0));
		PlayerActions__ctor_mE18985192A41375D63DCA50A825FF31555D4D133_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.InputSystem.ProtoInputActions/UIActions UnityEngine.InputSystem.ProtoInputActions::get_UI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97 ProtoInputActions_get_UI_m95AFEFDD2D6AF48DE3191A0EA2FC69DBB094BB1C (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// public UIActions @UI => new UIActions(this);
		UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97 L_0;
		memset((&L_0), 0, sizeof(L_0));
		UIActions__ctor_m3912983C2EF9DFB75AC30682F0EB087A8C1AFCCE_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.InputSystem.ProtoInputActions/ToquesActions UnityEngine.InputSystem.ProtoInputActions::get_Toques()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD ProtoInputActions_get_Toques_m8A5F4F3513309EDAF8332DCCF687AFBB463570B0 (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// public ToquesActions @Toques => new ToquesActions(this);
		ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ToquesActions__ctor_m9582D36AB7554080A7F742987C112835035C44A1_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.ProtoInputActions::get_KeyboardMouseScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ProtoInputActions_get_KeyboardMouseScheme_mE6D756DEE95D72A698E528950A3D34931BAC69F8 (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral017B351DA3E50FAF2CFBB408359C6C0480F02932);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_KeyboardMouseSchemeIndex == -1) m_KeyboardMouseSchemeIndex = asset.FindControlSchemeIndex("Keyboard&Mouse");
		int32_t L_0 = __this->___m_KeyboardMouseSchemeIndex_22;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (m_KeyboardMouseSchemeIndex == -1) m_KeyboardMouseSchemeIndex = asset.FindControlSchemeIndex("Keyboard&Mouse");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_1, _stringLiteral017B351DA3E50FAF2CFBB408359C6C0480F02932, NULL);
		__this->___m_KeyboardMouseSchemeIndex_22 = L_2;
	}

IL_001f:
	{
		// return asset.controlSchemes[m_KeyboardMouseSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_3;
		L_3 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_3);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_4;
		L_4 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = __this->___m_KeyboardMouseSchemeIndex_22;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_6;
		L_6 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_0), L_5, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		return L_6;
	}
}
// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.ProtoInputActions::get_GamepadScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ProtoInputActions_get_GamepadScheme_mC5B62F7A6AA7CB746E0710B8540EFA00864E1EC0 (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61225B335304C6BE91EE0EC8CF385BBE9B633F17);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_GamepadSchemeIndex == -1) m_GamepadSchemeIndex = asset.FindControlSchemeIndex("Gamepad");
		int32_t L_0 = __this->___m_GamepadSchemeIndex_23;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (m_GamepadSchemeIndex == -1) m_GamepadSchemeIndex = asset.FindControlSchemeIndex("Gamepad");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_1, _stringLiteral61225B335304C6BE91EE0EC8CF385BBE9B633F17, NULL);
		__this->___m_GamepadSchemeIndex_23 = L_2;
	}

IL_001f:
	{
		// return asset.controlSchemes[m_GamepadSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_3;
		L_3 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_3);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_4;
		L_4 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = __this->___m_GamepadSchemeIndex_23;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_6;
		L_6 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_0), L_5, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		return L_6;
	}
}
// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.ProtoInputActions::get_TouchScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ProtoInputActions_get_TouchScheme_mA81B702AE3EC883DE8F4965053C141F4A1DB7B2E (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_TouchSchemeIndex == -1) m_TouchSchemeIndex = asset.FindControlSchemeIndex("Touch");
		int32_t L_0 = __this->___m_TouchSchemeIndex_24;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (m_TouchSchemeIndex == -1) m_TouchSchemeIndex = asset.FindControlSchemeIndex("Touch");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_1, _stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7, NULL);
		__this->___m_TouchSchemeIndex_24 = L_2;
	}

IL_001f:
	{
		// return asset.controlSchemes[m_TouchSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_3;
		L_3 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_3);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_4;
		L_4 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = __this->___m_TouchSchemeIndex_24;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_6;
		L_6 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_0), L_5, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		return L_6;
	}
}
// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.ProtoInputActions::get_JoystickScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ProtoInputActions_get_JoystickScheme_m0A8B9A2745299B5C6C3C905DAFA4BAB693226023 (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_JoystickSchemeIndex == -1) m_JoystickSchemeIndex = asset.FindControlSchemeIndex("Joystick");
		int32_t L_0 = __this->___m_JoystickSchemeIndex_25;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (m_JoystickSchemeIndex == -1) m_JoystickSchemeIndex = asset.FindControlSchemeIndex("Joystick");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_1, _stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, NULL);
		__this->___m_JoystickSchemeIndex_25 = L_2;
	}

IL_001f:
	{
		// return asset.controlSchemes[m_JoystickSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_3;
		L_3 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_3);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_4;
		L_4 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = __this->___m_JoystickSchemeIndex_25;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_6;
		L_6 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_0), L_5, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		return L_6;
	}
}
// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.ProtoInputActions::get_XRScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ProtoInputActions_get_XRScheme_m95ADD784D6444F49309DD15A9403F3E92178ABAC (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FEFD136EF26D7B05E5CCF16376EF651CBFB5E2C);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_XRSchemeIndex == -1) m_XRSchemeIndex = asset.FindControlSchemeIndex("XR");
		int32_t L_0 = __this->___m_XRSchemeIndex_26;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (m_XRSchemeIndex == -1) m_XRSchemeIndex = asset.FindControlSchemeIndex("XR");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_1, _stringLiteral9FEFD136EF26D7B05E5CCF16376EF651CBFB5E2C, NULL);
		__this->___m_XRSchemeIndex_26 = L_2;
	}

IL_001f:
	{
		// return asset.controlSchemes[m_XRSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_3;
		L_3 = ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline(__this, NULL);
		NullCheck(L_3);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_4;
		L_4 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = __this->___m_XRSchemeIndex_26;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_6;
		L_6 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_0), L_5, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.InputSystem.ProtoInputActions/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshal_pinvoke(const PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498& unmarshaled, PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshal_pinvoke_back(const PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshaled_pinvoke& marshaled, PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.ProtoInputActions/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshal_pinvoke_cleanup(PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.InputSystem.ProtoInputActions/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshal_com(const PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498& unmarshaled, PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshal_com_back(const PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshaled_com& marshaled, PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.ProtoInputActions/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshal_com_cleanup(PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/PlayerActions::.ctor(UnityEngine.InputSystem.ProtoInputActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__ctor_mE18985192A41375D63DCA50A825FF31555D4D133 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public PlayerActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public PlayerActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions__ctor_mE18985192A41375D63DCA50A825FF31555D4D133_AdjustorThunk (RuntimeObject* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method)
{
	PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498*>(__this + _offset);
	PlayerActions__ctor_mE18985192A41375D63DCA50A825FF31555D4D133_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/PlayerActions::get_Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Move_m433DFFA675227B94A6B5477AD809D09E998D1FE2 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Move => m_Wrapper.m_Player_Move;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_Move_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Move_m433DFFA675227B94A6B5477AD809D09E998D1FE2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_Move_m433DFFA675227B94A6B5477AD809D09E998D1FE2(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/PlayerActions::get_Look()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Look_m0C507EE4DEA5C56765C0F8303BF80B6BD26CBFF9 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Look => m_Wrapper.m_Player_Look;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_Look_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Look_m0C507EE4DEA5C56765C0F8303BF80B6BD26CBFF9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_Look_m0C507EE4DEA5C56765C0F8303BF80B6BD26CBFF9(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/PlayerActions::get_Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Fire_m49AE3A4F86DFC6242682C6227257A3A53882ACF9 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Fire => m_Wrapper.m_Player_Fire;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_Fire_5;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Fire_m49AE3A4F86DFC6242682C6227257A3A53882ACF9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_Fire_m49AE3A4F86DFC6242682C6227257A3A53882ACF9(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_mF460D9144E792CAB5239667E3894DAB57710B97C (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_Player; }
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Player_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_mF460D9144E792CAB5239667E3894DAB57710B97C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = PlayerActions_Get_mF460D9144E792CAB5239667E3894DAB57710B97C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_m2BA85BE795479E07AD6F23222B95A031F19C6558 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_mF460D9144E792CAB5239667E3894DAB57710B97C(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Enable_m2BA85BE795479E07AD6F23222B95A031F19C6558_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498*>(__this + _offset);
	PlayerActions_Enable_m2BA85BE795479E07AD6F23222B95A031F19C6558(_thisAdjusted, method);
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_mF3D5E745465C4F5236119C43056981F6A4AB204E (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_mF460D9144E792CAB5239667E3894DAB57710B97C(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Disable_mF3D5E745465C4F5236119C43056981F6A4AB204E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498*>(__this + _offset);
	PlayerActions_Disable_mF3D5E745465C4F5236119C43056981F6A4AB204E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.InputSystem.ProtoInputActions/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_m882243F92EBBB8F7D0142C7A69754EB76898DF82 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_mF460D9144E792CAB5239667E3894DAB57710B97C(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayerActions_get_enabled_m882243F92EBBB8F7D0142C7A69754EB76898DF82_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayerActions_get_enabled_m882243F92EBBB8F7D0142C7A69754EB76898DF82(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions/PlayerActions::op_Implicit(UnityEngine.InputSystem.ProtoInputActions/PlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_op_Implicit_m8C77F00BDD450A4ACCA29E60CF73DDD270465C03 (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498 ___set0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_mF460D9144E792CAB5239667E3894DAB57710B97C((&___set0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/PlayerActions::SetCallbacks(UnityEngine.InputSystem.ProtoInputActions/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_m236299F714C3C509F83133F3FA0DC9D2E76A0FAD (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_PlayerActionsCallbackInterface != null)
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_PlayerActionsCallbackInterface_2;
		if (!L_1)
		{
			goto IL_0142;
		}
	}
	{
		// @Move.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = PlayerActions_get_Move_m433DFFA675227B94A6B5477AD809D09E998D1FE2(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_3 = __this->___m_Wrapper_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_5 = L_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_6 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_6, L_5, (intptr_t)((void*)GetInterfaceMethodInfo(L_5, 0, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_2);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_2, L_6, NULL);
		// @Move.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = PlayerActions_get_Move_m433DFFA675227B94A6B5477AD809D09E998D1FE2(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_8 = __this->___m_Wrapper_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_10 = L_9;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, L_10, (intptr_t)((void*)GetInterfaceMethodInfo(L_10, 0, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_7);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_7, L_11, NULL);
		// @Move.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = PlayerActions_get_Move_m433DFFA675227B94A6B5477AD809D09E998D1FE2(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_13 = __this->___m_Wrapper_0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_15 = L_14;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_16 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_16, L_15, (intptr_t)((void*)GetInterfaceMethodInfo(L_15, 0, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_12);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_12, L_16, NULL);
		// @Look.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = PlayerActions_get_Look_m0C507EE4DEA5C56765C0F8303BF80B6BD26CBFF9(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_18 = __this->___m_Wrapper_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_20 = L_19;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_21 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_21, L_20, (intptr_t)((void*)GetInterfaceMethodInfo(L_20, 1, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_17);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_17, L_21, NULL);
		// @Look.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = PlayerActions_get_Look_m0C507EE4DEA5C56765C0F8303BF80B6BD26CBFF9(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_23 = __this->___m_Wrapper_0;
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_25 = L_24;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_26 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_26, L_25, (intptr_t)((void*)GetInterfaceMethodInfo(L_25, 1, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_22);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_22, L_26, NULL);
		// @Look.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_27;
		L_27 = PlayerActions_get_Look_m0C507EE4DEA5C56765C0F8303BF80B6BD26CBFF9(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_28 = __this->___m_Wrapper_0;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_30 = L_29;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, L_30, (intptr_t)((void*)GetInterfaceMethodInfo(L_30, 1, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_27);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_27, L_31, NULL);
		// @Fire.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32;
		L_32 = PlayerActions_get_Fire_m49AE3A4F86DFC6242682C6227257A3A53882ACF9(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_33 = __this->___m_Wrapper_0;
		NullCheck(L_33);
		RuntimeObject* L_34 = L_33->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_35 = L_34;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_36 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_36, L_35, (intptr_t)((void*)GetInterfaceMethodInfo(L_35, 2, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_32);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_32, L_36, NULL);
		// @Fire.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37;
		L_37 = PlayerActions_get_Fire_m49AE3A4F86DFC6242682C6227257A3A53882ACF9(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_38 = __this->___m_Wrapper_0;
		NullCheck(L_38);
		RuntimeObject* L_39 = L_38->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_40 = L_39;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_41 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_41, L_40, (intptr_t)((void*)GetInterfaceMethodInfo(L_40, 2, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_37);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_37, L_41, NULL);
		// @Fire.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_42;
		L_42 = PlayerActions_get_Fire_m49AE3A4F86DFC6242682C6227257A3A53882ACF9(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_43 = __this->___m_Wrapper_0;
		NullCheck(L_43);
		RuntimeObject* L_44 = L_43->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_45 = L_44;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_46 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_46, L_45, (intptr_t)((void*)GetInterfaceMethodInfo(L_45, 2, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_42);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_42, L_46, NULL);
	}

IL_0142:
	{
		// m_Wrapper.m_PlayerActionsCallbackInterface = instance;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_47 = __this->___m_Wrapper_0;
		RuntimeObject* L_48 = ___instance0;
		NullCheck(L_47);
		L_47->___m_PlayerActionsCallbackInterface_2 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->___m_PlayerActionsCallbackInterface_2), (void*)L_48);
		// if (instance != null)
		RuntimeObject* L_49 = ___instance0;
		if (!L_49)
		{
			goto IL_022c;
		}
	}
	{
		// @Move.started += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_50;
		L_50 = PlayerActions_get_Move_m433DFFA675227B94A6B5477AD809D09E998D1FE2(__this, NULL);
		RuntimeObject* L_51 = ___instance0;
		RuntimeObject* L_52 = L_51;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_53 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_53, L_52, (intptr_t)((void*)GetInterfaceMethodInfo(L_52, 0, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_50);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_50, L_53, NULL);
		// @Move.performed += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_54;
		L_54 = PlayerActions_get_Move_m433DFFA675227B94A6B5477AD809D09E998D1FE2(__this, NULL);
		RuntimeObject* L_55 = ___instance0;
		RuntimeObject* L_56 = L_55;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_57 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_57, L_56, (intptr_t)((void*)GetInterfaceMethodInfo(L_56, 0, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_54);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_54, L_57, NULL);
		// @Move.canceled += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_58;
		L_58 = PlayerActions_get_Move_m433DFFA675227B94A6B5477AD809D09E998D1FE2(__this, NULL);
		RuntimeObject* L_59 = ___instance0;
		RuntimeObject* L_60 = L_59;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_61 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_61, L_60, (intptr_t)((void*)GetInterfaceMethodInfo(L_60, 0, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_58);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_58, L_61, NULL);
		// @Look.started += instance.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_62;
		L_62 = PlayerActions_get_Look_m0C507EE4DEA5C56765C0F8303BF80B6BD26CBFF9(__this, NULL);
		RuntimeObject* L_63 = ___instance0;
		RuntimeObject* L_64 = L_63;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_65 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_65, L_64, (intptr_t)((void*)GetInterfaceMethodInfo(L_64, 1, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_62);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_62, L_65, NULL);
		// @Look.performed += instance.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_66;
		L_66 = PlayerActions_get_Look_m0C507EE4DEA5C56765C0F8303BF80B6BD26CBFF9(__this, NULL);
		RuntimeObject* L_67 = ___instance0;
		RuntimeObject* L_68 = L_67;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_69 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_69, L_68, (intptr_t)((void*)GetInterfaceMethodInfo(L_68, 1, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_66);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_66, L_69, NULL);
		// @Look.canceled += instance.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_70;
		L_70 = PlayerActions_get_Look_m0C507EE4DEA5C56765C0F8303BF80B6BD26CBFF9(__this, NULL);
		RuntimeObject* L_71 = ___instance0;
		RuntimeObject* L_72 = L_71;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_73 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_73, L_72, (intptr_t)((void*)GetInterfaceMethodInfo(L_72, 1, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_70);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_70, L_73, NULL);
		// @Fire.started += instance.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_74;
		L_74 = PlayerActions_get_Fire_m49AE3A4F86DFC6242682C6227257A3A53882ACF9(__this, NULL);
		RuntimeObject* L_75 = ___instance0;
		RuntimeObject* L_76 = L_75;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_77 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_77, L_76, (intptr_t)((void*)GetInterfaceMethodInfo(L_76, 2, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_74);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_74, L_77, NULL);
		// @Fire.performed += instance.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_78;
		L_78 = PlayerActions_get_Fire_m49AE3A4F86DFC6242682C6227257A3A53882ACF9(__this, NULL);
		RuntimeObject* L_79 = ___instance0;
		RuntimeObject* L_80 = L_79;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_81 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_81, L_80, (intptr_t)((void*)GetInterfaceMethodInfo(L_80, 2, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_78);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_78, L_81, NULL);
		// @Fire.canceled += instance.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_82;
		L_82 = PlayerActions_get_Fire_m49AE3A4F86DFC6242682C6227257A3A53882ACF9(__this, NULL);
		RuntimeObject* L_83 = ___instance0;
		RuntimeObject* L_84 = L_83;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_85 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_85);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_85, L_84, (intptr_t)((void*)GetInterfaceMethodInfo(L_84, 2, IPlayerActions_tEC0599AA050BB88DC87CFE1E41D814C02968332C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_82);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_82, L_85, NULL);
	}

IL_022c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_SetCallbacks_m236299F714C3C509F83133F3FA0DC9D2E76A0FAD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498*>(__this + _offset);
	PlayerActions_SetCallbacks_m236299F714C3C509F83133F3FA0DC9D2E76A0FAD(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.InputSystem.ProtoInputActions/UIActions
IL2CPP_EXTERN_C void UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshal_pinvoke(const UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97& unmarshaled, UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'UIActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshal_pinvoke_back(const UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshaled_pinvoke& marshaled, UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'UIActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.ProtoInputActions/UIActions
IL2CPP_EXTERN_C void UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshal_pinvoke_cleanup(UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.InputSystem.ProtoInputActions/UIActions
IL2CPP_EXTERN_C void UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshal_com(const UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97& unmarshaled, UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'UIActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshal_com_back(const UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshaled_com& marshaled, UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'UIActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.ProtoInputActions/UIActions
IL2CPP_EXTERN_C void UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshal_com_cleanup(UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/UIActions::.ctor(UnityEngine.InputSystem.ProtoInputActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions__ctor_m3912983C2EF9DFB75AC30682F0EB087A8C1AFCCE (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public UIActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public UIActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void UIActions__ctor_m3912983C2EF9DFB75AC30682F0EB087A8C1AFCCE_AdjustorThunk (RuntimeObject* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	UIActions__ctor_m3912983C2EF9DFB75AC30682F0EB087A8C1AFCCE_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_Navigate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Navigate_m4EF08E5A937B7DD9A3A97B69AAADD650FE3ACB83 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Navigate => m_Wrapper.m_UI_Navigate;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_Navigate_8;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Navigate_m4EF08E5A937B7DD9A3A97B69AAADD650FE3ACB83_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_Navigate_m4EF08E5A937B7DD9A3A97B69AAADD650FE3ACB83(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_Submit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Submit_mCA278E2C88C727A29049428965DB28E408AA86BA (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Submit => m_Wrapper.m_UI_Submit;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_Submit_9;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Submit_mCA278E2C88C727A29049428965DB28E408AA86BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_Submit_mCA278E2C88C727A29049428965DB28E408AA86BA(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Cancel_mDF7CCF958B112205C16E6D75EB516A865C380E60 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Cancel => m_Wrapper.m_UI_Cancel;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_Cancel_10;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Cancel_mDF7CCF958B112205C16E6D75EB516A865C380E60_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_Cancel_mDF7CCF958B112205C16E6D75EB516A865C380E60(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_Point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Point_mC9CAB7021FA57885D2C9162442E581F24DA54E1A (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Point => m_Wrapper.m_UI_Point;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_Point_11;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Point_mC9CAB7021FA57885D2C9162442E581F24DA54E1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_Point_mC9CAB7021FA57885D2C9162442E581F24DA54E1A(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Click_m3BA6A58364D596CFE32944A65432A7CFBDA34CE6 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Click => m_Wrapper.m_UI_Click;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_Click_12;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Click_m3BA6A58364D596CFE32944A65432A7CFBDA34CE6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_Click_m3BA6A58364D596CFE32944A65432A7CFBDA34CE6(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_ScrollWheel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_ScrollWheel_m27F6A5AD6FE4C0ABE7927ACDDA9E684F43033A0B (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @ScrollWheel => m_Wrapper.m_UI_ScrollWheel;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_ScrollWheel_13;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_ScrollWheel_m27F6A5AD6FE4C0ABE7927ACDDA9E684F43033A0B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_ScrollWheel_m27F6A5AD6FE4C0ABE7927ACDDA9E684F43033A0B(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_MiddleClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_MiddleClick_mF1EEF8F09BBB4A273E363A7B36AF23FF424C840D (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @MiddleClick => m_Wrapper.m_UI_MiddleClick;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_MiddleClick_14;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_MiddleClick_mF1EEF8F09BBB4A273E363A7B36AF23FF424C840D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_MiddleClick_mF1EEF8F09BBB4A273E363A7B36AF23FF424C840D(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_RightClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_RightClick_m894997ECBAB36DA1B2EBF1D48978514535B9CEA3 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @RightClick => m_Wrapper.m_UI_RightClick;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_RightClick_15;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_RightClick_m894997ECBAB36DA1B2EBF1D48978514535B9CEA3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_RightClick_m894997ECBAB36DA1B2EBF1D48978514535B9CEA3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_TrackedDevicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDevicePosition_mE35CE9AAF13D86E282E25221AFC12A387F403350 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @TrackedDevicePosition => m_Wrapper.m_UI_TrackedDevicePosition;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_TrackedDevicePosition_16;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDevicePosition_mE35CE9AAF13D86E282E25221AFC12A387F403350_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_TrackedDevicePosition_mE35CE9AAF13D86E282E25221AFC12A387F403350(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/UIActions::get_TrackedDeviceOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDeviceOrientation_mA4B734C44E0419328E96984AE9E42F5CAE435FB8 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @TrackedDeviceOrientation => m_Wrapper.m_UI_TrackedDeviceOrientation;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_TrackedDeviceOrientation_17;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDeviceOrientation_mA4B734C44E0419328E96984AE9E42F5CAE435FB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_TrackedDeviceOrientation_mA4B734C44E0419328E96984AE9E42F5CAE435FB8(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions/UIActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* UIActions_Get_m3CE484A87A01441CD69373F377B4F1A7116AE314 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_UI; }
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_UI_6;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* UIActions_Get_m3CE484A87A01441CD69373F377B4F1A7116AE314_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = UIActions_Get_m3CE484A87A01441CD69373F377B4F1A7116AE314(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/UIActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_Enable_mC70DA0912FFE1FFAF2647E13F7014FCFA29566A8 (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = UIActions_Get_m3CE484A87A01441CD69373F377B4F1A7116AE314(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void UIActions_Enable_mC70DA0912FFE1FFAF2647E13F7014FCFA29566A8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	UIActions_Enable_mC70DA0912FFE1FFAF2647E13F7014FCFA29566A8(_thisAdjusted, method);
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/UIActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_Disable_m932B45E23D9E8CDB1DD452E5B44CEC703CA29CBB (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = UIActions_Get_m3CE484A87A01441CD69373F377B4F1A7116AE314(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void UIActions_Disable_m932B45E23D9E8CDB1DD452E5B44CEC703CA29CBB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	UIActions_Disable_m932B45E23D9E8CDB1DD452E5B44CEC703CA29CBB(_thisAdjusted, method);
}
// System.Boolean UnityEngine.InputSystem.ProtoInputActions/UIActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIActions_get_enabled_m9C35D0948A2B8C456A6817D6AA9898BC0F79DE2C (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = UIActions_Get_m3CE484A87A01441CD69373F377B4F1A7116AE314(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool UIActions_get_enabled_m9C35D0948A2B8C456A6817D6AA9898BC0F79DE2C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	bool _returnValue;
	_returnValue = UIActions_get_enabled_m9C35D0948A2B8C456A6817D6AA9898BC0F79DE2C(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions/UIActions::op_Implicit(UnityEngine.InputSystem.ProtoInputActions/UIActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* UIActions_op_Implicit_m9DFF38D70BD7112C9E1F3FD66844578811C7A8FA (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97 ___set0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator InputActionMap(UIActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = UIActions_Get_m3CE484A87A01441CD69373F377B4F1A7116AE314((&___set0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/UIActions::SetCallbacks(UnityEngine.InputSystem.ProtoInputActions/IUIActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_SetCallbacks_mBF13197653F0E7D19B28AA4574A4972CB4A360FC (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_UIActionsCallbackInterface != null)
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_UIActionsCallbackInterface_7;
		if (!L_1)
		{
			goto IL_040c;
		}
	}
	{
		// @Navigate.started -= m_Wrapper.m_UIActionsCallbackInterface.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = UIActions_get_Navigate_m4EF08E5A937B7DD9A3A97B69AAADD650FE3ACB83(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_3 = __this->___m_Wrapper_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_5 = L_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_6 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_6, L_5, (intptr_t)((void*)GetInterfaceMethodInfo(L_5, 0, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_2);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_2, L_6, NULL);
		// @Navigate.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = UIActions_get_Navigate_m4EF08E5A937B7DD9A3A97B69AAADD650FE3ACB83(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_8 = __this->___m_Wrapper_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_10 = L_9;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, L_10, (intptr_t)((void*)GetInterfaceMethodInfo(L_10, 0, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_7);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_7, L_11, NULL);
		// @Navigate.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = UIActions_get_Navigate_m4EF08E5A937B7DD9A3A97B69AAADD650FE3ACB83(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_13 = __this->___m_Wrapper_0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_15 = L_14;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_16 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_16, L_15, (intptr_t)((void*)GetInterfaceMethodInfo(L_15, 0, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_12);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_12, L_16, NULL);
		// @Submit.started -= m_Wrapper.m_UIActionsCallbackInterface.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = UIActions_get_Submit_mCA278E2C88C727A29049428965DB28E408AA86BA(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_18 = __this->___m_Wrapper_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_20 = L_19;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_21 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_21, L_20, (intptr_t)((void*)GetInterfaceMethodInfo(L_20, 1, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_17);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_17, L_21, NULL);
		// @Submit.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = UIActions_get_Submit_mCA278E2C88C727A29049428965DB28E408AA86BA(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_23 = __this->___m_Wrapper_0;
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_25 = L_24;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_26 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_26, L_25, (intptr_t)((void*)GetInterfaceMethodInfo(L_25, 1, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_22);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_22, L_26, NULL);
		// @Submit.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_27;
		L_27 = UIActions_get_Submit_mCA278E2C88C727A29049428965DB28E408AA86BA(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_28 = __this->___m_Wrapper_0;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_30 = L_29;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, L_30, (intptr_t)((void*)GetInterfaceMethodInfo(L_30, 1, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_27);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_27, L_31, NULL);
		// @Cancel.started -= m_Wrapper.m_UIActionsCallbackInterface.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32;
		L_32 = UIActions_get_Cancel_mDF7CCF958B112205C16E6D75EB516A865C380E60(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_33 = __this->___m_Wrapper_0;
		NullCheck(L_33);
		RuntimeObject* L_34 = L_33->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_35 = L_34;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_36 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_36, L_35, (intptr_t)((void*)GetInterfaceMethodInfo(L_35, 2, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_32);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_32, L_36, NULL);
		// @Cancel.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37;
		L_37 = UIActions_get_Cancel_mDF7CCF958B112205C16E6D75EB516A865C380E60(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_38 = __this->___m_Wrapper_0;
		NullCheck(L_38);
		RuntimeObject* L_39 = L_38->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_40 = L_39;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_41 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_41, L_40, (intptr_t)((void*)GetInterfaceMethodInfo(L_40, 2, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_37);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_37, L_41, NULL);
		// @Cancel.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_42;
		L_42 = UIActions_get_Cancel_mDF7CCF958B112205C16E6D75EB516A865C380E60(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_43 = __this->___m_Wrapper_0;
		NullCheck(L_43);
		RuntimeObject* L_44 = L_43->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_45 = L_44;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_46 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_46, L_45, (intptr_t)((void*)GetInterfaceMethodInfo(L_45, 2, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_42);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_42, L_46, NULL);
		// @Point.started -= m_Wrapper.m_UIActionsCallbackInterface.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_47;
		L_47 = UIActions_get_Point_mC9CAB7021FA57885D2C9162442E581F24DA54E1A(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_48 = __this->___m_Wrapper_0;
		NullCheck(L_48);
		RuntimeObject* L_49 = L_48->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_50 = L_49;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_51 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_51, L_50, (intptr_t)((void*)GetInterfaceMethodInfo(L_50, 3, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_47);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_47, L_51, NULL);
		// @Point.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_52;
		L_52 = UIActions_get_Point_mC9CAB7021FA57885D2C9162442E581F24DA54E1A(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_53 = __this->___m_Wrapper_0;
		NullCheck(L_53);
		RuntimeObject* L_54 = L_53->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_55 = L_54;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_56 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_56, L_55, (intptr_t)((void*)GetInterfaceMethodInfo(L_55, 3, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_52);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_52, L_56, NULL);
		// @Point.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_57;
		L_57 = UIActions_get_Point_mC9CAB7021FA57885D2C9162442E581F24DA54E1A(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_58 = __this->___m_Wrapper_0;
		NullCheck(L_58);
		RuntimeObject* L_59 = L_58->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_60 = L_59;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_61 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_61, L_60, (intptr_t)((void*)GetInterfaceMethodInfo(L_60, 3, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_57);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_57, L_61, NULL);
		// @Click.started -= m_Wrapper.m_UIActionsCallbackInterface.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_62;
		L_62 = UIActions_get_Click_m3BA6A58364D596CFE32944A65432A7CFBDA34CE6(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_63 = __this->___m_Wrapper_0;
		NullCheck(L_63);
		RuntimeObject* L_64 = L_63->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_65 = L_64;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_66 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_66, L_65, (intptr_t)((void*)GetInterfaceMethodInfo(L_65, 4, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_62);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_62, L_66, NULL);
		// @Click.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_67;
		L_67 = UIActions_get_Click_m3BA6A58364D596CFE32944A65432A7CFBDA34CE6(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_68 = __this->___m_Wrapper_0;
		NullCheck(L_68);
		RuntimeObject* L_69 = L_68->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_70 = L_69;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_71 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_71, L_70, (intptr_t)((void*)GetInterfaceMethodInfo(L_70, 4, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_67);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_67, L_71, NULL);
		// @Click.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_72;
		L_72 = UIActions_get_Click_m3BA6A58364D596CFE32944A65432A7CFBDA34CE6(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_73 = __this->___m_Wrapper_0;
		NullCheck(L_73);
		RuntimeObject* L_74 = L_73->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_75 = L_74;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_76 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_76, L_75, (intptr_t)((void*)GetInterfaceMethodInfo(L_75, 4, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_72);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_72, L_76, NULL);
		// @ScrollWheel.started -= m_Wrapper.m_UIActionsCallbackInterface.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_77;
		L_77 = UIActions_get_ScrollWheel_m27F6A5AD6FE4C0ABE7927ACDDA9E684F43033A0B(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_78 = __this->___m_Wrapper_0;
		NullCheck(L_78);
		RuntimeObject* L_79 = L_78->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_80 = L_79;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_81 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_81, L_80, (intptr_t)((void*)GetInterfaceMethodInfo(L_80, 5, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_77);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_77, L_81, NULL);
		// @ScrollWheel.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_82;
		L_82 = UIActions_get_ScrollWheel_m27F6A5AD6FE4C0ABE7927ACDDA9E684F43033A0B(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_83 = __this->___m_Wrapper_0;
		NullCheck(L_83);
		RuntimeObject* L_84 = L_83->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_85 = L_84;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_86 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_86);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_86, L_85, (intptr_t)((void*)GetInterfaceMethodInfo(L_85, 5, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_82);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_82, L_86, NULL);
		// @ScrollWheel.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_87;
		L_87 = UIActions_get_ScrollWheel_m27F6A5AD6FE4C0ABE7927ACDDA9E684F43033A0B(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_88 = __this->___m_Wrapper_0;
		NullCheck(L_88);
		RuntimeObject* L_89 = L_88->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_90 = L_89;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_91 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_91, L_90, (intptr_t)((void*)GetInterfaceMethodInfo(L_90, 5, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_87);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_87, L_91, NULL);
		// @MiddleClick.started -= m_Wrapper.m_UIActionsCallbackInterface.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_92;
		L_92 = UIActions_get_MiddleClick_mF1EEF8F09BBB4A273E363A7B36AF23FF424C840D(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_93 = __this->___m_Wrapper_0;
		NullCheck(L_93);
		RuntimeObject* L_94 = L_93->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_95 = L_94;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_96 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_96);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_96, L_95, (intptr_t)((void*)GetInterfaceMethodInfo(L_95, 6, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_92);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_92, L_96, NULL);
		// @MiddleClick.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_97;
		L_97 = UIActions_get_MiddleClick_mF1EEF8F09BBB4A273E363A7B36AF23FF424C840D(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_98 = __this->___m_Wrapper_0;
		NullCheck(L_98);
		RuntimeObject* L_99 = L_98->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_100 = L_99;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_101 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_101);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_101, L_100, (intptr_t)((void*)GetInterfaceMethodInfo(L_100, 6, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_97);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_97, L_101, NULL);
		// @MiddleClick.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_102;
		L_102 = UIActions_get_MiddleClick_mF1EEF8F09BBB4A273E363A7B36AF23FF424C840D(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_103 = __this->___m_Wrapper_0;
		NullCheck(L_103);
		RuntimeObject* L_104 = L_103->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_105 = L_104;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_106 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_106);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_106, L_105, (intptr_t)((void*)GetInterfaceMethodInfo(L_105, 6, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_102);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_102, L_106, NULL);
		// @RightClick.started -= m_Wrapper.m_UIActionsCallbackInterface.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_107;
		L_107 = UIActions_get_RightClick_m894997ECBAB36DA1B2EBF1D48978514535B9CEA3(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_108 = __this->___m_Wrapper_0;
		NullCheck(L_108);
		RuntimeObject* L_109 = L_108->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_110 = L_109;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_111 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_111);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_111, L_110, (intptr_t)((void*)GetInterfaceMethodInfo(L_110, 7, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_107);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_107, L_111, NULL);
		// @RightClick.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_112;
		L_112 = UIActions_get_RightClick_m894997ECBAB36DA1B2EBF1D48978514535B9CEA3(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_113 = __this->___m_Wrapper_0;
		NullCheck(L_113);
		RuntimeObject* L_114 = L_113->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_115 = L_114;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_116 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_116);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_116, L_115, (intptr_t)((void*)GetInterfaceMethodInfo(L_115, 7, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_112);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_112, L_116, NULL);
		// @RightClick.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_117;
		L_117 = UIActions_get_RightClick_m894997ECBAB36DA1B2EBF1D48978514535B9CEA3(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_118 = __this->___m_Wrapper_0;
		NullCheck(L_118);
		RuntimeObject* L_119 = L_118->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_120 = L_119;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_121 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_121);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_121, L_120, (intptr_t)((void*)GetInterfaceMethodInfo(L_120, 7, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_117);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_117, L_121, NULL);
		// @TrackedDevicePosition.started -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_122;
		L_122 = UIActions_get_TrackedDevicePosition_mE35CE9AAF13D86E282E25221AFC12A387F403350(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_123 = __this->___m_Wrapper_0;
		NullCheck(L_123);
		RuntimeObject* L_124 = L_123->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_125 = L_124;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_126 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_126);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_126, L_125, (intptr_t)((void*)GetInterfaceMethodInfo(L_125, 8, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_122);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_122, L_126, NULL);
		// @TrackedDevicePosition.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_127;
		L_127 = UIActions_get_TrackedDevicePosition_mE35CE9AAF13D86E282E25221AFC12A387F403350(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_128 = __this->___m_Wrapper_0;
		NullCheck(L_128);
		RuntimeObject* L_129 = L_128->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_130 = L_129;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_131 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_131);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_131, L_130, (intptr_t)((void*)GetInterfaceMethodInfo(L_130, 8, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_127);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_127, L_131, NULL);
		// @TrackedDevicePosition.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_132;
		L_132 = UIActions_get_TrackedDevicePosition_mE35CE9AAF13D86E282E25221AFC12A387F403350(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_133 = __this->___m_Wrapper_0;
		NullCheck(L_133);
		RuntimeObject* L_134 = L_133->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_135 = L_134;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_136 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_136);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_136, L_135, (intptr_t)((void*)GetInterfaceMethodInfo(L_135, 8, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_132);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_132, L_136, NULL);
		// @TrackedDeviceOrientation.started -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_137;
		L_137 = UIActions_get_TrackedDeviceOrientation_mA4B734C44E0419328E96984AE9E42F5CAE435FB8(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_138 = __this->___m_Wrapper_0;
		NullCheck(L_138);
		RuntimeObject* L_139 = L_138->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_140 = L_139;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_141 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_141);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_141, L_140, (intptr_t)((void*)GetInterfaceMethodInfo(L_140, 9, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_137);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_137, L_141, NULL);
		// @TrackedDeviceOrientation.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_142;
		L_142 = UIActions_get_TrackedDeviceOrientation_mA4B734C44E0419328E96984AE9E42F5CAE435FB8(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_143 = __this->___m_Wrapper_0;
		NullCheck(L_143);
		RuntimeObject* L_144 = L_143->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_145 = L_144;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_146 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_146);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_146, L_145, (intptr_t)((void*)GetInterfaceMethodInfo(L_145, 9, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_142);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_142, L_146, NULL);
		// @TrackedDeviceOrientation.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_147;
		L_147 = UIActions_get_TrackedDeviceOrientation_mA4B734C44E0419328E96984AE9E42F5CAE435FB8(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_148 = __this->___m_Wrapper_0;
		NullCheck(L_148);
		RuntimeObject* L_149 = L_148->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_150 = L_149;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_151 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_151);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_151, L_150, (intptr_t)((void*)GetInterfaceMethodInfo(L_150, 9, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_147);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_147, L_151, NULL);
	}

IL_040c:
	{
		// m_Wrapper.m_UIActionsCallbackInterface = instance;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_152 = __this->___m_Wrapper_0;
		RuntimeObject* L_153 = ___instance0;
		NullCheck(L_152);
		L_152->___m_UIActionsCallbackInterface_7 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&L_152->___m_UIActionsCallbackInterface_7), (void*)L_153);
		// if (instance != null)
		RuntimeObject* L_154 = ___instance0;
		if (!L_154)
		{
			goto IL_06ee;
		}
	}
	{
		// @Navigate.started += instance.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_155;
		L_155 = UIActions_get_Navigate_m4EF08E5A937B7DD9A3A97B69AAADD650FE3ACB83(__this, NULL);
		RuntimeObject* L_156 = ___instance0;
		RuntimeObject* L_157 = L_156;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_158 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_158);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_158, L_157, (intptr_t)((void*)GetInterfaceMethodInfo(L_157, 0, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_155);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_155, L_158, NULL);
		// @Navigate.performed += instance.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_159;
		L_159 = UIActions_get_Navigate_m4EF08E5A937B7DD9A3A97B69AAADD650FE3ACB83(__this, NULL);
		RuntimeObject* L_160 = ___instance0;
		RuntimeObject* L_161 = L_160;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_162 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_162);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_162, L_161, (intptr_t)((void*)GetInterfaceMethodInfo(L_161, 0, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_159);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_159, L_162, NULL);
		// @Navigate.canceled += instance.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_163;
		L_163 = UIActions_get_Navigate_m4EF08E5A937B7DD9A3A97B69AAADD650FE3ACB83(__this, NULL);
		RuntimeObject* L_164 = ___instance0;
		RuntimeObject* L_165 = L_164;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_166 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_166);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_166, L_165, (intptr_t)((void*)GetInterfaceMethodInfo(L_165, 0, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_163);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_163, L_166, NULL);
		// @Submit.started += instance.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_167;
		L_167 = UIActions_get_Submit_mCA278E2C88C727A29049428965DB28E408AA86BA(__this, NULL);
		RuntimeObject* L_168 = ___instance0;
		RuntimeObject* L_169 = L_168;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_170 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_170);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_170, L_169, (intptr_t)((void*)GetInterfaceMethodInfo(L_169, 1, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_167);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_167, L_170, NULL);
		// @Submit.performed += instance.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_171;
		L_171 = UIActions_get_Submit_mCA278E2C88C727A29049428965DB28E408AA86BA(__this, NULL);
		RuntimeObject* L_172 = ___instance0;
		RuntimeObject* L_173 = L_172;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_174 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_174);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_174, L_173, (intptr_t)((void*)GetInterfaceMethodInfo(L_173, 1, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_171);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_171, L_174, NULL);
		// @Submit.canceled += instance.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_175;
		L_175 = UIActions_get_Submit_mCA278E2C88C727A29049428965DB28E408AA86BA(__this, NULL);
		RuntimeObject* L_176 = ___instance0;
		RuntimeObject* L_177 = L_176;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_178 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_178);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_178, L_177, (intptr_t)((void*)GetInterfaceMethodInfo(L_177, 1, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_175);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_175, L_178, NULL);
		// @Cancel.started += instance.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_179;
		L_179 = UIActions_get_Cancel_mDF7CCF958B112205C16E6D75EB516A865C380E60(__this, NULL);
		RuntimeObject* L_180 = ___instance0;
		RuntimeObject* L_181 = L_180;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_182 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_182);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_182, L_181, (intptr_t)((void*)GetInterfaceMethodInfo(L_181, 2, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_179);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_179, L_182, NULL);
		// @Cancel.performed += instance.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_183;
		L_183 = UIActions_get_Cancel_mDF7CCF958B112205C16E6D75EB516A865C380E60(__this, NULL);
		RuntimeObject* L_184 = ___instance0;
		RuntimeObject* L_185 = L_184;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_186 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_186);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_186, L_185, (intptr_t)((void*)GetInterfaceMethodInfo(L_185, 2, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_183);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_183, L_186, NULL);
		// @Cancel.canceled += instance.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_187;
		L_187 = UIActions_get_Cancel_mDF7CCF958B112205C16E6D75EB516A865C380E60(__this, NULL);
		RuntimeObject* L_188 = ___instance0;
		RuntimeObject* L_189 = L_188;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_190 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_190);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_190, L_189, (intptr_t)((void*)GetInterfaceMethodInfo(L_189, 2, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_187);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_187, L_190, NULL);
		// @Point.started += instance.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_191;
		L_191 = UIActions_get_Point_mC9CAB7021FA57885D2C9162442E581F24DA54E1A(__this, NULL);
		RuntimeObject* L_192 = ___instance0;
		RuntimeObject* L_193 = L_192;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_194 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_194);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_194, L_193, (intptr_t)((void*)GetInterfaceMethodInfo(L_193, 3, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_191);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_191, L_194, NULL);
		// @Point.performed += instance.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_195;
		L_195 = UIActions_get_Point_mC9CAB7021FA57885D2C9162442E581F24DA54E1A(__this, NULL);
		RuntimeObject* L_196 = ___instance0;
		RuntimeObject* L_197 = L_196;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_198 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_198);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_198, L_197, (intptr_t)((void*)GetInterfaceMethodInfo(L_197, 3, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_195);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_195, L_198, NULL);
		// @Point.canceled += instance.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_199;
		L_199 = UIActions_get_Point_mC9CAB7021FA57885D2C9162442E581F24DA54E1A(__this, NULL);
		RuntimeObject* L_200 = ___instance0;
		RuntimeObject* L_201 = L_200;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_202 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_202);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_202, L_201, (intptr_t)((void*)GetInterfaceMethodInfo(L_201, 3, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_199);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_199, L_202, NULL);
		// @Click.started += instance.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_203;
		L_203 = UIActions_get_Click_m3BA6A58364D596CFE32944A65432A7CFBDA34CE6(__this, NULL);
		RuntimeObject* L_204 = ___instance0;
		RuntimeObject* L_205 = L_204;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_206 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_206);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_206, L_205, (intptr_t)((void*)GetInterfaceMethodInfo(L_205, 4, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_203);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_203, L_206, NULL);
		// @Click.performed += instance.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_207;
		L_207 = UIActions_get_Click_m3BA6A58364D596CFE32944A65432A7CFBDA34CE6(__this, NULL);
		RuntimeObject* L_208 = ___instance0;
		RuntimeObject* L_209 = L_208;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_210 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_210);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_210, L_209, (intptr_t)((void*)GetInterfaceMethodInfo(L_209, 4, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_207);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_207, L_210, NULL);
		// @Click.canceled += instance.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_211;
		L_211 = UIActions_get_Click_m3BA6A58364D596CFE32944A65432A7CFBDA34CE6(__this, NULL);
		RuntimeObject* L_212 = ___instance0;
		RuntimeObject* L_213 = L_212;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_214 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_214);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_214, L_213, (intptr_t)((void*)GetInterfaceMethodInfo(L_213, 4, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_211);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_211, L_214, NULL);
		// @ScrollWheel.started += instance.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_215;
		L_215 = UIActions_get_ScrollWheel_m27F6A5AD6FE4C0ABE7927ACDDA9E684F43033A0B(__this, NULL);
		RuntimeObject* L_216 = ___instance0;
		RuntimeObject* L_217 = L_216;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_218 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_218);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_218, L_217, (intptr_t)((void*)GetInterfaceMethodInfo(L_217, 5, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_215);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_215, L_218, NULL);
		// @ScrollWheel.performed += instance.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_219;
		L_219 = UIActions_get_ScrollWheel_m27F6A5AD6FE4C0ABE7927ACDDA9E684F43033A0B(__this, NULL);
		RuntimeObject* L_220 = ___instance0;
		RuntimeObject* L_221 = L_220;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_222 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_222);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_222, L_221, (intptr_t)((void*)GetInterfaceMethodInfo(L_221, 5, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_219);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_219, L_222, NULL);
		// @ScrollWheel.canceled += instance.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_223;
		L_223 = UIActions_get_ScrollWheel_m27F6A5AD6FE4C0ABE7927ACDDA9E684F43033A0B(__this, NULL);
		RuntimeObject* L_224 = ___instance0;
		RuntimeObject* L_225 = L_224;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_226 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_226);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_226, L_225, (intptr_t)((void*)GetInterfaceMethodInfo(L_225, 5, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_223);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_223, L_226, NULL);
		// @MiddleClick.started += instance.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_227;
		L_227 = UIActions_get_MiddleClick_mF1EEF8F09BBB4A273E363A7B36AF23FF424C840D(__this, NULL);
		RuntimeObject* L_228 = ___instance0;
		RuntimeObject* L_229 = L_228;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_230 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_230);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_230, L_229, (intptr_t)((void*)GetInterfaceMethodInfo(L_229, 6, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_227);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_227, L_230, NULL);
		// @MiddleClick.performed += instance.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_231;
		L_231 = UIActions_get_MiddleClick_mF1EEF8F09BBB4A273E363A7B36AF23FF424C840D(__this, NULL);
		RuntimeObject* L_232 = ___instance0;
		RuntimeObject* L_233 = L_232;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_234 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_234);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_234, L_233, (intptr_t)((void*)GetInterfaceMethodInfo(L_233, 6, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_231);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_231, L_234, NULL);
		// @MiddleClick.canceled += instance.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_235;
		L_235 = UIActions_get_MiddleClick_mF1EEF8F09BBB4A273E363A7B36AF23FF424C840D(__this, NULL);
		RuntimeObject* L_236 = ___instance0;
		RuntimeObject* L_237 = L_236;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_238 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_238);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_238, L_237, (intptr_t)((void*)GetInterfaceMethodInfo(L_237, 6, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_235);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_235, L_238, NULL);
		// @RightClick.started += instance.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_239;
		L_239 = UIActions_get_RightClick_m894997ECBAB36DA1B2EBF1D48978514535B9CEA3(__this, NULL);
		RuntimeObject* L_240 = ___instance0;
		RuntimeObject* L_241 = L_240;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_242 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_242);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_242, L_241, (intptr_t)((void*)GetInterfaceMethodInfo(L_241, 7, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_239);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_239, L_242, NULL);
		// @RightClick.performed += instance.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_243;
		L_243 = UIActions_get_RightClick_m894997ECBAB36DA1B2EBF1D48978514535B9CEA3(__this, NULL);
		RuntimeObject* L_244 = ___instance0;
		RuntimeObject* L_245 = L_244;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_246 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_246);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_246, L_245, (intptr_t)((void*)GetInterfaceMethodInfo(L_245, 7, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_243);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_243, L_246, NULL);
		// @RightClick.canceled += instance.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_247;
		L_247 = UIActions_get_RightClick_m894997ECBAB36DA1B2EBF1D48978514535B9CEA3(__this, NULL);
		RuntimeObject* L_248 = ___instance0;
		RuntimeObject* L_249 = L_248;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_250 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_250);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_250, L_249, (intptr_t)((void*)GetInterfaceMethodInfo(L_249, 7, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_247);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_247, L_250, NULL);
		// @TrackedDevicePosition.started += instance.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_251;
		L_251 = UIActions_get_TrackedDevicePosition_mE35CE9AAF13D86E282E25221AFC12A387F403350(__this, NULL);
		RuntimeObject* L_252 = ___instance0;
		RuntimeObject* L_253 = L_252;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_254 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_254);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_254, L_253, (intptr_t)((void*)GetInterfaceMethodInfo(L_253, 8, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_251);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_251, L_254, NULL);
		// @TrackedDevicePosition.performed += instance.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_255;
		L_255 = UIActions_get_TrackedDevicePosition_mE35CE9AAF13D86E282E25221AFC12A387F403350(__this, NULL);
		RuntimeObject* L_256 = ___instance0;
		RuntimeObject* L_257 = L_256;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_258 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_258);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_258, L_257, (intptr_t)((void*)GetInterfaceMethodInfo(L_257, 8, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_255);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_255, L_258, NULL);
		// @TrackedDevicePosition.canceled += instance.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_259;
		L_259 = UIActions_get_TrackedDevicePosition_mE35CE9AAF13D86E282E25221AFC12A387F403350(__this, NULL);
		RuntimeObject* L_260 = ___instance0;
		RuntimeObject* L_261 = L_260;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_262 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_262);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_262, L_261, (intptr_t)((void*)GetInterfaceMethodInfo(L_261, 8, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_259);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_259, L_262, NULL);
		// @TrackedDeviceOrientation.started += instance.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_263;
		L_263 = UIActions_get_TrackedDeviceOrientation_mA4B734C44E0419328E96984AE9E42F5CAE435FB8(__this, NULL);
		RuntimeObject* L_264 = ___instance0;
		RuntimeObject* L_265 = L_264;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_266 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_266);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_266, L_265, (intptr_t)((void*)GetInterfaceMethodInfo(L_265, 9, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_263);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_263, L_266, NULL);
		// @TrackedDeviceOrientation.performed += instance.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_267;
		L_267 = UIActions_get_TrackedDeviceOrientation_mA4B734C44E0419328E96984AE9E42F5CAE435FB8(__this, NULL);
		RuntimeObject* L_268 = ___instance0;
		RuntimeObject* L_269 = L_268;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_270 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_270);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_270, L_269, (intptr_t)((void*)GetInterfaceMethodInfo(L_269, 9, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_267);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_267, L_270, NULL);
		// @TrackedDeviceOrientation.canceled += instance.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_271;
		L_271 = UIActions_get_TrackedDeviceOrientation_mA4B734C44E0419328E96984AE9E42F5CAE435FB8(__this, NULL);
		RuntimeObject* L_272 = ___instance0;
		RuntimeObject* L_273 = L_272;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_274 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_274);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_274, L_273, (intptr_t)((void*)GetInterfaceMethodInfo(L_273, 9, IUIActions_t16B53C74B5209A5C1A63EEAB694C578D64359E0F_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_271);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_271, L_274, NULL);
	}

IL_06ee:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UIActions_SetCallbacks_mBF13197653F0E7D19B28AA4574A4972CB4A360FC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97*>(__this + _offset);
	UIActions_SetCallbacks_mBF13197653F0E7D19B28AA4574A4972CB4A360FC(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.InputSystem.ProtoInputActions/ToquesActions
IL2CPP_EXTERN_C void ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshal_pinvoke(const ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD& unmarshaled, ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ToquesActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshal_pinvoke_back(const ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshaled_pinvoke& marshaled, ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ToquesActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.ProtoInputActions/ToquesActions
IL2CPP_EXTERN_C void ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshal_pinvoke_cleanup(ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.InputSystem.ProtoInputActions/ToquesActions
IL2CPP_EXTERN_C void ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshal_com(const ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD& unmarshaled, ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ToquesActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshal_com_back(const ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshaled_com& marshaled, ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'ToquesActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.ProtoInputActions/ToquesActions
IL2CPP_EXTERN_C void ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshal_com_cleanup(ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/ToquesActions::.ctor(UnityEngine.InputSystem.ProtoInputActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToquesActions__ctor_m9582D36AB7554080A7F742987C112835035C44A1 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public ToquesActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public ToquesActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void ToquesActions__ctor_m9582D36AB7554080A7F742987C112835035C44A1_AdjustorThunk (RuntimeObject* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method)
{
	ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD*>(__this + _offset);
	ToquesActions__ctor_m9582D36AB7554080A7F742987C112835035C44A1_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/ToquesActions::get_Toque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ToquesActions_get_Toque_mBAB63CFBFB771F61173CBC9CCBCEA4F5233B1318 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Toque => m_Wrapper.m_Toques_Toque;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Toques_Toque_20;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ToquesActions_get_Toque_mBAB63CFBFB771F61173CBC9CCBCEA4F5233B1318_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = ToquesActions_get_Toque_mBAB63CFBFB771F61173CBC9CCBCEA4F5233B1318(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.ProtoInputActions/ToquesActions::get_PosicionToque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ToquesActions_get_PosicionToque_m0432B836643EE607B0C0B4C143D7AA6184C53BE7 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @PosicionToque => m_Wrapper.m_Toques_PosicionToque;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Toques_PosicionToque_21;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ToquesActions_get_PosicionToque_m0432B836643EE607B0C0B4C143D7AA6184C53BE7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = ToquesActions_get_PosicionToque_m0432B836643EE607B0C0B4C143D7AA6184C53BE7(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions/ToquesActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ToquesActions_Get_mD66DEAFB791A6710B9FD47F2D4A12E66C4A0D757 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_Toques; }
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Toques_18;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ToquesActions_Get_mD66DEAFB791A6710B9FD47F2D4A12E66C4A0D757_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = ToquesActions_Get_mD66DEAFB791A6710B9FD47F2D4A12E66C4A0D757(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/ToquesActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToquesActions_Enable_m995823BB427EBE22576DF08B84B9D1B738E4BA93 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ToquesActions_Get_mD66DEAFB791A6710B9FD47F2D4A12E66C4A0D757(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void ToquesActions_Enable_m995823BB427EBE22576DF08B84B9D1B738E4BA93_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD*>(__this + _offset);
	ToquesActions_Enable_m995823BB427EBE22576DF08B84B9D1B738E4BA93(_thisAdjusted, method);
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/ToquesActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToquesActions_Disable_m9C781318082A3A7A6009104ABE77345F912E916A (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ToquesActions_Get_mD66DEAFB791A6710B9FD47F2D4A12E66C4A0D757(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void ToquesActions_Disable_m9C781318082A3A7A6009104ABE77345F912E916A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD*>(__this + _offset);
	ToquesActions_Disable_m9C781318082A3A7A6009104ABE77345F912E916A(_thisAdjusted, method);
}
// System.Boolean UnityEngine.InputSystem.ProtoInputActions/ToquesActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToquesActions_get_enabled_m6D2AA31071EF247055915B65132F50699FDB81D6 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ToquesActions_Get_mD66DEAFB791A6710B9FD47F2D4A12E66C4A0D757(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ToquesActions_get_enabled_m6D2AA31071EF247055915B65132F50699FDB81D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD*>(__this + _offset);
	bool _returnValue;
	_returnValue = ToquesActions_get_enabled_m6D2AA31071EF247055915B65132F50699FDB81D6(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.ProtoInputActions/ToquesActions::op_Implicit(UnityEngine.InputSystem.ProtoInputActions/ToquesActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ToquesActions_op_Implicit_mAB21F21F6DE949348A1C71615BCCF4B73FDBB584 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD ___set0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator InputActionMap(ToquesActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = ToquesActions_Get_mD66DEAFB791A6710B9FD47F2D4A12E66C4A0D757((&___set0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.ProtoInputActions/ToquesActions::SetCallbacks(UnityEngine.InputSystem.ProtoInputActions/IToquesActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToquesActions_SetCallbacks_m33CD7BC5B886DC157B9107C77823140C132A92F1 (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_ToquesActionsCallbackInterface != null)
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_ToquesActionsCallbackInterface_19;
		if (!L_1)
		{
			goto IL_00dc;
		}
	}
	{
		// @Toque.started -= m_Wrapper.m_ToquesActionsCallbackInterface.OnToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = ToquesActions_get_Toque_mBAB63CFBFB771F61173CBC9CCBCEA4F5233B1318(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_3 = __this->___m_Wrapper_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___m_ToquesActionsCallbackInterface_19;
		RuntimeObject* L_5 = L_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_6 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_6, L_5, (intptr_t)((void*)GetInterfaceMethodInfo(L_5, 0, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_2);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_2, L_6, NULL);
		// @Toque.performed -= m_Wrapper.m_ToquesActionsCallbackInterface.OnToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = ToquesActions_get_Toque_mBAB63CFBFB771F61173CBC9CCBCEA4F5233B1318(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_8 = __this->___m_Wrapper_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___m_ToquesActionsCallbackInterface_19;
		RuntimeObject* L_10 = L_9;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, L_10, (intptr_t)((void*)GetInterfaceMethodInfo(L_10, 0, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_7);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_7, L_11, NULL);
		// @Toque.canceled -= m_Wrapper.m_ToquesActionsCallbackInterface.OnToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = ToquesActions_get_Toque_mBAB63CFBFB771F61173CBC9CCBCEA4F5233B1318(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_13 = __this->___m_Wrapper_0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___m_ToquesActionsCallbackInterface_19;
		RuntimeObject* L_15 = L_14;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_16 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_16, L_15, (intptr_t)((void*)GetInterfaceMethodInfo(L_15, 0, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_12);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_12, L_16, NULL);
		// @PosicionToque.started -= m_Wrapper.m_ToquesActionsCallbackInterface.OnPosicionToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = ToquesActions_get_PosicionToque_m0432B836643EE607B0C0B4C143D7AA6184C53BE7(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_18 = __this->___m_Wrapper_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___m_ToquesActionsCallbackInterface_19;
		RuntimeObject* L_20 = L_19;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_21 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_21, L_20, (intptr_t)((void*)GetInterfaceMethodInfo(L_20, 1, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_17);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_17, L_21, NULL);
		// @PosicionToque.performed -= m_Wrapper.m_ToquesActionsCallbackInterface.OnPosicionToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = ToquesActions_get_PosicionToque_m0432B836643EE607B0C0B4C143D7AA6184C53BE7(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_23 = __this->___m_Wrapper_0;
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->___m_ToquesActionsCallbackInterface_19;
		RuntimeObject* L_25 = L_24;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_26 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_26, L_25, (intptr_t)((void*)GetInterfaceMethodInfo(L_25, 1, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_22);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_22, L_26, NULL);
		// @PosicionToque.canceled -= m_Wrapper.m_ToquesActionsCallbackInterface.OnPosicionToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_27;
		L_27 = ToquesActions_get_PosicionToque_m0432B836643EE607B0C0B4C143D7AA6184C53BE7(__this, NULL);
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_28 = __this->___m_Wrapper_0;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->___m_ToquesActionsCallbackInterface_19;
		RuntimeObject* L_30 = L_29;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, L_30, (intptr_t)((void*)GetInterfaceMethodInfo(L_30, 1, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_27);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_27, L_31, NULL);
	}

IL_00dc:
	{
		// m_Wrapper.m_ToquesActionsCallbackInterface = instance;
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_32 = __this->___m_Wrapper_0;
		RuntimeObject* L_33 = ___instance0;
		NullCheck(L_32);
		L_32->___m_ToquesActionsCallbackInterface_19 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___m_ToquesActionsCallbackInterface_19), (void*)L_33);
		// if (instance != null)
		RuntimeObject* L_34 = ___instance0;
		if (!L_34)
		{
			goto IL_017e;
		}
	}
	{
		// @Toque.started += instance.OnToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_35;
		L_35 = ToquesActions_get_Toque_mBAB63CFBFB771F61173CBC9CCBCEA4F5233B1318(__this, NULL);
		RuntimeObject* L_36 = ___instance0;
		RuntimeObject* L_37 = L_36;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_38 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_38, L_37, (intptr_t)((void*)GetInterfaceMethodInfo(L_37, 0, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_35);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_35, L_38, NULL);
		// @Toque.performed += instance.OnToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_39;
		L_39 = ToquesActions_get_Toque_mBAB63CFBFB771F61173CBC9CCBCEA4F5233B1318(__this, NULL);
		RuntimeObject* L_40 = ___instance0;
		RuntimeObject* L_41 = L_40;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_42 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_42, L_41, (intptr_t)((void*)GetInterfaceMethodInfo(L_41, 0, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_39);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_39, L_42, NULL);
		// @Toque.canceled += instance.OnToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_43;
		L_43 = ToquesActions_get_Toque_mBAB63CFBFB771F61173CBC9CCBCEA4F5233B1318(__this, NULL);
		RuntimeObject* L_44 = ___instance0;
		RuntimeObject* L_45 = L_44;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_46 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_46, L_45, (intptr_t)((void*)GetInterfaceMethodInfo(L_45, 0, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_43);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_43, L_46, NULL);
		// @PosicionToque.started += instance.OnPosicionToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_47;
		L_47 = ToquesActions_get_PosicionToque_m0432B836643EE607B0C0B4C143D7AA6184C53BE7(__this, NULL);
		RuntimeObject* L_48 = ___instance0;
		RuntimeObject* L_49 = L_48;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_50 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_50, L_49, (intptr_t)((void*)GetInterfaceMethodInfo(L_49, 1, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_47);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_47, L_50, NULL);
		// @PosicionToque.performed += instance.OnPosicionToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_51;
		L_51 = ToquesActions_get_PosicionToque_m0432B836643EE607B0C0B4C143D7AA6184C53BE7(__this, NULL);
		RuntimeObject* L_52 = ___instance0;
		RuntimeObject* L_53 = L_52;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_54 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_54, L_53, (intptr_t)((void*)GetInterfaceMethodInfo(L_53, 1, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_51);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_51, L_54, NULL);
		// @PosicionToque.canceled += instance.OnPosicionToque;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_55;
		L_55 = ToquesActions_get_PosicionToque_m0432B836643EE607B0C0B4C143D7AA6184C53BE7(__this, NULL);
		RuntimeObject* L_56 = ___instance0;
		RuntimeObject* L_57 = L_56;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_58 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_58, L_57, (intptr_t)((void*)GetInterfaceMethodInfo(L_57, 1, IToquesActions_t67C2341EAADF7DD10D8452B67E9CE5A8B4A870A0_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_55);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_55, L_58, NULL);
	}

IL_017e:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ToquesActions_SetCallbacks_m33CD7BC5B886DC157B9107C77823140C132A92F1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD*>(__this + _offset);
	ToquesActions_SetCallbacks_m33CD7BC5B886DC157B9107C77823140C132A92F1(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlataformaTocada_Invoke_m9038C39A90D74D37327FB3F905ABA80393A28508_inline (PlataformaTocada_t96A5F657D68CA314A313CD2B5BD867CFCA70F73E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plataforma0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___plataforma0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemigoObjetivoActualizado_Invoke_m725B70B7FD2EF6C1D114EF45987D353D4CB234DB_inline (EnemigoObjetivoActualizado_t5FA9F7FFD750624A79AE334EBA865B14CDE94433* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecursosModificados_Invoke_m340B8C1707EE297D13AA96CADBDE1902AE66220C_inline (RecursosModificados_tB54D4097E0D4F6C333B69EA821AC6DFA30020D1E* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
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
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
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
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjetivoDestruido_Invoke_m40CC28493208D36D41D5FAA3E512A6771A80E78C_inline (ObjetivoDestruido_tCC34B84C8C1977F151D931A997421B871BF79D54* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EstadoOleada_Invoke_m73642ACEB1F26F9360B2314091F1D4B65CEF6A4B_inline (EstadoOleada_t624124444A409220E55A51A344805FA19628DB3D* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ProtoInputActions_get_asset_m6C2100C07B036C08C5ACA0B94FC667505359418A_inline (ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BindingMask;
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_0 = __this->___m_BindingMask_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerActions__ctor_mE18985192A41375D63DCA50A825FF31555D4D133_inline (PlayerActions_tBDACE2894C542F918E7AC0C98673BF20BDE1A498* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public PlayerActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public PlayerActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIActions__ctor_m3912983C2EF9DFB75AC30682F0EB087A8C1AFCCE_inline (UIActions_tF3FDFAD882A9E79C99E1BD413DDC26B4070A1F97* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public UIActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public UIActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToquesActions__ctor_m9582D36AB7554080A7F742987C112835035C44A1_inline (ToquesActions_t7A47E47C27599CDB295B946CDD9145E039C31EAD* __this, ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public ToquesActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		ProtoInputActions_t921508E5EA160FC90A97F5D07C1877BBDFCA6B53* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public ToquesActions(@ProtoInputActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
