/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerContainerViewController : UIViewController <UISearchControllerDelegate> {
    UIViewController<_UIDocumentPickerContainedViewController> * _childViewController;
    int  _explicitDisplayMode;
    _UIDocumentPickerContainerModel * _model;
    _UIDocumentSearchListController * _resultsController;
    _UIDocumentPickerSearchPaletteView * _searchView;
    <_UIDocumentPickerServiceViewController> * _serviceViewController;
    _UIDocumentPickerSortOrderView * _sortView;
}

@property (nonatomic, retain) UIViewController<_UIDocumentPickerContainedViewController> *childViewController;
@property (nonatomic) struct CGPoint { float x1; float x2; } contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int explicitDisplayMode;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *indexPathsForSelectedItems;
@property (nonatomic, retain) _UIDocumentPickerContainerModel *model;
@property (nonatomic, retain) _UIDocumentSearchListController *resultsController;
@property (nonatomic, retain) _UIDocumentPickerSearchPaletteView *searchView;
@property (nonatomic) <_UIDocumentPickerServiceViewController> *serviceViewController;
@property (nonatomic, retain) _UIDocumentPickerSortOrderView *sortView;
@property (readonly) Class superclass;

+ (id)userDefaults;

- (void).cxx_destruct;
- (void)_sortOrderViewChanged:(id)arg1;
- (void)_startSearchWithQueryString:(id)arg1 becomeFirstResponder:(BOOL)arg2;
- (void)_updateTraitCollection;
- (id)childViewController;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (void)dealloc;
- (int)defaultDisplayMode;
- (int)displayMode;
- (void)displayModeChanged;
- (void)ensureChildViewController;
- (int)explicitDisplayMode;
- (id)indexPathsForSelectedItems;
- (id)initWithModel:(id)arg1;
- (void)invalidate;
- (BOOL)isEditing;
- (id)model;
- (id)resultsController;
- (id)searchView;
- (id)serviceViewController;
- (void)setChildViewController:(id)arg1;
- (void)setChildViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDefaultDisplayMode:(int)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setExplicitDisplayMode:(int)arg1;
- (void)setIndexPathsForSelectedItems:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setResultsController:(id)arg1;
- (void)setSearchView:(id)arg1;
- (void)setServiceViewController:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setSortView:(id)arg1;
- (void)setupSearchController;
- (int)sortOrder;
- (id)sortView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
