/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUMutableFontDescriptor : MPUFontDescriptor

@property (nonatomic) float defaultPointSizeAdjustment;
@property (nonatomic) int leadingAdjustment;
@property (nonatomic) float systemFontSize;
@property (nonatomic) int textStyle;
@property (nonatomic) BOOL usesItalic;
@property (nonatomic) BOOL wantsMonospaceNumbers;
@property (nonatomic) int weight;

- (id)_copyAllowingGlobalCacheLookup:(BOOL)arg1;
- (void)_resetToDefaultValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDefaultPointSizeAdjustment:(float)arg1;
- (void)setLeadingAdjustment:(int)arg1;
- (void)setSystemFontSize:(float)arg1;
- (void)setTextStyle:(int)arg1;
- (void)setUsesItalic:(BOOL)arg1;
- (void)setWantsMonospaceNumbers:(BOOL)arg1;
- (void)setWeight:(int)arg1;

@end
