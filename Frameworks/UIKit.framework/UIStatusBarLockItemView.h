/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarLockItemView : UIStatusBarItemView <CAAnimationDelegate> {
    BOOL  _alongsideViewIsBecomingVisible;
    id /* block */  _animationCompletionBlock;
    int  _animationCount;
    _UIStatusBarLockItemPadlockView * _padlockView;
    float  _padlockViewCenterOffsetFromForegroundViewCenter;
    UIView * _textClippingView;
    _UIExpandingGlyphsView * _textView;
    UIView * _timeItemSnapshot;
    float  _timeItemSnapshotCenterOffsetFromForegroundViewCenter;
    UIView * _viewToAnimateAlongside;
    float  _widthNeededDuringAnimation;
    float  _widthNeededForFinalState;
}

@property (nonatomic) BOOL alongsideViewIsBecomingVisible;
@property (nonatomic, copy) id /* block */ animationCompletionBlock;
@property (nonatomic) int animationCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) _UIStatusBarLockItemPadlockView *padlockView;
@property (nonatomic) float padlockViewCenterOffsetFromForegroundViewCenter;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *textClippingView;
@property (nonatomic, retain) _UIExpandingGlyphsView *textView;
@property (nonatomic, retain) UIView *timeItemSnapshot;
@property (nonatomic) float timeItemSnapshotCenterOffsetFromForegroundViewCenter;
@property (nonatomic) UIView *viewToAnimateAlongside;
@property (nonatomic) float widthNeededDuringAnimation;
@property (nonatomic) float widthNeededForFinalState;

+ (double)lockSlideAnimationDuration;

- (void).cxx_destruct;
- (void)_beginAnimation;
- (void)_endAnimation;
- (BOOL)_isAnimating;
- (BOOL)alongsideViewIsBecomingVisible;
- (void)animateUnlockForegroundView:(id)arg1 timeItemSnapshot:(id)arg2 completionBlock:(id /* block */)arg3;
- (id /* block */)animationCompletionBlock;
- (int)animationCount;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)isExclusive;
- (void)jiggleCompletionBlock:(id /* block */)arg1;
- (id)padlockView;
- (float)padlockViewCenterOffsetFromForegroundViewCenter;
- (void)setAlongsideViewIsBecomingVisible:(BOOL)arg1;
- (void)setAnimationCompletionBlock:(id /* block */)arg1;
- (void)setAnimationCount:(int)arg1;
- (void)setPadlockView:(id)arg1;
- (void)setPadlockViewCenterOffsetFromForegroundViewCenter:(float)arg1;
- (void)setTextClippingView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setTimeItemSnapshot:(id)arg1;
- (void)setTimeItemSnapshotCenterOffsetFromForegroundViewCenter:(float)arg1;
- (void)setViewToAnimateAlongside:(id)arg1;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (void)setWidthNeededDuringAnimation:(float)arg1;
- (void)setWidthNeededForFinalState:(float)arg1;
- (id)textClippingView;
- (id)textView;
- (id)timeItemSnapshot;
- (float)timeItemSnapshotCenterOffsetFromForegroundViewCenter;
- (float)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)viewToAnimateAlongside;
- (float)widthNeededDuringAnimation;
- (float)widthNeededForFinalState;

@end
