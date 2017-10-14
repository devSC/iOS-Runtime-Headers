/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying> {
    BOOL  _absolute;
    struct { 
        unsigned int screenSizeHeight : 1; 
        unsigned int screenSizeWidth : 1; 
        unsigned int absolute : 1; 
        unsigned int integratedDisplay : 1; 
    }  _has;
    BOOL  _integratedDisplay;
    float  _screenSizeHeight;
    float  _screenSizeWidth;
}

@property (nonatomic) BOOL absolute;
@property (nonatomic) BOOL hasAbsolute;
@property (nonatomic) BOOL hasIntegratedDisplay;
@property (nonatomic) BOOL hasScreenSizeHeight;
@property (nonatomic) BOOL hasScreenSizeWidth;
@property (nonatomic) BOOL integratedDisplay;
@property (nonatomic) float screenSizeHeight;
@property (nonatomic) float screenSizeWidth;

- (BOOL)absolute;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAbsolute;
- (BOOL)hasIntegratedDisplay;
- (BOOL)hasScreenSizeHeight;
- (BOOL)hasScreenSizeWidth;
- (unsigned int)hash;
- (BOOL)integratedDisplay;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (float)screenSizeHeight;
- (float)screenSizeWidth;
- (void)setAbsolute:(BOOL)arg1;
- (void)setHasAbsolute:(BOOL)arg1;
- (void)setHasIntegratedDisplay:(BOOL)arg1;
- (void)setHasScreenSizeHeight:(BOOL)arg1;
- (void)setHasScreenSizeWidth:(BOOL)arg1;
- (void)setIntegratedDisplay:(BOOL)arg1;
- (void)setScreenSizeHeight:(float)arg1;
- (void)setScreenSizeWidth:(float)arg1;
- (void)writeTo:(id)arg1;

@end
