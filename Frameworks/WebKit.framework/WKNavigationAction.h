/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNavigationAction : NSObject <WKObject> {
    struct ObjectStorage<API::NavigationAction> { 
        struct type { 
            unsigned char __lx[308]; 
        } data; 
    }  _navigationAction;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, readonly) BOOL _canHandleRequest;
@property (nonatomic, readonly) NSURL *_originalURL;
@property (nonatomic, readonly) BOOL _shouldOpenAppLinks;
@property (nonatomic, readonly) BOOL _shouldOpenExternalSchemes;
@property (nonatomic, readonly) BOOL _shouldOpenExternalURLs;
@property (nonatomic, readonly) int _syntheticClickType;
@property (getter=_isUserInitiated, nonatomic, readonly) BOOL _userInitiated;
@property (nonatomic, readonly) _WKUserInitiatedAction *_userInitiatedAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int navigationType;
@property (nonatomic, readonly, copy) NSURLRequest *request;
@property (nonatomic, readonly, copy) WKFrameInfo *sourceFrame;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) WKFrameInfo *targetFrame;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (BOOL)_canHandleRequest;
- (BOOL)_isUserInitiated;
- (id)_originalURL;
- (BOOL)_shouldOpenAppLinks;
- (BOOL)_shouldOpenExternalSchemes;
- (BOOL)_shouldOpenExternalURLs;
- (int)_syntheticClickType;
- (id)_userInitiatedAction;
- (void)dealloc;
- (id)description;
- (int)navigationType;
- (id)request;
- (id)sourceFrame;
- (id)targetFrame;

@end
