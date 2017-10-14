/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDrawableInfo : TSPObject <TSDChangeableInfo, TSDScrollingAwareChangeSource, TSKDocumentObject, TSKSearchable, TSKTransformableObject> {
    NSString * mAccessibilityDescription;
    BOOL  mAspectRatioLocked;
    TSSPropertySetChangeDetails * mChanges;
    TSDDrawableComment * mComment;
    TSDDefaultPartitioner * mDefaultPartitioner;
    TSDExteriorTextWrap * mExteriorTextWrap;
    TSDInfoGeometry * mGeometry;
    NSURL * mHyperlinkURL;
    BOOL  mLocked;
    TSPObject<TSDOwningAttachment> * mOwningAttachment;
    NSObject<TSDContainerInfo> * mParentInfo;
    TSPLazyReference * mParentInfoReference;
}

@property (nonatomic, readonly) KNAbstractSlide *abstractSlide;
@property (nonatomic, copy) NSString *accessibilityDescription;
@property (nonatomic, readonly) NSSet *actionBuilds;
@property (nonatomic, readonly) NSArray *activeBuildChunks;
@property (getter=isAnchoredToText, nonatomic, readonly) BOOL anchoredToText;
@property (nonatomic) BOOL aspectRatioLocked;
@property (getter=isAttachedToBodyText, nonatomic, readonly) BOOL attachedToBodyText;
@property (nonatomic, readonly) NSArray *buildChunks;
@property (nonatomic, readonly) unsigned int buildCount;
@property (nonatomic, readonly) KNBuild *buildIn;
@property (nonatomic, readonly) KNBuild *buildOut;
@property (nonatomic, readonly) NSSet *builds;
@property (nonatomic, readonly) BOOL canSizeBeChangedIncrementally;
@property (nonatomic, retain) TSDDrawableComment *comment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) TSDExteriorTextWrap *exteriorTextWrap;
@property (getter=isFloatingAboveText, nonatomic, readonly) BOOL floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (nonatomic, readonly) NSArray *ghostInfos;
@property (nonatomic, readonly) BOOL hasActionBuilds;
@property (nonatomic, readonly) BOOL hasBuilds;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSURL *hyperlinkURL;
@property (getter=isInlineWithText, nonatomic, readonly) BOOL inlineWithText;
@property (nonatomic, readonly) BOOL isRightToLeft;
@property (nonatomic, readonly) BOOL isUserModifiable;
@property (getter=isLockable, nonatomic, readonly) BOOL lockable;
@property (getter=isLocked, nonatomic) BOOL locked;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic, readonly) BOOL mayHaveImplicitBuildEvents;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic, readonly) KNSlide *slide;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsAttachedComments;
@property (nonatomic, readonly) BOOL supportsHyperlinks;

+ (BOOL)canPartition;
+ (void)load;
+ (BOOL)needsObjectUUID;
+ (void)setShouldPartitionByDefault:(BOOL)arg1;

- (id)abstractSlide;
- (id)accessibilityDescription;
- (id)actionBuilds;
- (id)activeBuildChunks;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)animationFilters;
- (BOOL)aspectRatioLocked;
- (void)beginCollectingChanges;
- (id)buildChunks;
- (id)buildChunksForAnimationType:(int)arg1;
- (unsigned int)buildCount;
- (id)buildIn;
- (id)buildOut;
- (id)builds;
- (BOOL)canAnchor;
- (BOOL)canChangeWrapType;
- (BOOL)canSizeBeChangedIncrementally;
- (unsigned int)chunkCountForTextureDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2;
- (unsigned int)chunkCountForTextureDeliveryStyle:(unsigned int)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (void)coalesceChanges:(id)arg1;
- (id)comment;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })computeFullTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })computeLayoutFullTransform;
- (id)containingGroup;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)descriptionForPasteboard;
- (id)descriptionForPasteboardWithSource:(id)arg1;
- (void)didCopy;
- (int)elementKind;
- (id)endCollectingChanges;
- (id)exteriorTextWrap;
- (id)exteriorTextWrapForMovingToFloating;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })fullTransformInRoot;
- (id)geometry;
- (id)ghostInfos;
- (BOOL)hasActionBuilds;
- (BOOL)hasBuildOfAnimationType:(int)arg1;
- (BOOL)hasBuilds;
- (id)hyperlinkURL;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (BOOL)isAnchoredToText;
- (BOOL)isAttachedToBodyText;
- (BOOL)isFloatingAboveText;
- (BOOL)isInlineWithText;
- (BOOL)isLockable;
- (BOOL)isLocked;
- (BOOL)isRightToLeft;
- (BOOL)isSelectable;
- (BOOL)isThemeContent;
- (BOOL)isUserModifiable;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct DrawableArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct GeometryArchive {} *x5; struct Reference {} *x6; struct ExteriorTextWrapArchive {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct Reference {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; bool x11; bool x12; }*)arg1 unarchiver:(id)arg2;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned int)arg3;
- (BOOL)matchesObjectPlaceholderGeometry;
- (BOOL)mayHaveImplicitBuildEvents;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)objectUUIDPath;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (id)parentInfo;
- (id)partitioner;
- (void)performBlockWithTemporaryLayout:(id /* block */)arg1;
- (id)presetKind;
- (Class)repClass;
- (BOOL)reverseChunkingIsSupported;
- (void)saveToArchive:(struct DrawableArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct GeometryArchive {} *x5; struct Reference {} *x6; struct ExteriorTextWrapArchive {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct Reference {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; bool x11; bool x12; }*)arg1 archiver:(id)arg2;
- (void)setAccessibilityDescription:(id)arg1;
- (void)setAspectRatioLocked:(BOOL)arg1;
- (void)setComment:(id)arg1;
- (void)setExteriorTextWrap:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setHyperlinkURL:(id)arg1;
- (void)setInsertionCenterPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setMatchesObjectPlaceholderGeometry:(BOOL)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setParentInfoDuringUnarchiving:(id)arg1 inDocument:(BOOL)arg2;
- (void)setPrimitiveGeometry:(id)arg1;
- (BOOL)shouldCancelScrollingToSelectionPath:(id)arg1 forChanges:(id)arg2;
- (id)slide;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (BOOL)swizzled_matchesObjectPlaceholderGeometry;
- (void)swizzled_setMatchesObjectPlaceholderGeometry:(BOOL)arg1;
- (unsigned int)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformInRoot;
- (struct CGPoint { float x1; float x2; })transformableObjectAnchorPoint;
- (id)transformedGeometryWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)validBuildsInBuilds:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willChangeProperties:(id)arg1;
- (void)willChangeProperty:(int)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;

@end
