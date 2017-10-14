/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface NLArcSegmentLayer : CAShapeLayer {
    float  _arcLineWidth;
    int  _numberOfSegments;
    float  _percentageFull;
    float  _radius;
}

@property (nonatomic) float arcLineWidth;
@property (nonatomic) int numberOfSegments;
@property (nonatomic) float percentageFull;
@property (nonatomic) float radius;

- (void)_regeneratePath;
- (id)actionForKey:(id)arg1;
- (float)arcLineWidth;
- (id)init;
- (int)numberOfSegments;
- (float)percentageFull;
- (float)radius;
- (void)setArcLineWidth:(float)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNumberOfSegments:(int)arg1;
- (void)setPercentageFull:(float)arg1;
- (void)setRadius:(float)arg1;

@end
