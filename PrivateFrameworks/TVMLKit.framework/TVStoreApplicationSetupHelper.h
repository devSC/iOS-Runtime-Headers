/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVStoreApplicationSetupHelper : NSObject <ISURLOperationDelegate> {
    NSURL * _defaultBootURL;
    id /* block */  _loadBagOperationCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSURL *defaultBootURL;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ loadBagOperationCompletion;
@property (readonly) Class superclass;

+ (id)_parsedQueryParametersForURL:(id)arg1;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2;
+ (id)launchContextWithLaunchOptions:(id)arg1 bootURL:(id)arg2 appLocalBootURL:(id)arg3;

- (void).cxx_destruct;
- (id)_bootURLWithBagBootURL:(id)arg1;
- (void)_cancelLoadURLBagOperation:(id)arg1;
- (void)dealloc;
- (id)defaultBootURL;
- (id)init;
- (id)initWithDefaultBootURL:(id)arg1;
- (id /* block */)loadBagOperationCompletion;
- (void)obtainBootURLWithCompletion:(id /* block */)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)setDefaultBootURL:(id)arg1;
- (void)setLoadBagOperationCompletion:(id /* block */)arg1;

@end
