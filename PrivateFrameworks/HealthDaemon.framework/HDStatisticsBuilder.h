/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStatisticsBuilder : NSObject {
    long long  _anchor;
    _HKFilter * _filter;
    unsigned int  _mergeStrategy;
    NSArray * _orderedSources;
    HDSQLitePredicate * _predicate;
    HDProfile * _profile;
    HKQuantityType * _quantityType;
    NSNumber * _restrictedSourceIdentifier;
    NSMutableDictionary * _sourceIdsBySource;
    NSMutableDictionary * _sourcesBySourceId;
    unsigned int  _statisticsOptions;
    _HKTimePeriod * _timePeriod;
}

@property (nonatomic) long long anchor;
@property (nonatomic, readonly) _HKFilter *filter;
@property (nonatomic, readonly) unsigned int mergeStrategy;
@property (nonatomic, readonly) NSArray *orderedSources;
@property (nonatomic, readonly) HDSQLitePredicate *predicate;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) NSNumber *restrictedSourceIdentifier;
@property (nonatomic, readonly) unsigned int statisticsOptions;
@property (nonatomic, retain) _HKTimePeriod *timePeriod;

+ (id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3;
+ (id)statisticsBuilderWithQuantityType:(id)arg1 filter:(id)arg2 statisticsOptions:(unsigned int)arg3 mergeStrategy:(unsigned int)arg4 restrictedSourceIdentifier:(id)arg5 profile:(id)arg6;

- (void).cxx_destruct;
- (id)_bundleIdentifierForSourceId:(id)arg1;
- (id)_collectionCalculatorWithBucketBoundaries:(id)arg1;
- (void)_enumerateSamplesWithType:(id)arg1 predicate:(id)arg2 database:(id)arg3 handler:(id /* block */)arg4;
- (BOOL)_initialStatisticsForCollection:(id)arg1 timePeriod:(id)arg2 database:(id)arg3 shouldStopProcessing:(id /* block */)arg4 shouldSuspend:(id /* block */)arg5 batchHandler:(id /* block */)arg6 error:(id*)arg7;
- (id)_initialStatisticsForTimePeriod:(id)arg1 database:(id)arg2 shouldStopProcessing:(id /* block */)arg3 error:(id*)arg4;
- (void)_setupOrderedSources;
- (BOOL)_setupStatistics:(id)arg1 withCalculator:(id)arg2;
- (id)_sourceIdForBundleIdentifier:(id)arg1;
- (void)_updateSourceCache:(id)arg1 sourceId:(id)arg2;
- (id)_updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 error:(id*)arg3;
- (long long)anchor;
- (id)buildStatisticsObjectFromCalculator:(id)arg1;
- (id)collectionCalculatorWithBucketTimePeriods:(id)arg1;
- (id)filter;
- (id)initWithProfile:(id)arg1;
- (id)initWithQuantityType:(id)arg1 filter:(id)arg2 statisticsOptions:(unsigned int)arg3 mergeStrategy:(unsigned int)arg4 restrictedSourceIdentifier:(id)arg5 profile:(id)arg6;
- (BOOL)initialStatisticsForCollection:(id)arg1 shouldStopProcessing:(id /* block */)arg2 shouldSuspend:(id /* block */)arg3 batchHandler:(id /* block */)arg4 error:(id*)arg5;
- (id)initialStatisticsShouldStopProcessing:(id /* block */)arg1 error:(id*)arg2;
- (unsigned int)mergeStrategy;
- (id)orderedSourceIDsFromSources:(id)arg1 sourceManager:(id)arg2;
- (id)orderedSources;
- (id)orderedSourcesFromUnorderedIDs:(id)arg1 error:(id*)arg2;
- (id)predicate;
- (id)profile;
- (id)quantityType;
- (id)restrictedSourceIdentifier;
- (void)setAnchor:(long long)arg1;
- (void)setTimePeriod:(id)arg1;
- (unsigned int)statisticsOptions;
- (id)timePeriod;
- (id)updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 anchor:(id)arg3 restrictedSourceIdentifier:(id)arg4 error:(id*)arg5;

@end
