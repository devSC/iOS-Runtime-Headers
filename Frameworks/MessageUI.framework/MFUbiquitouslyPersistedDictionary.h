/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFUbiquitouslyPersistedDictionary : NSObject <MFMutableDictionaryProtocol> {
    NSString * _identifier;
    NSUbiquitousKeyValueStore * _kvStore;
    NSObject<OS_dispatch_queue> * _mutationQueue;
    NSString * _plistPath;
    NSMutableDictionary * _storedObjects;
}

@property (readonly) unsigned int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *plistPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;

+ (id)sharedDictionaryWithIdentifier:(id)arg1;

- (void)_ensureStoredObjectsAreInKVStore;
- (void)_mergeKVStoreChangedKeys:(id)arg1;
- (void)_purgeOldestEntries;
- (void)_resetKVStore;
- (void)_storeChangedExternally:(id)arg1;
- (void)_synchronize;
- (void)_writeToPlist;
- (unsigned int)count;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)plistPath;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)ubiquitousKeyValueStore;

@end
