/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPIcon : PBCodable <NSCopying> {
    unsigned int  _anchorPointX;
    unsigned int  _anchorPointY;
    unsigned int  _atlasIndex;
    struct { 
        unsigned int matchingStyleAttributeLongValue : 1; 
        unsigned int anchorPointX : 1; 
        unsigned int anchorPointY : 1; 
        unsigned int iconRectHeight : 1; 
        unsigned int iconRectWidth : 1; 
        unsigned int iconRectX : 1; 
        unsigned int iconRectY : 1; 
        unsigned int matchingStyleAttributeKey : 1; 
        unsigned int matchingStyleAttributeValue : 1; 
        unsigned int size : 1; 
    }  _has;
    unsigned int  _iconRectHeight;
    unsigned int  _iconRectWidth;
    unsigned int  _iconRectX;
    unsigned int  _iconRectY;
    unsigned int  _matchingStyleAttributeKey;
    unsigned long long  _matchingStyleAttributeLongValue;
    int  _matchingStyleAttributeValue;
    NSString * _name;
    unsigned int  _quadIndex;
    int  _size;
}

@property (nonatomic) unsigned int anchorPointX;
@property (nonatomic) unsigned int anchorPointY;
@property (nonatomic) unsigned int atlasIndex;
@property (nonatomic) BOOL hasAnchorPointX;
@property (nonatomic) BOOL hasAnchorPointY;
@property (nonatomic) BOOL hasIconRectHeight;
@property (nonatomic) BOOL hasIconRectWidth;
@property (nonatomic) BOOL hasIconRectX;
@property (nonatomic) BOOL hasIconRectY;
@property (nonatomic) BOOL hasMatchingStyleAttributeKey;
@property (nonatomic) BOOL hasMatchingStyleAttributeLongValue;
@property (nonatomic) BOOL hasMatchingStyleAttributeValue;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) unsigned int iconRectHeight;
@property (nonatomic) unsigned int iconRectWidth;
@property (nonatomic) unsigned int iconRectX;
@property (nonatomic) unsigned int iconRectY;
@property (nonatomic) unsigned int matchingStyleAttributeKey;
@property (nonatomic) unsigned long long matchingStyleAttributeLongValue;
@property (nonatomic) int matchingStyleAttributeValue;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int quadIndex;
@property (nonatomic) int size;

- (unsigned int)anchorPointX;
- (unsigned int)anchorPointY;
- (unsigned int)atlasIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAnchorPointX;
- (BOOL)hasAnchorPointY;
- (BOOL)hasIconRectHeight;
- (BOOL)hasIconRectWidth;
- (BOOL)hasIconRectX;
- (BOOL)hasIconRectY;
- (BOOL)hasMatchingStyleAttributeKey;
- (BOOL)hasMatchingStyleAttributeLongValue;
- (BOOL)hasMatchingStyleAttributeValue;
- (BOOL)hasName;
- (BOOL)hasSize;
- (unsigned int)hash;
- (unsigned int)iconRectHeight;
- (unsigned int)iconRectWidth;
- (unsigned int)iconRectX;
- (unsigned int)iconRectY;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)matchingStyleAttributeKey;
- (unsigned long long)matchingStyleAttributeLongValue;
- (int)matchingStyleAttributeValue;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned int)quadIndex;
- (BOOL)readFrom:(id)arg1;
- (void)setAnchorPointX:(unsigned int)arg1;
- (void)setAnchorPointY:(unsigned int)arg1;
- (void)setAtlasIndex:(unsigned int)arg1;
- (void)setHasAnchorPointX:(BOOL)arg1;
- (void)setHasAnchorPointY:(BOOL)arg1;
- (void)setHasIconRectHeight:(BOOL)arg1;
- (void)setHasIconRectWidth:(BOOL)arg1;
- (void)setHasIconRectX:(BOOL)arg1;
- (void)setHasIconRectY:(BOOL)arg1;
- (void)setHasMatchingStyleAttributeKey:(BOOL)arg1;
- (void)setHasMatchingStyleAttributeLongValue:(BOOL)arg1;
- (void)setHasMatchingStyleAttributeValue:(BOOL)arg1;
- (void)setHasSize:(BOOL)arg1;
- (void)setIconRectHeight:(unsigned int)arg1;
- (void)setIconRectWidth:(unsigned int)arg1;
- (void)setIconRectX:(unsigned int)arg1;
- (void)setIconRectY:(unsigned int)arg1;
- (void)setMatchingStyleAttributeKey:(unsigned int)arg1;
- (void)setMatchingStyleAttributeLongValue:(unsigned long long)arg1;
- (void)setMatchingStyleAttributeValue:(int)arg1;
- (void)setName:(id)arg1;
- (void)setQuadIndex:(unsigned int)arg1;
- (void)setSize:(int)arg1;
- (int)size;
- (void)writeTo:(id)arg1;

@end
