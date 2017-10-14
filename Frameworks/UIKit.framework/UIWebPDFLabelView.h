/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPDFLabelView : UIView {
    _UIBackdropView * _backdropView;
    UILabel * _label;
    NSTimer * _timer;
    unsigned int  currentPageIndex;
}

@property (nonatomic) unsigned int currentPageIndex;
@property (getter=isTimerInstalled, nonatomic, readonly) BOOL timerInstalled;

- (void)_fadeOutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (double)_fadeOutDelay;
- (double)_fadeOutDuration;
- (void)_makeRoundedCorners;
- (void)clearTimer;
- (unsigned int)currentPageIndex;
- (void)dealloc;
- (void)fadeOut;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTimerInstalled;
- (void)setCurrentPageIndex:(unsigned int)arg1;
- (void)setText:(id)arg1;
- (void)showNowInSuperView:(id)arg1 atOrigin:(struct CGPoint { float x1; float x2; })arg2 withText:(id)arg3 animated:(BOOL)arg4;
- (void)sizeToFit;

@end
