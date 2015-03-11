/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSMutableData;

@interface ATMessageParser : NSObject {
    unsigned int _curObjectLength;
    Class _messageClass;
    void *_objectDataBuffer;
    unsigned int _objectDataLen;
    id _objectParsedBlock;
    NSMutableData *_parserData;
    NSError *_parserError;
    BOOL _varIntBuf[10];
    unsigned int _varIntDataLen;
}

@property(readonly) Class messageClass;
@property(copy) id objectParsedBlock;
@property(readonly) NSError * parserError;

- (void).cxx_destruct;
- (BOOL)_parseObjectFromData:(id)arg1;
- (BOOL)_parseObjectLength:(const char *)arg1 length:(unsigned int)arg2 bytesConsumed:(unsigned int*)arg3;
- (void)dealloc;
- (id)initWithMessageClass:(Class)arg1;
- (Class)messageClass;
- (id)objectParsedBlock;
- (id)parserError;
- (BOOL)processData:(const char *)arg1 length:(long)arg2;
- (void)setObjectParsedBlock:(id)arg1;

@end