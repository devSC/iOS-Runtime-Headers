/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentMethod : PBCodable <NSCopying> {
    NSString * _displayName;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _network;
    unsigned int  _type;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) BOOL hasDisplayName;
@property (nonatomic, readonly) BOOL hasNetwork;
@property (nonatomic) BOOL hasType;
@property (nonatomic, retain) NSString *network;
@property (nonatomic) unsigned int type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (BOOL)hasDisplayName;
- (BOOL)hasNetwork;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)network;
- (BOOL)readFrom:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setNetwork:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
