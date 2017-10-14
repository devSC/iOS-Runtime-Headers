/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextSelectionView : UIView {
    BOOL  m_activated;
    BOOL  m_activeCaret;
    BOOL  m_caretAnimating;
    BOOL  m_caretBlinks;
    BOOL  m_caretShowingNow;
    NSTimer * m_caretTimer;
    UIView * m_caretView;
    BOOL  m_deferSelectionCommands;
    BOOL  m_delayShowingCommands;
    BOOL  m_dictationReplacementsMode;
    UIView * m_floatingCaretView;
    BOOL  m_forceRangeView;
    UITextInteractionAssistant * m_interactionAssistant;
    BOOL  m_isSuspended;
    struct __CFRunLoopObserver { } * m_observer;
    UITextRangeView * m_rangeView;
    NSArray * m_replacements;
    UITextSelection * m_selection;
    int  m_showingCommandsCounter;
    BOOL  m_visible;
    BOOL  m_wasShowingCommands;
}

@property (nonatomic) BOOL caretBlinks;
@property (nonatomic, readonly) UIView *caretView;
@property (nonatomic, readonly) UIView *floatingCaretView;
@property (nonatomic) BOOL forceRangeView;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic, readonly) UITextRangeView *rangeView;
@property (nonatomic, retain) NSArray *replacements;
@property (nonatomic, readonly) UITextSelection *selection;
@property (nonatomic, readonly) BOOL selectionCommandsShowing;
@property (nonatomic) BOOL visible;

- (void).cxx_destruct;
- (void)activate;
- (BOOL)affectedByScrollerNotification:(id)arg1;
- (void)animateBoxShrinkOn:(id)arg1;
- (void)animateCaret:(id)arg1 toPosition:(struct CGPoint { float x1; float x2; })arg2 withSize:(struct CGSize { float x1; float x2; })arg3;
- (void)animateExpanderOn:(id)arg1;
- (void)animatePulsingCaret:(id)arg1;
- (void)appearOrFadeIfNecessary;
- (void)beginFloatingCaretView;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)calculateAndShowReplacements:(id)arg1;
- (void)cancelDelayedCommandRequests;
- (void)caretBlinkTimerFired:(id)arg1;
- (BOOL)caretBlinks;
- (id)caretView;
- (id)caretViewColor;
- (void)clearCaret;
- (void)clearCaretBlinkTimer;
- (void)clearRangeAnimated:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)configureForHighlightMode;
- (void)configureForReplacementMode;
- (void)configureForSelectionMode;
- (void)deactivate;
- (void)dealloc;
- (void)deferredUpdateSelectionCommands;
- (void)deferredUpdateSelectionRects;
- (void)detach;
- (void)didRotate:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)doneMagnifying;
- (id)dynamicCaret;
- (id)dynamicCaretList;
- (void)endFloatingCaretView;
- (void)endFloatingCursor;
- (id)floatingCaretView;
- (id)floatingCaretViewColor;
- (struct CGPoint { float x1; float x2; })floatingCursorPositionForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)forceRangeView;
- (void)hideCaret:(int)arg1;
- (void)hideSelectionCommands;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithInteractionAssistant:(id)arg1;
- (void)inputModeDidChange:(id)arg1;
- (void)inputViewDidAnimate;
- (void)inputViewDidChange;
- (void)inputViewDidMove;
- (void)inputViewWillAnimate;
- (void)inputViewWillChange;
- (void)inputViewWillMove:(id)arg1;
- (void)installIfNecessary;
- (id)interactionAssistant;
- (void)invalidate;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (void)prepareForMagnification;
- (id)rangeView;
- (void)removeFromSuperview;
- (id)replacements;
- (void)scaleDidChange:(id)arg1;
- (void)scaleWillChange:(id)arg1;
- (id)scrollView;
- (id)selection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBoundingBox;
- (void)selectionChanged;
- (BOOL)selectionCommandsShowing;
- (void)selectionDidScroll:(id)arg1;
- (void)selectionDidTranslateForReachability:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)selectionWillTranslateForReachability:(id)arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setForceRangeView:(BOOL)arg1;
- (void)setReplacements:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (BOOL)shouldBeVisible;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (void)showCaret:(int)arg1;
- (void)showCommandsWithReplacements:(id)arg1;
- (void)showInitialCaret;
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3;
- (void)showSelectionCommands;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)startCaretBlinkIfNeeded;
- (void)textSelectionViewActivated:(id)arg1;
- (void)touchCaretBlinkTimer;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2;
- (void)updateDocumentHasContent:(BOOL)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateSelectionCommands;
- (void)updateSelectionDots;
- (void)updateSelectionRects;
- (void)updateSelectionRectsIfNeeded;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)viewAnimate:(id)arg1;
- (BOOL)visible;
- (void)wilLResume:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)windowDidResignOrBecomeKey;

@end
