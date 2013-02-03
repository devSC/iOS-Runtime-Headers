/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSData, CKMessage;

@interface CKMessagePart : NSObject {
    unsigned int _flags;
    unsigned int _height;
    int _outgoingBubbleColor;
    CKMessage *_parentMessage;
    int _rowID;
}

@property(readonly) NSData * highlightData;
@property int outgoingBubbleColor;
@property CKMessage * parentMessage;
@property int rowID;

+ (id)_assembleTextPartFromRange:(id)arg1;
+ (id)_newPartForPartRepresentation:(id)arg1 previewPartRepresentation:(id)arg2;
+ (id)_newPartsForNode:(id)arg1 resources:(id)arg2;
+ (id)copyDeletedPart;
+ (id)copyDetachedMessageParts:(id)arg1;
+ (id)copyMessagePartsFromArrayRepresentation:(id)arg1;
+ (id)copyMessagePartsFromComposition:(id)arg1;
+ (id)copyUnknownPart;

- (void)_storePartFlagsSync;
- (id)composeData;
- (id)composeImages;
- (void)copyToPasteboard;
- (void)dealloc;
- (id)detachedCopy;
- (void)getUIHeight:(unsigned int*)arg1 flags:(unsigned int*)arg2;
- (id)highlightData;
- (id)image;
- (id)imageData;
- (id)imageFilename;
- (BOOL)isDisplayable;
- (BOOL)isEqual:(id)arg1;
- (id)mediaObject;
- (int)outgoingBubbleColor;
- (id)parentMessage;
- (id)previewData;
- (id)previewImage;
- (id)previewText;
- (int)rowID;
- (void)setOutgoingBubbleColor:(int)arg1;
- (void)setParentMessage:(id)arg1;
- (void)setRowID:(int)arg1;
- (void)setUIHeight:(unsigned long)arg1 flags:(unsigned long)arg2 store:(BOOL)arg3;
- (id)text;
- (int)type;
- (BOOL)usesColoredBalloon;

@end