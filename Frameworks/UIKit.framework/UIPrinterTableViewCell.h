/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterTableViewCell : UITableViewCell <UIPrinterAccessoryViewDelegate> {
    id  _delegate;
    UIGestureRecognizer * _expandedAccessoryTapRecognizer;
    PKPrinter * _printer;
    UIPrinterAccessoryView * _printerAccessoryView;
}

@property (nonatomic) BOOL checked;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIGestureRecognizer *expandedAccessoryTapRecognizer;
@property (readonly) unsigned int hash;
@property (nonatomic) PKPrinter *printer;
@property (nonatomic, retain) UIPrinterAccessoryView *printerAccessoryView;
@property (nonatomic) int printerState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)checked;
- (id)delegate;
- (void)expandedAccessoryAreaTapped;
- (id)expandedAccessoryTapRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)printer;
- (id)printerAccessoryView;
- (void)printerAccessoryViewInfoButtonPressed:(id)arg1;
- (int)printerState;
- (void)setChecked:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpandedAccessoryTapRecognizer:(id)arg1;
- (void)setPrinter:(id)arg1;
- (void)setPrinterAccessoryView:(id)arg1;
- (void)setPrinterState:(int)arg1;

@end
