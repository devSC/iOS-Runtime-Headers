/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReachability : NSObject {
    BOOL  _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability { } * _reachabilityRef;
}

@property (nonatomic) BOOL alwaysReturnLocalWiFiStatus;
@property (nonatomic) struct __SCNetworkReachability { }*reachabilityRef;

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
+ (id)reachabilityWithHostName:(id)arg1;

- (BOOL)alwaysReturnLocalWiFiStatus;
- (BOOL)connectionRequired;
- (int)currentReachabilityStatus;
- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (struct __SCNetworkReachability { }*)reachabilityRef;
- (void)setAlwaysReturnLocalWiFiStatus:(BOOL)arg1;
- (void)setReachabilityRef:(struct __SCNetworkReachability { }*)arg1;
- (BOOL)startNotifier;
- (void)stopNotifier;

@end
