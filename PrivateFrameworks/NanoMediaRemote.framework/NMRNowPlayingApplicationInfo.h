/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRNowPlayingApplicationInfo : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRNowPlayingApplicationStateProtobuf * _protobuf;
}

@property (nonatomic, copy) NSString *companionBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSData *iconDigest;
@property (nonatomic, copy) NSString *localizedDisplayName;
@property (nonatomic) unsigned int playbackState;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *watchBundleIdentifier;

- (void).cxx_destruct;
- (id)companionBundleIdentifier;
- (id)iconDigest;
- (id)init;
- (id)initWithProtobufData:(id)arg1;
- (id)localizedDisplayName;
- (unsigned int)playbackState;
- (id)protobufData;
- (void)setCompanionBundleIdentifier:(id)arg1;
- (void)setIconDigest:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setWatchBundleIdentifier:(id)arg1;
- (id)watchBundleIdentifier;

@end
