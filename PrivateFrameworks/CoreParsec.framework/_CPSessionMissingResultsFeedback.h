/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPSessionMissingResultsFeedback : PBCodable <NSCopying> {
    NSMutableArray * _results;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic) unsigned long long timestamp;

+ (Class)resultsType;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned int)arg1;
- (unsigned int)resultsCount;
- (void)setResults:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
