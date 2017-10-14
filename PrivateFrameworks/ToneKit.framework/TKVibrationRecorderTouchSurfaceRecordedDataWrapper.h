/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject {
    BOOL  _displayLinkHasRefreshedAtLeastOnce;
    <NSCopying> * _displayLinkManagerObserverToken;
    BOOL  _isWarmUpModeEnabled;
    unsigned int  _maximumFramesPerSecondRate;
    void * _recordedData;
    unsigned long  _recordedDataCursor;
    unsigned long  _recordedDataElementsCount;
    double  _vibrationPatternDidStartTimestamp;
    double  _vibrationPatternMaximumDuration;
    double  _warmUpModeDidStartTimestamp;
}

- (void).cxx_destruct;
- (void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(double)arg1;
- (void)_recordFinalDataWithNormalizedTouchLocation:(struct CGPoint { float x1; float x2; })arg1 touchPhase:(int)arg2 timeIntervalSinceBeginningOfPattern:(double)arg3;
- (void)_updateMaximumFramesPerSecondRate:(id)arg1;
- (void)dealloc;
- (void)didStopRecording;
- (BOOL)getNormalizedTouchLocation:(struct CGPoint { float x1; float x2; }*)arg1 touchPhase:(int*)arg2 forTimeInterval:(double)arg3;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;
- (void)recordNormalizedTouchLocation:(struct CGPoint { float x1; float x2; })arg1 touchPhase:(int)arg2;

@end
