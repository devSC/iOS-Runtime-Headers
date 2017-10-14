/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSelection : TSKSelection <TSDTextSelection> {
    int  _caretAffinity;
    unsigned int  _headChar;
    unsigned int  _leadingCharIndex;
    BOOL  _leadingEdge;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _smartFieldRange;
    int  _styleInsertionBehavior;
    unsigned int  _tailChar;
    int  _type;
    BOOL  _validVisualRanges;
    struct TSWPRangeVector { 
        struct _NSRange {} *__begin_; 
        struct _NSRange {} *__end_; 
        struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { 
            struct _NSRange {} *__first_; 
        } __end_cap_; 
    }  _visualRanges;
}

@property (nonatomic, readonly) int caretAffinity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int headChar;
@property (nonatomic, readonly) BOOL isAtEndOfLine;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) BOOL isInsertionPoint;
@property (nonatomic, readonly) BOOL isRange;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly) BOOL isVisual;
@property (nonatomic, readonly) unsigned int leadingCharIndex;
@property (nonatomic, readonly) BOOL leadingEdge;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } rawRange;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } smartFieldRange;
@property (nonatomic, readonly) int styleInsertionBehavior;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int tailChar;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) BOOL validVisualRanges;

+ (Class)archivedSelectionClass;
+ (BOOL)p_checkEndOfLineFlagForRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 leadingEdge:(BOOL*)arg2 type:(int*)arg3 endOfLine:(BOOL)arg4 storage:(id)arg5;
+ (id)selectionFromWPSelection:(id)arg1;
+ (id)selectionWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)selectionWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 type:(int)arg2 leadingEdge:(BOOL)arg3 storage:(id)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)caretAffinity;
- (int)compare:(id)arg1;
- (id)constrainToRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)containsCharacterAtIndex:(unsigned int)arg1;
- (BOOL)containsCharacterAtIndex:(unsigned int)arg1 allowRightEdge:(BOOL)arg2;
- (id)copyWithNewRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copyWithNewStyleInsertionBehavior:(int)arg1 newCaretAffinity:(int)arg2;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)copyWithNewVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 head:(unsigned int)arg2 tail:(unsigned int)arg3;
- (id)copyWithVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1 headChar:(unsigned int)arg2 tailChar:(unsigned int)arg3 rightToLeft:(BOOL)arg4 sameLine:(BOOL)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)end;
- (unsigned int)headChar;
- (void)i_setVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1;
- (struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)i_visualRanges;
- (id)initWithArchive:(const struct SelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Range {} *x5; int x6; int x7; struct Range {} *x8; int x9; }*)arg1;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned int)arg7;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 leadingEdge:(BOOL)arg6 storage:(id)arg7;
- (unsigned int)insertionChar;
- (BOOL)intersectsRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)isAtEndOfLine;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentForInsertionStyle:(id)arg1;
- (BOOL)isInsertionPoint;
- (BOOL)isRange;
- (BOOL)isValid;
- (BOOL)isVisual;
- (unsigned int)leadingCharIndex;
- (BOOL)leadingEdge;
- (unsigned int)leftEdge;
- (BOOL)p_isEqual:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rawRange;
- (unsigned int)rightEdge;
- (void)saveToArchive:(struct SelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Range {} *x5; int x6; int x7; struct Range {} *x8; int x9; }*)arg1 archiver:(id)arg2;
- (void)setHeadChar:(unsigned int)arg1;
- (void)setHeadChar:(unsigned int)arg1 tailChar:(unsigned int)arg2;
- (void)setTailChar:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })smartFieldRange;
- (unsigned int)start;
- (int)styleInsertionBehavior;
- (struct _NSRange { unsigned int x1; unsigned int x2; })superRange;
- (unsigned int)tailChar;
- (int)type;
- (BOOL)validVisualRanges;
- (unsigned int)visualRangeCount;
- (const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)visualRanges;
- (id)visualRangesArray;

@end
