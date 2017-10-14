/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSError : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    int  _code;
    NSString * _domain;
    void * _reserved;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) int _code;
@property (nonatomic, readonly) NSString *_domain;
@property (getter=_mapkit_isCLDenied, nonatomic, readonly) BOOL _mapkit_CLDenied;
@property (getter=_mapkit_isCLErrorNetwork, nonatomic, readonly) BOOL _mapkit_CLErrorNetwork;
@property (getter=_mapkit_isCLHeadingFailure, nonatomic, readonly) BOOL _mapkit_CLHeadingFailure;
@property (getter=_mapkit_isCLLocationUnknown, nonatomic, readonly) BOOL _mapkit_CLLocationUnknown;
@property (nonatomic, readonly, retain) NSURL *_mapkit_locationErrorSettingsURL;
@property (nonatomic, readonly) id _userInfo;
@property (readonly) int code;
@property (getter=isComparisonError, nonatomic, readonly) BOOL comparisonError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *domain;
@property (getter=isFromRequest, nonatomic, readonly) BOOL fromRequest;
@property (readonly) unsigned int hash;
@property (getter=hd_isFromRequest, nonatomic, readonly) BOOL hd_fromRequest;
@property (nonatomic, readonly) unsigned short hd_messageID;
@property (nonatomic, readonly) NSString *hd_messageIDSDeviceIdentifier;
@property (nonatomic, readonly) NSString *hd_messageIDSIdentifier;
@property (nonatomic, readonly) NSDate *hd_messageSent;
@property (nonatomic, readonly) NSDictionary *hd_persistentUserInfo;
@property (readonly, copy) NSString *helpAnchor;
@property (nonatomic, readonly) BOOL hf_isHomeKitNamingError;
@property (getter=isHMError, nonatomic, readonly) BOOL hmError;
@property (getter=isHMFError, nonatomic, readonly) BOOL hmfError;
@property (nonatomic, readonly) NSString *idsIdentifier;
@property (nonatomic, readonly) BOOL isAuthKitUnableToPromptDueToNetworkError;
@property (nonatomic, readonly) BOOL isAuthKitUnableToPromptError;
@property (nonatomic, readonly) BOOL isAuthenticationError;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedFailureReason;
@property (readonly, copy) NSArray *localizedRecoveryOptions;
@property (readonly, copy) NSString *localizedRecoverySuggestion;
@property (nonatomic, readonly) unsigned short messageID;
@property (nonatomic, readonly) NSDate *messageSent;
@property (nonatomic, readonly) NSDictionary *persistentUserInfo;
@property (readonly) id recoveryAttempter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL tsp_isDocumentTooNewError;
@property (nonatomic, readonly) BOOL tsp_isRecoverable;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_registerBuiltInFormatters;
+ (void)_registerFormatter:(int (*)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_web_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(int)arg2 failingURL:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
+ (void)setUserInfoValueProviderForDomain:(id)arg1 provider:(id /* block */)arg2;
+ (BOOL)supportsSecureCoding;
+ (id /* block */)userInfoValueProviderForDomain:(id)arg1;

- (unsigned long)_cfTypeID;
- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (int)_collectApplicableUserInfoFormatters:(struct { /* ? */ }**)arg1 max:(int)arg2;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct { /* ? */ }**)arg3 count:(int)arg4;
- (struct __CFString { }*)_retainedUserInfoCallBackForKey:(id)arg1;
- (BOOL)_web_errorIsInDomain:(id)arg1;
- (id)_web_failingURL;
- (id)_web_initWithDomain:(id)arg1 code:(int)arg2 failingURL:(id)arg3;
- (id)_web_initWithDomain_nowarn:(id)arg1 code:(int)arg2 URL:(id)arg3;
- (id)_web_localizedDescription;
- (int)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)helpAnchor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedFailureReason;
- (id)localizedRecoveryOptions;
- (id)localizedRecoverySuggestion;
- (id)recoveryAttempter;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)userInfo;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

- (id)_sanitizeObject:(id)arg1;
- (id)ac_secureCodingError;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

+ (id)cx_callDirectoryManagerErrorWithCode:(int)arg1;
+ (id)cx_callDirectoryManagerErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)cx_callDirectoryStoreErrorWithCode:(int)arg1;
+ (id)cx_errorWithCode:(int)arg1;
+ (id)cx_incomingCallErrorWithCode:(int)arg1;
+ (id)cx_requestTransactionErrorWithCode:(int)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKErrorFromErrno;
+ (id)CKErrorWithPOSIXCode:(int)arg1;

- (id)CKClientSuitableError;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (BOOL)CKIsNotFoundError;
- (BOOL)CKIsPOSIXErrorCode:(int)arg1;
- (BOOL)isComparisonError;

// Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth

+ (id)errorWithInfo:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)_defaultDescriptionForCode:(int)arg1;
+ (id)errorWithCADResult:(int)arg1;
+ (id)errorWithCADResult:(int)arg1 action:(id)arg2;
+ (id)errorWithEKErrorCode:(int)arg1;
+ (id)errorWithEKErrorCode:(int)arg1 description:(id)arg2;
+ (id)errorWithEKErrorCode:(int)arg1 description:(id)arg2 reason:(id)arg3;
+ (id)errorWithEKErrorCode:(int)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4;
+ (id)errorWithEKErrorCode:(int)arg1 underlyingError:(id)arg2;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (BOOL)hk_assignError:(id*)arg1 code:(int)arg2 description:(id)arg3;
+ (BOOL)hk_assignError:(id*)arg1 code:(int)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (BOOL)hk_assignError:(id*)arg1 code:(int)arg2 format:(id)arg3;
+ (id)hk_error:(int)arg1 description:(id)arg2;
+ (id)hk_error:(int)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hk_error:(int)arg1 format:(id)arg2;
+ (id)hk_protectedDataInaccessibilityError;

- (BOOL)hk_isAuthorizationDeniedError;
- (BOOL)hk_isAuthorizationNotDeterminedError;
- (BOOL)hk_isCocoaNoSuchFileError;
- (BOOL)hk_isDatabaseAccessibilityError;
- (BOOL)hk_isHealthKitError;
- (BOOL)hk_isInternalFailureError;
- (BOOL)hk_isInvalidArgumentError;
- (BOOL)hk_isServiceDeviceNotFoundError;
- (BOOL)hk_isStreamFailureError;
- (BOOL)hk_isTimeoutError;
- (id)hk_underlyingErrorWithDomain:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)hmErrorWithCode:(int)arg1;
+ (id)hmErrorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)hmInternalErrorWithCode:(int)arg1;
+ (id)hmInternalErrorWithCode:(int)arg1 underlyingError:(id)arg2;

- (BOOL)isHMError;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (int)_mapkit_directionsErrorCode;
- (id)_mapkit_error;
- (id)_mapkit_errorWithDirectionsError:(id)arg1;
- (BOOL)_mapkit_isCLDenied;
- (BOOL)_mapkit_isCLErrorNetwork;
- (BOOL)_mapkit_isCLHeadingFailure;
- (BOOL)_mapkit_isCLLocationUnknown;
- (BOOL)_mapkit_isDirectionsError;
- (id)_mapkit_locationErrorSettingsURL;
- (id)_mapkit_transitIncident;
- (int)_mapkit_underlyingGEOError;

// Image: /System/Library/Frameworks/Metal.framework/Metal

- (id)initWithIOAccelError:(int)arg1;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;
+ (id)ph_errorWithDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
+ (id)ph_genericEntitlementError;
+ (id)ph_genericErrorWithLocalizedDescription:(id)arg1;
+ (id)ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (id)_rpUserErrorForCode:(int)arg1 userInfo:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)failingURL;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)APIAuthorizationErrorFromErrorCode:(int)arg1;
+ (id)APIFakeUserErrorFromErrorCode:(int)arg1;
+ (id)APIGenericErrorFromErrorCode:(int)arg1;
+ (id)APIInternalServerErrorFromErrorCode:(int)arg1;
+ (id)APILimitErrorFromErrorCode:(int)arg1;
+ (id)APIParameterErrorFromErrorCode:(int)arg1;
+ (id)APIUserErrorFromErrorCode:(int)arg1;
+ (id)errorFromTencentWeiboAPIResponseErrorWithType:(int)arg1 code:(int)arg2;

- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)_un_descriptionForUNErrorCode:(int)arg1;
+ (id)un_errorWithUNErrorCode:(int)arg1 userInfo:(id)arg2;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (id)vs_secureCodingSafeError;

// Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity

+ (id)userInfoDictionaryWithErrorStringsForErrorCode:(int)arg1;
+ (id)wcErrorFromInternalError:(id)arg1;
+ (id)wcErrorFromReceivedCode:(int)arg1;
+ (id)wcErrorWithCode:(int)arg1;
+ (id)wcErrorWithCode:(int)arg1 underlyingError:(id)arg2;
+ (id)wcErrorWithCode:(int)arg1 underlyingWCErrorWithCode:(int)arg2;
+ (id)wcErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)wcInternalErrorWithCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation

- (id)ATPError;
- (id)initWithATPError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (id)_ax_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 arguments:(void*)arg4;
+ (id)ax_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3;
+ (id)ax_errorWithDomain:(id)arg1 description:(id)arg2;

- (id)ax_nonRedundantDescription;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)userReadableError;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_errorWithCode:(int)arg1;
+ (id)ak_errorWithCode:(int)arg1 underlyingError:(id)arg2;
+ (id)ak_errorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)ak_wrappedAnisetteError:(long)arg1;

- (BOOL)ak_isUserCancelError;
- (BOOL)ak_isUserSkippedError;
- (BOOL)ak_isUserTryAgainError;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_timeoutError;

- (BOOL)bs_isCancelledError;
- (BOOL)bs_isTimeoutError;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)formattedCode:(int)arg1;

- (id)formattedCode;
- (id)verboseDescription;
- (id)verboseDescriptionWithIdentation:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)br_errorFromErrno;
+ (id)br_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3;
+ (id)br_errorWithPOSIXCode:(int)arg1;
+ (id)br_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)brc_addPartialError:(id)arg1 forURL:(id)arg2 toError:(id)arg3;
+ (id)brc_errorAcceptAlreadyInProgressForURL:(id)arg1;
+ (id)brc_errorAccountMismatch;
+ (id)brc_errorAppLibraryNotFound:(id)arg1;
+ (id)brc_errorClientZoneNotFound:(id)arg1;
+ (id)brc_errorCompatibilityIssue;
+ (id)brc_errorDaemonShouldBeLoggedOut;
+ (id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToAppLibrary:(id)arg2;
+ (id)brc_errorDocumentIsNoLongerSharedAtURL:(id)arg1;
+ (id)brc_errorDocumentIsNotShared;
+ (id)brc_errorDocumentIsNotSharedAtURL:(id)arg1;
+ (id)brc_errorDocumentWithFilename:(id)arg1 size:(long long)arg2 isTooLargeToUpload:(long long)arg3;
+ (id)brc_errorDriveDisabledOrAppLibraryDisabled;
+ (id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2;
+ (id)brc_errorItemNotFound:(id)arg1;
+ (id)brc_errorLoggedOut;
+ (id)brc_errorMethodNotImplemented:(const char *)arg1;
+ (id)brc_errorNoAppLibraryForBundle:(id)arg1;
+ (id)brc_errorNoDocumentAtURL:(id)arg1 underlyingPOSIXError:(int)arg2;
+ (id)brc_errorNoSuitableClientApp;
+ (id)brc_errorNotInCloud:(id)arg1;
+ (id)brc_errorNotOnDisk:(id)arg1;
+ (id)brc_errorOperationCancelled;
+ (id)brc_errorPathOutsideAnyCloudDocsAppLibraryAtURL:(id)arg1;
+ (id)brc_errorPermissionError:(id)arg1;
+ (id)brc_errorPermissionErrorAtURL:(id)arg1;
+ (id)brc_errorSyncDisabled:(id)arg1;
+ (id)brc_errorUnknownKey:(id)arg1;

- (BOOL)br_isCloudDocsErrorCode:(int)arg1;
- (BOOL)br_isCocoaErrorCode:(int)arg1;
- (BOOL)br_isPOSIXErrorCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_daemonAccessDisabledError;
+ (id)brc_errorWithDomain:(id)arg1 code:(int)arg2 underlyingError:(id)arg3;
+ (void)initialize;

- (id)_brc_cloudKitInternalWithErrorCode:(int)arg1;
- (id)_brc_cloudKitPluginErrorPayload;
- (BOOL)_brc_isCloudKitErrorCode:(int)arg1;
- (BOOL)_brc_isCloudKitInternalErrorCode:(int)arg1;
- (BOOL)_brc_isCloudKitInternalErrorSafeToSyncUpWithoutSyncDown;
- (BOOL)_brc_isCloudKitPluginErrorCode:(int)arg1;
- (BOOL)_brc_isCloudKitZoneNotFoundError;
- (BOOL)_brc_isCloudKitZoneUserDeletedError;
- (id)br_cloudKitErrorForIdentifier:(id)arg1;
- (double)br_suggestedRetryTimeInterval;
- (BOOL)brc_checkErrorsFromCloudKit:(id /* block */)arg1;
- (id)brc_cloudKitErrorForRecordID:(id)arg1;
- (id)brc_cloudKitErrorForSubscriptionID:(id)arg1;
- (id)brc_cloudKitErrorForZone:(id)arg1;
- (unsigned int)brc_containerResetErrorForSharedZone:(BOOL)arg1 resetReason:(const char **)arg2;
- (BOOL)brc_containsCloudKitErrorCode:(int)arg1;
- (BOOL)brc_containsCloudKitInternalErrorCode:(int)arg1;
- (id)brc_description;
- (BOOL)brc_isBlacklistError;
- (BOOL)brc_isCloudKitAssetFileModified;
- (BOOL)brc_isCloudKitCancellationError;
- (BOOL)brc_isCloudKitErrorImplyingZoneNeedsCreation;
- (BOOL)brc_isCloudKitErrorNeedsPCSPrep;
- (BOOL)brc_isCloudKitErrorRequiringAssetRescan;
- (BOOL)brc_isCloudKitErrorRequiringAssetReupload;
- (BOOL)brc_isCloudKitErrorRequiringSkipThrottling;
- (BOOL)brc_isCloudKitErrorSafeToSyncUpWithoutSyncDown;
- (BOOL)brc_isCloudKitErrorUnsupportedOSForItemAndGetMinimumSupported:(id*)arg1;
- (BOOL)brc_isCloudKitErrorUnsupportedOSForZoneAndGetMinimumSupported:(id*)arg1;
- (BOOL)brc_isCloudKitErrorZoneMigrated;
- (BOOL)brc_isCloudKitErrorZoneUndergoingMigration;
- (BOOL)brc_isCloudKitOutOfQuota;
- (BOOL)brc_isCloudKitUnknownItemError;
- (BOOL)brc_isEverRetriable;
- (BOOL)brc_isOutOfSpaceError;
- (BOOL)brc_isResetError;
- (BOOL)brc_isRetriable;
- (BOOL)brc_shouldRetryBubbleLater;
- (id)brc_strippedError;
- (int)brc_syncOperationErrorKind;
- (id)brc_wrappedError;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)_cplSafeUserInfoForXPCDidChange:(BOOL*)arg1;
- (id)cplSafeErrorForXPC;
- (id)cplShortDomainDescription;
- (id)cplUnderlyingPOSIXError;
- (BOOL)isCPLError;
- (BOOL)isCPLErrorWithCode:(int)arg1;
- (BOOL)isCPLOperationCancelledError;

// Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync

+ (id)errorFromSYErrorInfo:(id)arg1;
+ (id)errorWithSYError:(int)arg1 userInfo:(id)arg2;

- (id)idsIdentifier;
- (id)initWithSYError:(int)arg1 userInfo:(id)arg2;
- (BOOL)isFromRequest;
- (unsigned short)messageID;
- (id)messageSent;
- (id)persistentUserInfo;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

- (BOOL)shouldDisplayToUser;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (id)errorByExtendingUserInfoWithDictionary:(id)arg1;
- (BOOL)isAuthKitUnableToPromptDueToNetworkError;
- (BOOL)isAuthKitUnableToPromptError;
- (BOOL)isAuthenticationError;
- (BOOL)isCoolDownError;
- (BOOL)isICSCRecoveryHardLimitError;
- (BOOL)isLoginHardLimit;
- (BOOL)isLoginSoftLimit;
- (BOOL)isRecoveryPETHardLimitError;
- (BOOL)isRecoveryPETSoftLimitError;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)errorWithOSStatus:(long)arg1;
+ (id)hapErrorWithcode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(int)arg1;
+ (id)hmErrorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)hmInternalErrorWithCode:(int)arg1;
+ (id)hmInternalErrorWithCode:(int)arg1 underlyingError:(id)arg2;

- (BOOL)isHAPError;
- (BOOL)isHMError;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

+ (id)MMCSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 suggestion:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;

- (int)MMCSErrorType;
- (BOOL)MMCSIsAuthorizationError;
- (BOOL)MMCSIsCancelError;
- (BOOL)MMCSIsFatalError;
- (BOOL)MMCSIsNetworkConditionsError;
- (id)MMCSRetryAfterDate;
- (BOOL)MSASStateMachineIsCanceledError;
- (BOOL)MSCanBeIgnored;
- (BOOL)MSContainsErrorWithDomain:(id)arg1 code:(int)arg2;
- (id)MSFindPrimaryError;
- (BOOL)MSIsAuthError;
- (BOOL)MSIsBadTokenError;
- (BOOL)MSIsCounted;
- (BOOL)MSIsFatal;
- (BOOL)MSIsQuotaError;
- (BOOL)MSIsRegistrationError;
- (BOOL)MSIsTemporaryNetworkError;
- (id)MSMMCSRetryAfterDate;
- (id)MSMakePrimaryError;
- (BOOL)MSNeedsBackoff;
- (id)MSVerboseDescription;
- (void)_MMCSApplyBlock:(id /* block */)arg1;
- (void)_MSApplyBlock:(id /* block */)arg1;
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DAExtendedDescription;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal

- (BOOL)isSubCalAuthError;
- (BOOL)isSubCalReachabilityError;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_cancelledError;
+ (id)fm_errorWithCode:(unsigned int)arg1;
+ (id)fm_genericError;
+ (id)fm_timeoutError;

- (BOOL)fm_isCancelledError;
- (BOOL)fm_isTimeoutError;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)sceneMessageErrorWithCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkUnauthenticatedError;
+ (id)_gkUserErrorForGameSessionErrorCode:(int)arg1 userInfo:(id)arg2;
+ (id)serverErrorForCode:(int)arg1 withReason:(id)arg2;
+ (id)serverErrorForCode:(int)arg1 withUserInfo:(id)arg2;
+ (id)userErrorForCode:(int)arg1 underlyingError:(id)arg2;
+ (id)userErrorForCode:(int)arg1 userInfo:(id)arg2;
+ (id)userErrorForServerCode:(int)arg1 reason:(id)arg2;
+ (id)userErrorForServerCode:(int)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (id)userErrorForServerError:(id)arg1;
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;

- (BOOL)_gkIsUnauthenticatedError;

// Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference

+ (id)AVConferenceServiceError:(int)arg1 detailCode:(int)arg2 description:(id)arg3;
+ (id)AVConferenceServiceError:(int)arg1 detailedCode:(int)arg2 filePath:(id)arg3 description:(id)arg4 reason:(id)arg5;
+ (id)AVConferenceServiceError:(int)arg1 detailedCode:(int)arg2 returnCode:(int)arg3 filePath:(id)arg4 description:(id)arg5 reason:(id)arg6;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)GEOErrorWithCode:(int)arg1 reason:(id)arg2;
+ (id)_geo_errorFromXPCData:(id)arg1;
+ (id)zilchDecoderErrorForNoSolution;

- (id)_geo_newXPCData;
- (id)zilchDecoderTileLoadingError;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)hmfErrorWithCode:(int)arg1;
+ (id)hmfErrorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmfErrorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmfErrorWithCode:(int)arg1 userInfo:(id)arg2;

- (BOOL)isHMFError;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hk_errorWithCodableError:(id)arg1;

- (BOOL)hd_isConstraintViolation;
- (BOOL)hd_isDatabaseCorruptionError;
- (BOOL)hd_isFromRequest;
- (BOOL)hd_isResponseTimeout;
- (unsigned short)hd_messageID;
- (id)hd_messageIDSDeviceIdentifier;
- (id)hd_messageIDSIdentifier;
- (id)hd_messageSent;
- (id)hd_persistentMessage;
- (id)hd_persistentUserInfo;
- (id)hd_underlyingSQLiteError;
- (id)hk_codableError;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_errorWithOperationType:(id)arg1 failedItemName:(id)arg2;
- (id)hf_errorWithOperationType:(id)arg1 options:(id)arg2;
- (BOOL)hf_isHomeKitNamingError;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)hmErrorWithCode:(int)arg1;
+ (id)hmErrorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)hmInternalErrorWithCode:(int)arg1;
+ (id)hmInternalErrorWithCode:(int)arg1 underlyingError:(id)arg2;

- (id)conciseCKError;
- (id)hmErrorFromCKError;
- (BOOL)isHMError;

// Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing

+ (id)hs_cloudErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)hs_cloudLibraryUploadErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)hs_homeSharingErrorWithCode:(int)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)genericErrorWithFile:(const char *)arg1 function:(const char *)arg2 lineNumber:(int)arg3;

// Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle

+ (id)errorWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(void*)arg3;
+ (id)errorWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2;
+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2 arguments:(void*)arg3;
+ (id)errorWithOSStatus:(long)arg1 description:(id)arg2 args:(void*)arg3;
+ (id)errorWithOSStatus:(long)arg1 userInfo:(id)arg2;

- (id)initWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(void*)arg3;
- (id)initWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
- (id)initWithJoiningError:(int)arg1 userInfo:(id)arg2;
- (id)initWithOSStatus:(long)arg1 description:(id)arg2 args:(void*)arg3;
- (id)initWithOSStatus:(long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (id)mf_cancelledError;
+ (id)mf_decodeFailedErrorWithUserInfo:(id)arg1;
+ (id)mf_illegalEmailAddressErrorWithAddress:(id)arg1;
+ (id)mf_timeoutError;

- (BOOL)mf_isCancelledError;
- (BOOL)mf_isTimeoutError;
- (id /* block */)mf_match;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCErrorWithDomain:(id)arg1 code:(int)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;
+ (id)MCErrorWithDomain:(id)arg1 code:(int)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;
+ (id)MCErrorWithDomain:(id)arg1 code:(int)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;

- (BOOL)MCContainsErrorDomain:(id)arg1 code:(int)arg2;
- (id)MCCopyAsPrimaryError;
- (id)MCErrorType;
- (id)MCFindPrimaryError;
- (id)MCUSEnglishDescription;
- (id)MCUSEnglishSuggestion;
- (id)MCVerboseDescription;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (BOOL)mf_isInaccessibleAccountCredentialError;
- (BOOL)mf_isMissingAccountCredentialError;
- (BOOL)mf_isSMIMEError;
- (BOOL)mf_isUserCancelledError;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (BOOL)mf_shouldBeReportedToUser;
- (BOOL)mf_shouldFailDownload;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)ml_errorWithCode:(unsigned int)arg1;
+ (id)ml_errorWithCode:(unsigned int)arg1 description:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

- (id)nr_safeDescription;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigation_errorWithCode:(int)arg1;
+ (id)_navigation_errorWithCode:(int)arg1 userInfo:(id)arg2;

- (id)_navigation_errorCodeAsString;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)na_cancelledError;
+ (id)na_errorWithCode:(unsigned int)arg1;
+ (id)na_genericError;
+ (id)na_timeoutError;

- (BOOL)na_isCancelledError;
- (BOOL)na_isTimeoutError;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_belowMinimumVersionError;
+ (id)fc_canaryDownError;
+ (id)fc_createStateMachineErrorForCode:(int)arg1 userInfo:(id)arg2;
+ (id)fc_errorWithCode:(int)arg1 description:(id)arg2;
+ (id)fc_errorWithCode:(int)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
+ (id)fc_feedDroppedError;
+ (id)fc_missingAppConfigErrorWithUnderlyingError:(id)arg1;
+ (id)fc_notAvailableError;
+ (id)fc_notCachedError;
+ (id)fc_offlineErrorWithReason:(int)arg1;

- (BOOL)fc_isCKErrorWithCode:(int)arg1;
- (BOOL)fc_isCKUnknownItemError;
- (BOOL)fc_isCancellationError;
- (BOOL)fc_isNetworkUnavailableError;
- (BOOL)fc_isOfflineError;
- (BOOL)fc_isOperationThrottledError;
- (BOOL)fc_isServiceUnavailableError;
- (BOOL)fc_isStateMachineError:(int)arg1;
- (BOOL)fc_shouldRetry;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_errorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 underlyingError:(id)arg4;

- (BOOL)tsu_isCancelError;
- (BOOL)tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;

// Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync

- (id)psy_safeDescription;

// Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit

+ (id)pr_errorWithCode:(int)arg1;

- (BOOL)pr_isInPersonaDomain;
- (BOOL)pr_isNetworkAvailabilityError;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision

+ (id)errorForPhotoVisionCancelledOperation;
+ (id)errorForPhotoVisionErrorCode:(int)arg1 userInfo:(id)arg2;
+ (id)errorForPhotoVisionInvalidNilParameterNamed:(id)arg1;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 integerValue:(int)arg2;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 realValue:(double)arg2;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 value:(id)arg2;
+ (id)errorForPhotoVisionInvalidParameterWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionStorageErrorWithUserInfo:(id)arg1;
+ (id)errorForPhotoVisionUnexpectedCondition:(id)arg1;
+ (id)errorForPhotoVisionUnimplementedFunction;
+ (id)errorForPhotoVisionVisionKitErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionVisionKitErrorWithUserInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/PipelineKit.framework/PipelineKit

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

+ (id)phaErrorForInvalidParameterNamed:(id)arg1 localizedDescription:(id)arg2;
+ (id)phaErrorForInvalidParameterValue:(id)arg1 named:(id)arg2;
+ (id)phaErrorForNilParameterNamed:(id)arg1;
+ (id)phaErrorWithCode:(int)arg1 localizedDescription:(id)arg2;
+ (id)phaErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)phaNotImplementedErrorForSelector:(SEL)arg1;
+ (id)phaObjectNotFoundErrorForAssetLocalIdentifier:(id)arg1;
+ (id)phaObjectNotFoundErrorWithLocalizedDescription:(id)arg1;
+ (id)phaResourceNotFoundErrorWithLocalizedDescription:(id)arg1;
+ (id)phaUnexpectedConditionErrorWithLocalizedDescription:(id)arg1;
+ (id)phaUnexpectedConditionErrorWithUserInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (BOOL)safari_isClientSideNetworkError;
- (id)safari_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (void)_safari_enumerateCloudKitErrorsWithBlock:(id /* block */)arg1;
- (BOOL)safari_errorOrAnyPartialErrorHasCloudKitErrorCode:(int)arg1;
- (BOOL)safari_errorOrAnyPartialErrorHasCloudKitInternalErrorCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol

- (BOOL)pc_isDCErrorWithCode:(int)arg1;
- (BOOL)pc_isNSCocoaErrorWithCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks

+ (id)st_startWorkoutErrorWithCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (BOOL)isSiriUISnippetPluginError;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (BOOL)sbf_isFileNotFoundError;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Swift/libswiftFoundation.dylib

- (int)_code;
- (id)_domain;
- (id)_getEmbeddedNSError;
- (id)_userInfo;

// Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary

+ (id)tl_errorWithDomain:(id)arg1 description:(id)arg2;

- (id)tl_nonRedundantDescription;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail

+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithStreamDomain:(long)arg1 code:(long)arg2 localizedDescription:(id)arg3;

- (BOOL)isConnectivityError;
- (BOOL)isEqualToError:(id)arg1;
- (BOOL)isExpiredPasswordError;
- (BOOL)isInvalidSubscriberError;
- (BOOL)isNewPasswordError;
- (BOOL)isPasswordMismatchError;
- (BOOL)isSecurityError;
- (BOOL)isServerError;
- (BOOL)isStreamDomain:(long)arg1 error:(long)arg2;
- (BOOL)shouldPresentErrorForTaskType:(int)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (id)wf_errorWithCode:(unsigned int)arg1;
+ (id)wf_errorWithCode:(unsigned int)arg1 encapsulatedError:(id)arg2 userInfo:(id)arg3;
+ (id)wf_errorWithCode:(unsigned int)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp

- (id)failingURL;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

- (id)wb_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (void)_registerWebKitErrors;
+ (id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2;
+ (id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

- (id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5;
- (id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

+ (id)_webUI_WebUIErrorWithCode:(unsigned int)arg1 URL:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore

- (BOOL)wk_representsTransientConnectivityIssueForAttempt:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)errorBySettingFatalError:(BOOL)arg1;
- (BOOL)isEqual:(id)arg1 compareUserInfo:(BOOL)arg2;
- (BOOL)isFatalError;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsa_errorWithCode:(int)arg1;
+ (id)tsk_errorWithTSKWarning:(id)arg1;
+ (id)tsp_errorWithCode:(int)arg1;
+ (id)tsp_errorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)tsp_recoverableErrorWithCode:(int)arg1;
+ (id)tsp_recoverableErrorWithError:(id)arg1;
+ (id)tsu_IOErrorWithCode:(int)arg1;
+ (id)tsu_IOErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_IOReadErrorWithErrno:(int)arg1;
+ (id)tsu_IOWriteErrorWithErrno:(int)arg1;
+ (id)tsu_errorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(int)arg2 description:(id)arg3 underlyingError:(id)arg4;

- (BOOL)tsa_isCollaborationError;
- (BOOL)tsp_isDocumentTooNewError;
- (BOOL)tsp_isRecoverable;
- (int)tsu_IOErrorNumber;
- (BOOL)tsu_isCancelError;
- (BOOL)tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;

// Image: /usr/lib/libprequelite.dylib

+ (id)errorForDB:(struct sqlite3 { }*)arg1;
+ (id)errorForDB:(struct sqlite3 { }*)arg1 SQL:(id)arg2;
+ (id)errorForDB:(struct sqlite3 { }*)arg1 stmt:(struct sqlite3_stmt { }*)arg2;
+ (id)errorWithSqliteCode:(int)arg1 andMessage:(id)arg2;

- (int)extendedSqliteCode;
- (BOOL)isSqliteErrorCode:(int)arg1;
- (id)sqliteStatement;

@end
