/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsServices.framework/NewsServices
 */

@interface NSSArticleView : UIView {
    NSSArticle * _article;
    UILabel * _dateLabel;
    UILabel * _excerptLabel;
    struct CGSize { 
        float width; 
        float height; 
    }  _preferredSize;
    UILabel * _publisherLabel;
    UIImageView * _publisherLogoImageView;
    UIView * _thumbnailContainerView;
    UIImageView * _thumbnailImageView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSSArticle *article;
@property (nonatomic) UILabel *dateLabel;
@property (nonatomic) UILabel *excerptLabel;
@property (nonatomic) struct CGSize { float x1; float x2; } preferredSize;
@property (nonatomic) UILabel *publisherLabel;
@property (nonatomic) UIImageView *publisherLogoImageView;
@property (nonatomic) UIView *thumbnailContainerView;
@property (nonatomic) UIImageView *thumbnailImageView;
@property (nonatomic) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateFonts;
- (id)article;
- (float)calculateHeightForWidth:(float)arg1;
- (id)dateLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)excerptLabel;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })preferredSize;
- (id)publisherLabel;
- (id)publisherLogoImageView;
- (void)setArticle:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setExcerptLabel:(id)arg1;
- (void)setPreferredSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPublisherLabel:(id)arg1;
- (void)setPublisherLogoImageView:(id)arg1;
- (void)setThumbnailContainerView:(id)arg1;
- (void)setThumbnailImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)thumbnailContainerView;
- (id)thumbnailImageView;
- (id)titleLabel;

@end
