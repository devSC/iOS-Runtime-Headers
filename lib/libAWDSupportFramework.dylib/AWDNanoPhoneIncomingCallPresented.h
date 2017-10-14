/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNanoPhoneIncomingCallPresented : PBCodable <NSCopying> {
    NSString * _callProviderIdentifier;
    unsigned long long  _clientDisplayLatencyMs;
    struct { 
        unsigned int clientDisplayLatencyMs : 1; 
        unsigned int timestamp : 1; 
        unsigned int isHosted : 1; 
        unsigned int isVideo : 1; 
    }  _has;
    BOOL  _isHosted;
    BOOL  _isVideo;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *callProviderIdentifier;
@property (nonatomic) unsigned long long clientDisplayLatencyMs;
@property (nonatomic, readonly) BOOL hasCallProviderIdentifier;
@property (nonatomic) BOOL hasClientDisplayLatencyMs;
@property (nonatomic) BOOL hasIsHosted;
@property (nonatomic) BOOL hasIsVideo;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isHosted;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) unsigned long long timestamp;

- (id)callProviderIdentifier;
- (unsigned long long)clientDisplayLatencyMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCallProviderIdentifier;
- (BOOL)hasClientDisplayLatencyMs;
- (BOOL)hasIsHosted;
- (BOOL)hasIsVideo;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHosted;
- (BOOL)isVideo;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCallProviderIdentifier:(id)arg1;
- (void)setClientDisplayLatencyMs:(unsigned long long)arg1;
- (void)setHasClientDisplayLatencyMs:(BOOL)arg1;
- (void)setHasIsHosted:(BOOL)arg1;
- (void)setHasIsVideo:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsHosted:(BOOL)arg1;
- (void)setIsVideo:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
