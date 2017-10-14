/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDocumentQueryServer : HDQueryServer {
    NSArray * _authorizedSamples;
    unsigned int  _clientSampleIndex;
    BOOL  _includeDocumentData;
    unsigned int  _maxResults;
    NSArray * _sortDescriptors;
    BOOL  _suspended;
}

@property (nonatomic, readonly) BOOL includeDocumentData;
@property (nonatomic, readonly) unsigned int maxResults;
@property (nonatomic, readonly) NSArray *sortDescriptors;

- (void).cxx_destruct;
- (BOOL)_deliverAuthorizedSamplesToClient:(id)arg1 errorOut:(id*)arg2;
- (BOOL)_deliverOneSample:(id)arg1 client:(id)arg2 errorOut:(id*)arg3;
- (void)_queue_start;
- (void)authorizeSamples:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)includeDocumentData;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (unsigned int)maxResults;
- (id)samplesBeforeAuthorizationWithSortDescriptors:(id)arg1 errorOut:(id*)arg2;
- (id)sortDescriptors;

@end
