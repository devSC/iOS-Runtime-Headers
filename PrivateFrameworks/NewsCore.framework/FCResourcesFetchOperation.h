/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation {
    <FCContentContext> * _context;
    NSArray * _resourceIDs;
    NSArray * _resources;
    BOOL  _shouldDownloadAssets;
}

@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, readonly) NSArray *resourceIDs;
@property (nonatomic, retain) NSArray *resources;
@property (nonatomic) BOOL shouldDownloadAssets;

- (void).cxx_destruct;
- (id)completeFetchOperation;
- (id)context;
- (id)downloadAssetsWithCompletion:(id /* block */)arg1;
- (id)fetchResourceRecordsWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 resourceIDs:(id)arg2;
- (id)initWithContext:(id)arg1 resourceURLs:(id)arg2;
- (id)resourceIDs;
- (id)resources;
- (void)setContext:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setShouldDownloadAssets:(BOOL)arg1;
- (BOOL)shouldDownloadAssets;

@end
