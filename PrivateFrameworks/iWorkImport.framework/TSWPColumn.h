/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPColumn : NSObject <TSWPOffscreenColumn> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _anchoredAttachmentRange;
    unsigned int  _characterCount;
    unsigned int  _columnIndex;
    float  _contentBottom;
    float  _erasableContentBottom;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _frameBounds;
    int  _layoutResultFlags;
    struct shared_ptr<TSWPLineFragmentArray> { 
        struct TSWPLineFragmentArray {} *px; 
        struct shared_count { 
            struct sp_counted_base {} *pi_; 
        } pn; 
    }  _lineFragmentArray;
    float  _nextLinePosition;
    unsigned int  _nextWidowPullsDownFromCharIndex;
    unsigned int  _pageNumber;
    struct vector<TSWPAdornmentRect, std::__1::allocator<TSWPAdornmentRect> > { struct TSWPAdornmentRect {} *x1; struct TSWPAdornmentRect {} *x2; struct __compressed_pair<TSWPAdornmentRect *, std::__1::allocator<TSWPAdornmentRect> > { struct TSWPAdornmentRect {} *x_3_1_1; } x3; } * _paragraphAdornments;
    unsigned int  _scaleTextPercent;
    unsigned int  _startCharIndex;
    TSWPStorage * _storage;
    unsigned int  _storageChangeCount;
    <TSWPStyleProvider> * _styleProvider;
    BOOL  _textIsVertical;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _transform;
}

@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } anchoredRange;
@property (nonatomic) unsigned int characterCount;
@property (nonatomic) unsigned int columnIndex;
@property (nonatomic) float contentBottom;
@property (nonatomic, readonly) unsigned int countLines;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float erasableContentBottom;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frameBounds;
@property (readonly) unsigned int hash;
@property (nonatomic) int layoutResultFlags;
@property (nonatomic) float nextLinePosition;
@property (nonatomic) unsigned int nextWidowPullsDownFromCharIndex;
@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic) unsigned int scaleTextPercent;
@property (nonatomic, readonly) unsigned int startAnchoredCharIndex;
@property (nonatomic) unsigned int startCharIndex;
@property (nonatomic, readonly) TSWPStorage *storage;
@property (nonatomic) unsigned int storageChangeCount;
@property (nonatomic, retain) <TSWPStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float textBottom;
@property (nonatomic) BOOL textIsVertical;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformFromWP;
@property (nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformToWP;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } typographicBoundsForCell;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } wpBounds;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRectForSelection:(id)arg1 columnArray:(id)arg2 includeRuby:(BOOL)arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForInsertionPoint:(id)arg1 withColumns:(id)arg2;
+ (unsigned int)charIndexForPoint:(struct CGPoint { float x1; float x2; })arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6;
+ (unsigned int)charIndexForPoint:(struct CGPoint { float x1; float x2; })arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 pastCenterGoesToNextChar:(BOOL)arg5 isAtEndOfLine:(BOOL*)arg6 leadingEdge:(BOOL*)arg7;
+ (id)closestColumnInColumnsArray:(id)arg1 forPoint:(struct CGPoint { float x1; float x2; })arg2 ignoreEmptyColumns:(BOOL)arg3 ignoreDrawableOnlyColumns:(BOOL)arg4;
+ (id)columnForCharIndex:(unsigned int)arg1 allowEndOfColumn:(BOOL)arg2 withColumns:(id)arg3;
+ (id)commentKnobBaseOriginForHighlightAtTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withColumns:(id)arg2;
+ (struct CGPoint { float x1; float x2; })connectionLinePointForChangeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withColumns:(id)arg2 layoutTarget:(id)arg3;
+ (id)footnoteMarkAttachmentInColumnArray:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (id)footnoteReferenceAttachmentInColumnArray:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (struct CGSize { float x1; float x2; })layoutSizeForParagraphEnumerator:(const struct TSWPParagraphEnumerator { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; struct _NSRange { unsigned int x_7_1_1; unsigned int x_7_1_2; } x7; }*)arg1 inColumns:(id)arg2 lineCount:(out unsigned int*)arg3 nextLineOffset:(out float*)arg4;
+ (id)pathForHighlightWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 columnArray:(id)arg2 pathStyle:(int)arg3;
+ (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfColumns:(id)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(id)arg1 withColumns:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(id)arg1 withColumns:(id)arg2 useParagraphModeRects:(BOOL)arg3;
+ (id)smartFieldWithAttributeKind:(int)arg1 inColumnArray:(id)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAdornmentRect:(const struct TSWPAdornmentRect { int x1; id x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; }*)arg1;
- (unsigned int)anchoredCharCount;
- (struct _NSRange { unsigned int x1; unsigned int x2; })anchoredRange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfLineFragmentAtIndex:(unsigned int)arg1;
- (struct _TSWPCharIndexAndPosition { unsigned int x1; int x2; float x3; int x4; float x5; })calcAttachmentPositionForDrawable:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 inTextLayoutTarget:(id)arg3 tlBoundsInfluencingWrap:(struct CGPoint { float x1; float x2; })arg4 wrapOutset:(struct CGSize { float x1; float x2; })arg5 wrapMargin:(float)arg6 makeInline:(BOOL)arg7;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })changeBarRectForLineFragment:(const struct TSWPLineFragment { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_6_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; float x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; void x11; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x12; BOOL x13; void*x14; out const void*x15; void*x16; unsigned short x17; void*x18; void*x19; unsigned long x20; int x21; in void*x22; void*x23; void*x24; float x25; void*x26; void*x27; short x28; void*x29; double x30; SEL x31; SEL x32; void*x33; void*x34; void*x35; SEL x36; SEL x37; void*x38; long x39; long x40; out BOOL x41; void*x42; void*x43; out const void*x44; void*x45; unsigned short x46; void*x47; void*x48; unsigned long x49; int x50; }*)arg1 layoutTarget:(id)arg2;
- (unsigned int)charIndexForSelectionFromPoint:(struct CGPoint { float x1; float x2; })arg1 isTail:(BOOL)arg2;
- (unsigned int)charIndexFromPoint:(struct CGPoint { float x1; float x2; })arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 leadingEdge:(BOOL*)arg6;
- (unsigned int)charIndexFromPoint:(struct CGPoint { float x1; float x2; })arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 outFragment:(const struct TSWPLineFragment {}**)arg6 leadingEdge:(BOOL*)arg7;
- (unsigned int)charIndexFromWPPoint:(struct CGPoint { float x1; float x2; })arg1 pastCenterGoesToNextChar:(BOOL)arg2 allowNotFound:(BOOL)arg3 outFragment:(const struct TSWPLineFragment {}**)arg4 leadingEdge:(BOOL*)arg5;
- (unsigned int)characterCount;
- (void)clearAdornments;
- (unsigned int)columnIndex;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })columnRectForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (float)contentBottom;
- (unsigned int)countLines;
- (void)dealloc;
- (id)drawableIntersectionRectsForSelection:(id)arg1 inTarget:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })erasableBounds:(unsigned int)arg1;
- (float)erasableContentBottom;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })erasableRectForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForSelection:(id)arg1 includeSpaceAfter:(BOOL)arg2 includeSpaceBefore:(BOOL)arg3 includeLeading:(BOOL)arg4;
- (unsigned int)fontTraitsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 includingLabel:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameBounds;
- (unsigned int)glyphCountForRubyFieldAtCharIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })glyphRectForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 includingLabel:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })glyphRectForRubyFieldAtCharIndex:(unsigned int)arg1 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)hasPartitionedAttachmentAtStart:(BOOL)arg1;
- (float)horizontalOffsetForCharIndex:(unsigned int)arg1 lineFragmentIndex:(unsigned int)arg2 bumpPastHyphen:(BOOL)arg3 allowPastLineBounds:(BOOL)arg4;
- (void)incrementRanges:(int)arg1 startingAt:(unsigned int)arg2;
- (id)initWithStorage:(id)arg1 frameBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)isLastLineFragmentPartitioned;
- (int)layoutResultFlags;
- (const struct shared_ptr<TSWPLineFragmentArray> { struct TSWPLineFragmentArray {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; }*)lineFragmentArray;
- (const struct shared_ptr<TSWPLineFragmentArray> { struct TSWPLineFragmentArray {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; }*)lineFragmentArrayForUnitTests;
- (const struct TSWPLineFragment { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_6_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; float x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; void x11; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x12; BOOL x13; void*x14; out const void*x15; void*x16; unsigned short x17; void*x18; void*x19; unsigned long x20; int x21; in void*x22; void*x23; void*x24; float x25; void*x26; void*x27; short x28; void*x29; double x30; SEL x31; SEL x32; void*x33; void*x34; void*x35; SEL x36; SEL x37; void*x38; long x39; long x40; out BOOL x41; void*x42; void*x43; out const void*x44; void*x45; unsigned short x46; void*x47; void*x48; unsigned long x49; int x50; }*)lineFragmentAtIndex:(unsigned int)arg1;
- (unsigned int)lineFragmentCountForBaseline:(float)arg1;
- (unsigned int)lineIndexForCharIndex:(unsigned int)arg1 eol:(BOOL)arg2;
- (struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; float x2; float x3; float x4; float x5; })lineMetricsAtCharIndex:(unsigned int)arg1 allowEndOfLine:(BOOL)arg2;
- (id)lineSelectionsForSelection:(id)arg1;
- (float)logicalBoundsBottom;
- (float)logicalBoundsTop;
- (void)makeEmpty:(unsigned int)arg1 anchoredRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 layoutResultFlags:(int)arg3;
- (struct CGSize { float x1; float x2; })maxSize;
- (float)minimumHeightForLayoutOnPage;
- (const struct TSWPLineFragment { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_6_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; float x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; void x11; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x12; BOOL x13; void*x14; out const void*x15; void*x16; unsigned short x17; void*x18; void*x19; unsigned long x20; int x21; in void*x22; void*x23; void*x24; float x25; void*x26; void*x27; short x28; void*x29; double x30; SEL x31; SEL x32; void*x33; void*x34; void*x35; SEL x36; SEL x37; void*x38; long x39; long x40; out BOOL x41; void*x42; void*x43; out const void*x44; void*x45; unsigned short x46; void*x47; void*x48; unsigned long x49; int x50; }*)nearestLineFragmentWithSameVerticalPositionAs:(unsigned int)arg1 xPos:(float)arg2;
- (float)nextLinePosition;
- (unsigned int)nextWidowPullsDownFromCharIndex;
- (void)offsetLineFragmentsByPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)onlyHasAnchoredDrawable;
- (BOOL)onlyHasPartitionedAttachments;
- (const struct TSWPLineFragment { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_6_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; float x_8_1_6; float x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; void x11; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x12; BOOL x13; void*x14; out const void*x15; void*x16; unsigned short x17; void*x18; void*x19; unsigned long x20; int x21; in void*x22; void*x23; void*x24; float x25; void*x26; void*x27; short x28; void*x29; double x30; SEL x31; SEL x32; void*x33; void*x34; void*x35; SEL x36; SEL x37; void*x38; long x39; long x40; out BOOL x41; void*x42; void*x43; out const void*x44; void*x45; unsigned short x46; void*x47; void*x48; unsigned long x49; int x50; }*)pColumnEndingPartitionedLineFragmentInSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)pInfoForCharIndex:(unsigned int)arg1 isAtStart:(out bool*)arg2 isAtEnd:(out bool*)arg3;
- (id)pMutableRectsForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 selectionType:(int)arg2 includeSpaceAfter:(BOOL)arg3 includeSpaceBefore:(BOOL)arg4 includeLeading:(BOOL)arg5 forParagraphMode:(BOOL)arg6 includeRuby:(BOOL)arg7 inranges:(id)arg8 outranges:(id*)arg9;
- (unsigned int)pRemapCharIndex:(unsigned int)arg1 outIsAfterBreak:(out bool*)arg2 outWithTextSource:(out id*)arg3;
- (unsigned int)pageNumber;
- (id)partitionedLayoutForInfo:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfLineFragmentAtIndex:(unsigned int)arg1;
- (id)rectsForSelection:(id)arg1;
- (id)rectsForSelection:(id)arg1 ranges:(id*)arg2;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 selectionType:(int)arg2;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3 includeRuby:(BOOL)arg4;
- (id)rectsForSelectionRanges:(id)arg1 selectionType:(int)arg2;
- (void)renderWithRenderer:(id)arg1 currentSelection:(id)arg2 limitSelection:(id)arg3 listRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 rubyGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 isCanvasInteractive:(BOOL)arg6 suppressedMisspellingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg7 blackAndWhite:(BOOL)arg8 dictationInterpretations:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg9 autocorrections:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg10 markedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg11 markedText:(id)arg12 renderMode:(int)arg13 pageCount:(unsigned int)arg14 suppressInvisibles:(BOOL)arg15 suppressFontSmoothing:(BOOL)arg16 currentCanvasSelection:(id)arg17;
- (BOOL)requiresGlyphVectorsForHeightMeasurement;
- (unsigned int)scaleTextPercent;
- (void)setAnchoredRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setCharacterCount:(unsigned int)arg1;
- (void)setColumnIndex:(unsigned int)arg1;
- (void)setContentBottom:(float)arg1;
- (void)setErasableContentBottom:(float)arg1;
- (void)setLayoutResultFlags:(int)arg1;
- (void)setLineFragmentArray:(const struct shared_ptr<TSWPLineFragmentArray> { struct TSWPLineFragmentArray {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; }*)arg1;
- (void)setNextLinePosition:(float)arg1;
- (void)setNextWidowPullsDownFromCharIndex:(unsigned int)arg1;
- (void)setPageNumber:(unsigned int)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setScaleTextPercent:(unsigned int)arg1;
- (void)setStartCharIndex:(unsigned int)arg1;
- (void)setStorageChangeCount:(unsigned int)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTextIsVertical:(BOOL)arg1;
- (void)setTransformFromWP:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setWpBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)singleLinePartitionedInfoAtStart:(BOOL)arg1;
- (id)smartFieldAtCharIndex:(unsigned int)arg1 attributeKind:(int)arg2;
- (unsigned int)startAnchoredCharIndex;
- (unsigned int)startCharIndex;
- (id)storage;
- (unsigned int)storageChangeCount;
- (id)styleProvider;
- (float)textBottom;
- (float)textHeight;
- (BOOL)textIsVertical;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformFromWP;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToWP;
- (void)trimToCharIndex:(unsigned int)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned int)arg3 removeAutoNumberFootnoteCount:(unsigned int)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })typographicBoundsForCell;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })wpBounds;

@end
