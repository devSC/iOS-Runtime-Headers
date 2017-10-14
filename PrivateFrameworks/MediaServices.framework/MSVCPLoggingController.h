/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCPLoggingController : NSObject {
    NSMutableDictionary * _cachedLoggingLevelPairs;
    BOOL  _cachedPPTTestsAreInProgress;
    NSObject<OS_dispatch_queue> * _configurationAccessQueue;
    int  _configurationChangeNotifyToken;
    BOOL  _masterLoggingSwitchEnabled;
    BOOL  _masterLoggingSwitchInitialized;
    NSMutableArray * _registeredConfigurations;
    NSObject<OS_dispatch_queue> * _serialLoggingQueue;
}

@property (nonatomic, readonly, copy) NSString *defaultCategory;
@property (nonatomic) BOOL masterLoggingSwitchEnabled;
@property (nonatomic, readonly, copy) NSArray *registeredConfigurations;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_defaultCategoryOnAccessQueue;
- (void)_updateCachedPPTTestsAreInProgress;
- (void)_updateLoggingLevels;
- (void)dealloc;
- (id)defaultCategory;
- (id)init;
- (void)logMessage:(id)arg1 withLevel:(int)arg2 category:(id)arg3 fileName:(const char *)arg4 functionName:(const char *)arg5 lineNumber:(unsigned long)arg6;
- (BOOL)masterLoggingSwitchEnabled;
- (void)registerConfiguration:(id)arg1 withFacilityName:(id)arg2;
- (id)registeredConfigurations;
- (void)setMasterLoggingSwitchEnabled:(BOOL)arg1;
- (BOOL)shouldLogMessageWithLevel:(int)arg1 category:(id)arg2;

@end
