/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCircularWellnessUtilityComplicationView : NTKUtilityCircularComplicationView {
    BOOL  _animationsAllowed;
    NSMutableArray * _ringsFillFractions;
    NTKRingsAndDotsView * _ringsView;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (void)load;

- (void).cxx_destruct;
- (void)_applyForegroundAlpha;
- (void)_layoutContentView;
- (id)_ringColor;
- (void)_setLayoutEmptyRingsNoDot;
- (void)_updateForTemplateChange;
- (void)_updateRingColors;
- (void)applyFaceColor:(unsigned int)arg1 units:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setForegroundColor:(id)arg1;

@end
