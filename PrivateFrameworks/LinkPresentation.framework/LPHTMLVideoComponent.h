/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPHTMLVideoComponent : LPHTMLComponent <DOMEventListener> {
    BOOL  _isVisible;
    WebScriptObject * _isVisibleFunction;
    DOMElement * _muteButton;
    DOMElement * _muteButtonContainer;
    DOMElement * _playButton;
    LPVideo * _video;
    DOMHTMLVideoElement * _videoElement;
    DOMElement * _videoOverlay;
    DOMElement * _videoPosterFrame;
    BOOL  _wasPlayingWhenHidden;
    DOMHTMLIFrameElement * _youTubeContainerElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isMuted, nonatomic) BOOL muted;
@property (readonly) Class superclass;

+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;

- (void).cxx_destruct;
- (void)buildComponentWithPosterFrame:(id)arg1 posterFrameStyle:(id)arg2;
- (id)createVideoElement;
- (void)handleEvent:(id)arg1;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 themePath:(id)arg5 generator:(id)arg6;
- (BOOL)isMuted;
- (BOOL)isPlaying;
- (BOOL)isVisible;
- (void)pause;
- (void)play;
- (id)resolvedVideoElement;
- (void)setMuted:(BOOL)arg1;
- (BOOL)shouldAutoPlay;
- (void)togglePlaying;
- (void)updateVisibility;
- (id)youTubeParametersForVideoURL:(id)arg1;

@end
