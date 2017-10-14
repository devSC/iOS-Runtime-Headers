/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDistanceList : PBCodable <NSCopying> {
    _INPBCondition * _condition;
    NSMutableArray * _distances;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (nonatomic, retain) NSMutableArray *distances;
@property (nonatomic, readonly) BOOL hasCondition;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (Class)distanceType;
+ (id)options;

- (void).cxx_destruct;
- (void)addDistance:(id)arg1;
- (void)clearDistances;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)distanceAtIndex:(unsigned int)arg1;
- (id)distances;
- (unsigned int)distancesCount;
- (BOOL)hasCondition;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setDistances:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
