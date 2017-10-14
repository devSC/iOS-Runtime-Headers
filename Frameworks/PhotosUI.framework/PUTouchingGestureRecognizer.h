/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTouchingGestureRecognizer : UIGestureRecognizer {
    unsigned int  __touchCount;
}

@property (setter=_setTouchCount:, nonatomic) unsigned int _touchCount;

- (void)_decrementTouchesBy:(unsigned int)arg1;
- (void)_incrementTouchesBy:(unsigned int)arg1;
- (void)_setTouchCount:(unsigned int)arg1;
- (unsigned int)_touchCount;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
