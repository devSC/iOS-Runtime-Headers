/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMUser : NSObject <NSCopying, NSMutableCopying> {
    id  __photo;
    NSString * _alternateDSID;
    NSDate * _creationDate;
    unsigned long long  _dataQuota;
    unsigned long long  _dataUsed;
    NSString * _displayName;
    NSError * _errorCausingLogout;
    NSString * _familyName;
    NSDate * _firstLoginEndDate;
    NSDate * _firstLoginStartDate;
    unsigned int  _gid;
    NSString * _givenName;
    BOOL  _hasDataToSync;
    NSURL * _homeDirectoryURL;
    BOOL  _isAuditor;
    BOOL  _isDisabled;
    BOOL  _isLoginUser;
    NSArray * _languages;
    NSDate * _lastCachedLoginEndDate;
    NSDate * _lastCachedLoginStartDate;
    NSDate * _lastLoginDate;
    NSDate * _lastLogoutEndDate;
    NSDate * _lastLogoutStartDate;
    NSDate * _lastRemoteAuthDate;
    unsigned int  _passcodeLockGracePeriod;
    unsigned int  _passcodeType;
    NSURL * _photoURL;
    BOOL  _shouldFetchAttributes;
    unsigned int  _uid;
    NSString * _username;
}

@property (nonatomic, copy) id _photo;
@property (nonatomic, copy) NSString *alternateDSID;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) unsigned long long dataQuota;
@property (nonatomic) unsigned long long dataUsed;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSError *errorCausingLogout;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSDate *firstLoginEndDate;
@property (nonatomic, copy) NSDate *firstLoginStartDate;
@property (nonatomic) unsigned int gid;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic) BOOL hasDataToSync;
@property (nonatomic, copy) NSURL *homeDirectoryURL;
@property (nonatomic) BOOL isAuditor;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isLoginUser;
@property (nonatomic, copy) NSArray *languages;
@property (nonatomic, copy) NSDate *lastCachedLoginEndDate;
@property (nonatomic, copy) NSDate *lastCachedLoginStartDate;
@property (nonatomic, copy) NSDate *lastLoginDate;
@property (nonatomic, copy) NSDate *lastLogoutEndDate;
@property (nonatomic, copy) NSDate *lastLogoutStartDate;
@property (nonatomic, copy) NSDate *lastRemoteAuthDate;
@property (nonatomic, readonly) double passcodeBackOffInterval;
@property (nonatomic) unsigned int passcodeLockGracePeriod;
@property (nonatomic) unsigned int passcodeType;
@property (nonatomic, copy) NSURL *photoURL;
@property (nonatomic) BOOL shouldFetchAttributes;
@property (nonatomic) unsigned int uid;
@property (nonatomic, readonly) unsigned int userType;
@property (nonatomic, copy) NSString *username;

// Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement

+ (id)userWithUID:(unsigned int)arg1;

- (void).cxx_destruct;
- (struct dqblk { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10[4]; })_diskQuota;
- (id)_photo;
- (id)alternateDSID;
- (BOOL)commitChanges;
- (BOOL)commitChangesWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (unsigned long long)dataQuota;
- (unsigned long long)dataUsed;
- (id)description;
- (id)displayName;
- (id)errorCausingLogout;
- (id)familyName;
- (void)fetchAttributesIfNeeded;
- (BOOL)fetchAttributesWithOutError:(id*)arg1;
- (id)firstLoginEndDate;
- (id)firstLoginStartDate;
- (unsigned int)gid;
- (id)givenName;
- (BOOL)hasDataToSync;
- (id)homeDirectoryURL;
- (id)init;
- (BOOL)isAuditor;
- (BOOL)isDisabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToUser:(id)arg1;
- (BOOL)isLoginUser;
- (id)languages;
- (id)lastCachedLoginEndDate;
- (id)lastCachedLoginStartDate;
- (id)lastLoginDate;
- (id)lastLogoutEndDate;
- (id)lastLogoutStartDate;
- (id)lastRemoteAuthDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)passcodeBackOffInterval;
- (unsigned int)passcodeLockGracePeriod;
- (unsigned int)passcodeType;
- (id)photoURL;
- (void)setAlternateDSID:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDataQuota:(unsigned long long)arg1;
- (void)setDataUsed:(unsigned long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setErrorCausingLogout:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setFirstLoginEndDate:(id)arg1;
- (void)setFirstLoginStartDate:(id)arg1;
- (void)setGid:(unsigned int)arg1;
- (void)setGivenName:(id)arg1;
- (void)setHasDataToSync:(BOOL)arg1;
- (void)setHomeDirectoryURL:(id)arg1;
- (void)setIsAuditor:(BOOL)arg1;
- (void)setIsDisabled:(BOOL)arg1;
- (void)setIsLoginUser:(BOOL)arg1;
- (void)setLanguages:(id)arg1;
- (void)setLastCachedLoginEndDate:(id)arg1;
- (void)setLastCachedLoginStartDate:(id)arg1;
- (void)setLastLoginDate:(id)arg1;
- (void)setLastLogoutEndDate:(id)arg1;
- (void)setLastLogoutStartDate:(id)arg1;
- (void)setLastRemoteAuthDate:(id)arg1;
- (void)setPasscodeLockGracePeriod:(unsigned int)arg1;
- (void)setPasscodeType:(unsigned int)arg1;
- (void)setPhotoURL:(id)arg1;
- (void)setPropertiesFromUser:(id)arg1;
- (void)setShouldFetchAttributes:(BOOL)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUsername:(id)arg1;
- (void)set_photo:(id)arg1;
- (BOOL)shouldFetchAttributes;
- (unsigned int)uid;
- (unsigned int)userType;
- (id)username;

// Image: /System/Library/PrivateFrameworks/UserManagementUI.framework/UserManagementUI

- (id)photo;

@end
