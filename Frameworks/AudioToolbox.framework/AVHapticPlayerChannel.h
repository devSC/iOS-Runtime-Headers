/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AVHapticPlayerChannel : NSObject {
    unsigned int  _behavior;
    unsigned int  _chanID;
    HapticClient * _client;
}

@property unsigned int chanID;
@property HapticClient *client;
@property unsigned int eventBehavior;

- (void).cxx_destruct;
- (unsigned int)chanID;
- (BOOL)clearEvents:(double)arg1 error:(id*)arg2;
- (id)client;
- (unsigned int)eventBehavior;
- (id)initWithChannelID:(id)arg1 client:(id)arg2;
- (void)invalidate;
- (BOOL)scheduleParameterCurve:(unsigned int)arg1 curve:(id)arg2 atTime:(double)arg3 error:(id*)arg4;
- (BOOL)sendEvents:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
- (void)setChanID:(unsigned int)arg1;
- (void)setClient:(id)arg1;
- (void)setEventBehavior:(unsigned int)arg1;
- (BOOL)setParameter:(unsigned int)arg1 value:(float)arg2 atTime:(double)arg3 error:(id*)arg4;
- (BOOL)startEvent:(unsigned int)arg1 atTime:(double)arg2 token:(unsigned int*)arg3 error:(id*)arg4;
- (BOOL)stopEvent:(unsigned int)arg1 atTime:(double)arg2 error:(id*)arg3;

@end
