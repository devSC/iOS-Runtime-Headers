/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailMessage : PBCodable <NSCopying> {
    AWDMailMessageBody * _body;
    NSString * _messageId;
}

@property (nonatomic, retain) AWDMailMessageBody *body;
@property (nonatomic, readonly) BOOL hasBody;
@property (nonatomic, readonly) BOOL hasMessageId;
@property (nonatomic, retain) NSString *messageId;

- (void).cxx_destruct;
- (id)body;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBody;
- (BOOL)hasMessageId;
- (unsigned int)hash;
- (id)initWithMailMessage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (BOOL)readFrom:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
