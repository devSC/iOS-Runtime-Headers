/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSetupEndPointRead : HMDSetupEndPointWrite <NSSecureCoding> {
    NSNumber * _audioSSRC;
    unsigned int  _responseStatus;
    NSNumber * _videoSSRC;
}

@property (nonatomic, readonly, copy) NSNumber *audioSSRC;
@property (nonatomic, readonly) unsigned int responseStatus;
@property (nonatomic, readonly, copy) NSNumber *videoSSRC;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)_parseFromTLVData;
- (BOOL)_parseFromTLVDataOnFailure;
- (BOOL)_parseFromTLVDataOnSuccess;
- (id)audioSSRC;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 responseStatus:(unsigned int)arg5 videoSSRC:(id)arg6 audioSSRC:(id)arg7;
- (unsigned int)responseStatus;
- (id)tlvData;
- (id)videoSSRC;

@end
