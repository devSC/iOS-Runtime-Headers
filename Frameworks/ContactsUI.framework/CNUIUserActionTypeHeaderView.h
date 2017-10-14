/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIUserActionTypeHeaderView : UITableViewHeaderFooterView {
    UIImageView * _accessoryImageView;
    UIImageView * _actionTypeImageView;
    UIView * _divider;
    NSLayoutConstraint * _dividerHeightConstraint;
    BOOL  _expanded;
    BOOL  _highlighted;
    BOOL  _showsAccessory;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *accessoryImageView;
@property (nonatomic, retain) UIImageView *actionTypeImageView;
@property (nonatomic, retain) UIView *divider;
@property (nonatomic, retain) NSLayoutConstraint *dividerHeightConstraint;
@property (getter=isExpanded, nonatomic) BOOL expanded;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic) BOOL showsAccessory;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)dividerExpandedBackgroundColor;
+ (id)dividerRegularBackgroundColor;
+ (id)expandedBackgroundColor;
+ (id)expandedExpandControlTitle;
+ (id)highlightedBackgroundColor;
+ (id)regularBackgroundColor;
+ (id)regularExpandControlTitle;
+ (id)subtitleColor;

- (void).cxx_destruct;
- (id)accessoryImageView;
- (id)actionTypeImageView;
- (void)didMoveToSuperview;
- (id)divider;
- (id)dividerHeightConstraint;
- (id)initWithReuseIdentifier:(id)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isExpanded;
- (BOOL)isHighlighted;
- (void)prepareForReuse;
- (void)setAccessoryImageView:(id)arg1;
- (void)setActionTypeImageView:(id)arg1;
- (void)setDivider:(id)arg1;
- (void)setDividerHeightConstraint:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsAccessory:(BOOL)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (BOOL)showsAccessory;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)updateVisualStateAnimated:(BOOL)arg1;

@end
