/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMTranscriptPluginBreadcrumbChatItem : IMTranscriptChatItem <IMPluginChatItemProtocol> {
    IMBalloonPluginDataSource * _dataSource;
    unsigned int  _optionFlags;
    NSString * _rawStatusText;
    NSString * _statusText;
}

@property (nonatomic, retain) IMBalloonPluginDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isFromMe;
@property (nonatomic, readonly) unsigned int optionFlags;
@property (nonatomic, readonly) NSString *rawStatusText;
@property (nonatomic, readonly) NSString *statusText;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSString *type;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 datasource:(id)arg2 statusText:(id)arg3 optionFlags:(unsigned int)arg4;
- (void)configureStatusTextWithAccount:(id)arg1;
- (id)dataSource;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFromMe;
- (unsigned int)optionFlags;
- (id)rawStatusText;
- (void)setDataSource:(id)arg1;
- (id)statusText;
- (id)type;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
