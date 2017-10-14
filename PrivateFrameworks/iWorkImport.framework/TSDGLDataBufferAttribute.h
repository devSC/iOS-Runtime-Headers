/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLDataBufferAttribute : NSObject {
    unsigned int  _bufferOffset;
    unsigned int  _bufferUsage;
    int  _componentCount;
    TSDGLDataArrayBuffer * _dataArrayBuffer;
    TSDGLDataBuffer * _dataBuffer;
    int  _dataType;
    BOOL  _isNormalized;
    int  _locationInShader;
    NSString * _name;
}

@property (nonatomic) unsigned int bufferOffset;
@property (nonatomic, readonly) unsigned int bufferUsage;
@property (nonatomic, readonly) int componentCount;
@property (nonatomic) TSDGLDataArrayBuffer *dataArrayBuffer;
@property (nonatomic) TSDGLDataBuffer *dataBuffer;
@property (nonatomic, readonly) int dataType;
@property (nonatomic, readonly) BOOL isNormalized;
@property (nonatomic) int locationInShader;
@property (nonatomic, copy) NSString *name;

+ (id)attributeWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(int)arg3 normalized:(BOOL)arg4 componentCount:(unsigned int)arg5;

- (unsigned int)bufferOffset;
- (unsigned int)bufferUsage;
- (int)componentCount;
- (id)dataArrayBuffer;
- (id)dataBuffer;
- (int)dataType;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(int)arg3 normalized:(BOOL)arg4 componentCount:(unsigned int)arg5;
- (BOOL)isNormalized;
- (int)locationInShader;
- (id)name;
- (void)setBufferOffset:(unsigned int)arg1;
- (void)setBufferUsage:(unsigned int)arg1;
- (void)setComponentCount:(int)arg1;
- (void)setDataArrayBuffer:(id)arg1;
- (void)setDataBuffer:(id)arg1;
- (void)setLocationInShader:(int)arg1;
- (void)setName:(id)arg1;

@end
