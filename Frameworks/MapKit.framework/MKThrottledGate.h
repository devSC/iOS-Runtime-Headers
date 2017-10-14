/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKThrottledGate : NSObject {
    float  _availableTickets;
    int  _maxAvailableTickets;
    NSObject<OS_dispatch_queue> * _queue;
    float  _refreshRate;
    VKTimer * _timer;
    NSMutableArray * _waitingJobs;
}

- (void).cxx_destruct;
- (BOOL)_dispatchWaitingJobsIfNecessary;
- (void)_ensureTimer;
- (BOOL)_replenishAvailableJobsIfNecessary;
- (void)_timerFired:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)dispatch:(id /* block */)arg1;
- (id)initWithMax:(int)arg1 refreshRate:(float)arg2 queue:(id)arg3;

@end
