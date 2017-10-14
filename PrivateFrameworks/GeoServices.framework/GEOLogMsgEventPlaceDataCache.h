/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventPlaceDataCache : PBCodable <NSCopying> {
    NSString * _placeDataRequestingAppIdentifier;
}

@property (nonatomic, readonly) BOOL hasPlaceDataRequestingAppIdentifier;
@property (nonatomic, retain) NSString *placeDataRequestingAppIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPlaceDataRequestingAppIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeDataRequestingAppIdentifier;
- (BOOL)readFrom:(id)arg1;
- (void)setPlaceDataRequestingAppIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
