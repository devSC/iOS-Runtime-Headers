/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUISoftwareUpdateController : PSListController <DevicePINControllerDelegate, PSUISoftwareUpdateManagerDelegate, UITableViewDelegate> {
    NSString * _devicePasscode;
    id /* block */  _devicePasscodeCompletion;
    BOOL  _disableInstallButton;
    BOOL  _hideInsufficientStorageUI;
    PSSpecifier * _installButtonGroup;
    PSSpecifier * _installButtonSpecifier;
    PSUISoftwareUpdateManager * _manager;
    BOOL  _refreshOnNextAppearance;
    BOOL  _showingTerms;
    NSError * _suError;
    PSSoftwareUpdateTitleCell * _titleCell;
    PSSpecifier * _titleGroup;
    UsageStorageController * _usageStorageController;
}

@property (nonatomic, retain) NSError *SUError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ devicePasscodeCompletion;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)SUError;
- (void)autoInstallCancel:(id)arg1;
- (void)autoInstallCancelPrompt:(id)arg1;
- (id)controllerForSpecifier:(id)arg1;
- (void)dealloc;
- (void)detailedReleaseNotesDonePressed:(id)arg1;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;
- (id /* block */)devicePasscodeCompletion;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)downloadAndInstall:(id)arg1;
- (id)init;
- (void)install:(id)arg1;
- (void)loadView;
- (void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(id)arg4;
- (void)manager:(id)arg1 download:(id)arg2 failedWithError:(id)arg3;
- (void)manager:(id)arg1 downloadProgressChanged:(id)arg2 displayStyle:(int)arg3;
- (void)manager:(id)arg1 promptForDevicePasscodeWithCompletion:(id /* block */)arg2;
- (void)manager:(id)arg1 scanFoundUpdate:(id)arg2 error:(id)arg3;
- (void)presentError:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)refreshState;
- (void)resumeDownload:(id)arg1;
- (void)setDevicePasscodeCompletion:(id /* block */)arg1;
- (void)setSUError:(id)arg1;
- (void)setSUError:(id)arg1 disableButton:(BOOL)arg2 reload:(BOOL)arg3;
- (void)setShowsTermsProgress:(BOOL)arg1;
- (void)showStorageHelpLinkIfNeededOnFooterForGroup:(id)arg1 error:(id)arg2;
- (id)specifiers;
- (id)specifiersForState:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (Class)tableViewClass;
- (void)updateState;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willEnterForeground;

@end
