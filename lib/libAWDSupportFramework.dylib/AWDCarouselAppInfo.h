/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCarouselAppInfo : PBCodable <NSCopying> {
    BOOL  _development;
    struct { 
        unsigned int development : 1; 
        unsigned int watchKit : 1; 
    }  _has;
    NSString * _identifier;
    BOOL  _watchKit;
}

@property (nonatomic) BOOL development;
@property (nonatomic) BOOL hasDevelopment;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic) BOOL hasWatchKit;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) BOOL watchKit;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)development;
- (id)dictionaryRepresentation;
- (BOOL)hasDevelopment;
- (BOOL)hasIdentifier;
- (BOOL)hasWatchKit;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDevelopment:(BOOL)arg1;
- (void)setHasDevelopment:(BOOL)arg1;
- (void)setHasWatchKit:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setWatchKit:(BOOL)arg1;
- (BOOL)watchKit;
- (void)writeTo:(id)arg1;

@end
