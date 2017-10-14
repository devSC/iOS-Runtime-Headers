/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSProductNativeViewController : MusicJSNativeViewController <MusicJSProductNativeViewController, SKUIDOMFeature> {
    <MusicJSProductNativeViewControllerDelegate> * _delegate;
    NSDictionary * _productEntityValueProviderData;
    long long  _prominentTrackStoreID;
    IKAppDocument * _relatedContentDocument;
    NSDictionary * _relatedContentDocumentOptions;
    IKDOMDocument * _relatedContentJSDocument;
    NSDictionary * _reportingInformation;
    IKAppDocument * _shareDocument;
    NSDictionary * _shareDocumentOptions;
    NSArray * _tracklistItems;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicJSProductNativeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (nonatomic, readonly) NSDictionary *productEntityValueProviderData;
@property (nonatomic, readonly) long long prominentTrackStoreID;
@property (nonatomic, readonly) IKAppDocument *relatedContentDocument;
@property (nonatomic, readonly) NSDictionary *relatedContentDocumentOptions;
@property (nonatomic, readonly) NSDictionary *reportingInformation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tracklistItems;

+ (id)featureName;

- (void).cxx_destruct;
- (id)delegate;
- (id)nativeViewIdentifier;
- (void)navigationDocumentDidChange;
- (void)presentShareDocument:(id)arg1 :(id)arg2;
- (id)productEntityValueProviderData;
- (long long)prominentTrackStoreID;
- (id)relatedContentDocument;
- (id)relatedContentDocumentOptions;
- (id)reportingInformation;
- (void)setDelegate:(id)arg1;
- (void)setNumberOfLikes:(unsigned int)arg1;
- (void)setProductEntityValueProvider:(id)arg1;
- (void)setProminentTrackStoreID:(id)arg1;
- (void)setRelatedContentDocument:(id)arg1 :(id)arg2;
- (void)setReportingInformation:(id)arg1;
- (void)setTracklistItems:(id)arg1;
- (void)setUberParameters:(id)arg1;
- (id)tracklistItems;

@end
