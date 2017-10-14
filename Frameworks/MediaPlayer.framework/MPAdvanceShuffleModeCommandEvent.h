/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAdvanceShuffleModeCommandEvent : MPRemoteCommandEvent {
    BOOL  _preservesShuffleMode;
}

@property (nonatomic, readonly) BOOL preservesShuffleMode;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (BOOL)preservesShuffleMode;

@end
