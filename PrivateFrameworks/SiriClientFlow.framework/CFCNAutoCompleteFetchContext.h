/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCNAutoCompleteFetchContext : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *bundleIdentifiers;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domainIdentifier;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *locationUUID;
@property (nonatomic, copy) NSArray *otherAddressesAlreadyChosen;
@property (nonatomic, copy) NSNumber *predictsBasedOnOutgoingInteraction;
@property (nonatomic, copy) NSString *sendingAddress;
@property (nonatomic, copy) NSString *sendingAddressAccountIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)autoCompleteFetchContext;
+ (id)autoCompleteFetchContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)bundleIdentifiers;
- (id)date;
- (id)domainIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)locationUUID;
- (id)otherAddressesAlreadyChosen;
- (id)predictsBasedOnOutgoingInteraction;
- (id)sendingAddress;
- (id)sendingAddressAccountIdentifier;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setLocationUUID:(id)arg1;
- (void)setOtherAddressesAlreadyChosen:(id)arg1;
- (void)setPredictsBasedOnOutgoingInteraction:(id)arg1;
- (void)setSendingAddress:(id)arg1;
- (void)setSendingAddressAccountIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
