/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VK3DObjectSubTile : NSObject {
    float  _contentScale;
    struct vector<VKBuildingHeightMap, std::__1::allocator<VKBuildingHeightMap> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<VKBuildingHeightMap *, std::__1::allocator<VKBuildingHeightMap> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _heights;
    GEOVectorTile * _modelTile;
    struct vector<std::__1::shared_ptr<md::ObjectGroup>, std::__1::allocator<std::__1::shared_ptr<md::ObjectGroup> > > { 
        struct shared_ptr<md::ObjectGroup> {} *__begin_; 
        struct shared_ptr<md::ObjectGroup> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<md::ObjectGroup> *, std::__1::allocator<std::__1::shared_ptr<md::ObjectGroup> > > { 
            struct shared_ptr<md::ObjectGroup> {} *__first_; 
        } __end_cap_; 
    }  _objectGroups;
    VKSharedResources * _sharedResources;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    int  _vectorType;
}

@property (nonatomic) float contentScale;
@property (nonatomic, retain) GEOVectorTile *modelTile;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<md::ObjectGroup>' */ struct *objectGroups; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<md::ObjectGroup> > >=^{shared_ptr<md::ObjectGroup>}}} */
@property (nonatomic, retain) VKSharedResources *sharedResources;
@property (nonatomic) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_createMeshForObjects:(struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; char *x2; unsigned int x3; }*)arg1 count:(unsigned int)arg2;
- (void)_read3DObjects:(struct vector<GEO3DBuildingFeature, std::__1::allocator<GEO3DBuildingFeature> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<GEO3DBuildingFeature *, std::__1::allocator<GEO3DBuildingFeature> > { struct { /* ? */ } *x_3_1_1; } x3; }*)arg1 fromDiskForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)_replaceThreeBuldingsInModelTile:(id)arg1 objects:(struct vector<GEO3DBuildingFeature, std::__1::allocator<GEO3DBuildingFeature> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<GEO3DBuildingFeature *, std::__1::allocator<GEO3DBuildingFeature> > { struct { /* ? */ } *x_3_1_1; } x3; }*)arg2;
- (float)contentScale;
- (void)dealloc;
- (void)fillShadowAreasInContext:(struct CGContext { }*)arg1;
- (BOOL)heightAtPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 outZ:(float*)arg2;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg3 sharedResources:(id)arg4 contentScale:(float)arg5;
- (id)modelTile;
- (struct vector<std::__1::shared_ptr<md::ObjectGroup>, std::__1::allocator<std::__1::shared_ptr<md::ObjectGroup> > > { struct shared_ptr<md::ObjectGroup> {} *x1; struct shared_ptr<md::ObjectGroup> {} *x2; struct __compressed_pair<std::__1::shared_ptr<md::ObjectGroup> *, std::__1::allocator<std::__1::shared_ptr<md::ObjectGroup> > > { struct shared_ptr<md::ObjectGroup> {} *x_3_1_1; } x3; }*)objectGroups;
- (void)setContentScale:(float)arg1;
- (void)setModelTile:(id)arg1;
- (void)setSharedResources:(id)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })shadowBounds;
- (id)sharedResources;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;

@end
