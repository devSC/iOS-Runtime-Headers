/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserNavigationViewController : UINavigationController <CKBrowserViewControllerProtocol, UIViewControllerTransitioningDelegate> {
    IMBalloonPlugin * _balloonPlugin;
    IMBalloonPluginDataSource * _balloonPluginDataSource;
    NSString * _conversationID;
    BOOL  _isiMessge;
    UIViewController * _presentationViewController;
    NSObject<CKBrowserViewControllerSendDelegate> * _sendDelegate;
    BOOL  _shouldShowChatChrome;
    BOOL  _wantsDarkUI;
    BOOL  _wantsOpaqueUI;
}

@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, readonly) unsigned int badgeValue;
@property (nonatomic, readonly) IMBalloonPlugin *balloonPlugin;
@property (nonatomic, retain) IMBalloonPluginDataSource *balloonPluginDataSource;
@property (nonatomic, readonly) CKBrowserDragManager *browserDragManager;
@property (nonatomic, readonly) int browserPresentationStyle;
@property (nonatomic, readonly) BOOL canReplaceDataSource;
@property (nonatomic) NSString *conversationID;
@property (nonatomic) int currentBrowserConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL inExpandedPresentation;
@property (nonatomic) BOOL isiMessage;
@property (nonatomic, readonly) BOOL mayBeKeptInViewHierarchy;
@property (nonatomic, readonly) int parentModalPresentationStyle;
@property (nonatomic, readonly) <UIViewControllerTransitioningDelegate> *parentTransitioningDelegate;
@property (nonatomic, retain) UIViewController *presentationViewController;
@property (nonatomic) NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property (nonatomic, readonly) BOOL shouldShowChatChrome;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsQuickView;
@property (nonatomic, readonly) BOOL wantsDarkUI;
@property (nonatomic, readonly) BOOL wantsOpaqueUI;

- (void).cxx_destruct;
- (id)balloonPlugin;
- (id)balloonPluginDataSource;
- (int)browserPresentationStyle;
- (id)conversationID;
- (void)dismiss;
- (id)init;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (BOOL)isiMessage;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentationViewController;
- (id)sendDelegate;
- (void)setBalloonPluginDataSource:(id)arg1;
- (void)setConversationID:(id)arg1;
- (void)setIsiMessage:(BOOL)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setSendDelegate:(id)arg1;
- (BOOL)shouldShowChatChrome;
- (void)viewDidLoad;
- (BOOL)wantsDarkUI;
- (BOOL)wantsOpaqueUI;

@end
