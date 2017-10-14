/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate> {
    GKSession * _gkSession;
    GKVoiceChatSession * _gkVoiceChatSession;
    id /* block */  _playerStateUpdateHandler;
    id /* block */  _playerVoiceChatStateDidChangeHandler;
    NSArray * _players;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (nonatomic, retain) GKSession *gkSession;
@property (nonatomic, retain) GKVoiceChatSession *gkVoiceChatSession;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) id /* block */ playerStateUpdateHandler;
@property (nonatomic, copy) id /* block */ playerVoiceChatStateDidChangeHandler;
@property (nonatomic, retain) NSArray *players;
@property (nonatomic) float volume;

+ (BOOL)isVoIPAllowed;

- (void)dealloc;
- (id)gkSession;
- (id)gkVoiceChatSession;
- (void)gkVoiceChatSession:(id)arg1 stateUpdate:(unsigned int)arg2 forPeer:(id)arg3;
- (id)initChat:(id)arg1 withSession:(id)arg2 players:(id)arg3;
- (BOOL)isActive;
- (id)name;
- (id)playerIDs;
- (id /* block */)playerStateUpdateHandler;
- (id /* block */)playerVoiceChatStateDidChangeHandler;
- (id)players;
- (void)setActive:(BOOL)arg1;
- (void)setGkSession:(id)arg1;
- (void)setGkVoiceChatSession:(id)arg1;
- (void)setMute:(BOOL)arg1 forPlayer:(id)arg2;
- (void)setPlayer:(id)arg1 muted:(BOOL)arg2;
- (void)setPlayerStateUpdateHandler:(id /* block */)arg1;
- (void)setPlayerVoiceChatStateDidChangeHandler:(id /* block */)arg1;
- (void)setPlayers:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)start;
- (void)stop;
- (float)volume;

@end
