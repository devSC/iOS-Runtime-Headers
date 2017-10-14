/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRingsAndDotsView : UIView {
    float  _appearanceAnimationProgress;
    float  _diameter;
    float  _dotDiameter;
    float  _dotPositionFraction;
    NTKDotView * _dotView;
    UIColor * _foregroundColor;
    float  _radiusForDotViewRing;
    NSArray * _ringColors;
    float  _ringGapWidth;
    NSArray * _ringViews;
    float  _ringWidth;
    NSMutableArray * _ringsFillFractions;
    UIColor * _secondaryForegroundColor;
    BOOL  _showsDotOnRing;
    BOOL  _showsRingsBackground;
}

@property (nonatomic) float appearanceAnimationProgress;
@property (nonatomic) float diameter;
@property (nonatomic) float dotDiameter;
@property (nonatomic) float dotPositionFraction;
@property (nonatomic, retain) NTKDotView *dotView;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic) float radiusForDotViewRing;
@property (nonatomic, retain) NSArray *ringColors;
@property (nonatomic) float ringGapWidth;
@property (nonatomic, retain) NSArray *ringViews;
@property (nonatomic) float ringWidth;
@property (nonatomic, retain) NSMutableArray *ringsFillFractions;
@property (nonatomic, retain) UIColor *secondaryForegroundColor;
@property (nonatomic) BOOL showsDotOnRing;
@property (nonatomic) BOOL showsRingsBackground;

- (void).cxx_destruct;
- (float)_dotPositionFractionWithAnimationProgress:(float)arg1;
- (void)_positionDotViewWithPositionFraction:(float)arg1;
- (void)_setDiameter:(float)arg1;
- (void)_update;
- (float)appearanceAnimationProgress;
- (void)cancelAppearanceAnimation;
- (float)diameter;
- (float)dotDiameter;
- (float)dotPositionFraction;
- (id)dotView;
- (id)foregroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 diameter:(float)arg2 ringWidth:(float)arg3 ringGapWidth:(float)arg4 showsRingsBackground:(BOOL)arg5;
- (void)layoutSubviews;
- (void)performAppearanceAnimation;
- (void)prepareAppearanceAnimation;
- (float)radiusForDotViewRing;
- (float)radiusForRingAtIndex:(int)arg1;
- (id)ringColors;
- (float)ringGapWidth;
- (id)ringViews;
- (float)ringWidth;
- (id)ringsFillFractions;
- (id)secondaryForegroundColor;
- (void)setAppearanceAnimationProgress:(float)arg1;
- (void)setDiameter:(float)arg1;
- (void)setDotDiameter:(float)arg1;
- (void)setDotPositionFraction:(float)arg1;
- (void)setDotView:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setRadiusForDotViewRing:(float)arg1;
- (void)setRingColors:(id)arg1;
- (void)setRingGapWidth:(float)arg1;
- (void)setRingViews:(id)arg1;
- (void)setRingWidth:(float)arg1;
- (void)setRingsFillFractions:(id)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setShowsDotOnRing:(BOOL)arg1;
- (void)setShowsRingsBackground:(BOOL)arg1;
- (BOOL)showsDotOnRing;
- (BOOL)showsRingsBackground;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
