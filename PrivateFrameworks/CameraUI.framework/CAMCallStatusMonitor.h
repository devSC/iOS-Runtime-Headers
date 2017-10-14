/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCallStatusMonitor : NSObject {
    NSObject<OS_dispatch_queue> * __mutexQueue;
    BOOL  __mutexQueue_callActive;
    NSMutableSet * __mutexQueue_disabledReasons;
    BOOL  __mutexQueue_mustQueryInitialValueForCallActive;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_mutexQueue;
@property (getter=_mutexQueue_isCallActive, setter=_mutexQueue_setCallActive:, nonatomic) BOOL _mutexQueue_callActive;
@property (nonatomic, readonly) NSMutableSet *_mutexQueue_disabledReasons;
@property (setter=_mutexQueue_setMustQueryInitialValueForCallActive:, nonatomic) BOOL _mutexQueue_mustQueryInitialValueForCallActive;
@property (getter=isCallActive, nonatomic, readonly) BOOL callActive;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_descriptionForReasons:(id)arg1;
- (id)_descriptionStringForReason:(int)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleCallIsActiveDidChangeNotification:(id)arg1;
- (void)_handleServerConnectionDiedNotification:(id)arg1;
- (id)_mutexQueue;
- (id)_mutexQueue_disabledReasons;
- (BOOL)_mutexQueue_isCallActive;
- (BOOL)_mutexQueue_mustQueryInitialValueForCallActive;
- (void)_mutexQueue_setCallActive:(BOOL)arg1;
- (void)_mutexQueue_setMustQueryInitialValueForCallActive:(BOOL)arg1;
- (void)_queryCallActiveStatusForReason:(id)arg1;
- (void)_queryInitialValueForCallActiveIfNecessary;
- (void)_registerForAVSystemControllerNotifications;
- (void)_setCallActive:(BOOL)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)addDisabledReason:(int)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isCallActive;
- (void)removeDisabledReason:(int)arg1;

@end
