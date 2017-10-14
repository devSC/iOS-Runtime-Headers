/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCustomFeedback : PBCodable <NSCopying> {
    int  _feedbackType;
    struct { 
        unsigned int feedbackType : 1; 
    }  _has;
    NSData * _jsonFeedback;
    unsigned long long  _timestamp;
}

@property (nonatomic) int feedbackType;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic, readonly) BOOL hasJsonFeedback;
@property (nonatomic, retain) NSData *jsonFeedback;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)StringAsFeedbackType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedbackType;
- (id)feedbackTypeAsString:(int)arg1;
- (BOOL)hasFeedbackType;
- (BOOL)hasJsonFeedback;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)jsonFeedback;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setHasFeedbackType:(BOOL)arg1;
- (void)setJsonFeedback:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
