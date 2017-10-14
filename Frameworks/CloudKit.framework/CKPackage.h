/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPackage : NSObject <CKRecordValue, NSSecureCoding> {
    NSString * _UUID;
    NSData * _archiverInfo;
    NSArray * _assets;
    NSString * _databaseBasePath;
    BOOL  _downloaded;
    BOOL  _hasSize;
    unsigned int  _nextItemIndex;
    BOOL  _open;
    int  _packageID;
    NSObject<OS_dispatch_queue> * _queue;
    CKRecord * _record;
    NSString * _recordKey;
    struct _OpaquePCSShareProtection { } * _recordPCS;
    BOOL  _shouldReadRawEncryptedData;
    unsigned long long  _size;
    CKSQLite * _sqlite;
    int  _state;
    int  _storageGroupingPolicy;
    BOOL  _transaction;
    int  _uploadRank;
    BOOL  _uploaded;
    BOOL  _wasCached;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, copy) NSData *archiverInfo;
@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, retain) NSString *databaseBasePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL downloaded;
@property (nonatomic) BOOL hasSize;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int nextItemIndex;
@property (getter=isOpen, nonatomic) BOOL open;
@property (nonatomic) int packageID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) CKRecord *record;
@property (nonatomic, copy) NSString *recordKey;
@property (nonatomic) struct _OpaquePCSShareProtection { }*recordPCS;
@property (nonatomic) BOOL shouldReadRawEncryptedData;
@property (nonatomic, copy) NSData *signature;
@property (nonatomic) unsigned long long size;
@property (nonatomic, retain) CKSQLite *sqlite;
@property (nonatomic) int state;
@property (nonatomic) int storageGroupingPolicy;
@property (readonly) Class superclass;
@property (getter=inTransaction, nonatomic) BOOL transaction;
@property (nonatomic) int uploadRank;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) BOOL wasCached;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)_packageDatabaseDirectoryWithBasePath:(id)arg1 state:(int)arg2;
+ (id)_packageDatabasePathWithBasePath:(id)arg1 UUID:(id)arg2 state:(int)arg3;
+ (id)_packagesBasePathForBundleID:(id)arg1;
+ (id)clientPackageDatabaseDirectory;
+ (void)destroyClientPackageWithDatabaseBasePath:(id)arg1 UUID:(id)arg2;
+ (void)gcPackagesInDirectory:(id)arg1 dbInUseBlock:(id /* block */)arg2;
+ (id)packageInDaemonWithBundleIdentifier:(id)arg1 error:(id*)arg2;
+ (id)packageWithError:(id*)arg1;
+ (id)packageWithPackage:(id)arg1 error:(id*)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)UUID;
- (id)_initWithBasePath:(id)arg1 UUID:(id)arg2;
- (id)_itemOrNilAtIndex:(unsigned int)arg1;
- (id)_itemWithColumnsByName:(id)arg1;
- (void)_locked_beginTransaction;
- (void)_locked_endTransaction;
- (void)_locked_open;
- (BOOL)_locked_openWithError:(id*)arg1;
- (id)_packageDatabasePath;
- (id)_packageDatabasePathWithState:(int)arg1;
- (void)addItem:(id)arg1;
- (void)addSection:(id)arg1;
- (id)archiverInfo;
- (id)assets;
- (void)beginTransaction;
- (BOOL)claimOwnershipWithError:(id*)arg1;
- (void)close;
- (id)databaseBasePath;
- (void)dealloc;
- (id)description;
- (BOOL)downloaded;
- (void)encodeWithCoder:(id)arg1;
- (void)endTransaction;
- (void)handleChangeStateAction:(int)arg1;
- (BOOL)handleChangeStateAction:(int)arg1 error:(id*)arg2;
- (BOOL)hasSize;
- (BOOL)inTransaction;
- (id)init;
- (id)initUnreachablePackageWithUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isOpen;
- (id)itemAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (id)itemEnumerator;
- (id)itemEnumeratorForSectionAtIndex:(unsigned int)arg1;
- (BOOL)movePackagesDatabaseInDirection:(BOOL)arg1 error:(id*)arg2;
- (unsigned int)nextItemIndex;
- (void)open;
- (BOOL)openWithError:(id*)arg1;
- (int)packageID;
- (BOOL)prepareDBWithError:(id*)arg1;
- (id)queue;
- (id)record;
- (id)recordKey;
- (struct _OpaquePCSShareProtection { }*)recordPCS;
- (void)releaseDB;
- (void)releaseDBWithRemove:(BOOL)arg1;
- (void)removeDB;
- (id)sectionAtIndex:(unsigned int)arg1;
- (unsigned int)sectionCount;
- (void)setArchiverInfo:(id)arg1;
- (BOOL)setArchiverInfo:(id)arg1 error:(id*)arg2;
- (void)setAssets:(id)arg1;
- (void)setDatabaseBasePath:(id)arg1;
- (void)setDownloaded:(BOOL)arg1;
- (void)setHasSize:(BOOL)arg1;
- (void)setNextItemIndex:(unsigned int)arg1;
- (void)setOpen:(BOOL)arg1;
- (void)setPackageID:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordKey:(id)arg1;
- (void)setRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setShouldReadRawEncryptedData:(BOOL)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSqlite:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStorageGroupingPolicy:(int)arg1;
- (void)setTransaction:(BOOL)arg1;
- (void)setUUID:(id)arg1;
- (void)setUploadRank:(int)arg1;
- (void)setUploaded:(BOOL)arg1;
- (void)setWasCached:(BOOL)arg1;
- (BOOL)shouldReadRawEncryptedData;
- (id)signature;
- (unsigned long long)size;
- (id)sqlite;
- (id)sqliteOrRaise;
- (int)state;
- (int)storageGroupingPolicy;
- (void)updateItemAtIndex:(int)arg1 withFileURL:(id)arg2;
- (void)updateItemAtIndex:(int)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned int)arg5;
- (void)updateItemsAtIndexes:(id)arg1 fileURLs:(id)arg2;
- (int)uploadRank;
- (BOOL)uploaded;
- (BOOL)wasCached;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (BOOL)anchorExistsForArchiverInfo:(id)arg1;
+ (void)destroyAnchorAndPackageAnchoredAtURL:(id)arg1;

- (BOOL)anchorAtURL:(id)arg1 error:(id*)arg2;

@end
