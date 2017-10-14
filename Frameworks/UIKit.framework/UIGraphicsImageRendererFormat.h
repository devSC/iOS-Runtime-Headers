/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGraphicsImageRendererFormat : UIGraphicsRendererFormat {
    BOOL  _grayscale;
    BOOL  _opaque;
    int  _overrideBitsPerComponent;
    struct CGColorSpace { } * _overrideColorSpace;
    BOOL  _prefersExtendedRange;
    float  _scale;
    BOOL  _wantsAlphaMask;
}

@property (getter=_contextScale, nonatomic, readonly) float _contextScale;
@property (getter=_grayscale, setter=_setGrayscale:, nonatomic) BOOL _grayscale;
@property (getter=_overrideBitsPerComponent, setter=_setOverrideBitsPerComponent:, nonatomic) int _overrideBitsPerComponent;
@property (getter=_overrideColorSpace, setter=_setOverrideColorSpace:, nonatomic) struct CGColorSpace { }*_overrideColorSpace;
@property (getter=_wantsAlphaMask, setter=_setWantsAlphaMask:, nonatomic) BOOL _wantsAlphaMask;
@property (nonatomic) BOOL opaque;
@property (nonatomic) BOOL prefersExtendedRange;
@property (nonatomic) float scale;

+ (id)defaultFormat;

- (float)_contextScale;
- (BOOL)_grayscale;
- (int)_overrideBitsPerComponent;
- (struct CGColorSpace { }*)_overrideColorSpace;
- (void)_setGrayscale:(BOOL)arg1;
- (void)_setOverrideBitsPerComponent:(int)arg1;
- (void)_setOverrideColorSpace:(struct CGColorSpace { }*)arg1;
- (void)_setWantsAlphaMask:(BOOL)arg1;
- (BOOL)_wantsAlphaMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)opaque;
- (BOOL)prefersExtendedRange;
- (float)scale;
- (void)setOpaque:(BOOL)arg1;
- (void)setPrefersExtendedRange:(BOOL)arg1;
- (void)setScale:(float)arg1;

@end
