/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextBlock : NSObject <NSCoding, NSCopying> {
    void * _blockPrimary;
    void * _blockSecondary;
    id  _otherParamVals;
    id  _primParamVal;
    unsigned int  _propMask;
    void * _propVals;
    unsigned int  _typeMask;
}

+ (void)initialize;

- (id)_attributeDescription;
- (void)_createFloatStorage;
- (void)_destroyFloatStorage;
- (void)_setValue:(float)arg1 type:(unsigned int)arg2 forParameter:(unsigned int)arg3;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (float)_valueForParameter:(unsigned int)arg1;
- (unsigned int)_valueTypeForParameter:(unsigned int)arg1;
- (id)backgroundColor;
- (id)borderColorForEdge:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 textContainer:(id)arg3 characterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (float)contentWidth;
- (unsigned int)contentWidthValueType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 characterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 layoutManager:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForLayoutAtPoint:(struct CGPoint { float x1; float x2; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 textContainer:(id)arg3 characterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderColor:(id)arg1 forEdge:(unsigned int)arg2;
- (void)setContentWidth:(float)arg1 type:(unsigned int)arg2;
- (void)setValue:(float)arg1 type:(unsigned int)arg2 forDimension:(unsigned int)arg3;
- (void)setVerticalAlignment:(unsigned int)arg1;
- (void)setWidth:(float)arg1 type:(unsigned int)arg2 forLayer:(int)arg3;
- (void)setWidth:(float)arg1 type:(unsigned int)arg2 forLayer:(int)arg3 edge:(unsigned int)arg4;
- (float)valueForDimension:(unsigned int)arg1;
- (unsigned int)valueTypeForDimension:(unsigned int)arg1;
- (unsigned int)verticalAlignment;
- (float)widthForLayer:(int)arg1 edge:(unsigned int)arg2;
- (unsigned int)widthValueTypeForLayer:(int)arg1 edge:(unsigned int)arg2;

@end
