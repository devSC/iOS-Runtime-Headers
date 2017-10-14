/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPDataPacket : NSObject {
    long long  _bufferSize;
    long long  _bytesTransferred;
    id  _data;
    int  _fd;
    NSString * _filepath;
    long long  _offsetInBuffer;
    unsigned short  _operationCode;
    struct _PTPRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    unsigned long  _transactionID;
}

- (long long)bufferSize;
- (long long)bytesTransferred;
- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned long)arg2;
- (long long)copyDataToWrappedBytes:(id)arg1 forTransport:(unsigned short)arg2 fromOffset:(unsigned long long)arg3;
- (long long)copyFromBuffer:(void*)arg1 numBytes:(long long)arg2;
- (long long)copyHeaderToWrappedBytes:(id)arg1 forTransport:(unsigned short)arg2;
- (long long)copyToBuffer:(void*)arg1 numBytes:(long long)arg2;
- (long long)copyToWrappedBytes:(id)arg1 forTransport:(unsigned short)arg2;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)filepath;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 andData:(id)arg3;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 andFilepath:(id)arg3;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)initWithUSBBuffer:(void*)arg1;
- (long long)offsetInBuffer;
- (unsigned short)operationCode;
- (struct _PTPRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setBytesTransferred:(long long)arg1;
- (void)setData:(id)arg1;
- (void)setOperationCode:(unsigned short)arg1;
- (int)setRange:(struct _PTPRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned long)transactionID;

@end
