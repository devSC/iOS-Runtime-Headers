/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSkinner : NSObject <NSSecureCoding> {
    SCNGeometry * _baseGeometry;
    BOOL  _bonesAndIndicesCompression;
    SCNNode * _skeleton;
    struct __C3DSkinner { } * _skinner;
}

@property (nonatomic, retain) SCNGeometry *baseGeometry;
@property (nonatomic) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } baseGeometryBindTransform;
@property (nonatomic, readonly) SCNGeometrySource *boneIndices;
@property (nonatomic, readonly) NSArray *boneInverseBindTransforms;
@property (nonatomic, readonly) SCNGeometrySource *boneWeights;
@property (nonatomic, readonly) NSArray *bones;
@property (nonatomic, retain) SCNNode *skeleton;

+ (struct __C3DSkinner { }*)_createSkinnerWithCompressedData:(id)arg1 bonesCount:(unsigned int)arg2 vertexCount:(unsigned int)arg3;
+ (struct __C3DSkinner { }*)_createSkinnerWithVertexCount:(int)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4 baseGeometry:(id)arg5;
+ (id)_skinnerWithBaseGeometry:(id)arg1 skinnableGeometry:(id)arg2 bones:(id)arg3 boneInverseBindTransforms:(id)arg4 bindMatrix:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg5;
+ (struct __C3DSkinner { }*)createSkinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4;
+ (id)skinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneInverseBindTransforms:(id)arg3 boneWeights:(id)arg4 boneIndices:(id)arg5;
+ (id)skinnerWithSkinnerRef:(struct __C3DSkinner { }*)arg1;
+ (BOOL)supportsSecureCoding;

- (const void*)__CFObject;
- (BOOL)_bonesAndIndicesCompression;
- (void)_setBaseGeometry:(id)arg1;
- (void)_setSkeleton:(id)arg1;
- (void)_syncObjCModel;
- (id)baseGeometry;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })baseGeometryBindTransform;
- (id)boneIndices;
- (id)boneInverseBindTransforms;
- (id)boneWeights;
- (id)bones;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSkinnerRef:(struct __C3DSkinner { }*)arg1;
- (id)joints;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setBaseGeometry:(id)arg1;
- (void)setBaseGeometryBindTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setBoneInverseBindTransforms:(id)arg1;
- (void)setBones:(id)arg1;
- (void)setSkeleton:(id)arg1;
- (void)setWantsCPUSkinning:(BOOL)arg1;
- (void)set_bonesAndIndicesCompression:(BOOL)arg1;
- (id)skeleton;
- (struct __C3DSkinner { }*)skinnerRef;
- (BOOL)wantsCPUSkinning;

@end
