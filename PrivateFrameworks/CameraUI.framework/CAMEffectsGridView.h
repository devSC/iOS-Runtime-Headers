/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMEffectsGridView : CAMGLView {
    BOOL  __atomicBlackAndWhite;
    BOOL  __fetchingGridFilters;
    NSDictionary * __gridFilters;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    struct CGSize { 
        float width; 
        float height; 
    }  _pixelBufferPoolSize;
    struct OpaqueVTPixelTransferSession { } * _pixelTransferSession;
    BOOL  _square;
}

@property (getter=_isAtomicBlackAndWhite, setter=_setAtomicBlackAndWhite:) BOOL _atomicBlackAndWhite;
@property (setter=_setFetchingGridFilters:) BOOL _fetchingGridFilters;
@property (setter=_setGridFilters:, retain) NSDictionary *_gridFilters;
@property (getter=isBlackAndWhite) BOOL blackAndWhite;
@property (getter=isSquare) BOOL square;

- (void).cxx_destruct;
- (unsigned int)_cellCount;
- (unsigned int)_cellsPerRow;
- (struct __CVBuffer { }*)_createPixelBufferForSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_fetchingGridFilters;
- (int)_filterTypeForGridIndex:(unsigned int)arg1;
- (id)_gridFilters;
- (unsigned int)_gridIndexForFilterType:(int)arg1;
- (BOOL)_isAtomicBlackAndWhite;
- (void)_renderGridFilters:(id)arg1 withInputImage:(id)arg2 ciContext:(id)arg3 mirrorRendering:(BOOL)arg4;
- (void)_scalePixelBuffer:(struct __CVBuffer { }*)arg1 outputBuffer:(struct __CVBuffer { }*)arg2;
- (void)_setAtomicBlackAndWhite:(BOOL)arg1;
- (void)_setFetchingGridFilters:(BOOL)arg1;
- (void)_setGridFilters:(id)arg1;
- (void)_setupGridFiltersIfNecessary;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_squareCropFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updatePixelBufferPoolForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;
- (int)filterTypeForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)filterTypes;
- (BOOL)isBlackAndWhite;
- (BOOL)isSquare;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForFilterType:(int)arg1;
- (void)renderPixelBuffer:(struct __CVBuffer { }*)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3;
- (void)setBlackAndWhite:(BOOL)arg1;
- (void)setSquare:(BOOL)arg1;

@end
