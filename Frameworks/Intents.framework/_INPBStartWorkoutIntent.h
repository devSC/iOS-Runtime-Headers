/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartWorkoutIntent : PBCodable <NSCopying> {
    _INPBDouble * _goalValue;
    struct { 
        unsigned int workoutGoalUnitType : 1; 
        unsigned int workoutLocationType : 1; 
        unsigned int isOpenEnded : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    BOOL  _isOpenEnded;
    PBUnknownFields * _unknownFields;
    int  _workoutGoalUnitType;
    int  _workoutLocationType;
    _INPBDataString * _workoutName;
}

@property (nonatomic, retain) _INPBDouble *goalValue;
@property (nonatomic, readonly) BOOL hasGoalValue;
@property (nonatomic, readonly) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasIsOpenEnded;
@property (nonatomic) BOOL hasWorkoutGoalUnitType;
@property (nonatomic) BOOL hasWorkoutLocationType;
@property (nonatomic, readonly) BOOL hasWorkoutName;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) BOOL isOpenEnded;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int workoutGoalUnitType;
@property (nonatomic) int workoutLocationType;
@property (nonatomic, retain) _INPBDataString *workoutName;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsWorkoutGoalUnitType:(id)arg1;
- (int)StringAsWorkoutLocationType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)goalValue;
- (BOOL)hasGoalValue;
- (BOOL)hasIntentMetadata;
- (BOOL)hasIsOpenEnded;
- (BOOL)hasWorkoutGoalUnitType;
- (BOOL)hasWorkoutLocationType;
- (BOOL)hasWorkoutName;
- (unsigned int)hash;
- (id)intentMetadata;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOpenEnded;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setGoalValue:(id)arg1;
- (void)setHasIsOpenEnded:(BOOL)arg1;
- (void)setHasWorkoutGoalUnitType:(BOOL)arg1;
- (void)setHasWorkoutLocationType:(BOOL)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setIsOpenEnded:(BOOL)arg1;
- (void)setWorkoutGoalUnitType:(int)arg1;
- (void)setWorkoutLocationType:(int)arg1;
- (void)setWorkoutName:(id)arg1;
- (id)unknownFields;
- (int)workoutGoalUnitType;
- (id)workoutGoalUnitTypeAsString:(int)arg1;
- (int)workoutLocationType;
- (id)workoutLocationTypeAsString:(int)arg1;
- (id)workoutName;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
