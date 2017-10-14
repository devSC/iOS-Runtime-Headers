/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerAppBBMetrics : PBCodable <NSCopying> {
    NSMutableArray * _appPowers;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *appPowers;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

+ (Class)appPowerType;

- (void)addAppPower:(id)arg1;
- (id)appPowerAtIndex:(unsigned int)arg1;
- (id)appPowers;
- (unsigned int)appPowersCount;
- (void)clearAppPowers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAppPowers:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
