extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Cloth();
	RegisterModule_Cloth();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Grid();
	RegisterModule_Grid();

	void RegisterModule_HotReload();
	RegisterModule_HotReload();

	void RegisterModule_AssetBundle();
	RegisterModule_AssetBundle();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_SpriteMask();
	RegisterModule_SpriteMask();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCore();
	RegisterModule_TextCore();

	void RegisterModule_Tilemap();
	RegisterModule_Tilemap();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElementsNative();
	RegisterModule_UIElementsNative();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityWebRequestAssetBundle();
	RegisterModule_UnityWebRequestAssetBundle();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
namespace Unity { class ArticulationBody; } 
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; template <> void RegisterUnityClass<AudioFilter>(const char*);
class AudioChorusFilter; template <> void RegisterUnityClass<AudioChorusFilter>(const char*);
class AudioDistortionFilter; template <> void RegisterUnityClass<AudioDistortionFilter>(const char*);
class AudioEchoFilter; template <> void RegisterUnityClass<AudioEchoFilter>(const char*);
class AudioHighPassFilter; template <> void RegisterUnityClass<AudioHighPassFilter>(const char*);
class AudioLowPassFilter; template <> void RegisterUnityClass<AudioLowPassFilter>(const char*);
class AudioReverbFilter; template <> void RegisterUnityClass<AudioReverbFilter>(const char*);
class AudioReverbZone; template <> void RegisterUnityClass<AudioReverbZone>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } template <> void RegisterUnityClass<Unity::Cloth>(const char*);
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; template <> void RegisterUnityClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; template <> void RegisterUnityClass<CapsuleCollider2D>(const char*);
class CircleCollider2D; template <> void RegisterUnityClass<CircleCollider2D>(const char*);
class CompositeCollider2D; template <> void RegisterUnityClass<CompositeCollider2D>(const char*);
class EdgeCollider2D; template <> void RegisterUnityClass<EdgeCollider2D>(const char*);
class PolygonCollider2D; template <> void RegisterUnityClass<PolygonCollider2D>(const char*);
class TilemapCollider2D; 
class ConstantForce; template <> void RegisterUnityClass<ConstantForce>(const char*);
class Effector2D; template <> void RegisterUnityClass<Effector2D>(const char*);
class AreaEffector2D; template <> void RegisterUnityClass<AreaEffector2D>(const char*);
class BuoyancyEffector2D; template <> void RegisterUnityClass<BuoyancyEffector2D>(const char*);
class PlatformEffector2D; template <> void RegisterUnityClass<PlatformEffector2D>(const char*);
class PointEffector2D; template <> void RegisterUnityClass<PointEffector2D>(const char*);
class SurfaceEffector2D; template <> void RegisterUnityClass<SurfaceEffector2D>(const char*);
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GridLayout; template <> void RegisterUnityClass<GridLayout>(const char*);
class Grid; 
class Tilemap; template <> void RegisterUnityClass<Tilemap>(const char*);
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; template <> void RegisterUnityClass<Joint2D>(const char*);
class AnchoredJoint2D; template <> void RegisterUnityClass<AnchoredJoint2D>(const char*);
class DistanceJoint2D; template <> void RegisterUnityClass<DistanceJoint2D>(const char*);
class FixedJoint2D; template <> void RegisterUnityClass<FixedJoint2D>(const char*);
class FrictionJoint2D; template <> void RegisterUnityClass<FrictionJoint2D>(const char*);
class HingeJoint2D; template <> void RegisterUnityClass<HingeJoint2D>(const char*);
class SliderJoint2D; template <> void RegisterUnityClass<SliderJoint2D>(const char*);
class SpringJoint2D; template <> void RegisterUnityClass<SpringJoint2D>(const char*);
class WheelJoint2D; template <> void RegisterUnityClass<WheelJoint2D>(const char*);
class RelativeJoint2D; template <> void RegisterUnityClass<RelativeJoint2D>(const char*);
class TargetJoint2D; template <> void RegisterUnityClass<TargetJoint2D>(const char*);
class LensFlare; template <> void RegisterUnityClass<LensFlare>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; template <> void RegisterUnityClass<LightProbeGroup>(const char*);
class LightProbeProxyVolume; template <> void RegisterUnityClass<LightProbeProxyVolume>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshObstacle; template <> void RegisterUnityClass<NavMeshObstacle>(const char*);
class OffMeshLink; template <> void RegisterUnityClass<OffMeshLink>(const char*);
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; template <> void RegisterUnityClass<PhysicsUpdateBehaviour2D>(const char*);
class ConstantForce2D; template <> void RegisterUnityClass<ConstantForce2D>(const char*);
class PlayableDirector; 
class Projector; template <> void RegisterUnityClass<Projector>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; template <> void RegisterUnityClass<SortingGroup>(const char*);
class StreamingController; 
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);
class VisualEffect; 
class WindZone; template <> void RegisterUnityClass<WindZone>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; template <> void RegisterUnityClass<TerrainCollider>(const char*);
class WheelCollider; template <> void RegisterUnityClass<WheelCollider>(const char*);
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } template <> void RegisterUnityClass<Unity::CharacterJoint>(const char*);
namespace Unity { class ConfigurableJoint; } template <> void RegisterUnityClass<Unity::ConfigurableJoint>(const char*);
namespace Unity { class FixedJoint; } template <> void RegisterUnityClass<Unity::FixedJoint>(const char*);
namespace Unity { class HingeJoint; } template <> void RegisterUnityClass<Unity::HingeJoint>(const char*);
namespace Unity { class SpringJoint; } template <> void RegisterUnityClass<Unity::SpringJoint>(const char*);
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; template <> void RegisterUnityClass<OcclusionArea>(const char*);
class OcclusionPortal; template <> void RegisterUnityClass<OcclusionPortal>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; template <> void RegisterUnityClass<BillboardRenderer>(const char*);
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; template <> void RegisterUnityClass<SpriteMask>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; template <> void RegisterUnityClass<TilemapRenderer>(const char*);
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; template <> void RegisterUnityClass<Tree>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; template <> void RegisterUnityClass<AssetBundle>(const char*);
class AssetBundleManifest; 
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; template <> void RegisterUnityClass<AvatarMask>(const char*);
class BillboardAsset; template <> void RegisterUnityClass<BillboardAsset>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; template <> void RegisterUnityClass<Flare>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class NavMeshData; template <> void RegisterUnityClass<NavMeshData>(const char*);
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterUnityClass<PhysicMaterial>(const char*);
class PhysicsMaterial2D; template <> void RegisterUnityClass<PhysicsMaterial2D>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RayTracingShader; 
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; template <> void RegisterUnityClass<BaseVideoTexture>(const char*);
class WebCamTexture; template <> void RegisterUnityClass<WebCamTexture>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class MovieTexture; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; template <> void RegisterUnityClass<SparseTexture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; template <> void RegisterUnityClass<VideoClip>(const char*);
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; 
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 167 non stripped classes
	//0. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//1. NavMeshData
	RegisterUnityClass<NavMeshData>("AI");
	//2. NavMeshObstacle
	RegisterUnityClass<NavMeshObstacle>("AI");
	//3. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//4. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//5. OffMeshLink
	RegisterUnityClass<OffMeshLink>("AI");
	//6. Animation
	RegisterUnityClass<Animation>("Animation");
	//7. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//8. Animator
	RegisterUnityClass<Animator>("Animation");
	//9. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//10. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//11. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//12. AvatarMask
	RegisterUnityClass<AvatarMask>("Animation");
	//13. Motion
	RegisterUnityClass<Motion>("Animation");
	//14. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//15. AssetBundle
	RegisterUnityClass<AssetBundle>("AssetBundle");
	//16. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//17. AudioChorusFilter
	RegisterUnityClass<AudioChorusFilter>("Audio");
	//18. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//19. AudioDistortionFilter
	RegisterUnityClass<AudioDistortionFilter>("Audio");
	//20. AudioEchoFilter
	RegisterUnityClass<AudioEchoFilter>("Audio");
	//21. AudioFilter
	RegisterUnityClass<AudioFilter>("Audio");
	//22. AudioHighPassFilter
	RegisterUnityClass<AudioHighPassFilter>("Audio");
	//23. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//24. AudioLowPassFilter
	RegisterUnityClass<AudioLowPassFilter>("Audio");
	//25. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//26. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//27. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//28. AudioReverbFilter
	RegisterUnityClass<AudioReverbFilter>("Audio");
	//29. AudioReverbZone
	RegisterUnityClass<AudioReverbZone>("Audio");
	//30. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//31. BaseVideoTexture
	RegisterUnityClass<BaseVideoTexture>("Audio");
	//32. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//33. WebCamTexture
	RegisterUnityClass<WebCamTexture>("Audio");
	//34. Unity::Cloth
	RegisterUnityClass<Unity::Cloth>("Cloth");
	//35. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//36. BillboardAsset
	RegisterUnityClass<BillboardAsset>("Core");
	//37. BillboardRenderer
	RegisterUnityClass<BillboardRenderer>("Core");
	//38. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//39. Camera
	RegisterUnityClass<Camera>("Core");
	//40. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//41. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//42. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//43. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//44. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//45. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//46. Flare
	RegisterUnityClass<Flare>("Core");
	//47. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//48. GameManager
	RegisterUnityClass<GameManager>("Core");
	//49. GameObject
	RegisterUnityClass<GameObject>("Core");
	//50. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//51. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//52. InputManager
	RegisterUnityClass<InputManager>("Core");
	//53. LensFlare
	RegisterUnityClass<LensFlare>("Core");
	//54. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//55. Light
	RegisterUnityClass<Light>("Core");
	//56. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//57. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//58. LightProbeGroup
	RegisterUnityClass<LightProbeGroup>("Core");
	//59. LightProbeProxyVolume
	RegisterUnityClass<LightProbeProxyVolume>("Core");
	//60. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//61. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//62. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//63. Material
	RegisterUnityClass<Material>("Core");
	//64. Mesh
	RegisterUnityClass<Mesh>("Core");
	//65. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//66. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//67. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//68. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//69. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//70. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//71. Object
	//Skipping Object
	//72. OcclusionArea
	RegisterUnityClass<OcclusionArea>("Core");
	//73. OcclusionPortal
	RegisterUnityClass<OcclusionPortal>("Core");
	//74. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//75. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//76. Projector
	RegisterUnityClass<Projector>("Core");
	//77. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//78. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//79. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//80. Renderer
	RegisterUnityClass<Renderer>("Core");
	//81. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//82. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//83. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//84. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//85. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//86. Shader
	RegisterUnityClass<Shader>("Core");
	//87. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//88. Skybox
	RegisterUnityClass<Skybox>("Core");
	//89. SortingGroup
	RegisterUnityClass<SortingGroup>("Core");
	//90. SparseTexture
	RegisterUnityClass<SparseTexture>("Core");
	//91. Sprite
	RegisterUnityClass<Sprite>("Core");
	//92. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//93. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//94. TagManager
	RegisterUnityClass<TagManager>("Core");
	//95. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//96. Texture
	RegisterUnityClass<Texture>("Core");
	//97. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//98. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//99. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//100. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//101. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//102. Transform
	RegisterUnityClass<Transform>("Core");
	//103. GridLayout
	RegisterUnityClass<GridLayout>("Grid");
	//104. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//105. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//106. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//107. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//108. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//109. Unity::CharacterJoint
	RegisterUnityClass<Unity::CharacterJoint>("Physics");
	//110. Collider
	RegisterUnityClass<Collider>("Physics");
	//111. Unity::ConfigurableJoint
	RegisterUnityClass<Unity::ConfigurableJoint>("Physics");
	//112. ConstantForce
	RegisterUnityClass<ConstantForce>("Physics");
	//113. Unity::FixedJoint
	RegisterUnityClass<Unity::FixedJoint>("Physics");
	//114. Unity::HingeJoint
	RegisterUnityClass<Unity::HingeJoint>("Physics");
	//115. Unity::Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//116. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//117. PhysicMaterial
	RegisterUnityClass<PhysicMaterial>("Physics");
	//118. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//119. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//120. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//121. Unity::SpringJoint
	RegisterUnityClass<Unity::SpringJoint>("Physics");
	//122. AnchoredJoint2D
	RegisterUnityClass<AnchoredJoint2D>("Physics2D");
	//123. AreaEffector2D
	RegisterUnityClass<AreaEffector2D>("Physics2D");
	//124. BoxCollider2D
	RegisterUnityClass<BoxCollider2D>("Physics2D");
	//125. BuoyancyEffector2D
	RegisterUnityClass<BuoyancyEffector2D>("Physics2D");
	//126. CapsuleCollider2D
	RegisterUnityClass<CapsuleCollider2D>("Physics2D");
	//127. CircleCollider2D
	RegisterUnityClass<CircleCollider2D>("Physics2D");
	//128. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//129. CompositeCollider2D
	RegisterUnityClass<CompositeCollider2D>("Physics2D");
	//130. ConstantForce2D
	RegisterUnityClass<ConstantForce2D>("Physics2D");
	//131. DistanceJoint2D
	RegisterUnityClass<DistanceJoint2D>("Physics2D");
	//132. EdgeCollider2D
	RegisterUnityClass<EdgeCollider2D>("Physics2D");
	//133. Effector2D
	RegisterUnityClass<Effector2D>("Physics2D");
	//134. FixedJoint2D
	RegisterUnityClass<FixedJoint2D>("Physics2D");
	//135. FrictionJoint2D
	RegisterUnityClass<FrictionJoint2D>("Physics2D");
	//136. HingeJoint2D
	RegisterUnityClass<HingeJoint2D>("Physics2D");
	//137. Joint2D
	RegisterUnityClass<Joint2D>("Physics2D");
	//138. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//139. PhysicsMaterial2D
	RegisterUnityClass<PhysicsMaterial2D>("Physics2D");
	//140. PhysicsUpdateBehaviour2D
	RegisterUnityClass<PhysicsUpdateBehaviour2D>("Physics2D");
	//141. PlatformEffector2D
	RegisterUnityClass<PlatformEffector2D>("Physics2D");
	//142. PointEffector2D
	RegisterUnityClass<PointEffector2D>("Physics2D");
	//143. PolygonCollider2D
	RegisterUnityClass<PolygonCollider2D>("Physics2D");
	//144. RelativeJoint2D
	RegisterUnityClass<RelativeJoint2D>("Physics2D");
	//145. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//146. SliderJoint2D
	RegisterUnityClass<SliderJoint2D>("Physics2D");
	//147. SpringJoint2D
	RegisterUnityClass<SpringJoint2D>("Physics2D");
	//148. SurfaceEffector2D
	RegisterUnityClass<SurfaceEffector2D>("Physics2D");
	//149. TargetJoint2D
	RegisterUnityClass<TargetJoint2D>("Physics2D");
	//150. WheelJoint2D
	RegisterUnityClass<WheelJoint2D>("Physics2D");
	//151. SpriteMask
	RegisterUnityClass<SpriteMask>("SpriteMask");
	//152. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//153. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//154. Tree
	RegisterUnityClass<Tree>("Terrain");
	//155. TerrainCollider
	RegisterUnityClass<TerrainCollider>("TerrainPhysics");
	//156. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//157. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//158. Tilemap
	RegisterUnityClass<Tilemap>("Tilemap");
	//159. TilemapRenderer
	RegisterUnityClass<TilemapRenderer>("Tilemap");
	//160. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//161. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//162. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//163. WheelCollider
	RegisterUnityClass<WheelCollider>("Vehicles");
	//164. VideoClip
	RegisterUnityClass<VideoClip>("Video");
	//165. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");
	//166. WindZone
	RegisterUnityClass<WindZone>("Wind");

}
