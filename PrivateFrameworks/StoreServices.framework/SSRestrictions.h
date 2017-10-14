/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRestrictions : NSObject

+ (BOOL)_calculateIsRestrictionsPasscodeSet;
+ (BOOL)_isExplicitContentDisallowedInCurrentStoreFront;
+ (BOOL)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+ (void)didDisplayExplicitRestrictionAlertOfType:(int)arg1;
+ (BOOL)isActiveAccountAllowedToUpdateRestrictions;
+ (void)isExplicitContentDisallowedInCurrentStoreFront:(id /* block */)arg1;
+ (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id /* block */)arg1;
+ (void)isRestrictionsPasscodeSet:(id /* block */)arg1;
+ (void)setAllowExplicitContent;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)shouldDisplayExplicitRestrictionAlertOfType:(int)arg1 completionBlock:(id /* block */)arg2;

@end
