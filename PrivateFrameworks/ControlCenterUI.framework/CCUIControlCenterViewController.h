/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIControlCenterViewController : UIViewController <CCUIControlCenterContainerViewDelegate, CCUIControlCenterObserver, CCUIControlCenterPageContainerViewControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    NSMutableArray * _allPageContainerViewControllers;
    CCUIControlCenterContainerView * _containerView;
    <CCUIControlCenterViewControllerDelegate> * _delegate;
    UITapGestureRecognizer * _iPadScrollToAdjacentPageGesture;
    BOOL  _needsViewControllerVisibilityUpdate;
    CCUIControlCenterPageControl * _pageControl;
    CCUIImmediateTouchScrollView * _pagesScrollView;
    NSMutableArray * _pagingScrollViewAnimationCompletionBlocks;
    UIPanGestureRecognizer * _panGesture;
    BOOL  _presented;
    CCUIControlCenterPageContainerViewController * _selectedViewController;
    CCUIControlCenterSettings * _settings;
    NSArray * _sortedVisibleViewControllers;
    CCUISystemControlsPageViewController * _systemControlsPage;
    UITapGestureRecognizer * _tapGesture;
    BOOL  _transitioning;
}

@property (nonatomic) CCUIControlCenterPageContainerViewController *_selectedViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIControlCenterViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int numberOfActivePages;
@property (getter=isPresented, nonatomic) BOOL presented;
@property (nonatomic) float revealPercentage;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic) BOOL transitioning;

+ (void)notifyControlCenterControl:(id)arg1 didActivate:(BOOL)arg2;

- (void).cxx_destruct;
- (void)_addContentViewController:(id)arg1;
- (void)_addOrRemovePagesBasedOnVisibility;
- (void)_addPageViewController:(id)arg1;
- (BOOL)_contentOffset:(struct CGPoint { float x1; float x2; }*)arg1 forChildViewController:(id)arg2;
- (id)_contentViewControllerForLocation:(struct CGPoint { float x1; float x2; })arg1 inView:(id)arg2;
- (int)_currentOrientation;
- (void)_dismissAirDropWithCompletion:(id /* block */)arg1;
- (void)_dismissButtonActionPlatterWithCompletion:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForChildViewController:(id)arg1;
- (void)_handleAdjacentTap:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_invalidateContentLayout;
- (void)_layoutScrollView;
- (void)_loadPages;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_marginEdgeInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_marginInsetsForContentViewController:(id)arg1;
- (void)_noteControlCenterControlDidActivate:(id)arg1;
- (void)_noteControlCenterControlDidDeactivate:(id)arg1;
- (void)_presentAirDropWithCompletion:(id /* block */)arg1;
- (void)_presentButtonActionPlatterWithCompletion:(id /* block */)arg1;
- (void)_removeContentViewController:(id)arg1;
- (void)_removePageViewController:(id)arg1;
- (float)_scrollviewContentMaxHeight;
- (id)_selectedContentViewController;
- (id)_selectedViewController;
- (void)_sendDidScrollToPageToContentProvidingViewControllers;
- (void)_setContentViewContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)_updatePageControl;
- (void)_updateScrollViewContentSize;
- (void)abortAnimatedTransition;
- (void)containerViewController:(id)arg1 backdropViewDidUpdate:(id)arg2;
- (void)containerViewControllerWantsDismissal:(id)arg1;
- (float)contentHeightForContainerView:(id)arg1;
- (float)contentHeightForOrientation:(int)arg1;
- (id)contentViewControllers;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (id)controlCenterSystemAgent;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillFinishTransitionOpen:(BOOL)arg1 withDuration:(double)arg2;
- (void)controlCenterWillPresent;
- (id)delegate;
- (BOOL)dismissModalFullScreenIfNeeded;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (BOOL)isPresented;
- (BOOL)isTransitioning;
- (int)layoutStyle;
- (void)loadView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })marginInsetForContainerView:(id)arg1;
- (unsigned int)numberOfActivePages;
- (id)pageControlForContainerView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })pageInsetForContainerView:(id)arg1;
- (id)pagePlatterViewsForContainerView:(id)arg1;
- (id)platterContainer;
- (float)revealPercentage;
- (void)scrollToPage:(unsigned int)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrollViewForContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresented:(BOOL)arg1;
- (void)setRevealPercentage:(float)arg1;
- (void)setTransitioning:(BOOL)arg1;
- (void)set_selectedViewController:(id)arg1;
- (id)sortedVisibleViewControllers;
- (id)view;
- (id)viewControllers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)visibilityPreferenceChangedForContainerViewController:(id)arg1;

@end
