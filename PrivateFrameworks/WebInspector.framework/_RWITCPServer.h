/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface _RWITCPServer : NSObject {
    NSMutableArray * _connections;
    <_RWITCPServerDelegate> * _delegate;
    int  _listenSocket;
    NSObject<OS_dispatch_queue> * _serverQueue;
    NSObject<OS_dispatch_source> * _serverSource;
}

@property (nonatomic, readonly) <_RWITCPServerDelegate> *delegate;

- (void).cxx_destruct;
- (BOOL)_createListenDispatchSource;
- (id)_initWithDelegate:(id)arg1;
- (BOOL)_listenOnPort:(unsigned short)arg1;
- (void)connectionClosed:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithLaunchdSocketName:(const char *)arg1 delegate:(id)arg2;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;

@end
