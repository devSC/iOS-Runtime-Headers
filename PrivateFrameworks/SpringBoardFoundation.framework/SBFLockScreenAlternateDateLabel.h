/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenAlternateDateLabel : UIView <SBUILegibility> {
    NSDate * _date;
    SBUILegibilityLabel * _label;
    _UILegibilitySettings * _legibilitySettings;
    float  _strength;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SBUILegibilityLabel *label;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) float strength;
@property (readonly) Class superclass;

+ (id)_lunarCalendarIdentifier;
+ (BOOL)showAlternateDate;

- (void).cxx_destruct;
- (id)_alternateDateString;
- (id)date;
- (id)initWithSettings:(id)arg1 strength:(float)arg2 font:(id)arg3;
- (id)label;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setDate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)strength;

@end
