/* Generated by RuntimeBrowser.
 */

@protocol QLDismissGestureTracking <NSObject>

@required

- (struct CGPoint { float x1; float x2; })anchorPoint;
- (float)dismissalProgress;
- (double)finalAnimationDuration;
- (float)finalAnimationSpringDamping;
- (BOOL)shouldFinishDismissal;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackedBounds;
- (struct CGPoint { float x1; float x2; })trackedCenter;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })trackedTransform;
- (struct _QLDismissGestureTrackingVelocity { float x1; float x2; float x3; float x4; })trackedVelocity;

@end
