/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface _HMFNetServiceMonitor : NSObject <HMFLogging, HMFNetServiceBrowserDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <_HMFNetServiceMonitorDelegate> * _delegate;
    HMFNetService * _netService;
    HMFNetServiceBrowser * _netServiceBrowser;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    BOOL  _reachable;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property <_HMFNetServiceMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly, copy) HMFNetService *netService;
@property (nonatomic, readonly) HMFNetServiceBrowser *netServiceBrowser;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isReachable, readonly) BOOL reachable;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)clientQueue;
- (id)delegate;
- (id)init;
- (id)initWithNetService:(id)arg1;
- (BOOL)isReachable;
- (id)logIdentifier;
- (id)netService;
- (id)netServiceBrowser;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (void)notifyDelegateOfReachabilityChange:(BOOL)arg1;
- (void)notifyDelegateOfUpdatedNetService:(id)arg1;
- (id)propertyQueue;
- (void)setDelegate:(id)arg1;
- (void)setNetService:(id)arg1;
- (void)setReachable:(BOOL)arg1;

@end
