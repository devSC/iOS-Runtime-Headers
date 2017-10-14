/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRSendCommandResultMessageProtobuf : PBCodable <NSCopying> {
    unsigned int  _errorCode;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _handlerReturnStatus;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    double  _timestamp;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic, readonly) unsigned int*handlerReturnStatus;
@property (nonatomic, readonly) unsigned int handlerReturnStatusCount;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;

- (void)addHandlerReturnStatus:(unsigned int)arg1;
- (void)clearHandlerReturnStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (unsigned int*)handlerReturnStatus;
- (unsigned int)handlerReturnStatusAtIndex:(unsigned int)arg1;
- (unsigned int)handlerReturnStatusCount;
- (BOOL)hasErrorCode;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHandlerReturnStatus:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
