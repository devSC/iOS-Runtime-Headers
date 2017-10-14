/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCommentContent : PBCodable <NSCopying> {
    NSData * _comment;
    BOOL  _encrypted;
    struct { 
        unsigned int encrypted : 1; 
    }  _has;
}

@property (nonatomic, retain) NSData *comment;
@property (nonatomic) BOOL encrypted;
@property (nonatomic, readonly) BOOL hasComment;
@property (nonatomic) BOOL hasEncrypted;

- (void).cxx_destruct;
- (id)comment;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)encrypted;
- (BOOL)hasComment;
- (BOOL)hasEncrypted;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setEncrypted:(BOOL)arg1;
- (void)setHasEncrypted:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
