/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCheckmarkAccessoryView : UIImageView {
    BOOL  _checked;
    UIImageView * _checkmarkImageView;
    BOOL  _disabled;
}

@property (nonatomic) BOOL checked;
@property (nonatomic, retain) UIImageView *checkmarkImageView;
@property (nonatomic) BOOL disabled;

+ (float)borderWidth;
+ (id)checkmarkImage;
+ (id)grayBorderColor;

- (void).cxx_destruct;
- (void)_updateColors;
- (BOOL)checked;
- (id)checkmarkImageView;
- (BOOL)disabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setChecked:(BOOL)arg1;
- (void)setCheckmarkImageView:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)tintColorDidChange;

@end
