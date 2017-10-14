/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHLivePhotoRequest : PHImageManagerRequest {
    PHAsset * __asset;
    AVAsset * __avAsset;
    BOOL  __avAssetRequestCompleted;
    BOOL  __avAssetRequestFailed;
    int  __contentMode;
    BOOL  __didFinishStart;
    NSError * __error;
    UIImage * __image;
    PHImageManager * __imageManager;
    BOOL  __imageRequestCompleted;
    BOOL  __imageRequestFailed;
    BOOL  __isCancelled;
    BOOL  __isImageDegraded;
    BOOL  __isInCloud;
    BOOL  __isInProgress;
    NSRecursiveLock * __isolationLock;
    BOOL  __needsUpdateResult;
    PHLivePhotoRequestOptions * __options;
    id /* block */  __resultHandler;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __stillDisplayTime;
    struct CGSize { 
        float width; 
        float height; 
    }  __targetSize;
}

@property (nonatomic, readonly) PHAsset *_asset;
@property (setter=_setAVAsset:, nonatomic, retain) AVAsset *_avAsset;
@property (setter=_setAVAssetRequestCompleted:, nonatomic) BOOL _avAssetRequestCompleted;
@property (setter=_setAVAssetRequestFailed:, nonatomic) BOOL _avAssetRequestFailed;
@property (nonatomic, readonly) int _contentMode;
@property (setter=_setDidFinishStart:, nonatomic) BOOL _didFinishStart;
@property (setter=_setError:, nonatomic, retain) NSError *_error;
@property (setter=_setImage:, nonatomic, retain) UIImage *_image;
@property (nonatomic, readonly) PHImageManager *_imageManager;
@property (setter=_setImageRequestCompleted:, nonatomic) BOOL _imageRequestCompleted;
@property (setter=_setImageRequestFailed:, nonatomic) BOOL _imageRequestFailed;
@property (setter=_setCancelled:, nonatomic) BOOL _isCancelled;
@property (setter=_setImageDegraded:, nonatomic) BOOL _isImageDegraded;
@property (setter=_setInCloud:, nonatomic) BOOL _isInCloud;
@property (setter=_setInProgress:, nonatomic) BOOL _isInProgress;
@property (nonatomic, readonly) NSRecursiveLock *_isolationLock;
@property (setter=_setNeedsUpdateResult:, nonatomic) BOOL _needsUpdateResult;
@property (nonatomic, readonly) PHLivePhotoRequestOptions *_options;
@property (nonatomic, readonly) id /* block */ _resultHandler;
@property (setter=_setStillDisplayTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _stillDisplayTime;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } _targetSize;

- (void).cxx_destruct;
- (id)_asset;
- (id)_avAsset;
- (BOOL)_avAssetRequestCompleted;
- (BOOL)_avAssetRequestFailed;
- (int)_contentMode;
- (BOOL)_didFinishStart;
- (id)_error;
- (void)_handleImageResultHandlerWithImage:(id)arg1 info:(id)arg2;
- (void)_handleVideoResultHandlerWithAVAsset:(id)arg1 info:(id)arg2;
- (id)_image;
- (id)_imageManager;
- (BOOL)_imageRequestCompleted;
- (BOOL)_imageRequestFailed;
- (void)_invalidateResult;
- (BOOL)_isCancelled;
- (BOOL)_isImageDegraded;
- (BOOL)_isInCloud;
- (BOOL)_isInProgress;
- (id)_isolationLock;
- (BOOL)_needsUpdateResult;
- (id)_options;
- (id /* block */)_resultHandler;
- (void)_setAVAsset:(id)arg1;
- (void)_setAVAssetRequestCompleted:(BOOL)arg1;
- (void)_setAVAssetRequestFailed:(BOOL)arg1;
- (void)_setCancelled:(BOOL)arg1;
- (void)_setDidFinishStart:(BOOL)arg1;
- (void)_setError:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setImageDegraded:(BOOL)arg1;
- (void)_setImageRequestCompleted:(BOOL)arg1;
- (void)_setImageRequestFailed:(BOOL)arg1;
- (void)_setInCloud:(BOOL)arg1;
- (void)_setInProgress:(BOOL)arg1;
- (void)_setNeedsUpdateResult:(BOOL)arg1;
- (void)_setStillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_stillDisplayTime;
- (struct CGSize { float x1; float x2; })_targetSize;
- (void)_update;
- (void)_updateInProgress;
- (void)_updateResultIfNeeded;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize { float x1; float x2; })arg2 contentMode:(int)arg3 options:(id)arg4 imageManager:(id)arg5 resultHandler:(id /* block */)arg6;
- (void)start;

@end
