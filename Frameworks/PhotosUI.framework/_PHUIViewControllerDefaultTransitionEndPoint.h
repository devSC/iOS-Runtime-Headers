/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface _PHUIViewControllerDefaultTransitionEndPoint : NSObject <PXUIViewControllerTransitionEndPoint, PXUIViewControllerZoomTransitionEndPoint> {
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL keepsSourceRegionOfInterestContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (BOOL)keepsSourceRegionOfInterestContent;
- (void)preloadWithSourceRegionOfInterest:(id)arg1 forTransition:(id)arg2;
- (id)regionOfInterestForTransition:(id)arg1;
- (id)removeBackgroundColorForTransition:(id)arg1;
- (void)restoreBackgroundColor:(id)arg1 forTransition:(id)arg2;
- (id)viewController;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;

@end
