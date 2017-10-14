/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLMovieItemViewController : QLMediaItemViewController <AVPictureInPictureControllerDelegate> {
    PHPlaceholderView * _airPlayPlaceholderView;
    NSLayoutConstraint * _bottomScrubberConstraint;
    BOOL  _isObservingPlayerExternalPlaybackActive;
    QLOverlayPlayButton * _playButton;
    BOOL  _previewIsVisisble;
    QLVideoScrubberView * _scrubber;
    UIView * _scrubberContainer;
    UIScrollView * _scrubberContainerScrollView;
    float  _scrubberVerticalOffset;
}

@property (nonatomic, readonly) PHPlaceholderView *airPlayPlaceholderView;
@property (retain) NSLayoutConstraint *bottomScrubberConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) QLOverlayPlayButton *playButton;
@property (retain) QLVideoScrubberView *scrubber;
@property (retain) UIView *scrubberContainer;
@property (retain) UIScrollView *scrubberContainerScrollView;
@property (nonatomic) float scrubberVerticalOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updatePlaceHolderView;
- (id)accessoryView;
- (void)addScrubberIfNeededWithDeferral;
- (id)airPlayPlaceholderView;
- (id)bottomScrubberConstraint;
- (BOOL)canEnterFullScreen;
- (void)dealloc;
- (void)didChangePlayingStatus;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)parallaxView;
- (void)play;
- (id)playButton;
- (int)preferredWhitePointAdaptivityStyle;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (id)scrubber;
- (id)scrubberContainer;
- (id)scrubberContainerScrollView;
- (float)scrubberVerticalOffset;
- (void)setBottomScrubberConstraint:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setPlayControlsHidden:(BOOL)arg1;
- (void)setScrubber:(id)arg1;
- (void)setScrubberContainer:(id)arg1;
- (void)setScrubberContainerScrollView:(id)arg1;
- (void)setScrubberVerticalOffset:(float)arg1;
- (id)timeLabelScrollView;
- (void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2;
- (void)transitionDidStart:(BOOL)arg1;
- (id)transitioningView;

@end
