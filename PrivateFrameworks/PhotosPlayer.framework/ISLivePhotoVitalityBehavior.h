/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLivePhotoVitalityBehavior : ISBehavior {
    BOOL  __shouldPlayAfterPreparation;
    id  _easeOutObserver;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoTime;
    double  _photoTransitionDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playDuration;
    float  _playRate;
    BOOL  _playing;
    BOOL  _playingBeyondPhoto;
    BOOL  _prepared;
    BOOL  _preparing;
    id  _transitionToPhotoObserver;
}

@property (setter=_setShouldPlayAfterPreparation:, nonatomic) BOOL _shouldPlayAfterPreparation;
@property (nonatomic) <ISLivePhotoVitalityBehaviorDelegate> *delegate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoTime;
@property (nonatomic, readonly) double photoTransitionDuration;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } playDuration;
@property (nonatomic, readonly) float playRate;
@property (getter=isPlaying, nonatomic, readonly) BOOL playing;
@property (getter=isPlayingBeyondPhoto, setter=_setPlayingBeyondPhoto:, nonatomic) BOOL playingBeyondPhoto;
@property (getter=isPrepared, setter=_setPrepared:, nonatomic) BOOL prepared;
@property (getter=_isPreparing, setter=_setPreparing:, nonatomic) BOOL preparing;

- (void).cxx_destruct;
- (void)_didReachTransitionTime;
- (void)_didReachTransitionToPhotoTime;
- (void)_handleDidFinishPreroll;
- (void)_handleDidSeekToStartTime;
- (BOOL)_isPreparing;
- (void)_setPlayingBeyondPhoto:(BOOL)arg1;
- (void)_setPrepared:(BOOL)arg1;
- (void)_setPreparing:(BOOL)arg1;
- (void)_setShouldPlayAfterPreparation:(BOOL)arg1;
- (BOOL)_shouldPlayAfterPreparation;
- (void)_startObservingVideo;
- (void)_startVideoPlayback;
- (void)_stopObservingVideo;
- (void)activeDidChange;
- (int)behaviorType;
- (void)cancelSettleToPhoto;
- (void)dealloc;
- (id)initWithInitialLayoutInfo:(id)arg1 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 playDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 playRate:(float)arg4 photoTransitionDuration:(double)arg5;
- (BOOL)isPlaying;
- (BOOL)isPlayingBeyondPhoto;
- (BOOL)isPrepared;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoTime;
- (double)photoTransitionDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playDuration;
- (float)playRate;
- (void)playVitality;
- (void)prepareForVitality;

@end
