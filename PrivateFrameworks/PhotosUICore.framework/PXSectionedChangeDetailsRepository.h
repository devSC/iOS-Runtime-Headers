/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSectionedChangeDetailsRepository : NSObject {
    NSMutableArray * _allChangeDetails;
    int  _historyLimit;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic, readonly) int historyLimit;

- (void).cxx_destruct;
- (void)addChangeDetails:(id)arg1;
- (id)changeDetailsFromDataSourceIdentifier:(unsigned int)arg1 toDataSourceIdentifier:(unsigned int)arg2;
- (int)historyLimit;
- (id)init;
- (id)initWithChangeHistoryLimit:(int)arg1;

@end
