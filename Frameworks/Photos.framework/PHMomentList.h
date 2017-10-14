/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMomentList : PHCollectionList {
    short  _generationType;
    short  _granularityLevel;
    NSDate * _representativeDate;
    int  _sortIndex;
}

@property (nonatomic, readonly) short generationType;
@property (nonatomic, readonly) short granularityLevel;
@property (nonatomic, readonly) NSDate *representativeDate;
@property (nonatomic, readonly) int sortIndex;

+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;

- (void).cxx_destruct;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (int)collectionListType;
- (id)description;
- (short)generationType;
- (short)granularityLevel;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (BOOL)isMeaningful;
- (id)representativeDate;
- (int)sortIndex;

@end
