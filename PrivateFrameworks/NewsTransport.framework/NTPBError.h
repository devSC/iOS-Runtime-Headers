/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBError : PBCodable <NSCopying> {
    NSString * _errorCode;
    NSString * _errorMessage;
}

@property (nonatomic, retain) NSString *errorCode;
@property (nonatomic, retain) NSString *errorMessage;
@property (nonatomic, readonly) BOOL hasErrorCode;
@property (nonatomic, readonly) BOOL hasErrorMessage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorCode;
- (id)errorMessage;
- (BOOL)hasErrorCode;
- (BOOL)hasErrorMessage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
