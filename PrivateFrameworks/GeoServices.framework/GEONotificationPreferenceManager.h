/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary * _enableFlags;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (BOOL)isEnabledForSubTestWithName:(id)arg1;
- (void)reset;
- (void)setEnabled:(BOOL)arg1 forSubTestWithName:(id)arg2;

@end
