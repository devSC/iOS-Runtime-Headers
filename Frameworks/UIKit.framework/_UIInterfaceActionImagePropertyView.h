/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInterfaceActionImagePropertyView : UIImageView <UIInterfaceActionDisplayPropertyObserver> {
    UIInterfaceAction * _action;
    NSLayoutConstraint * _imageHeightConstraint;
    NSString * _imageProperty;
    NSLayoutConstraint * _imageWidthConstraint;
}

@property (nonatomic, readonly) UIInterfaceAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *imageProperty;
@property (nonatomic, readonly) BOOL isUsedToOccupySpaceIfNoImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToImageView;
- (id)_interfaceActionViewState;
- (void)_reloadImageContent;
- (struct CGSize { float x1; float x2; })_sizeToOccupy;
- (id)_visualStyle;
- (id)action;
- (void)dealloc;
- (id)imageProperty;
- (id)initWithAction:(id)arg1 imageProperty:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (BOOL)isUsedToOccupySpaceIfNoImage;
- (void)setImage:(id)arg1;
- (void)tintColorDidChange;

@end
