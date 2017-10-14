/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPanelView : SKUIViewReuseView <SKUIAnimatorDOMFeatureDelegate, SKUIViewElementView> {
    NSMapTable * _animators;
    UIResponder * _inputResponder;
    NSMapTable * _viewElements;
    NSMapTable * _viewMargins;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3;
+ (void)_enumerateChildrenOfViewElement:(id)arg1 usingBlock:(id /* block */)arg2;
+ (BOOL)_isValidTextInputViewElement:(id)arg1;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_marginsForViewElement:(id)arg1 index:(unsigned int)arg2 width:(float)arg3 context:(id)arg4;
+ (BOOL)_shouldDisplayViewElement:(id)arg1;
+ (struct CGSize { float x1; float x2; })_sizeForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (BOOL)_useEditorialLayoutForLabelElement:(id)arg1;
+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)animatorFeature:(id)arg1 performAnimationWithName:(id)arg2 options:(id)arg3;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (BOOL)resignFirstResponder;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
