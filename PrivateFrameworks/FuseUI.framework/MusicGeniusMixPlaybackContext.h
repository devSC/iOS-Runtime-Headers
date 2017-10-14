/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicGeniusMixPlaybackContext : MusicQueryPlaybackContext <MusicGeniusMixQueueFeederDataSource> {
    BOOL  _finite;
    NSMutableArray * _indexedSubQueries;
    MPMediaPlaylist * _mixPlaylist;
    MPMediaItem * _requiredInitialMediaItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MPMediaPlaylist *mixPlaylist;
@property (nonatomic, retain) MPMediaItem *requiredInitialMediaItem;
@property (readonly) Class superclass;

+ (Class)queueFeederClass;

- (void).cxx_destruct;
- (void)_enumerateItemsBySubQueryUsingBlock:(id /* block */)arg1;
- (id)_generateNewItemsQuery:(id*)arg1 index:(unsigned int)arg2;
- (unsigned int)_indexOfSubQueryWithSubQueryIndex:(unsigned int)arg1 searchOptions:(unsigned int)arg2;
- (id)_queryForMediaItemAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned int)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned int)arg2;
- (unsigned int)geniusMixQueueFeederMediaItemCount:(id)arg1;
- (id)initWithGeniusMixPlaylist:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id*)arg3;
- (id)mixPlaylist;
- (id)query;
- (id)requiredInitialMediaItem;
- (void)setRequiredInitialMediaItem:(id)arg1;

@end
