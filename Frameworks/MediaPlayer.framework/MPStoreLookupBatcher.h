/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLookupBatcher : NSObject {
    unsigned int  _batchSize;
    NSMutableDictionary * _completeResponseDictionary;
    NSMutableDictionary * _completeResponseResultsDictionary;
    id /* block */  _completionHandler;
    NSError * _error;
    BOOL  _hasCalledCompletionHandler;
    SSLookupRequest * _lookupRequest;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) unsigned int batchSize;
@property (nonatomic, readonly) SSLookupRequest *lookupRequest;

+ (id)_copyLookupRequest:(id)arg1;
+ (id)_incompleteChildrenIDsForStoreResult:(id)arg1;

- (void).cxx_destruct;
- (void)_batchOperationDidComplete:(id)arg1;
- (void)_callCompletionHandlerIfNecessary;
- (void)_onSerialQueue_mergeResponseDictionaryIntoCompleteResponseDictionary:(id)arg1;
- (unsigned int)batchSize;
- (id)initWithLookupRequest:(id)arg1;
- (id)lookupRequest;
- (void)performBatchedRequestWithCompletion:(id /* block */)arg1;
- (void)setBatchSize:(unsigned int)arg1;

@end
