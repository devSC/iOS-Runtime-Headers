/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemAppProxyServiceServer : FBSystemServiceFacility {
    FBServiceClientAuthenticator * _badgeValueAuthenticator;
    FBServiceClientAuthenticator * _dataResetAuthenticator;
    FBServiceClientAuthenticator * _deleteSnapshotsAuthenticator;
    FBServiceClientAuthenticator * _keyboardFocusAuthenticator;
    FBServiceClientAuthenticator * _shutdownAuthenticator;
}

+ (id)sharedInstance;

- (void)_handleActions:(id)arg1;
- (void)_handleActivateApplication:(id)arg1 forClient:(id)arg2;
- (void)_handleAppRequestBrightness:(id)arg1 forClient:(id)arg2;
- (void)_handleCanActivateApplication:(id)arg1;
- (void)_handleDataReset:(id)arg1 forClient:(id)arg2;
- (void)_handleDeleteAllApplicationSnapshots:(id)arg1 forClient:(id)arg2;
- (void)_handleGetActiveInterfaceOrientation:(id)arg1 forClient:(id)arg2;
- (void)_handleGetBadgeValue:(id)arg1 forClient:(id)arg2;
- (void)_handleGetPasscodeLockedOrBlockedStatus:(id)arg1 forClient:(id)arg2;
- (void)_handleGetProcessHandle:(id)arg1 forClient:(id)arg2;
- (void)_handlePidForApplication:(id)arg1;
- (void)_handleSetBadgeValue:(id)arg1 forClient:(id)arg2;
- (void)_handleSetKeyboardFocusApplication:(id)arg1 forClient:(id)arg2;
- (void)_handleSetNextWakeInterval:(id)arg1 forClient:(id)arg2;
- (void)_handleShutdown:(id)arg1 forClient:(id)arg2;
- (void)_handleSuspendApplication:(id)arg1 forClient:(id)arg2;
- (void)_handleSystemApplicationBundleIdentifier:(id)arg1;
- (void)_handleTerminateApplication:(id)arg1;
- (void)_handleTerminateApplicationGroup:(id)arg1;
- (void)_handleUIAppCheckIn:(id)arg1 forClient:(id)arg2;
- (id)_initWithQueue:(id)arg1;
- (void)dealloc;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;

@end
