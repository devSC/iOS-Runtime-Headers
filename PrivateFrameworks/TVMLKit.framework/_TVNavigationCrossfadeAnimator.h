/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVNavigationCrossfadeAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    BOOL  _fadeOutFromView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fadeOutFromView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)_beginCrossfadeAnimationFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 delay:(double)arg4 fadeOutFromView:(BOOL)arg5 removeFromView:(BOOL)arg6 completion:(id /* block */)arg7;

- (void)_beginCrossfadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(id /* block */)arg4;
- (void)animateTransition:(id)arg1;
- (BOOL)fadeOutFromView;
- (void)setFadeOutFromView:(BOOL)arg1;
- (double)transitionDuration:(id)arg1;

@end
