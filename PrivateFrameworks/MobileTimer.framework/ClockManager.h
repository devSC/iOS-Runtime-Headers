/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class NSArray;

@interface ClockManager : NSObject {
    NSArray *_scheduledLocalNotifications;
    BOOL ignoringNotificationPostRequests;
    BOOL runningInSpringBoard;
}

@property(getter=isIgnoringNotificationPostRequests) BOOL ignoringNotificationPostRequests;
@property(getter=isRunningInSpringBoard) BOOL runningInSpringBoard;

+ (void)loadUserPreferences;
+ (void)openClockAppWithSection:(int)arg1;
+ (void)saveAndNotifyForUserPreferences:(BOOL)arg1 localNotifications:(BOOL)arg2;
+ (int)sectionFromClockAppURL:(id)arg1;
+ (id)sharedManager;

- (void)cancelLocalNotification:(id)arg1;
- (void)dealloc;
- (BOOL)discardOldVersion;
- (BOOL)isIgnoringNotificationPostRequests;
- (BOOL)isRunningInSpringBoard;
- (void)postUserPreferencesChangedNotification;
- (void)refreshScheduledLocalNotificationsCache;
- (void)scheduleLocalNotification:(id)arg1;
- (id)scheduledLocalNotificationsCache;
- (void)setIgnoringNotificationPostRequests:(BOOL)arg1;
- (void)setRunningInSpringBoard:(BOOL)arg1;
- (BOOL)upgrade;
- (BOOL)upgradeIfNeverAttempted;

@end