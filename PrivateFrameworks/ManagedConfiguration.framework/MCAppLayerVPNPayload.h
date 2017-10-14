/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAppLayerVPNPayload : MCVPNPayloadBase {
    NSArray * _SafariDomains;
    NSString * _VPNUUID;
}

@property (nonatomic, retain) NSArray *SafariDomains;
@property (nonatomic, retain) NSString *VPNUUID;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)SafariDomains;
- (id)VPNUUID;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (void)setSafariDomains:(id)arg1;
- (void)setVPNUUID:(id)arg1;
- (id)stubDictionary;

@end
