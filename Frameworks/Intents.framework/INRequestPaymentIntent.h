/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRequestPaymentIntent : INIntent <INRequestPaymentIntentExport>

@property (nonatomic, readonly, copy) INCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *note;
@property (nonatomic, readonly, copy) INPerson *payer;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned int)arg1;
- (id)_typedBackingStore;
- (id)currencyAmount;
- (id)description;
- (id)domain;
- (id)initWithPayer:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3;
- (id)note;
- (id)parametersByName;
- (id)payer;
- (void)setCurrencyAmount:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPayer:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
