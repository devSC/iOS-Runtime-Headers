/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairResourceTransferReceiver : NSObject {
    BOOL  _compressed;
    BOOL  _done;
    BOOL  _expectsPeerResponse;
    NSDate * _expiryDate;
    int  _fileDescriptor;
    BOOL  _isResuming;
    NSString * _messageUUID;
    NSDictionary * _metadata;
    NSString * _peerResponseIdentifier;
    NSString * _resourcePath;
    BOOL  _resumeResourceTransfers;
    unsigned int  _sequenceNumber;
    unsigned short  _streamID;
    unsigned long long  _totalBytesExpected;
    unsigned long long  _totalBytesReceived;
    BOOL  _wantsAppAck;
}

@property (nonatomic, readonly, retain) NSDate *expiryDate;
@property (nonatomic, readonly, retain) NSString *messageUUID;
@property (nonatomic, readonly) unsigned long long totalBytesReceived;

+ (id)incomingFilePath;
+ (id)incomingFilePathForMessageUUID:(id)arg1;

- (void)abortTransfer;
- (BOOL)appendMessage:(id)arg1 receiverError:(unsigned char*)arg2;
- (void)dealloc;
- (id)expiryDate;
- (id)finalizedMessageDictionaryIfDone;
- (id)initWithMessage:(id)arg1 resumeResourceTransfers:(BOOL)arg2 receiverError:(unsigned char*)arg3;
- (id)messageUUID;
- (unsigned long long)totalBytesReceived;
- (BOOL)writeResourceData:(id)arg1;
- (BOOL)writeResourceData:(id)arg1 resourceByteOffset:(unsigned long long)arg2;

@end
