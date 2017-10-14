/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemPreflightOperation : NSOperation {
    SKUIClientContext * _clientContext;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _forcesAuthentication;
    BOOL  _loadsRedeemCodeMetadata;
    id /* block */  _outputBlock;
    NSString * _redeemCode;
    SKUIRedeemConfiguration * _redeemConfiguration;
}

@property (nonatomic) BOOL forcesAuthentication;
@property BOOL loadsRedeemCodeMetadata;
@property (copy) id /* block */ outputBlock;
@property (retain) SKUIRedeemConfiguration *redeemConfiguration;

- (void).cxx_destruct;
- (id)_authenticationContext;
- (id)_initSKUIRedeemPreflightOperation;
- (id)_redeemCodeMetadataWithClientContext:(id)arg1;
- (BOOL)forcesAuthentication;
- (id)init;
- (id)initWithClientContext:(id)arg1 redeemCode:(id)arg2 forcesAuthentication:(BOOL)arg3;
- (BOOL)loadsRedeemCodeMetadata;
- (void)main;
- (id /* block */)outputBlock;
- (id)redeemConfiguration;
- (void)setForcesAuthentication:(BOOL)arg1;
- (void)setLoadsRedeemCodeMetadata:(BOOL)arg1;
- (void)setOutputBlock:(id /* block */)arg1;
- (void)setRedeemConfiguration:(id)arg1;

@end
