/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSStickerView : UIView <CKAnimationTimerObserver, UIGestureRecognizerDelegate> {
    BOOL  _animating;
    double  _animationDuration;
    NSArray * _frames;
    CKAnimatedImage * _image;
    CKImageData * _imageData;
    UIImageView * _imageView;
    BOOL  _initialLayoutComplete;
    BOOL  _isPeeled;
    UILongPressGestureRecognizer * _longPressRecognizer;
    MSSticker * _sticker;
    NSError * _stickerError;
    UIImage * _stickerImage;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic) BOOL animating;
@property (nonatomic) double animationDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *frames;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CKAnimatedImage *image;
@property (nonatomic, retain) CKImageData *imageData;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) BOOL initialLayoutComplete;
@property (nonatomic, readonly) BOOL isAnimated;
@property (nonatomic) BOOL isPeeled;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressRecognizer;
@property (nonatomic, retain) MSSticker *sticker;
@property (nonatomic, retain) NSError *stickerError;
@property (nonatomic, retain) UIImage *stickerImage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapRecognizer;

- (void).cxx_destruct;
- (void)_configureStickerView;
- (void)_loadAnimatedStickerfIfNecessary;
- (void)_loadSticker;
- (void)_prepareForReuse;
- (void)_resetPeel:(BOOL)arg1;
- (void)_setImage:(id)arg1;
- (void)_stickerPreviewCachePreviewDidChange:(id)arg1;
- (void)_swapWithOutlineImage;
- (void)_updateStickerView;
- (id)accessibilityLabel;
- (BOOL)animating;
- (double)animationDuration;
- (void)animationTimerFired:(unsigned int)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)frames;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)image;
- (id)imageData;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 sticker:(id)arg2;
- (BOOL)initialLayoutComplete;
- (BOOL)isAnimated;
- (BOOL)isAnimating;
- (BOOL)isPeeled;
- (void)layoutSubviews;
- (id)longPressRecognizer;
- (void)prepareForSnapshotting;
- (void)setAnimating:(BOOL)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setFrames:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setInitialLayoutComplete:(BOOL)arg1;
- (void)setIsPeeled:(BOOL)arg1;
- (void)setSticker:(id)arg1;
- (void)setStickerError:(id)arg1;
- (void)setStickerImage:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startAnimating;
- (id)sticker;
- (id)stickerError;
- (id)stickerImage;
- (void)stopAnimating;
- (id)tapRecognizer;
- (void)updateAnimationTimerObserving;

@end
