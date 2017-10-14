/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDefaultHint : NSObject <TSDHint> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mBounds;
    unsigned int  mEdges;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int edges;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (Class)archivedHintClass;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)copyForArchiving;
- (unsigned int)edges;
- (id)firstChildHint;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 edges:(unsigned int)arg2;
- (BOOL)isLastPartitionHorizontally:(BOOL)arg1;
- (id)lastChildHint;
- (void)offsetByDelta:(int)arg1;
- (BOOL)overlapsWithSelectionPath:(id)arg1;

@end
