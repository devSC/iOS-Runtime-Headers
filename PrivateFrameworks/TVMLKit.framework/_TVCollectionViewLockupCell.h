/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVCollectionViewLockupCell : UICollectionViewCell <TVAuxiliaryViewSelecting> {
    UIView<TVAuxiliaryViewSelecting> * __selectingView;
    BOOL  _allowsFocus;
    UIMotionEffectGroup * _motionEffectGroup;
    BOOL  _pressIsAnimating;
    BOOL  _unpressOnEndAnimating;
}

@property (nonatomic) BOOL allowsFocus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (void)_attachMotionEffects;
- (void)_clearPressState;
- (BOOL)_descendantsShouldHighlight;
- (void)_detachMotionEffects;
- (void)_handleSelect;
- (id)_preferredConfigurationForFocusAnimation:(int)arg1 inContext:(id)arg2;
- (id)_selectingView;
- (void)_setFocusDirection:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setFocused:(BOOL)arg1 animated:(BOOL)arg2 context:(id)arg3 coordinator:(id)arg4;
- (void)_showPressState;
- (BOOL)_unapplyMotionEffect:(id)arg1;
- (BOOL)allowsFocus;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })selectionMarginsForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAllowsFocus:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
