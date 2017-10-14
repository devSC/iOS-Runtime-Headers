/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSJSONWriter : NSObject {
    char * dataBuffer;
    unsigned int  dataBufferLen;
    unsigned int  dataLen;
    BOOL  freeDataBuffer;
    int  kind;
    NSOutputStream * outputStream;
    char * tempBuffer;
    unsigned int  tempBufferLen;
    int  totalDataWritten;
}

- (int)appendString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)dataWithRootObject:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)init;
- (void)resizeTemporaryBuffer:(unsigned long)arg1;
- (int)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;

@end
