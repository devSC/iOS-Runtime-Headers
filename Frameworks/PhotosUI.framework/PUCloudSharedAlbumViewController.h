/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCloudSharedAlbumViewController : PUPhotosAlbumViewController <PLAlbumStreamingOptionsViewControllerDelegate, PUPhotoStreamComposeServiceDelegate, PUVideoTrimQueueControllerDelegate, UIPopoverPresentationControllerDelegate> {
    BOOL  __canContributeToCloudSharedAlbum;
    UIBarButtonItem * __optionsBarButtonItem;
    UIBarButtonItem * __optionsBarButtonSpacerItem;
    UIViewController * __optionsPopoverRootViewController;
    UIViewController * __optionsViewController;
    int  __selectedItemIndex;
    UIBarButtonItem * __switcherBarButtonItem;
    UISegmentedControl * __switcherSegmentedControl;
    NSArray * __transitioningOptionsViewControllers;
    PUPhotosPickerViewController * _activePhotosPickerViewController;
    PUPhotoStreamComposeServiceViewController * _composeServiceController;
    BOOL  _displayingOptions;
    PUVideoTrimQueueController * _trimController;
}

@property (setter=_setCanContributeToCloudSharedAlbum:, nonatomic) BOOL _canContributeToCloudSharedAlbum;
@property (setter=_setOptionsBarButtonItem:, nonatomic, retain) UIBarButtonItem *_optionsBarButtonItem;
@property (setter=_setOptionsBarButtonSpacerItem:, nonatomic, retain) UIBarButtonItem *_optionsBarButtonSpacerItem;
@property (setter=_setOptionsPopoverRootViewController:, nonatomic, retain) UIViewController *_optionsPopoverRootViewController;
@property (setter=_setOptionsViewController:, nonatomic, retain) UIViewController *_optionsViewController;
@property (setter=_setSelectedItemIndex:, nonatomic) int _selectedItemIndex;
@property (setter=_setSwitcherBarButtonItem:, nonatomic, retain) UIBarButtonItem *_switcherBarButtonItem;
@property (setter=_setSwitcherSegmentedControl:, nonatomic, retain) UISegmentedControl *_switcherSegmentedControl;
@property (setter=_setTransitioningOptionsViewControllers:, nonatomic, retain) NSArray *_transitioningOptionsViewControllers;
@property (nonatomic, retain) PLCloudSharedAlbum *album;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingOptions, setter=setDisplayingOptions:, nonatomic) BOOL displayingOptions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_appAllowsSupressionOfAlerts;
- (BOOL)_canContributeToCloudSharedAlbum;
- (BOOL)_canDisplayOptions;
- (void)_dismissOptionsPopoverAnimated:(BOOL)arg1;
- (void)_handleSwitcherSegmentedControl:(id)arg1;
- (id)_newOptionsViewController;
- (id)_optionsBarButtonItem;
- (void)_optionsBarButtonItemPressed:(id)arg1;
- (id)_optionsBarButtonSpacerItem;
- (id)_optionsPopoverRootViewController;
- (id)_optionsViewController;
- (void)_presentOptionsPopoverFromBarButtonItem:(id)arg1;
- (int)_selectedItemIndex;
- (void)_setCanContributeToCloudSharedAlbum:(BOOL)arg1;
- (void)_setOptionsBarButtonItem:(id)arg1;
- (void)_setOptionsBarButtonSpacerItem:(id)arg1;
- (void)_setOptionsPopoverRootViewController:(id)arg1;
- (void)_setOptionsViewController:(id)arg1;
- (void)_setSelectedItemIndex:(int)arg1;
- (void)_setSwitcherBarButtonItem:(id)arg1;
- (void)_setSwitcherSegmentedControl:(id)arg1;
- (void)_setTransitioningOptionsViewControllers:(id)arg1;
- (BOOL)_shouldShowOptionsSwitcherInToolbar;
- (id)_suppressionContexts;
- (id)_switcherBarButtonItem;
- (id)_switcherSegmentedControl;
- (id)_transitioningOptionsViewControllers;
- (void)_updateOptionsView;
- (void)_updateOptionsViewInsets;
- (void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2;
- (BOOL)canAddToOtherAlbumContent;
- (BOOL)canDeleteContent;
- (void)configureGlobalFooterView:(id)arg1;
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (void)didSelectAddPlaceholderInSection:(int)arg1;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (BOOL)isDisplayingOptions;
- (id)newToolbarItems;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1 existingFetchResult:(id)arg2;
- (void)setDisplayingOptions:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldShowTabBar;
- (BOOL)shouldShowToolbar;
- (void)updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsAddContentInToolbar;
- (BOOL)wantsAddPlaceholderAtEndOfSection:(int)arg1;
- (BOOL)wantsGlobalFooter;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
