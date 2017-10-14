/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSCopying, NSSecureCoding> {
    BOOL  _emailAddressEditable;
    BOOL  _emailAddressFieldShouldBeDisplayed;
    BOOL  _nameEditable;
    BOOL  _nameFieldFirstNameOptional;
    BOOL  _nameFieldLastNameOptional;
    BOOL  _nameFieldShouldBeDisplayed;
    BOOL  _phoneNumberEditable;
    BOOL  _phoneNumberFieldShouldBeDisplayed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL emailAddressEditable;
@property (nonatomic) BOOL emailAddressFieldShouldBeDisplayed;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL nameEditable;
@property (nonatomic) BOOL nameFieldFirstNameOptional;
@property (nonatomic) BOOL nameFieldLastNameOptional;
@property (nonatomic) BOOL nameFieldShouldBeDisplayed;
@property (nonatomic) BOOL phoneNumberEditable;
@property (nonatomic) BOOL phoneNumberFieldShouldBeDisplayed;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)emailAddressEditable;
- (BOOL)emailAddressFieldShouldBeDisplayed;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)nameEditable;
- (BOOL)nameFieldFirstNameOptional;
- (BOOL)nameFieldLastNameOptional;
- (BOOL)nameFieldShouldBeDisplayed;
- (BOOL)phoneNumberEditable;
- (BOOL)phoneNumberFieldShouldBeDisplayed;
- (void)setEmailAddressEditable:(BOOL)arg1;
- (void)setEmailAddressFieldShouldBeDisplayed:(BOOL)arg1;
- (void)setNameEditable:(BOOL)arg1;
- (void)setNameFieldFirstNameOptional:(BOOL)arg1;
- (void)setNameFieldLastNameOptional:(BOOL)arg1;
- (void)setNameFieldShouldBeDisplayed:(BOOL)arg1;
- (void)setPhoneNumberEditable:(BOOL)arg1;
- (void)setPhoneNumberFieldShouldBeDisplayed:(BOOL)arg1;

@end
