/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraStreamMessaging : PBCodable <NSCopying> {
    struct { 
        unsigned int receivedConnSetup : 1; 
        unsigned int receivedNegotiationRequest : 1; 
        unsigned int receivedStartRequest : 1; 
        unsigned int sentConnSetup : 1; 
        unsigned int sentNegotiationRequest : 1; 
        unsigned int sentNegotiationResponse : 1; 
        unsigned int sentStartRequest : 1; 
        unsigned int sentStartResponse : 1; 
    }  _has;
    unsigned long long  _receivedConnSetup;
    unsigned long long  _receivedNegotiationRequest;
    unsigned long long  _receivedStartRequest;
    unsigned long long  _sentConnSetup;
    unsigned long long  _sentNegotiationRequest;
    unsigned long long  _sentNegotiationResponse;
    unsigned long long  _sentStartRequest;
    unsigned long long  _sentStartResponse;
}

@property (nonatomic) BOOL hasReceivedConnSetup;
@property (nonatomic) BOOL hasReceivedNegotiationRequest;
@property (nonatomic) BOOL hasReceivedStartRequest;
@property (nonatomic) BOOL hasSentConnSetup;
@property (nonatomic) BOOL hasSentNegotiationRequest;
@property (nonatomic) BOOL hasSentNegotiationResponse;
@property (nonatomic) BOOL hasSentStartRequest;
@property (nonatomic) BOOL hasSentStartResponse;
@property (nonatomic) unsigned long long receivedConnSetup;
@property (nonatomic) unsigned long long receivedNegotiationRequest;
@property (nonatomic) unsigned long long receivedStartRequest;
@property (nonatomic) unsigned long long sentConnSetup;
@property (nonatomic) unsigned long long sentNegotiationRequest;
@property (nonatomic) unsigned long long sentNegotiationResponse;
@property (nonatomic) unsigned long long sentStartRequest;
@property (nonatomic) unsigned long long sentStartResponse;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasReceivedConnSetup;
- (BOOL)hasReceivedNegotiationRequest;
- (BOOL)hasReceivedStartRequest;
- (BOOL)hasSentConnSetup;
- (BOOL)hasSentNegotiationRequest;
- (BOOL)hasSentNegotiationResponse;
- (BOOL)hasSentStartRequest;
- (BOOL)hasSentStartResponse;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)receivedConnSetup;
- (unsigned long long)receivedNegotiationRequest;
- (unsigned long long)receivedStartRequest;
- (unsigned long long)sentConnSetup;
- (unsigned long long)sentNegotiationRequest;
- (unsigned long long)sentNegotiationResponse;
- (unsigned long long)sentStartRequest;
- (unsigned long long)sentStartResponse;
- (void)setHasReceivedConnSetup:(BOOL)arg1;
- (void)setHasReceivedNegotiationRequest:(BOOL)arg1;
- (void)setHasReceivedStartRequest:(BOOL)arg1;
- (void)setHasSentConnSetup:(BOOL)arg1;
- (void)setHasSentNegotiationRequest:(BOOL)arg1;
- (void)setHasSentNegotiationResponse:(BOOL)arg1;
- (void)setHasSentStartRequest:(BOOL)arg1;
- (void)setHasSentStartResponse:(BOOL)arg1;
- (void)setReceivedConnSetup:(unsigned long long)arg1;
- (void)setReceivedNegotiationRequest:(unsigned long long)arg1;
- (void)setReceivedStartRequest:(unsigned long long)arg1;
- (void)setSentConnSetup:(unsigned long long)arg1;
- (void)setSentNegotiationRequest:(unsigned long long)arg1;
- (void)setSentNegotiationResponse:(unsigned long long)arg1;
- (void)setSentStartRequest:(unsigned long long)arg1;
- (void)setSentStartResponse:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
