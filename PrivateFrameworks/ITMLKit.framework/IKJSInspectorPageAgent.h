/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSInspectorPageAgent : NSObject <RWIProtocolPageDomainHandler> {
    IKJSInspectorController * _controller;
}

@property (nonatomic, readonly) IKJSInspectorController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addScriptToEvaluateOnLoadWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 scriptSource:(id)arg3;
- (void)archiveWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)controller;
- (void)deleteCookieWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 cookieName:(id)arg3 url:(id)arg4;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getCompositingBordersVisibleWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getCookiesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getResourceContentWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3 url:(id)arg4;
- (void)getResourceTreeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)initWithInspectorController:(id)arg1;
- (void)navigateWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 url:(id)arg3;
- (void)reloadWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 ignoreCache:(BOOL*)arg3 scriptToEvaluateOnLoad:(id*)arg4;
- (void)removeScriptToEvaluateOnLoadWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 identifier:(id)arg3;
- (void)searchInResourceWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3 url:(id)arg4 query:(id)arg5 caseSensitive:(BOOL*)arg6 isRegex:(BOOL*)arg7;
- (void)searchInResourceWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3 url:(id)arg4 query:(id)arg5 caseSensitive:(BOOL*)arg6 isRegex:(BOOL*)arg7 requestId:(id*)arg8;
- (void)searchInResourcesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 text:(id)arg3 caseSensitive:(BOOL*)arg4 isRegex:(BOOL*)arg5;
- (void)setCompositingBordersVisibleWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 visible:(BOOL)arg3;
- (void)setEmulatedMediaWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 media:(id)arg3;
- (void)setShowPaintRectsWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 result:(BOOL)arg3;
- (void)snapshotNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)snapshotRectWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 coordinateSystem:(int)arg7;

@end
