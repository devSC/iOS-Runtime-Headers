/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject {
    UIView * _highlightTransformTargetView;
    BOOL  _highlighted;
    UIMotionEffectGroup * _installedHighlightedActionMotionEffectsGroup;
}

@property (nonatomic) UIView *highlightTransformTargetView;
@property (nonatomic) BOOL highlighted;

- (void).cxx_destruct;
- (void)_applyHighlightTransform;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_enlargedTransformForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_insertMotionEffects;
- (id)_newMotionEffectsGroupForHighlightedAction;
- (void)_removeMotionEffects;
- (id)highlightTransformTargetView;
- (BOOL)highlighted;
- (id)initWithHighlightTransformTargetView:(id)arg1;
- (void)setHighlightTransformTargetView:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;

@end
