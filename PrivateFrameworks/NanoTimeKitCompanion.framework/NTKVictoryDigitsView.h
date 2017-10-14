/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryDigitsView : UIView {
    int  _appearance;
    BOOL  _dimIsUpper;
    CAGradientLayer * _dimmingOverlay;
    BOOL  _hasSetAppearance;
    BOOL  _lastDigitIs7;
    _AdjustableLabel * _mainLabel;
    _AdjustableLabel * _outlineBackgroundLabel;
    float  _scale;
}

@property (nonatomic) int appearance;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSString *digitText;
@property (nonatomic) float scale;

+ (id)_cachedFontForAppearance:(int)arg1;

- (void).cxx_destruct;
- (id)_makeLabel;
- (void)_updateFonts;
- (int)appearance;
- (id)color;
- (id)digitText;
- (id)init;
- (void)layoutSubviews;
- (void)prepareAppearance:(int)arg1;
- (float)scale;
- (void)setAppearance:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setDigitText:(id)arg1;
- (void)setDimmingFactor:(float)arg1 isUpper:(BOOL)arg2;
- (void)setScale:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
