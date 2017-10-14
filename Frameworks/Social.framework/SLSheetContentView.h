/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetContentView : UIView {
    UIView * _accessoryView;
    BOOL  _autoCompletionMode;
    UIView * _autoCompletionModeSeparator;
    float  _autoCompletionTextViewHeight;
    UIView * _bottomSeparator;
    NSMutableArray * _constraints;
    NSMutableDictionary * _intrinsicSizes;
    float  _previewTopMargin;
    UIView * _previewView;
    SLSheetTextComposeView * _textComposeView;
    float  _textViewTopMargin;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, readonly) UILabel *placeholderLabel;
@property (nonatomic, retain) UIView *previewView;
@property (nonatomic, readonly) UITextView *textView;

- (void).cxx_destruct;
- (float)_previewMarginForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_resetAccessoryView;
- (void)_setConstraints;
- (void)_setupConstraints;
- (void)_setupView;
- (float)_textTopMarginForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)accessoryView;
- (void)adjustComposeViewForPreview;
- (void)beginAutoCompletionMode;
- (void)endAutoCompletionMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (void)preflightAutoCompletionModeWithApparentHeight:(float)arg1;
- (id)previewView;
- (void)resetPreview;
- (void)setAccessoryView:(id)arg1;
- (void)setIntrinsicSize:(struct CGSize { float x1; float x2; })arg1 forVerticalSizeClass:(int)arg2;
- (void)setPreviewView:(id)arg1;
- (id)textView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updatePreviewMargin;
- (void)updateTextViewMargin;

@end
