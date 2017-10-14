/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMUserManager : NSObject <UMUserManagement, UMUserSwitchManagement> {
    NSArray * _allUsers;
    BOOL  _switchIsOccurring;
    <UMUserListUpdateObserver> * _userListUpdateObserver;
}

@property (nonatomic, readonly, copy) UMUser *currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isMultiUser;
@property (nonatomic, readonly) unsigned int maxNumberOfUsers;
@property (readonly) Class superclass;
@property (nonatomic) BOOL switchIsOccurring;
@property (nonatomic) <UMUserListUpdateObserver> *userListUpdateObserver;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_allUsersDidChange;
- (id)allUsers;
- (BOOL)canAccessUserProperties;
- (void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)currentUser;
- (id)currentUserSwitchContext;
- (void)currentUserSwitchContextHasBeenUsed;
- (void)deleteUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)disableUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (BOOL)isMultiUser;
- (void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned int)maxNumberOfUsers;
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;
- (void)registerUserListUpdateObserver:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
- (void)resumeQuotas;
- (void)resumeSync;
- (void)setSwitchIsOccurring:(BOOL)arg1;
- (void)setUserListUpdateObserver:(id)arg1;
- (void)suspendQuotasWithCompletionHandler:(id /* block */)arg1;
- (BOOL)switchIsOccurring;
- (void)switchToLoginUserWithCompletionHandler:(id /* block */)arg1;
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)terminateSyncWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned int)arg2 reason:(id)arg3;
- (BOOL)userExists:(id)arg1;
- (void)userInteractionIsEnabled;
- (void)userListDidUpdate;
- (id)userListUpdateObserver;

@end
