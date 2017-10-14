/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDAccessoryServerDemo : HAPAccessoryServer {
    BOOL  __paired;
    NSDictionary * _accessoryInfo;
    HMDDAccessoryServerBrowserDemo * _browser;
    NSNumber * _category;
}

@property (nonatomic) BOOL _paired;
@property (nonatomic, retain) NSDictionary *accessoryInfo;
@property (nonatomic) HMDDAccessoryServerBrowserDemo *browser;

- (void).cxx_destruct;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (BOOL)_paired;
- (void)_parseAttributeDatabase:(id)arg1;
- (id)accessoryInfo;
- (BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (id)browser;
- (id)category;
- (void)continuePairingAfterAuthPrompt;
- (void)discoverAccessories;
- (void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (void)handleUpdatesForCharacteristics:(id)arg1;
- (void)identifyWithCompletion:(id /* block */)arg1;
- (id)initCommon:(id)arg1 browser:(id)arg2;
- (id)initWithName:(id)arg1 identifier:(id)arg2 deviceInfo:(id)arg3 paired:(BOOL)arg4 keyStore:(id)arg5 browser:(id)arg6;
- (BOOL)isPaired;
- (int)linkType;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processCharacteristicWrite:(id)arg1 value:(id)arg2;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setAccessoryInfo:(id)arg1;
- (void)setBrowser:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)set_paired:(BOOL)arg1;
- (void)startPairing;
- (BOOL)stopPairingWithError:(id*)arg1;
- (BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;

@end
