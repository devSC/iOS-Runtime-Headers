/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewControllerCompatibilityPreviewingContext : NSObject <UIPreviewInteractionControllerDelegate_Internal, UIViewControllerPreviewing_Internal> {
    <UIViewControllerPreviewingDelegate> * _delegate;
    UIPreviewInteractionController * _previewInteractionController;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UIViewControllerPreviewingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic, retain) UIPreviewInteractionController *previewInteractionController;
@property (nonatomic, readonly) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } sourceRect;
@property (nonatomic, readonly) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;
- (BOOL)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1;
- (BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (id)presentationGestureRecognizer;
- (id)previewInteractionController;
- (id)previewInteractionController:(id)arg1 committedViewControllerForPreviewViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3;
- (void)previewInteractionController:(id)arg1 didSelectMenuItem:(id)arg2;
- (void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(struct CGPoint { float x1; float x2; })arg3 inSourceView:(id)arg4 containerView:(id)arg5;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)previewInteractionController:(id)arg1 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint { float x1; float x2; })arg2 inView:(id)arg3;
- (id)previewInteractionController:(id)arg1 transitioningDelegateForPreviewingAtPosition:(struct CGPoint { float x1; float x2; })arg2 inView:(id)arg3;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint { float x1; float x2; })arg2 inView:(id)arg3 presentingViewController:(id*)arg4;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint { float x1; float x2; })arg3 inSourceView:(id)arg4;
- (BOOL)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg1;
- (id)previewingGestureRecognizerForFailureRelationship;
- (void)setDelegate:(id)arg1;
- (void)setPreviewInteractionController:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setViewController:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (void)unregister;
- (id)viewController;

@end
