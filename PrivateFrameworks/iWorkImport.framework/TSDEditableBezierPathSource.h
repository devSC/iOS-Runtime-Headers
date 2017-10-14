/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDEditableBezierPathSource : TSDPathSource <TSDMixing, TSDRealignablePathSource> {
    unsigned int  mActiveSubpath;
    BOOL  mHasLockedFlipTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  mLockedFlipTransform;
    NSArray * mSubpaths;
}

@property (nonatomic, readonly) BOOL allNodesSelected;
@property (nonatomic, readonly) BOOL canDeleteSelectedNodes;
@property (nonatomic, readonly) BOOL closeIfEndpointsAreEqual;
@property (getter=isClosed, nonatomic) BOOL closed;
@property (nonatomic, readonly) BOOL deletingSelectedNodesWillDeleteShape;
@property (nonatomic, readonly) TSDBezierNode *firstNode;
@property (nonatomic, readonly) BOOL hasSelectedNode;
@property (nonatomic, readonly) BOOL isCompound;
@property (nonatomic, readonly) BOOL isOpen;
@property (nonatomic, readonly) TSDBezierNode *lastNode;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } nodeBounds;
@property (nonatomic, retain) NSArray *nodeTypes;
@property (nonatomic, copy) NSArray *nodes;
@property (nonatomic, readonly) struct CGPath { }*subpathForSelection;
@property (nonatomic, copy) NSArray *subpaths;

+ (id)editableBezierPathSource;
+ (id)editableBezierPathSourceWithBezierPath:(id)arg1;
+ (id)editableBezierPathSourceWithPathSource:(id)arg1;

- (void)addNode:(id)arg1;
- (void)addTemporarySmoothNodes;
- (void)adjustGeometryForAlignToOrigin:(id)arg1;
- (void)alignToOrigin;
- (BOOL)allNodesSelected;
- (id)bezierNodeUnderPoint:(struct CGPoint { float x1; float x2; })arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 andTolerance:(float)arg3 returningType:(int*)arg4;
- (id)bezierPathWithoutFlips;
- (BOOL)canCloseSelectedNodes;
- (BOOL)canConnectSelectedNodes;
- (BOOL)canCutAtSelectedNodes;
- (BOOL)canDeleteSelectedNodes;
- (BOOL)closeIfEndpointsAreEqual;
- (void)closePath;
- (void)closeSelectedNodes;
- (void)connectSelectedNodes;
- (void)convertToHobby;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)curveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)cutAtSelectedNodes;
- (void)dealloc;
- (void)deleteSelectedEdges;
- (void)deleteSelectedNodes;
- (void)deleteSelectedNodesForced:(BOOL)arg1;
- (BOOL)deletingSelectedNodesWillDeleteShape;
- (id)description;
- (void)deselectAllNodes;
- (float)distanceToPoint:(struct CGPoint { float x1; float x2; })arg1 subpathIndex:(unsigned int*)arg2 elementIndex:(unsigned int*)arg3 tValue:(float*)arg4 threshold:(float)arg5;
- (id)firstNode;
- (BOOL)hasSelectedNode;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (BOOL)isCircular;
- (BOOL)isClosed;
- (BOOL)isCompound;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualWithStrictComparison:(id)arg1;
- (BOOL)isOpen;
- (BOOL)isRectangular;
- (id)lastNode;
- (void)lineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)morphWithMorphInfo:(id)arg1;
- (void)moveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)nodeAfterNode:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nodeBounds;
- (id)nodePriorToNode:(id)arg1;
- (id)nodeTypes;
- (id)nodes;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint { float x1; float x2; })arg1;
- (void)offsetSelectedNodesByDelta:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })pathFlipTransform;
- (struct CGPath { }*)pathWithoutFlips;
- (Class)preferredRepClass;
- (void)removeLastNode;
- (void)removeNode:(id)arg1;
- (void)reverseDirection;
- (void)saveToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (void)selectAllNodes;
- (void)selectSubpathForNode:(id)arg1 toggle:(BOOL)arg2;
- (void)setBezierPath:(id)arg1;
- (void)setClosed:(BOOL)arg1;
- (void)setLockedFlipTransform:(BOOL)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setNodeTypes:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setSubpaths:(id)arg1;
- (void)sharpenAllNodes;
- (void)smoothAllNodes;
- (void)smoothCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)smoothNode:(id)arg1;
- (id)splitEdge:(int)arg1 at:(float)arg2 fromSubpath:(int)arg3;
- (void)splitSelectedEdges;
- (void)splitSelectedNodes;
- (struct CGPath { }*)subpathForSelection;
- (id)subpaths;
- (id)subpathsForConnectingUsingFirstSubpathFirstNode:(BOOL*)arg1 andSecondPathFirstNode:(BOOL*)arg2;
- (void)toggleNode:(id)arg1 toType:(int)arg2 prevNode:(id)arg3 nextNode:(id)arg4;
- (void)toggleSelectedNodesToType:(int)arg1;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)updateSmoothNodes;

@end
