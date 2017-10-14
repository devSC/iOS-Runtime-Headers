/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadUnsupported : PBCodable <NSCopying> {
    NSMutableArray * _conflictingParameters;
    struct { 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *conflictingParameters;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (Class)conflictingParametersType;
+ (id)options;

- (void).cxx_destruct;
- (int)StringAsReason:(id)arg1;
- (void)addConflictingParameters:(id)arg1;
- (void)clearConflictingParameters;
- (id)conflictingParameters;
- (id)conflictingParametersAtIndex:(unsigned int)arg1;
- (unsigned int)conflictingParametersCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasReason;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (void)setConflictingParameters:(id)arg1;
- (void)setHasReason:(BOOL)arg1;
- (void)setReason:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
