/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKStateMachine : NSObject {
    GKState * _currentState;
    NSDictionary * _states;
}

@property (nonatomic, readonly) GKState *currentState;

+ (id)stateMachineWithStates:(id)arg1;

- (void).cxx_destruct;
- (id)_dotStringInstanceData;
- (id)_instanceData;
- (BOOL)canEnterState:(Class)arg1;
- (id)currentState;
- (BOOL)enterState:(Class)arg1;
- (void)forceEnterState:(Class)arg1;
- (id)init;
- (id)initWithStates:(id)arg1;
- (id)stateForClass:(Class)arg1;
- (void)updateWithDeltaTime:(double)arg1;

@end
