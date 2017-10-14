/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSCredentialEntryViewController_iOS : ACUIViewController <VSCredentialEntryViewController> {
    BOOL  _cancellationAllowed;
    NSArray * _credentialEntryFieldSpecifiers;
    <VSAuthenticationViewControllerDelegate> * _delegate;
    UIProgressHUD * _deletingAccountHUD;
    float  _keyboardHeight;
    id  _keyboardWillHideObserver;
    id  _keyboardWillShowObserver;
    UIButton * _linkButton;
    VSIdentityProviderLogoView * _logoView;
    id  _textFieldTextDidChangeObserver;
    VSCredentialEntryViewModel * _viewModel;
}

@property (getter=isCancellationAllowed, nonatomic) BOOL cancellationAllowed;
@property (nonatomic, retain) NSArray *credentialEntryFieldSpecifiers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSAuthenticationViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIProgressHUD *deletingAccountHUD;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) float keyboardHeight;
@property (nonatomic) id keyboardWillHideObserver;
@property (nonatomic) id keyboardWillShowObserver;
@property (nonatomic, retain) UIButton *linkButton;
@property (nonatomic, retain) VSIdentityProviderLogoView *logoView;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } preferredLogoSize;
@property (readonly) Class superclass;
@property (nonatomic) id textFieldTextDidChangeObserver;
@property (nonatomic, readonly) VSViewModel *viewModel;

- (void).cxx_destruct;
- (id)_credentialEntryFieldForSpecifier:(id)arg1;
- (void)_deleteAccountButtonTapped:(id)arg1;
- (void)_hideDeletingAccountHUD;
- (void)_linkButtonTapped:(id)arg1;
- (id)_linkURL;
- (void)_presentError:(id)arg1;
- (void)_setText:(id)arg1 forSpecifier:(id)arg2;
- (void)_showDeletingAccountHUD;
- (void)_showNavigationBarButtons;
- (id)_specifierForTextField:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_startValidation;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_stopValidationAndShowButtons:(BOOL)arg1;
- (id)_textFieldForSpecifier:(id)arg1;
- (id)_textForSpecifier:(id)arg1;
- (void)_updateLinkButtonLayout;
- (void)cancelButtonTapped:(id)arg1;
- (id)credentialEntryFieldSpecifiers;
- (void)dealloc;
- (id)delegate;
- (id)deletingAccountHUD;
- (void)doneButtonPressed:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isCancellationAllowed;
- (float)keyboardHeight;
- (id)keyboardWillHideObserver;
- (id)keyboardWillShowObserver;
- (id)linkButton;
- (id)logoView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGSize { float x1; float x2; })preferredLogoSize;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCancellationAllowed:(BOOL)arg1;
- (void)setCredentialEntryFieldSpecifiers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeletingAccountHUD:(id)arg1;
- (void)setKeyboardHeight:(float)arg1;
- (void)setKeyboardWillHideObserver:(id)arg1;
- (void)setKeyboardWillShowObserver:(id)arg1;
- (void)setLinkButton:(id)arg1;
- (void)setLogoView:(id)arg1;
- (void)setTextFieldTextDidChangeObserver:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)textFieldTextDidChangeObserver;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
