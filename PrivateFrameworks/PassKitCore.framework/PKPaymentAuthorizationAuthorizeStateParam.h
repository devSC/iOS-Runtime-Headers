/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationAuthorizeStateParam : PKPaymentAuthorizationStateParam {
    NSData * _credential;
    NSData * _nonceData;
}

@property (nonatomic, retain) NSData *credential;
@property (nonatomic, retain) NSData *nonceData;

+ (id)paramWithCredential:(id)arg1 nonce:(id)arg2;

- (void).cxx_destruct;
- (id)credential;
- (id)description;
- (id)nonceData;
- (void)setCredential:(id)arg1;
- (void)setNonceData:(id)arg1;

@end
