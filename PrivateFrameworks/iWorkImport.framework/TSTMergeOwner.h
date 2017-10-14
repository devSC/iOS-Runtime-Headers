/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeOwner : NSObject <TSCEFormulaOwning> {
    TSCECalculationEngine * _calculationEngine;
    struct unordered_map<TSUCellCoord, TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUCellCoord> > > { 
        struct __hash_table<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::hash<TSUCellCoord>, true>, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::hash<TSUCellCoord>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _mergeOriginsMap;
    id  _mergeRangeCache;
    TSTFormulaStore * _mergeRangeStorage;
    struct __CFUUID { } * _ownerID;
    struct unordered_map<TSUCellCoord, TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUCellCoord> > > { 
        struct __hash_table<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::hash<TSUCellCoord>, true>, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::hash<TSUCellCoord>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _reverseOriginsMap;
    TSTTableModel * _tableModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSTFormulaStore *formulaStore;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) TSTMergeRangeCache *mergeRangeCache;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSTTableModel *tableModel;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allMergesAsString;
- (void)assertCollaborationConvergence;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)commitRewritingTransaction;
- (unsigned int)count;
- (void)createMergeRangeStorage;
- (void)dealloc;
- (id)description;
- (void)enumerateMergeFormulasUsingBlock:(id /* block */)arg1;
- (void)enumerateMergesIntersectingCellRegion:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateMergesIntersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateMergesUsingBlock:(id /* block */)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })expandCellRangeToCoverMergedCells:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)expandCellRegionToCoverMergedCells:(id)arg1;
- (BOOL)find:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)formulaStore;
- (BOOL)hasMergeRangesIntersectingCellRegion:(id)arg1;
- (BOOL)hasRangeSpanningRowsForCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)initWithArchive:(const struct MergeOwnerArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CFUUIDArchive {} *x5; struct FormulaStoreArchive {} *x6; }*)arg1 unarchiver:(id)arg2 forTableModel:(id)arg3;
- (id)initWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1 ownerID:(struct __CFUUID { }*)arg2;
- (void)insertAll:(id)arg1;
- (BOOL)insertMergeRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)insertMergeRangeRemovingOverlaps:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)invalidateForCalculationEngine:(id)arg1;
- (BOOL)isValidMergeRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)loadMergeCache;
- (unsigned int)markForRollback;
- (id)mergeActionForRegion:(id)arg1;
- (id)mergeActionForRegion:(id)arg1 nonOriginPartialsOnly:(BOOL)arg2;
- (id)mergeIndexesForCellRegion:(id)arg1;
- (id)mergeIndexesForRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })mergeOriginForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)mergeRangeCache;
- (struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; })mergeRanges;
- (struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; })mergeRangesAndCrumbsIntersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; })mergeRangesIntersectingCellRegion:(id)arg1;
- (struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; })mergeRangesIntersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)mergedGridIndicesForDimension:(int)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergedRangeForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)mergesIntersectingCellRegion:(id)arg1;
- (id)mergesIntersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)openRewritingTransaction;
- (struct __CFUUID { }*)ownerID;
- (struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; })p_createFormulaForRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 atIndex:(unsigned int)arg2 tableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3;
- (void)p_dirtyCellsForMerge:(const struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })p_growRangeFrom:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 toDesired:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)p_growReturningInverseForAction:(id)arg1;
- (BOOL)p_hasAnyMergesIntersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)p_moveCellFromCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 toCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)p_shrinkMergesAtIndexes:(id)arg1 intersectedByRegion:(id)arg2;
- (id)p_shrinkReturningInverseForAction:(id)arg1;
- (void)p_updateOriginMapWithSourceCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 destCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (BOOL)partiallyIntersectsCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)partiallyIntersectsCellRegion:(id)arg1;
- (id)performActionReturningInverse:(id)arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })rangeFromMergeFormula:(const struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)arg1 atCoord:(const struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }*)arg2;
- (struct { BOOL x1; BOOL x2; BOOL x3; })recalculateForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4;
- (id)regionForMergeRangesIntersectingRegion:(id)arg1;
- (id)regionFromUIDMergeFormula:(const struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)arg1;
- (int)registerWithCalculationEngine:(id)arg1;
- (void)releaseForCalculationEngine:(id)arg1;
- (void)reloadMergeCacheForIndexes:(id)arg1;
- (void)remapTableUIDsInFormulasWithMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 calcEngine:(id)arg2;
- (void)removeMergeRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)removeReturningInverseForRegion:(id)arg1;
- (void)resetMergeCache;
- (void)resetMergeOriginMap;
- (void)retainForCalculationEngine:(id)arg1;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 rewriteSpec:(id)arg3;
- (void)rewriteMergesForInsertedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 uids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg2 isRows:(BOOL)arg3;
- (void)rewriteMergesForRemovedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 uids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg2 isRows:(BOOL)arg3;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })rewroteFormula:(struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; })arg1 atCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }*)arg2 withRewriteSpec:(id)arg3 isUndo:(BOOL)arg4;
- (void)rollbackToMark:(unsigned int)arg1;
- (void)saveToArchive:(struct MergeOwnerArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct CFUUIDArchive {} *x5; struct FormulaStoreArchive {} *x6; }*)arg1 archiver:(id)arg2;
- (void)setOwnerID:(struct __CFUUID { }*)arg1;
- (id)shrinkReturningInverseForRegion:(id)arg1;
- (id)tableModel;
- (void)unregisterFromCalculationEngine;
- (void)upgradeFromMergeRegionMap;
- (void)writeResultsForCalculationEngine:(id)arg1;

@end
