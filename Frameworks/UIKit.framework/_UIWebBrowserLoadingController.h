/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIWebBrowserLoadingController : NSObject <WebFrameLoadDelegate> {
    NSURL * _URL;
    NSString * _URLString;
    NSURL * _backURL;
    UIWebBrowserView * _browserView;
    BOOL  _canGoBack;
    BOOL  _canGoForward;
    WebDataSource * _dataSourceWithError;
    <_UIWebBrowserLoadingControllerDelegate> * _delegate;
    NSError * _errorThatCausedLoadToEnd;
    float  _estimatedProgress;
    NSArray * _fallbackURLs;
    NSURL * _forwardURL;
    NSString * _lastSuccessfulURLString;
    BOOL  _loadEndedWithError;
    BOOL  _loadStoppedFromAPI;
    BOOL  _loading;
    int  _loadingState;
    unsigned int  _pendingFrameLoadMessages;
    BOOL  _securePageHasInsecureContent;
    NSString * _title;
    NSString * _userTypedAddress;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, retain) UIWebBrowserView *browserView;
@property (nonatomic, readonly) BOOL canGoBack;
@property (nonatomic, readonly) BOOL canGoForward;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIWebBrowserLoadingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float estimatedProgress;
@property (readonly) unsigned int hash;
@property (getter=isLoading, nonatomic, readonly) BOOL loading;
@property (nonatomic) int loadingState;
@property (getter=isSecure, nonatomic, readonly) BOOL secure;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (id)URL;
- (id)URLString;
- (BOOL)_URLMayStartLoad:(id)arg1;
- (void)_attemptTransitionToLoadingState:(int)arg1;
- (id)_dataSourceURL;
- (void)_didNotLoadURL;
- (id)_getDataSourceURL:(id)arg1;
- (void)_loadRequest:(id)arg1 userDriven:(BOOL)arg2;
- (void)_performWebViewLoadSelector:(SEL)arg1 forceProgress:(BOOL)arg2;
- (void)_progressChanged:(id)arg1;
- (void)_setBackURL:(id)arg1;
- (void)_setFallbackURLs:(id)arg1;
- (void)_setForwardURL:(id)arg1;
- (void)_setLoading:(BOOL)arg1 withError:(BOOL)arg2;
- (void)_setLoading:(BOOL)arg1 withError:(BOOL)arg2 fromDelegate:(BOOL)arg3 fromFragmentLoad:(BOOL)arg4;
- (void)_setLoading:(BOOL)arg1 withError:(BOOL)arg2 fromFragmentLoad:(BOOL)arg3;
- (void)_setLoadingFromDelegate:(BOOL)arg1 withError:(id)arg2 dataSource:(id)arg3;
- (void)_setSecurePageHasInsecureContent:(BOOL)arg1;
- (void)_setUserTypedAddress:(id)arg1;
- (void)_tryMultipleURLs:(id)arg1;
- (void)_updateAfterHistoryChange;
- (void)_updateBackForward;
- (void)_updateURL;
- (void)_updateURLString;
- (id)browserView;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)dealloc;
- (id)delegate;
- (float)estimatedProgress;
- (void)goBack;
- (void)goForward;
- (BOOL)isLoading;
- (BOOL)isSecure;
- (void)loadUserTypedAddress:(id)arg1;
- (int)loadingState;
- (void)reload;
- (void)setBrowserView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEstimatedProgress:(float)arg1;
- (void)setLoadingState:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)stopLoading;
- (id)title;
- (void)webView:(id)arg1 didCancelClientRedirectForFrame:(id)arg2;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didPopStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didPushStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReplaceStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didRunInsecureContent:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5;
- (void)webViewDidDisplayInsecureContent:(id)arg1;

@end
