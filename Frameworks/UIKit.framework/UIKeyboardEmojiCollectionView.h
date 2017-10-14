/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCollectionView : UICollectionView {
    UIKeyboardEmojiGraphicsTraits * _emojiGraphicsTraits;
    UIResponder * _hitTestResponder;
    UIKBRenderConfig * _renderConfig;
}

@property (readonly, retain) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits;
@property (nonatomic) UIResponder *hitTestResponder;
@property (retain) UIKBRenderConfig *renderConfig;

- (float)_currentScreenScale;
- (BOOL)_shouldReverseLayoutDirection;
- (id)closestCellForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (id)emojiGraphicsTraits;
- (id)hitTestResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2 renderConfig:(id)arg3 emojiGraphicsTraits:(id)arg4;
- (void)layoutSubviews;
- (id)renderConfig;
- (void)setHitTestResponder:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
