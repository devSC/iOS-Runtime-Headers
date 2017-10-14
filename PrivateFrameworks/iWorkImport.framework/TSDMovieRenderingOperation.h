/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMovieRenderingOperation : TSDSwatchRenderingOperation {
    TSDMovieInfo * mMovieInfo;
    BOOL  mShouldClipVertically;
}

@property (retain) TSDMovieInfo *movieInfo;

- (void)dealloc;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 movieInfo:(id)arg5 documentRoot:(id)arg6;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(BOOL)arg7;
- (id)movieInfo;
- (void)setMovieInfo:(id)arg1;

@end
