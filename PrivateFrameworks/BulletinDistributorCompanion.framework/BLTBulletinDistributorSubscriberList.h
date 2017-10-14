/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBulletinDistributorSubscriberList : NSObject <BLTBulletinDistributorSubscriberDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _subscribers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableArray *subscribers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeSubscribersWithMachServiceName:(id)arg1 exceptFor:(id)arg2;
- (void)addSubscriber:(id)arg1;
- (BOOL)hasSubscribersForSectionID:(id)arg1;
- (id)init;
- (void)pingWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (id)queue;
- (void)removeSubscriber:(id)arg1;
- (void)setSubscribers:(id)arg1;
- (id)subscribedSectionIDs;
- (void)subscriber:(id)arg1 subscribedWithMachServiceName:(id)arg2;
- (id)subscribers;

@end
