/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWGNRNode : BWNode <BWBracketSettingsProvider> {
    NSArray * _afWindowParamsArray;
    BOOL  _allowedToModifyInputBuffers;
    BOOL  _alwaysRequestsPreBracketedEV0;
    BOOL  _alwaysRequestsPreBracketedEV0ForOIS;
    BOOL  _clientExpectsPreBracketFrame;
    struct opaqueCMSampleBuffer { } * _collectedProcessedPreBracketHDR;
    int (* _createSampleBufferProcessorFunction;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    unsigned int  _expectedFrameCount;
    BOOL  _expectsPreBracketFrame;
    BOOL  _expectsReferenceFrameBracketedCaptureSequenceNumber;
    int  _hdrBracketCount;
    BOOL  _hdrEnabled;
    NSArray * _hdrExposureValues;
    BOOL  _hdrProcessingTypeConfiguredToSampleBufferProcessor;
    int  _oisBracketCount;
    BOOL  _oisEnabled;
    NSArray * _oisExposureDurationTypes;
    NSString * _portType;
    long long  _previouslyCompletedFusionSettingsID;
    int  _processingType;
    BOOL  _receivedAllFrames;
    unsigned int  _receivedFrameCount;
    BOOL  _receivedPreBracketFrame;
    int  _receivedReferenceFrameBracketedCaptureSequenceNumber;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSString * _sensorID;
    NSDictionary * _sensorIDDictionary;
    int  _sisBracketCount;
    BOOL  _sisEnabled;
    NSArray * _sisExposureValues;
    NSString * _telephotoPortType;
    NSString * _telephotoSensorID;
    NSDictionary * _telephotoSensorIDDictionary;
    BOOL  _usesHDRPreBracketFrameForErrorRecoveryDownstream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (void)_detectMissingPreBracketedFrameAndEmitBWNodeError;
- (int)_gnrProcessingTypeWithStillImageStreamCaptureType:(int)arg1 stereoFusionCapture:(BOOL)arg2;
- (id)_hdrBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg1 stillImageSettings:(id)arg2;
- (id)_initWithSISEnabled:(BOOL)arg1 OISEnabled:(BOOL)arg2 HDREnabled:(BOOL)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 telephotoPortType:(id)arg7 telephotoSensorID:(id)arg8 telephotoSensorIDDictionary:(id)arg9 sbpCreationFunction:(int (*)arg10 treatSoftErrorsAsHardErrors:(BOOL)arg11;
- (id)_oisBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg1 stillImageSettings:(id)arg2;
- (void)_processSequenceInSampleBufferProcessor;
- (BOOL)_receivedExpectedAmountOfFrames;
- (void)_sampleBufferProcessorOutputReady:(long)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)_setExpectedFrameCountForCaptureType:(int)arg1 deliverOriginalImage:(BOOL)arg2 bracketSettings:(id)arg3;
- (long)_setPropertyOnSampleBufferProcessorWithKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)_setReferenceFrameBracketedCaptureSequenceNumberOnSampleBufferProcessor:(int)arg1;
- (long)_setupSampleBufferProcessor;
- (id)_sisBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg1 stillImageSettings:(id)arg2;
- (id)_tuningDictionaryWithOnlyGNRParameters;
- (long)_unpackOptions;
- (unsigned int)_worstCaseFrameRetainCount;
- (BOOL)allowedToModifyInputBuffers;
- (BOOL)alwaysRequestsPreBracketedEV0;
- (BOOL)alwaysRequestsPreBracketedEV0ForOIS;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned int x13; int x14; int x15; unsigned int x16; float x17; float x18; float x19; double x20; int x21; int x22; int x23; float x24; int x25; int x26; int x27; float x28; int x29; int x30; int x31; int x32; long long x33; }*)arg2 stillImageSettings:(id)arg3;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)initWithSISEnabled:(BOOL)arg1 OISEnabled:(BOOL)arg2 HDREnabled:(BOOL)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 telephotoPortType:(id)arg7 telephotoSensorID:(id)arg8 telephotoSensorIDDictionary:(id)arg9;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sbpOptionsDictionary;
- (void)setAllowedToModifyInputBuffers:(BOOL)arg1;
- (void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg1;
- (void)setAlwaysRequestsPreBracketedEV0ForOIS:(BOOL)arg1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1;
- (void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(BOOL)arg1;
- (BOOL)usesHDRPreBracketFrameForErrorRecoveryDownstream;
- (int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1;

@end
