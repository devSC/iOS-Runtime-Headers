/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebViewConfiguration : NSObject <NSCoding, NSCopying> {
    BOOL  _allowUniversalAccessFromFileURLs;
    BOOL  _allowsAirPlayForMediaPlayback;
    BOOL  _allowsInlineMediaPlayback;
    BOOL  _allowsInlineMediaPlaybackAfterFullscreen;
    BOOL  _allowsJavaScriptMarkup;
    BOOL  _allowsMetaRefresh;
    BOOL  _allowsPictureInPictureMediaPlayback;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<WKWebView>="m_weakReference"@}' */ struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _alternateWebViewForNavigationGestures;
    BOOL  _alwaysRunsAtForegroundPriority;
    BOOL  _applePayEnabled;
    struct LazyInitialized<WTF::RetainPtr<NSString> > { 
        bool m_isInitialized; 
        struct RetainPtr<NSString> { 
            void *m_ptr; 
        } m_value; 
    }  _applicationNameForUserAgent;
    BOOL  _attachmentElementEnabled;
    struct LazyInitialized<WTF::RetainPtr<WKWebViewContentProviderRegistry> > { 
        bool m_isInitialized; 
        struct RetainPtr<WKWebViewContentProviderRegistry> { 
            void *m_ptr; 
        } m_value; 
    }  _contentProviderRegistry;
    BOOL  _controlledByAutomation;
    BOOL  _convertsPositionStyleOnCopy;
    unsigned int  _dataDetectorTypes;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _groupIdentifier;
    BOOL  _ignoresViewportScaleLimits;
    double  _incrementalRenderingSuppressionTimeout;
    BOOL  _initialCapitalizationEnabled;
    BOOL  _inlineMediaPlaybackRequiresPlaysInlineAttribute;
    BOOL  _invisibleAutoplayNotPermitted;
    BOOL  _mainContentUserGestureOverrideEnabled;
    BOOL  _mediaDataLoadsAutomatically;
    unsigned int  _mediaTypesRequiringUserActionForPlayback;
    BOOL  _needsStorageAccessFromFileURLsQuirk;
    NSString * _overrideContentSecurityPolicy;
    struct LazyInitialized<WTF::RetainPtr<WKPreferences> > { 
        bool m_isInitialized; 
        struct RetainPtr<WKPreferences> { 
            void *m_ptr; 
        } m_value; 
    }  _preferences;
    BOOL  _printsBackgrounds;
    struct LazyInitialized<WTF::RetainPtr<WKProcessPool> > { 
        bool m_isInitialized; 
        struct RetainPtr<WKProcessPool> { 
            void *m_ptr; 
        } m_value; 
    }  _processPool;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<WKWebView>="m_weakReference"@}' */ struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _relatedWebView;
    BOOL  _respectsImageOrientation;
    int  _selectionGranularity;
    BOOL  _suppressesIncrementalRendering;
    BOOL  _treatsSHA1SignedCertificatesAsInsecure;
    struct LazyInitialized<WTF::RetainPtr<WKUserContentController> > { 
        bool m_isInitialized; 
        struct RetainPtr<WKUserContentController> { 
            void *m_ptr; 
        } m_value; 
    }  _userContentController;
    struct LazyInitialized<WTF::RetainPtr<_WKVisitedLinkStore> > { 
        bool m_isInitialized; 
        struct RetainPtr<_WKVisitedLinkStore> { 
            void *m_ptr; 
        } m_value; 
    }  _visitedLinkStore;
    BOOL  _waitsForPaintAfterViewDidMoveToWindow;
    struct LazyInitialized<WTF::RetainPtr<WKWebsiteDataStore> > { 
        bool m_isInitialized; 
        struct RetainPtr<WKWebsiteDataStore> { 
            void *m_ptr; 
        } m_value; 
    }  _websiteDataStore;
}

@property (setter=_setAllowUniversalAccessFromFileURLs:, nonatomic) BOOL _allowUniversalAccessFromFileURLs;
@property (setter=_setAllowsInlineMediaPlaybackAfterFullscreen:, nonatomic) BOOL _allowsInlineMediaPlaybackAfterFullscreen;
@property (setter=_setAllowsJavaScriptMarkup:, nonatomic) BOOL _allowsJavaScriptMarkup;
@property (setter=_setAllowsMetaRefresh:, nonatomic) BOOL _allowsMetaRefresh;
@property (setter=_setAlternateWebViewForNavigationGestures:, nonatomic) WKWebView *_alternateWebViewForNavigationGestures;
@property (setter=_setAlwaysRunsAtForegroundPriority:, nonatomic) BOOL _alwaysRunsAtForegroundPriority;
@property (setter=_setApplePayEnabled:, nonatomic) BOOL _applePayEnabled;
@property (setter=_setAttachmentElementEnabled:, nonatomic) BOOL _attachmentElementEnabled;
@property (setter=_setContentProviderRegistry:, nonatomic) WKWebViewContentProviderRegistry *_contentProviderRegistry;
@property (getter=_isControlledByAutomation, setter=_setControlledByAutomation:, nonatomic) BOOL _controlledByAutomation;
@property (setter=_setConvertsPositionStyleOnCopy:, nonatomic) BOOL _convertsPositionStyleOnCopy;
@property (setter=_setGroupIdentifier:, nonatomic, copy) NSString *_groupIdentifier;
@property (setter=_setIncrementalRenderingSuppressionTimeout:, nonatomic) double _incrementalRenderingSuppressionTimeout;
@property (setter=_setInitialCapitalizationEnabled:, nonatomic) BOOL _initialCapitalizationEnabled;
@property (setter=_setInlineMediaPlaybackRequiresPlaysInlineAttribute:, nonatomic) BOOL _inlineMediaPlaybackRequiresPlaysInlineAttribute;
@property (setter=_setInvisibleAutoplayNotPermitted:, nonatomic) BOOL _invisibleAutoplayNotPermitted;
@property (setter=_setMainContentUserGestureOverrideEnabled:, nonatomic) BOOL _mainContentUserGestureOverrideEnabled;
@property (setter=_setMediaDataLoadsAutomatically:, nonatomic) BOOL _mediaDataLoadsAutomatically;
@property (setter=_setNeedsStorageAccessFromFileURLsQuirk:, nonatomic) BOOL _needsStorageAccessFromFileURLsQuirk;
@property (setter=_setOverrideContentSecurityPolicy:, nonatomic) NSString *_overrideContentSecurityPolicy;
@property (setter=_setPrintsBackgrounds:, nonatomic) BOOL _printsBackgrounds;
@property (setter=_setRelatedWebView:, nonatomic) WKWebView *_relatedWebView;
@property (setter=_setRequiresUserActionForAudioPlayback:, nonatomic) BOOL _requiresUserActionForAudioPlayback;
@property (setter=_setRequiresUserActionForVideoPlayback:, nonatomic) BOOL _requiresUserActionForVideoPlayback;
@property (setter=_setRespectsImageOrientation:, nonatomic) BOOL _respectsImageOrientation;
@property (setter=_setTreatsSHA1SignedCertificatesAsInsecure:, nonatomic) BOOL _treatsSHA1SignedCertificatesAsInsecure;
@property (setter=_setVisitedLinkStore:, nonatomic, retain) _WKVisitedLinkStore *_visitedLinkStore;
@property (setter=_setWaitsForPaintAfterViewDidMoveToWindow:, nonatomic) BOOL _waitsForPaintAfterViewDidMoveToWindow;
@property (setter=_setWebsiteDataStore:, nonatomic, retain) _WKWebsiteDataStore *_websiteDataStore;
@property (nonatomic) BOOL allowsAirPlayForMediaPlayback;
@property (nonatomic) BOOL allowsInlineMediaPlayback;
@property (nonatomic) BOOL allowsPictureInPictureMediaPlayback;
@property (nonatomic, copy) NSString *applicationNameForUserAgent;
@property (nonatomic) unsigned int dataDetectorTypes;
@property (nonatomic) BOOL ignoresViewportScaleLimits;
@property (nonatomic) BOOL mediaPlaybackAllowsAirPlay;
@property (nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property (nonatomic) unsigned int mediaTypesRequiringUserActionForPlayback;
@property (nonatomic, retain) WKPreferences *preferences;
@property (nonatomic, retain) WKProcessPool *processPool;
@property (nonatomic) BOOL requiresUserActionForMediaPlayback;
@property (nonatomic) int selectionGranularity;
@property (nonatomic) BOOL suppressesIncrementalRendering;
@property (nonatomic, retain) WKUserContentController *userContentController;
@property (nonatomic, retain) WKWebsiteDataStore *websiteDataStore;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_allowUniversalAccessFromFileURLs;
- (BOOL)_allowsInlineMediaPlaybackAfterFullscreen;
- (BOOL)_allowsJavaScriptMarkup;
- (BOOL)_allowsMetaRefresh;
- (id)_alternateWebViewForNavigationGestures;
- (BOOL)_alwaysRunsAtForegroundPriority;
- (BOOL)_applePayEnabled;
- (BOOL)_attachmentElementEnabled;
- (id)_contentProviderRegistry;
- (BOOL)_convertsPositionStyleOnCopy;
- (id)_groupIdentifier;
- (double)_incrementalRenderingSuppressionTimeout;
- (BOOL)_initialCapitalizationEnabled;
- (BOOL)_inlineMediaPlaybackRequiresPlaysInlineAttribute;
- (BOOL)_invisibleAutoplayNotPermitted;
- (BOOL)_isControlledByAutomation;
- (BOOL)_mainContentUserGestureOverrideEnabled;
- (BOOL)_mediaDataLoadsAutomatically;
- (BOOL)_needsStorageAccessFromFileURLsQuirk;
- (id)_overrideContentSecurityPolicy;
- (BOOL)_printsBackgrounds;
- (id)_relatedWebView;
- (BOOL)_requiresUserActionForAudioPlayback;
- (BOOL)_requiresUserActionForVideoPlayback;
- (BOOL)_respectsImageOrientation;
- (void)_setAllowUniversalAccessFromFileURLs:(BOOL)arg1;
- (void)_setAllowsInlineMediaPlaybackAfterFullscreen:(BOOL)arg1;
- (void)_setAllowsJavaScriptMarkup:(BOOL)arg1;
- (void)_setAllowsMetaRefresh:(BOOL)arg1;
- (void)_setAlternateWebViewForNavigationGestures:(id)arg1;
- (void)_setAlwaysRunsAtForegroundPriority:(BOOL)arg1;
- (void)_setApplePayEnabled:(BOOL)arg1;
- (void)_setAttachmentElementEnabled:(BOOL)arg1;
- (void)_setContentProviderRegistry:(id)arg1;
- (void)_setControlledByAutomation:(BOOL)arg1;
- (void)_setConvertsPositionStyleOnCopy:(BOOL)arg1;
- (void)_setGroupIdentifier:(id)arg1;
- (void)_setIncrementalRenderingSuppressionTimeout:(double)arg1;
- (void)_setInitialCapitalizationEnabled:(BOOL)arg1;
- (void)_setInlineMediaPlaybackRequiresPlaysInlineAttribute:(BOOL)arg1;
- (void)_setInvisibleAutoplayNotPermitted:(BOOL)arg1;
- (void)_setMainContentUserGestureOverrideEnabled:(BOOL)arg1;
- (void)_setMediaDataLoadsAutomatically:(BOOL)arg1;
- (void)_setNeedsStorageAccessFromFileURLsQuirk:(BOOL)arg1;
- (void)_setOverrideContentSecurityPolicy:(id)arg1;
- (void)_setPrintsBackgrounds:(BOOL)arg1;
- (void)_setRelatedWebView:(id)arg1;
- (void)_setRequiresUserActionForAudioPlayback:(BOOL)arg1;
- (void)_setRequiresUserActionForVideoPlayback:(BOOL)arg1;
- (void)_setRespectsImageOrientation:(BOOL)arg1;
- (void)_setTreatsSHA1SignedCertificatesAsInsecure:(BOOL)arg1;
- (void)_setVisitedLinkProvider:(id)arg1;
- (void)_setVisitedLinkStore:(id)arg1;
- (void)_setWaitsForPaintAfterViewDidMoveToWindow:(BOOL)arg1;
- (void)_setWebsiteDataStore:(id)arg1;
- (BOOL)_treatsSHA1SignedCertificatesAsInsecure;
- (void)_validate;
- (id)_visitedLinkProvider;
- (id)_visitedLinkStore;
- (BOOL)_waitsForPaintAfterViewDidMoveToWindow;
- (id)_websiteDataStore;
- (BOOL)allowsAirPlayForMediaPlayback;
- (BOOL)allowsInlineMediaPlayback;
- (BOOL)allowsPictureInPictureMediaPlayback;
- (id)applicationNameForUserAgent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataDetectorTypes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)ignoresViewportScaleLimits;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)mediaPlaybackAllowsAirPlay;
- (BOOL)mediaPlaybackRequiresUserAction;
- (unsigned int)mediaTypesRequiringUserActionForPlayback;
- (id)preferences;
- (id)processPool;
- (BOOL)requiresUserActionForMediaPlayback;
- (int)selectionGranularity;
- (void)setAllowsAirPlayForMediaPlayback:(BOOL)arg1;
- (void)setAllowsInlineMediaPlayback:(BOOL)arg1;
- (void)setAllowsPictureInPictureMediaPlayback:(BOOL)arg1;
- (void)setApplicationNameForUserAgent:(id)arg1;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (void)setIgnoresViewportScaleLimits:(BOOL)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1;
- (void)setMediaPlaybackRequiresUserAction:(BOOL)arg1;
- (void)setMediaTypesRequiringUserActionForPlayback:(unsigned int)arg1;
- (void)setPreferences:(id)arg1;
- (void)setProcessPool:(id)arg1;
- (void)setRequiresUserActionForMediaPlayback:(BOOL)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (void)setSuppressesIncrementalRendering:(BOOL)arg1;
- (void)setUserContentController:(id)arg1;
- (void)setWebsiteDataStore:(id)arg1;
- (BOOL)suppressesIncrementalRendering;
- (id)userContentController;
- (id)websiteDataStore;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (id)advertisingConfiguration;
+ (id)configurationWithBackgroundPriority:(BOOL)arg1;
+ (id)sharedAdvertisingConfigurationWithBackgroundPriority;

@end
