/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCRemoteFilePresenter : NSObject <BRCForegroundClient, BRCNotificationPipeDelegate> {
    NSNumber * _docID;
    NSString * _identifier;
    NSMutableSet * _observedAppLibraries;
    BRCNotificationPipe * _pipe;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *docID;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) BRCNotificationPipe *pipe;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)dealloc;
- (id)docID;
- (id)identifier;
- (id)initWithURL:(id)arg1 name:(id)arg2;
- (void)notificationPipe:(id)arg1 didObserveAppLibrary:(id)arg2;
- (void)notificationPipe:(id)arg1 willObserveAppLibrary:(id)arg2;
- (id)pipe;
- (void)setDocID:(id)arg1;
- (void)setPipe:(id)arg1;
- (id)url;

@end
