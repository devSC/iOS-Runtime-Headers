/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeMultiView : MFComposeHeaderView {
    BOOL  _accountAutoselected;
    NSString * _accountDescription;
    BOOL  _accountHasUnsafeDomain;
    UILabel * _accountLabel;
    MFHeaderLabelView * _imageSizeHeaderLabelView;
    UILabel * _imageSizeLabel;
    BOOL  _imageSizeShown;
    UILabel * _placeholderImageSizeLabel;
}

@property (getter=isAccountAutoselected, nonatomic) BOOL accountAutoselected;
@property (nonatomic) BOOL accountHasUnsafeDomain;

- (id)_accountDescriptionAttributedString;
- (BOOL)accountHasUnsafeDomain;
- (id)accountLabel;
- (void)dealloc;
- (id)imageSizeHeaderLabelView;
- (id)imageSizeLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccountAutoselected;
- (id)labelColor;
- (void)layoutSubviews;
- (id)placeholderImageSizeLabel;
- (void)refreshPreferredContentSize;
- (void)setAccountAutoselected:(BOOL)arg1;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountHasUnsafeDomain:(BOOL)arg1;
- (void)setImageSizeDescription:(id)arg1;
- (void)setShowsImageSize:(BOOL)arg1;

@end
