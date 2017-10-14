/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiProxLeDeviceLost : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _peerId;
    NSString * _sessionId;
    unsigned long long  _timestamp;
    int  _type;
}

@property (nonatomic, readonly) BOOL hasPeerId;
@property (nonatomic, readonly) BOOL hasSessionId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic, retain) NSString *peerId;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPeerId;
- (BOOL)hasSessionId;
- (BOOL)hasTimestamp;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerId;
- (BOOL)readFrom:(id)arg1;
- (id)sessionId;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setPeerId:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (unsigned long long)timestamp;
- (int)type;
- (void)writeTo:(id)arg1;

@end
