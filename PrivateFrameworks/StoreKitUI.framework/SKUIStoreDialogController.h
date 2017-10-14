/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStoreDialogController : NSObject <UIAlertViewDelegate> {
    NSMutableArray * _alerts;
    NSMutableArray * _dialogs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performActionForDialog:(id)arg1 buttonIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (id)init;
- (void)presentDialog:(id)arg1;
- (void)presentDialog:(id)arg1 fromViewController:(id)arg2;

@end
