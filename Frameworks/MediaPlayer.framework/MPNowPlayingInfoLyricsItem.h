/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingInfoLyricsItem : NSObject {
    void * _mediaRemoteLyricsItem;
}

@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly) void*mediaRemoteLyricsItem;
@property (nonatomic, readonly) MPNowPlayingInfoLyricsItemToken *token;
@property (nonatomic, readonly) BOOL userProvided;

- (void)dealloc;
- (id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2;
- (id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2 token:(id)arg3;
- (id)initWithMediaRemoteLyricsItem:(void*)arg1;
- (id)lyrics;
- (void*)mediaRemoteLyricsItem;
- (id)token;
- (BOOL)userProvided;

@end
