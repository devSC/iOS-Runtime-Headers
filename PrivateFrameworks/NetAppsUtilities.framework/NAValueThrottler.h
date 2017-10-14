/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface NAValueThrottler : NSObject {
    NSMutableSet * _observerBlocks;
    double  _throttleInterval;
    <NAScheduler> * _updateScheduler;
    id  _value;
    <NACancelable> * _valueUpdateCancelationToken;
}

@property (nonatomic, readonly) BOOL hasPendingValueChange;
@property (nonatomic, readonly) NSMutableSet *observerBlocks;
@property (nonatomic, readonly) double throttleInterval;
@property (nonatomic, retain) <NAScheduler> *updateScheduler;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) <NACancelable> *valueUpdateCancelationToken;

- (void).cxx_destruct;
- (void)_enqueueValueUpdateIfNecessary;
- (void)_notifyObserversOfValueUpdate;
- (void)dealloc;
- (void)flushValueChanges;
- (BOOL)hasPendingValueChange;
- (id)init;
- (id)initWithThrottleInterval:(double)arg1;
- (id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2;
- (id)observeValueChangesWithBlock:(id /* block */)arg1;
- (id)observerBlocks;
- (void)setUpdateScheduler:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueUpdateCancelationToken:(id)arg1;
- (double)throttleInterval;
- (id)updateScheduler;
- (id)value;
- (id)valueUpdateCancelationToken;

@end
