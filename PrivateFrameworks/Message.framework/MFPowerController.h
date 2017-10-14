/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFPowerController : NSObject <MFDiagnosticsGenerator> {
    unsigned int  _appState;
    BKSApplicationStateMonitor * _appStateMonitor;
    CDSession * _duetSession;
    NSCountedSet * _identifiers;
    int  _pluggedIn;
    unsigned int  _pmNotifier;
    struct IONotificationPort { } * _pmPort;
    NSObject<OS_dispatch_queue> * _powerQueue;
    int  _powerToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)powerlog:(id)arg1 eventData:(id)arg2;
+ (id)sharedInstance;

- (void)_applicationStateChanged:(id)arg1;
- (double)_assertionTimeout;
- (id)_bundleIdentifier;
- (BOOL)_createBudgetWithName:(id)arg1 parentBudgetName:(id)arg2 attribute:(id)arg3 error:(id*)arg4;
- (BOOL)_deleteBudgetWithName:(id)arg1;
- (void)_deleteDuetAttributesForAccountWithUniqueId:(id)arg1;
- (id)_duetAttributeForAccountWithUniqueId:(id)arg1 discretionary:(BOOL)arg2;
- (void)_initDuet;
- (void)_lowPowerModeChangedNotification:(id)arg1;
- (void)_releaseAssertion_nts;
- (void)_retainAssertion_nts;
- (void)_setPluggedIn:(unsigned int)arg1;
- (void)_setupAssertionTimer:(double)arg1;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (id)duetIdentifier;
- (id)init;
- (BOOL)isBatterySaverModeEnabled;
- (BOOL)isHoldingAssertion;
- (BOOL)isPluggedIn;
- (void)recordDuetEventForAccount:(id)arg1 event:(id)arg2;
- (void)releaseAssertionWithIdentifier:(id)arg1;
- (void)retainAssertionWithIdentifier:(id)arg1;
- (void)retainAssertionWithIdentifier:(id)arg1 withAccount:(id)arg2;
- (void)startListeningForBatterySaverNotifications;

@end
