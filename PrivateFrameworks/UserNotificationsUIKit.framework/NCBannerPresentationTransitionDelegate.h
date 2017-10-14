/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCBannerPresentationTransitionDelegate : NSObject <NCBannerPresentationAnimatorDelegate, NCViewControllerTransitioningDelegate> {
    UIGestureRecognizer * _activeGesture;
    UIViewController * _presentedViewController;
    BOOL  _transitioning;
    <NCBannerPresentationTransitioningDelegateObserver> * _transitioningDelegateObserver;
}

@property (nonatomic, retain) UIGestureRecognizer *activeGesture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic, readonly) BOOL transitioning;
@property (nonatomic) <NCBannerPresentationTransitioningDelegateObserver> *transitioningDelegateObserver;

- (void).cxx_destruct;
- (id)_animatorForPresentation:(BOOL)arg1;
- (id)activeGesture;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)bannerPresentationAnimator:(id)arg1 didFinishTransition:(BOOL)arg2;
- (BOOL)isTransitioning;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setActiveGesture:(id)arg1;
- (void)setTransitioningDelegateObserver:(id)arg1;
- (void)transitionAnimator:(id)arg1 didCommitToTransitionWithCoordinator:(id)arg2;
- (id)transitioningDelegateObserver;

@end
