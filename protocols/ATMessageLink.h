/* Generated by RuntimeBrowser.
 */

@protocol ATMessageLink <NSObject>

@required

- (void)addObserver:(id <ATMessageLinkObserver>)arg1;
- (void)addRequestHandler:(id <ATMessageLinkRequestHandler>)arg1 forDataClass:(NSString *)arg2;
- (int)endpointType;
- (NSString *)identifier;
- (BOOL)isInitialized;
- (BOOL)isOpen;
- (void)removeObserver:(id <ATMessageLinkObserver>)arg1;
- (void)removeRequestHandlerForDataClass:(NSString *)arg1;
- (void)sendRequest:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: ATRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATResponse *, NSError *, void*
- (void)sendResponse:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ATResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendResponse:(void *)arg1 withProgress:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 13: ATResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end
