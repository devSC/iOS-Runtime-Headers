/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationAnalyticsLogger : NSObject {
    BOOL  _isShowcast;
    KNPlaybackSession * _session;
}

@property (nonatomic, readonly) BOOL isShowcast;
@property (nonatomic, readonly) BOOL shouldLogAnalytics;

+ (BOOL)logAnalyticsWithPlaybackSession:(id)arg1 isShowcast:(BOOL)arg2;

- (void)dealloc;
- (id)init;
- (id)initWithPlaybackSession:(id)arg1 isShowcast:(BOOL)arg2;
- (BOOL)isShowcast;
- (BOOL)logAnalytics;
- (void)p_logAnimationAnalyticsValue:(int)arg1 forKey:(id)arg2 isDistribution:(BOOL)arg3 aslmsg:(struct __asl_object_s { }*)arg4;
- (BOOL)shouldLogAnalytics;

@end
