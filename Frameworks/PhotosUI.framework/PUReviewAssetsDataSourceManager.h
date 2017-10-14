/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUReviewAssetsDataSourceManager : PUAssetsDataSourceManager <PUReviewDataSourceChangeObserver> {
    <PUDisplayAssetCollection> * __containingAssetCollection;
    PUReviewDataSource * __reviewDataSource;
}

@property (nonatomic, readonly) <PUDisplayAssetCollection> *_containingAssetCollection;
@property (nonatomic, readonly) PUReviewDataSource *_reviewDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_containingAssetCollection;
- (id)_reviewDataSource;
- (void)_updateWithReviewDataSource:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithReviewDataSource:(id)arg1;
- (void)reviewDataSourceDidChange:(id)arg1;

@end
