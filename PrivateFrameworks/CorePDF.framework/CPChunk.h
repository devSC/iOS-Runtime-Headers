/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPChunk : CPObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  bounds;
    BOOL  dirtyBounds;
    long  insertionOrder;
    unsigned int  position;
    BOOL  shrinksWithChildren;
}

+ (float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2;

- (float)absoluteGapTo:(id)arg1;
- (void)accept:(id)arg1;
- (void)add:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addChildrenOf:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustToPointBoundary:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })advance;
- (float)advanceDeltaAfterSpace;
- (struct CGPoint { float x1; float x2; })anchor;
- (float)bottom;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (BOOL)boundsEqualsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 accuracy:(float)arg2;
- (float)center;
- (unsigned int)chunkPosition;
- (float)clusterGapTo:(id)arg1;
- (int)clusterLevelHint;
- (int)compareAnchorX:(id)arg1;
- (int)compareAnchorY:(id)arg1;
- (int)compareAnchorYDescending:(id)arg1;
- (int)compareChunkPosition:(id)arg1;
- (int)compareCommonAnchorX:(id)arg1;
- (int)compareInsertionOrder:(id)arg1;
- (int)compareLinearBounds:(id)arg1;
- (int)compareTopDescending:(id)arg1;
- (int)compareX:(id)arg1;
- (int)compareXBounds:(id)arg1;
- (int)compareY:(id)arg1;
- (int)compareYBounds:(id)arg1;
- (int)compareYDescending:(id)arg1;
- (int)compareYDescendingX:(id)arg1;
- (int)compareZ:(id)arg1;
- (int)compareZDescending:(id)arg1;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)describeBounds;
- (void)fitBoundsToChildren;
- (float)fontSize;
- (BOOL)geometricallyContains:(id)arg1;
- (id)init;
- (long)insertionOrder;
- (BOOL)intersectsChild:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)left;
- (id)newTakeChildren;
- (id)newTakeChildrenAmong:(id)arg1;
- (float)opticalLeading;
- (void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2;
- (BOOL)overlapsHorizontallyWith:(id)arg1;
- (BOOL)overlapsVerticallyWith:(id)arg1;
- (float)referenceAdvanceWidth;
- (void)remove:(id)arg1;
- (void)removeAll;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })renderedBounds;
- (void)resizeWith:(id)arg1;
- (float)right;
- (float)rotationAngle;
- (void)setAnchor:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setChildren:(id)arg1;
- (void)setChunkPosition:(unsigned int)arg1;
- (void)setInsertionOrder:(long)arg1;
- (void)setShrinksWithChildren:(BOOL)arg1;
- (BOOL)shrinksWithChildren;
- (void)sortUsingSelector:(SEL)arg1;
- (float)top;
- (void)translateObjectYBy:(float)arg1;

@end
