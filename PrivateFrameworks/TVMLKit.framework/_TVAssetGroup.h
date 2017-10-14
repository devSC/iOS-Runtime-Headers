/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAssetGroup : NSObject {
    NSString * _cachePath;
    NSMutableDictionary * _cacheRecords;
    unsigned int  _currentCacheSize;
    int  _groupType;
    unsigned int  _maxCacheSize;
    unsigned int  _pruneCount;
}

@property (nonatomic, retain) NSString *cachePath;
@property (nonatomic, retain) NSMutableDictionary *cacheRecords;
@property (nonatomic) unsigned int currentCacheSize;
@property (nonatomic) int groupType;
@property (nonatomic) unsigned int maxCacheSize;
@property (nonatomic) unsigned int pruneCount;

- (void).cxx_destruct;
- (id)_humanReadableStringForGroupType:(int)arg1;
- (void)_removeAssetInfoForKey:(id)arg1;
- (id)assetInfoForKey:(id)arg1 queue:(id)arg2;
- (id)cachePath;
- (id)cacheRecords;
- (unsigned int)currentCacheSize;
- (id)description;
- (int)groupType;
- (id)infoForAllAssetsWithQueue:(id)arg1;
- (id)initWithGroupType:(int)arg1 baseCachePath:(id)arg2 folderName:(id)arg3 maxCacheSize:(unsigned int)arg4 purgeOnLoad:(BOOL)arg5;
- (unsigned int)maxCacheSize;
- (unsigned int)pruneCount;
- (void)removeAllAssetsWithQueue:(id)arg1;
- (void)removeAssetInfoForKey:(id)arg1 queue:(id)arg2;
- (void)setAssetInfo:(id)arg1 forKey:(id)arg2 queue:(id)arg3;
- (void)setCachePath:(id)arg1;
- (void)setCacheRecords:(id)arg1;
- (void)setCurrentCacheSize:(unsigned int)arg1;
- (void)setGroupType:(int)arg1;
- (void)setMaxCacheSize:(unsigned int)arg1;
- (void)setPruneCount:(unsigned int)arg1;
- (void)updateAssetsFromFiles;

@end
