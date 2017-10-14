/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUNavigationController : UINavigationController <SUScriptNativeObject> {
    BOOL  _canBeWeakScriptReference;
    SUClientInterface * _clientInterface;
    SUSection * _section;
    BOOL  _skLoading;
    int  _storeBarStyle;
}

@property (nonatomic, retain) SUClientInterface *clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SUSection *section;
@property (getter=isSkLoading, nonatomic) BOOL skLoading;
@property (readonly) Class superclass;

- (int)ITunesStoreUIBarStyle;
- (void)_loadingDidChangeNotification:(id)arg1;
- (id)_sectionForViewController:(id)arg1;
- (void)_setStoreBarStyle:(int)arg1 clientInterface:(id)arg2;
- (void)addChildViewController:(id)arg1;
- (BOOL)clearsWeakScriptReferences;
- (id)clientInterface;
- (id)copyArchivableContext;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)description;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithSection:(id)arg1;
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;
- (BOOL)isSkLoading;
- (void)loadView;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (void)removeChildViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)section;
- (void)setClientInterface:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSkLoading:(BOOL)arg1;
- (void)setToolbarHidden:(BOOL)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;

@end
