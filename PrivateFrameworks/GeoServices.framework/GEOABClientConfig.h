/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABClientConfig : PBCodable <NSCopying> {
    NSString * _assignedAbBranchId;
    NSMutableArray * _configKeyValues;
    NSMutableArray * _debugExperimentBranchs;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *assignedAbBranchId;
@property (nonatomic, retain) NSMutableArray *configKeyValues;
@property (nonatomic, retain) NSMutableArray *debugExperimentBranchs;
@property (nonatomic, readonly) BOOL hasAssignedAbBranchId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)configKeyValueType;
+ (Class)debugExperimentBranchType;

- (void)addConfigKeyValue:(id)arg1;
- (void)addDebugExperimentBranch:(id)arg1;
- (id)assignedAbBranchId;
- (void)clearConfigKeyValues;
- (void)clearDebugExperimentBranchs;
- (id)configKeyValueAtIndex:(unsigned int)arg1;
- (id)configKeyValues;
- (unsigned int)configKeyValuesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugExperimentBranchAtIndex:(unsigned int)arg1;
- (id)debugExperimentBranchs;
- (unsigned int)debugExperimentBranchsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAssignedAbBranchId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAssignedAbBranchId:(id)arg1;
- (void)setConfigKeyValues:(id)arg1;
- (void)setDebugExperimentBranchs:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
