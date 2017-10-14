/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface PBAAuthenticationPolicy : NSObject <SBFAuthenticationPolicy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (BOOL)allowAuthenticationRevocation;
- (BOOL)shouldClearBlockStateOnSync;
- (BOOL)usesSecureMode;
- (void)wipeDeviceWithReason:(id)arg1;

@end
