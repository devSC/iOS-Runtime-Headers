/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIWidgetFooterView : UIView {
    NSArray * __constraints;
    UIButton * __disclosureButton;
    UIFocusGuide * __focusGuide;
    BOOL  __hasContent;
    UIView * __leadingSeparator;
    UIView * __trailingSeparator;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInsets;
    <PXUIWidgetFooterViewDelegate> * _delegate;
    struct { 
        BOOL didSelectDisclosure; 
    }  _delegateRespondsTo;
    NSString * _disclosureTitle;
    UIFont * _font;
    BOOL  _isPerformingChanges;
    BOOL  _isPerformingUpdates;
    int  _layoutStyle;
    struct { 
        BOOL hasContent; 
        BOOL disclosure; 
        BOOL separators; 
        BOOL focusGuide; 
    }  _needsUpdateFlags;
}

@property (setter=_setConstraints:, nonatomic, copy) NSArray *_constraints;
@property (nonatomic, readonly) UIButton *_disclosureButton;
@property (nonatomic, readonly) UIFocusGuide *_focusGuide;
@property (setter=_setHasContent:, nonatomic) BOOL _hasContent;
@property (nonatomic, readonly) UIView *_leadingSeparator;
@property (nonatomic, readonly) UIView *_trailingSeparator;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property (nonatomic) <PXUIWidgetFooterViewDelegate> *delegate;
@property (nonatomic, copy) NSString *disclosureTitle;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) int layoutStyle;

- (void).cxx_destruct;
- (id)_constraints;
- (id)_disclosureButton;
- (id)_disclosureButtonCreateIfNeeded:(BOOL)arg1;
- (id)_focusGuide;
- (id)_focusGuideCreateIfNeeded:(BOOL)arg1;
- (void)_handleDisclosureButton:(id)arg1;
- (BOOL)_hasContent;
- (void)_invalidateDisclosure;
- (void)_invalidateFocusGuide;
- (void)_invalidateHasContent;
- (void)_invalidateSeparators;
- (id)_leadingSeparator;
- (id)_leadingSeparatorCreateIfNeeded:(BOOL)arg1;
- (BOOL)_needsUpdate;
- (void)_setConstraints:(id)arg1;
- (void)_setHasContent:(BOOL)arg1;
- (void)_setNeedsUpdate;
- (id)_trailingSeparator;
- (id)_trailingSeparatorCreateIfNeeded:(BOOL)arg1;
- (void)_updateDisclosureIfNeeded;
- (void)_updateFocusGuideIfNeeded;
- (void)_updateHasContentIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSeparatorsIfNeeded;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)delegate;
- (id)disclosureTitle;
- (id)font;
- (int)layoutStyle;
- (void)performChanges:(id /* block */)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureTitle:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)updateConstraints;

@end
