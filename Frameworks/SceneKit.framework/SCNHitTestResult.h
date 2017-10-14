/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNHitTestResult : NSObject {
    struct __C3DHitTestResult { } * _result;
}

@property (nonatomic, readonly) SCNNode *boneNode;
@property (nonatomic, readonly) int faceIndex;
@property (nonatomic, readonly) int geometryIndex;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } localCoordinates;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } localNormal;
@property (nonatomic, readonly) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } modelTransform;
@property (nonatomic, readonly) SCNNode *node;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } worldCoordinates;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } worldNormal;

+ (id)hitTestResultsFromHitTestResultRef:(struct __CFArray { }*)arg1;

- (id)boneNode;
- (void)dealloc;
- (id)description;
- (int)faceIndex;
- (int)geometryIndex;
- (id)initWithResult:(struct __C3DHitTestResult { }*)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })localCoordinates;
- (struct SCNVector3 { float x1; float x2; float x3; })localNormal;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })modelTransform;
- (id)node;
- (struct CGPoint { float x1; float x2; })textureCoordinate;
- (struct CGPoint { float x1; float x2; })textureCoordinatesWithMappingChannel:(int)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })worldCoordinates;
- (struct SCNVector3 { float x1; float x2; float x3; })worldNormal;

@end
