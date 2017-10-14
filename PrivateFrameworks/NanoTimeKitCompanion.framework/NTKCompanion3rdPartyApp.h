/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanion3rdPartyApp : NTKCompanionApp {
    NSString * _complicationClientIdentifier;
    NRDevice * _device;
    BOOL  _installed;
    NSArray * _supportedFamilies;
    NSString * _uniqueID;
    NSURL * _urlToComplicationBundle;
    NSURL * _urlToWatchKitBundle;
}

@property (nonatomic, retain) NSString *complicationClientIdentifier;
@property (nonatomic, retain) NRDevice *device;
@property (getter=isInstalled, nonatomic) BOOL installed;
@property (nonatomic, retain) NSArray *supportedFamilies;
@property (nonatomic, retain) NSString *uniqueID;
@property (nonatomic, retain) NSURL *urlToComplicationBundle;
@property (nonatomic, retain) NSURL *urlToWatchKitBundle;

+ (id)_URLOfFirstItemWithExtension:(id)arg1 inDirectory:(id)arg2;
+ (BOOL)_isValidApplicationInformation:(id)arg1;
+ (BOOL)_isValidComplicationsInformation:(id)arg1;
+ (id)_urlsToGalleryBundleInApplicationWithContainerBundleId:(id)arg1;
+ (id)companion3rdPartyAppWithInfo:(id)arg1 supportedComplicationFamilies:(id)arg2 device:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithDevice:(id)arg1 applicationInfo:(id)arg2 galleryBundles:(id)arg3 watchKitBundle:(id)arg4;
- (id)_initWithWatchAppId:(id)arg1 containerAppId:(id)arg2 complicationClientId:(id)arg3;
- (BOOL)_installStateFromAppConduitInstallState:(int)arg1;
- (id)appRegistrationDate;
- (BOOL)applicationHasBeenUpdated:(id)arg1;
- (id)complication;
- (id)complicationClientIdentifier;
- (id)device;
- (unsigned int)hash;
- (void)install;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInstalled;
- (void)setComplicationClientIdentifier:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setInstalled:(BOOL)arg1;
- (void)setSupportedFamilies:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setUrlToComplicationBundle:(id)arg1;
- (void)setUrlToWatchKitBundle:(id)arg1;
- (id)supportedFamilies;
- (id)uniqueID;
- (id)urlToComplicationBundle;
- (id)urlToWatchKitBundle;

@end
