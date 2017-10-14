/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKEmergencyCardContactCell : UITableViewCell {
    _HKEmergencyContact * _contact;
    UIStackView * _horizontalStack;
    UILabel * _nameLabel;
    UIImageView * _phoneImageView;
    NSLayoutConstraint * _phoneImageViewWidthConstraint;
    UILabel * _phoneNumberLabel;
    UILabel * _relationshipLabel;
    UILabel * _tagLabel;
    UIStackView * _verticalStack;
}

@property (nonatomic, retain) _HKEmergencyContact *contact;
@property (nonatomic, retain) UIStackView *horizontalStack;
@property (nonatomic, retain) UIStackView *verticalStack;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_setupIndividualViews;
- (void)_setupStackViews;
- (id)contact;
- (void)dealloc;
- (id)horizontalStack;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setContact:(id)arg1;
- (void)setContact:(id)arg1 showRelationship:(BOOL)arg2 showPhoneIcon:(BOOL)arg3;
- (void)setHorizontalStack:(id)arg1;
- (void)setVerticalStack:(id)arg1;
- (id)verticalStack;

@end
