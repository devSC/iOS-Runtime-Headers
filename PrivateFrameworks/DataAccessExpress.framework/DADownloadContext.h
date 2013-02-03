/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface DADownloadContext : NSObject {
    NSString *_accountID;
    NSString *_attachmentUUID;
    id _completionBlock;
    id _progressBlock;
    struct dispatch_queue_s { } *_queue;
}

- (void)dealloc;
- (void)finishedWithError:(id)arg1;
- (id)initWithAttachmentUUID:(id)arg1 accountID:(id)arg2 queue:(struct dispatch_queue_s { }*)arg3 downloadProgressBlock:(id)arg4 completionBlock:(id)arg5;
- (void)updateProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2;

@end