/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation {
    struct OpaqueFigAssetWriter { } * _figAssetWriter;
    AVAssetWriterInputPassDescription * _nextPassDescription;
    int  _trackID;
}

@property (nonatomic, readonly) AVAssetWriterInputPassDescription *descriptionForNextPass;

- (void)_notifyWhetherMorePassesAreNeeded:(BOOL)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3;
- (void)dealloc;
- (id)descriptionForNextPass;
- (void)finalize;
- (id)init;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 trackID:(int)arg2;
- (BOOL)isAsynchronous;
- (void)start;

@end
