/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAGrandSlamSigner : NSObject {
    ACAccountStore * _accountStore;
    NSString * _appTokenID;
    ACAccount * _grandSlamAccount;
    BOOL  _useAltDSID;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) ACAccount *grandSlamAccount;
@property (nonatomic) BOOL useAltDSID;

- (void).cxx_destruct;
- (id)accountStore;
- (id)grandSlamAccount;
- (id)initWithAccountStore:(id)arg1 grandSlamAccount:(id)arg2 appTokenID:(id)arg3;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4;
- (void)setUseAltDSID:(BOOL)arg1;
- (BOOL)signURLRequest:(id)arg1;
- (BOOL)signURLRequest:(id)arg1 isUserInitiated:(BOOL)arg2;
- (BOOL)useAltDSID;

@end
