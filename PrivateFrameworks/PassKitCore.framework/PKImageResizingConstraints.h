/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKImageResizingConstraints : NSObject {
    int  _constraintType;
    float  _fixedDimension;
    float  _maxAspectRatio;
    float  _minAspectRatio;
    float  _outputBorderTrim;
    float  _outputCornerRadius;
    BOOL  _outputMirrored;
    float  _outputScale;
    BOOL  _respectAspectRatioRange;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
}

@property (nonatomic) float outputBorderTrim;
@property (nonatomic) float outputCornerRadius;
@property (nonatomic) BOOL outputMirrored;
@property (nonatomic) float outputScale;

+ (id)constraintsWithAspectFillToSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)constraintsWithAspectFitToSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)constraintsWithFixedHeight:(float)arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;
+ (id)constraintsWithFixedLargeDimenstion:(float)arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;
+ (id)constraintsWithFixedSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)constraintsWithFixedSmallDimenstion:(float)arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;
+ (id)constraintsWithFixedWidth:(float)arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;
+ (id)constraintsWithMaxSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)constraintsWithMaxSize:(struct CGSize { float x1; float x2; })arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;
+ (id)constraintsWithMinSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)constraintsWithMinSize:(struct CGSize { float x1; float x2; })arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;

- (id)_flippedConstraints;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_getDrawRectForImage:(struct CGImage { }*)arg1 withOutputSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)_getPixelCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 pixelOutputSize:(struct CGSize { float x1; float x2; }*)arg2 forImageSize:(struct CGSize { float x1; float x2; })arg3 scale:(float)arg4;
- (BOOL)_reasonable;
- (BOOL)getPixelCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 pixelOutputSize:(struct CGSize { float x1; float x2; }*)arg2 forImage:(id)arg3;
- (id)init;
- (float)outputBorderTrim;
- (float)outputCornerRadius;
- (BOOL)outputMirrored;
- (float)outputScale;
- (id)resizedImage:(id)arg1;
- (void)setOutputBorderTrim:(float)arg1;
- (void)setOutputCornerRadius:(float)arg1;
- (void)setOutputMirrored:(BOOL)arg1;
- (void)setOutputScale:(float)arg1;

@end
