/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPageCoordinateDictionary : NSObject {
    struct map<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> > > > { 
        struct __tree<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::less<TSUCellCoord>, true>, std::__1::allocator<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::less<TSUCellCoord>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _pageCoordinateDictionary;
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    }  _rwlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allObjects;
- (void)dealloc;
- (id)init;
- (id)objectForPageCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forPageCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;

@end
