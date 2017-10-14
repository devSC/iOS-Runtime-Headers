/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSIdentityProviderLogoView : UIView {
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIImage *logo;
@property (nonatomic, readonly) float marginLength;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } preferredImageSize;

- (void).cxx_destruct;
- (float)_height;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageViewFrame;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)logo;
- (float)marginLength;
- (struct CGSize { float x1; float x2; })preferredImageSize;
- (void)setImageView:(id)arg1;
- (void)setLogo:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
