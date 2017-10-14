/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIForceLevelClassifier : NSObject <NSObserver> {
    NSMutableDictionary * _cachedProgressObservables;
    int  _currentForceLevel;
    float  _currentTouchForceMultiplier;
    <_UIForceLevelClassifierDelegate> * _delegate;
    NSArray * _delegateObservations;
    NSObservationSource * _progressTouchForceObservable;
    BOOL  _respectsSystemGestureTouchFiltering;
}

@property (nonatomic, readonly) int currentForceLevel;
@property (nonatomic) float currentTouchForceMultiplier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIForceLevelClassifierDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL respectsSystemGestureTouchFiltering;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (void)_notifyDelegateOfProgress:(float)arg1 toForceLevel:(int)arg2;
- (int)currentForceLevel;
- (float)currentTouchForceMultiplier;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)observableForProgressToForceLevel:(int)arg1;
- (id)observableForProgressToForceLevel:(int)arg1 minimumRequiredForceLevel:(int)arg2;
- (void)observeTouchWithForceValue:(float)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint { float x1; float x2; })arg3;
- (void)receiveObservedValue:(id)arg1;
- (void)reset;
- (BOOL)respectsSystemGestureTouchFiltering;
- (void)setCurrentForceLevel:(int)arg1;
- (void)setCurrentTouchForceMultiplier:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRespectsSystemGestureTouchFiltering:(BOOL)arg1;
- (void)touchForceMultiplierDidChange;
- (BOOL)wantsUnclampedForceValues;

@end
