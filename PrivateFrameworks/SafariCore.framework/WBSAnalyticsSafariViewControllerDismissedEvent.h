/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsSafariViewControllerDismissedEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int method : 1; 
    }  _has;
    int  _method;
    unsigned long long  _timestamp;
}

@property (nonatomic) BOOL hasMethod;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int method;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsMethod:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMethod;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)method;
- (id)methodAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMethod:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setMethod:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
