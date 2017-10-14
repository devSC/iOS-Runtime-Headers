/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelClusterStandardDeviationInstance : PBCodable <NSCopying> {
    int  _entryStandardDeviation;
    int  _exitStandardDeviation;
    struct { 
        unsigned int entryStandardDeviation : 1; 
        unsigned int exitStandardDeviation : 1; 
    }  _has;
}

@property (nonatomic) int entryStandardDeviation;
@property (nonatomic) int exitStandardDeviation;
@property (nonatomic) BOOL hasEntryStandardDeviation;
@property (nonatomic) BOOL hasExitStandardDeviation;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)entryStandardDeviation;
- (int)exitStandardDeviation;
- (BOOL)hasEntryStandardDeviation;
- (BOOL)hasExitStandardDeviation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEntryStandardDeviation:(int)arg1;
- (void)setExitStandardDeviation:(int)arg1;
- (void)setHasEntryStandardDeviation:(BOOL)arg1;
- (void)setHasExitStandardDeviation:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
