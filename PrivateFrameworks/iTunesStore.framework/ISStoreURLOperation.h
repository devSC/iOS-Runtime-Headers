/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISStoreURLOperation : ISURLOperation <ISBiometricSessionDelegate> {
    int  _activeMachineDataStyle;
    NSNumber * _authenticatedDSID;
    ISBiometricAuthenticationContext * _biometricAuthenticationContext;
    <ISBiometricSessionDelegate> * _biometricSessionDelegate;
    BOOL  _canSendGUIDParameter;
    BOOL  _ignorePreexistingSecureToken;
    BOOL  _isURLBagRequest;
    int  _machineDataStyle;
    BOOL  _needsAuthentication;
    BOOL  _needsTermsAndConditionsAcceptance;
    BOOL  _needsURLBag;
    SSVFairPlaySAPSession * _sapSession;
    BOOL  _shouldSendDSIDHeader;
    BOOL  _shouldSendXTokenHeader;
    BOOL  _urlKnownToBeTrusted;
    BOOL  _useUserSpecificURLBag;
}

@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (readonly) SSURLBagContext *URLBagContext;
@property (getter=isURLBagRequest, nonatomic) BOOL URLBagRequest;
@property (retain) NSNumber *authenticatedDSID;
@property (retain) ISBiometricAuthenticationContext *biometricAuthenticationContext;
@property <ISBiometricSessionDelegate> *biometricSessionDelegate;
@property BOOL canSendGUIDParameter;
@property (readonly, copy) NSString *debugDescription;
@property <ISStoreURLOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL ignorePreexistingSecureToken;
@property int machineDataStyle;
@property BOOL needsAuthentication;
@property BOOL needsTermsAndConditionsAcceptance;
@property BOOL needsURLBag;
@property BOOL performsMachineDataActions;
@property BOOL shouldSendDSIDHeader;
@property BOOL shouldSendXTokenHeader;
@property (readonly) Class superclass;
@property BOOL urlKnownToBeTrusted;
@property BOOL useUserSpecificURLBag;

+ (void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 account:(id)arg3 clientBundleIdentifier:(id)arg4;
+ (void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 accountIdentifier:(id)arg3 clientBundleIdentifier:(id)arg4;
+ (id)_authKitSession;
+ (id)_restrictionsHeaderValue;
+ (void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2;
+ (void)handleITunesStoreResponseHeaders:(id)arg1 request:(id)arg2 withAccountIdentifier:(id)arg3 shouldRetry:(BOOL*)arg4;
+ (id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2;
+ (id)pingOperationWithUrl:(id)arg1;
+ (id)propertyListOperationWithURLBagKey:(id)arg1;

- (void).cxx_destruct;
- (id)SAPSession;
- (id)URLBagContext;
- (id)_account;
- (void)_addStandardQueryParametersForURL:(id)arg1;
- (BOOL)_authenticateWithContext:(id)arg1 error:(id*)arg2;
- (BOOL)_canSendTokenToURL:(id)arg1;
- (void)_continueTouchIDSession;
- (id)_copyAuthenticationContext;
- (id)_copyAuthenticationContextForAttemptNumber:(int)arg1;
- (BOOL)_isErrorTokenError:(id)arg1;
- (id)_loadURLBagInterpreterWithRequest:(id)arg1 requestProperties:(id)arg2;
- (BOOL)_performMachineDataRequest:(id)arg1;
- (BOOL)_processResponseData:(id)arg1 error:(id*)arg2;
- (id)_resolvedURLInBagContext:(id)arg1 URLBag:(id*)arg2;
- (void)_runURLOperation;
- (void)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (BOOL)_shouldRetryForTouchIDChallengeWithError:(id)arg1;
- (id)_urlBagForContext:(id)arg1;
- (void)_willSendRequest:(id)arg1;
- (id)authenticatedAccountDSID;
- (id)authenticatedDSID;
- (id)biometricAuthenticationContext;
- (id)biometricSessionDelegate;
- (BOOL)canSendGUIDParameter;
- (BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2;
- (void)handleResponse:(id)arg1;
- (BOOL)ignorePreexistingSecureToken;
- (id)init;
- (BOOL)isURLBagRequest;
- (int)machineDataStyle;
- (BOOL)needsAuthentication;
- (BOOL)needsTermsAndConditionsAcceptance;
- (BOOL)needsURLBag;
- (id)newRequestWithURL:(id)arg1;
- (BOOL)performsMachineDataActions;
- (void)run;
- (void)sender:(id)arg1 didFallbackToPassword:(BOOL)arg2;
- (void)setAuthenticatedDSID:(id)arg1;
- (void)setBiometricAuthenticationContext:(id)arg1;
- (void)setBiometricSessionDelegate:(id)arg1;
- (void)setCanSendGUIDParameter:(BOOL)arg1;
- (void)setIgnorePreexistingSecureToken:(BOOL)arg1;
- (void)setMachineDataStyle:(int)arg1;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (void)setNeedsTermsAndConditionsAcceptance:(BOOL)arg1;
- (void)setNeedsURLBag:(BOOL)arg1;
- (void)setPerformsMachineDataActions:(BOOL)arg1;
- (void)setSAPSession:(id)arg1;
- (void)setShouldSendDSIDHeader:(BOOL)arg1;
- (void)setShouldSendXTokenHeader:(BOOL)arg1;
- (void)setURLBagRequest:(BOOL)arg1;
- (void)setUrlKnownToBeTrusted:(BOOL)arg1;
- (void)setUseUserSpecificURLBag:(BOOL)arg1;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (BOOL)shouldSendDSIDHeader;
- (BOOL)shouldSendXTokenHeader;
- (BOOL)urlKnownToBeTrusted;
- (BOOL)useUserSpecificURLBag;

@end
