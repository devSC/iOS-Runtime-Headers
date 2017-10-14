/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata {
    <MPModelObjectPlaybackItemMetadataDelegate> * _modelObjectDelegate;
    MPModelPlaybackPosition * _playbackPosition;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, readonly) MPModelHomeSharingAsset *homeSharingAsset;
@property (nonatomic, readonly) MPModelFileAsset *localFileAsset;
@property (nonatomic) <MPModelObjectPlaybackItemMetadataDelegate> *modelObjectDelegate;
@property (nonatomic, readonly) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, readonly) MPModelStoreAsset *storeAsset;

+ (BOOL)_shouldRespectMusicCellularDataSetting;
+ (BOOL)_shouldRespectStoreCellularDataSetting;
+ (id)requiredHomeSharingAssetProperties;
+ (id)requiredLocalFileAssetProperties;
+ (id)requiredPlaybackPositionProperties;
+ (id)requiredProperties;
+ (id)requiredStoreAssetProperties;

- (void).cxx_destruct;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned int*)arg2 protectionType:(unsigned int*)arg3 usesPurchaseBundle:(BOOL*)arg4;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (BOOL)allowsAssetCaching;
- (double)bookmarkTime;
- (id)buyParameters;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned int*)arg1 protectionType:(unsigned int*)arg2 usesPurchaseBundle:(BOOL*)arg3;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (long long)downloadIdentifier;
- (int)endpointType;
- (id)homeSharingAsset;
- (id)iTunesStoreContentDSID;
- (id)iTunesStoreContentID;
- (id)init;
- (BOOL)isSubscriptionRequired;
- (void)loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (id)localFileAsset;
- (id)localNetworkContentURL;
- (long long)mediaLibraryPersistentID;
- (id)modelObjectDelegate;
- (id)mqf_playbackItemMetadataModelObject;
- (id)playbackPosition;
- (id)protectedContentSupportStorageURL;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned int)arg2 assetQuality:(unsigned int)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setModelObjectDelegate:(id)arg1;
- (BOOL)shouldRememberBookmarkTime;
- (BOOL)shouldReportPlayEventsToStore;
- (unsigned long long)storeAccountID;
- (id)storeAsset;
- (id)storeUbiquitousIdentifier;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned int)arg1 assetFlavor:(id)arg2 protectionType:(unsigned int)arg3 pathExtension:(id)arg4;

@end
