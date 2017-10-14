/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYBatchSyncStart : PBCodable <NSCopying> {
    unsigned int  _estimatedChangeCount;
    struct { 
        unsigned int estimatedChangeCount : 1; 
    }  _has;
    SYMessageHeader * _header;
    NSString * _syncID;
}

@property (nonatomic) unsigned int estimatedChangeCount;
@property (nonatomic) BOOL hasEstimatedChangeCount;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic, retain) NSString *syncID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)estimatedChangeCount;
- (BOOL)hasEstimatedChangeCount;
- (unsigned int)hash;
- (id)header;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEstimatedChangeCount:(unsigned int)arg1;
- (void)setHasEstimatedChangeCount:(BOOL)arg1;
- (void)setHeader:(id)arg1;
- (void)setSyncID:(id)arg1;
- (id)syncID;
- (void)writeTo:(id)arg1;

@end
