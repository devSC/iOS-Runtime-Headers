/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSubscriptionController : NSObject <FCSubscriptionListObserving> {
    FCAppConfiguration * _appConfiguration;
    FCThreadSafeMutableSet * _newlyAddedSubscriptions;
    FCNotificationController * _notificationController;
    long long  _notificationEnabledChannelsRefreshFrequency;
    NSHashTable * _observers;
    FCPurchaseController * _purchaseController;
    FCThreadSafeMutableDictionary * _subscribedTagsByTagID;
    FCSubscriptionList * _subscriptionList;
    FCTagController * _tagController;
}

@property (nonatomic, retain) FCAppConfiguration *appConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) FCThreadSafeMutableSet *newlyAddedSubscriptions;
@property (nonatomic, retain) FCNotificationController *notificationController;
@property (nonatomic) long long notificationEnabledChannelsRefreshFrequency;
@property (nonatomic, copy) NSHashTable *observers;
@property (nonatomic, retain) FCPurchaseController *purchaseController;
@property (nonatomic, retain) FCThreadSafeMutableDictionary *subscribedTagsByTagID;
@property (nonatomic, retain) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCTagController *tagController;

- (void).cxx_destruct;
- (void)_fetchMissingTagsWithCompletion:(id /* block */)arg1;
- (void)_fetchMutedTagsForIDs:(id)arg1 maxCachedAge:(double)arg2 qualityOfService:(int)arg3 completion:(id /* block */)arg4;
- (void)_fetchTagsForIDs:(id)arg1 maxCachedAge:(double)arg2 qualityOfService:(int)arg3 completion:(id /* block */)arg4;
- (void)_handleMutedSubscriptionsAdded:(id)arg1 mutedSubscriptionsChanged:(id)arg2 mutedSubscriptionsRemoved:(id)arg3 eventInitiationLevel:(int)arg4;
- (void)_handleTagSubscriptionsAdded:(id)arg1 tagSubscriptionsChanged:(id)arg2 tagSubscriptionsRemoved:(id)arg3 eventInitiationLevel:(int)arg4;
- (void)_integrateTags:(id)arg1 eventInitiationLevel:(int)arg2;
- (void)_notifyOfMutedTagsAdded:(id)arg1 mutedTagsChanged:(id)arg2 mutedTagsRemoved:(id)arg3 eventInitiationLevel:(int)arg4;
- (void)_notifyOfTagsAdded:(id)arg1 tagsChanged:(id)arg2 tagsRemoved:(id)arg3 eventInitiationLevel:(int)arg4;
- (void)_notifyOfTagsWithNotificationSupport:(id)arg1;
- (void)_purchaseListDidChange;
- (void)_refreshChannelsWithNotificationsEnabled;
- (BOOL)addMutedSubscriptionForTagID:(id)arg1 eventInitiationLevel:(int)arg2;
- (BOOL)addMutedSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(int)arg3;
- (void)addObserver:(id)arg1;
- (void)addPendingSubscription:(id)arg1;
- (BOOL)addSubscriptionToTag:(id)arg1 error:(id*)arg2 eventInitiationLevel:(int)arg3;
- (BOOL)addSubscriptionToTag:(id)arg1 notificationsEnabled:(BOOL)arg2 error:(id*)arg3 eventInitiationLevel:(int)arg4;
- (id)appConfiguration;
- (BOOL)canAddSubscription;
- (void)fetchSubscribedTagsWithCallbackQueue:(id)arg1 preferCache:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)hasMutedSubscriptionForTagID:(id)arg1;
- (BOOL)hasNotificationsEnabledForTag:(id)arg1;
- (BOOL)hasSubscriptionToTag:(id)arg1;
- (BOOL)hasSubscriptionToTagID:(id)arg1;
- (id)initWithSubscriptionList:(id)arg1 tagController:(id)arg2 notificationController:(id)arg3 purchaseController:(id)arg4 appConfiguration:(id)arg5;
- (void)modifyPendingSubscription:(id)arg1;
- (id)mutedTagIDs;
- (id)newlyAddedSubscriptions;
- (id)newlySubscribedTagsInDateRange:(id)arg1;
- (id)notificationController;
- (long long)notificationEnabledChannelsRefreshFrequency;
- (id)observers;
- (id)pendingSubscriptionForPollingURL:(id)arg1;
- (id)pendingSubscriptions;
- (id)purchaseController;
- (void)refreshSubscriptionTags;
- (void)removeMutedSubscriptionForTagID:(id)arg1 eventInitiationLevel:(int)arg2;
- (void)removeObserver:(id)arg1;
- (void)removePendingSubscription:(id)arg1;
- (void)removeSubscriptionToTag:(id)arg1 eventInitiationLevel:(int)arg2;
- (void)setAppConfiguration:(id)arg1;
- (void)setNewlyAddedSubscriptions:(id)arg1;
- (void)setNotificationController:(id)arg1;
- (void)setNotificationEnabledChannelsRefreshFrequency:(long long)arg1;
- (BOOL)setNotificationsEnabled:(BOOL)arg1 forTag:(id)arg2 error:(id*)arg3;
- (void)setObservers:(id)arg1;
- (void)setPurchaseController:(id)arg1;
- (void)setSubscribedTagsByTagID:(id)arg1;
- (void)setSubscriptionList:(id)arg1;
- (void)setTagController:(id)arg1;
- (id)subscribedTagForTagID:(id)arg1;
- (id)subscribedTagIDs;
- (id)subscribedTagIDsWithNotificationsEnabled;
- (id)subscribedTags;
- (id)subscribedTagsByTagID;
- (id)subscriptionForTag:(id)arg1;
- (id)subscriptionList;
- (void)subscriptionList:(id)arg1 didAddSubscriptions:(id)arg2 changeSubscriptions:(id)arg3 removeSubscriptions:(id)arg4 eventInitiationLevel:(int)arg5;
- (id)subscriptions;
- (id)tagController;

@end
