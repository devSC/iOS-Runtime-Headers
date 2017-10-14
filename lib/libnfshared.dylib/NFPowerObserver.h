/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFPowerObserver : NSObject {
    <NFPowerObserverDelegate> * _delegate;
    unsigned int  _powerNotificationConnection;
    unsigned int  _powerNotificationNotifier;
    struct IONotificationPort { } * _powerNotificationPort;
    void * _sleepMessageArgument;
    BOOL  _willSleep;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) BOOL willSleep;

- (void)_powerNotificationMessage:(unsigned int)arg1 argument:(void*)arg2;
- (void)allowSleep;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (BOOL)registerForEvents;
- (void)unregisterForEvents;
- (BOOL)willSleep;

@end
