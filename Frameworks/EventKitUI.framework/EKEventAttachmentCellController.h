/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAttachmentCellController : NSObject <UIDocumentInteractionControllerDelegate> {
    EKAttachment * _attachment;
    EKEventAttachmentCell * _cell;
    <EKEventAttachmentCellControllerDelegate> * _delegate;
    id  _downloadID;
    BOOL  _sourceIsManaged;
}

@property (nonatomic, retain) EKAttachment *attachment;
@property (readonly) EKEventAttachmentCell *cell;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKEventAttachmentCellControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL sourceIsManaged;
@property (readonly) Class superclass;

+ (id)_attachmentDownloadErrorLocalizedString;
+ (BOOL)_attachmentIsViewable:(id)arg1;
+ (id)_cannotOpenAttachmentLocalizedString;
+ (id)_okLocalizedString;
+ (id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2;

- (void).cxx_destruct;
- (void)_clearDownloadID;
- (id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2;
- (void)_presentPreviewOnMainThreadWithInfo:(id)arg1;
- (void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2;
- (id)attachment;
- (id)cell;
- (void)cellSelected;
- (id)delegate;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)documentInteractionControllerViewForPreview:(id)arg1;
- (void)documentInteractionControllerWillEndPreview:(id)arg1;
- (id)initWithAttachment:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSourceIsManaged:(BOOL)arg1;
- (BOOL)sourceIsManaged;
- (void)tearDown;

@end
