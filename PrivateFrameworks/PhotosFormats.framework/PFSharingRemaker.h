/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFSharingRemaker : NSObject {
    id /* block */  __completionHandler;
    NSArray * __operations;
    PFSharingRemakerOptions * __options;
    id /* block */  __progressHandler;
    BOOL  _abortedRemaker;
    NSMutableDictionary * _inProgressOperationByUUID;
    float  _progress;
    NSObject<OS_dispatch_source> * _progressTimer;
    NSOperationQueue * _remakeOperationQueue;
    NSError * _remakerError;
    NSObject<OS_dispatch_queue> * _remakerQueue;
    BOOL  _remakerSuccess;
}

@property (setter=_setCompletionHandler:, nonatomic, copy) id /* block */ _completionHandler;
@property (setter=_setOperations:, nonatomic, retain) NSArray *_operations;
@property (setter=_setOptions:, nonatomic, retain) PFSharingRemakerOptions *_options;
@property (setter=_setProgressHandler:, nonatomic, copy) id /* block */ _progressHandler;

+ (id)remakerWithOperations:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (void)_abortWithError:(id)arg1;
- (void)_callProgressBlockWithProgress:(double)arg1;
- (void)_completeOperationWithUUID:(id)arg1;
- (id /* block */)_completionHandler;
- (double)_computeProgress;
- (void)_configurePhotoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3;
- (void)_configureVideoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3;
- (void)_endSessionWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)_operations;
- (id)_options;
- (id /* block */)_progressHandler;
- (void)_setCompletionHandler:(id /* block */)arg1;
- (void)_setOperations:(id)arg1;
- (void)_setOptions:(id)arg1;
- (void)_setProgressHandler:(id /* block */)arg1;
- (void)_updateProgress;
- (id)init;
- (void)remakeWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;

@end
