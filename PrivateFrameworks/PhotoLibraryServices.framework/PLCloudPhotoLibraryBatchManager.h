/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray * _batches;
    PLCloudPhotoLibraryBatchContainer * _currentBatch;
    NSMutableSet * _masterHistory;
    unsigned long long  _resourceBudget;
    BOOL  _wasDrained;
}

- (void)addRecord:(id)arg1;
- (void)addRecord:(id)arg1 ignoreBatchSize:(BOOL)arg2;
- (int)currentBatchCount;
- (void)dealloc;
- (id)description;
- (id)drainBatches;
- (id)init;
- (BOOL)isAboveMaximumResourceBudget;
- (void)reset;

@end
