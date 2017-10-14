/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNearbyDeviceAdvertiser : NSObject {
    NSObject<OS_dispatch_queue> * _advertiserQ;
    <TRNearbyDeviceAdvertiserDelegate> * _delegate;
    unsigned int  _requestedService;
    SFService * _service;
    NSMapTable * _sessionsTable;
    NSObject<OS_dispatch_queue> * _sessionsTableQ;
    unsigned int  _state;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *advertiserQ;
@property <TRNearbyDeviceAdvertiserDelegate> *delegate;
@property unsigned int requestedService;
@property (nonatomic, retain) SFService *service;
@property (nonatomic, retain) NSMapTable *sessionsTable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sessionsTableQ;
@property (nonatomic) unsigned int state;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_handleActivationWithError:(id)arg1;
- (void)_handleEventMessage:(id)arg1;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (void)_handleNewConnectionFromPeerDevice:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_handleRequestMessage:(id)arg1;
- (void)_requestSessionForMessage:(id)arg1 withCallback:(id /* block */)arg2;
- (void)_respondToRequest:(id)arg1 withError:(id)arg2;
- (id)advertiserQ;
- (id)delegate;
- (id)init;
- (unsigned int)requestedService;
- (id)service;
- (id)sessionsTable;
- (id)sessionsTableQ;
- (void)setAdvertiserQ:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequestedService:(unsigned int)arg1;
- (void)setService:(id)arg1;
- (void)setSessionsTable:(id)arg1;
- (void)setSessionsTableQ:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)startAdvertisingWithService:(unsigned int)arg1;
- (unsigned int)state;
- (void)stopAdvertising;

@end
