/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUImageDownsamplingUtilities : NSObject

+ (id)_flattenEXIFOrientation:(BOOL)arg1 withDownsampling:(BOOL)arg2 sourceContent:(id)arg3 withUTI:(id)arg4;
+ (BOOL)_flattenEXIFOrientationOfImage:(id)arg1 toDestination:(id)arg2;
+ (float)_maxDimensionOfSize:(struct CGSize { float x1; float x2; })arg1 fittingToArea:(float)arg2;
+ (struct CGImageSource { }*)_newImageSourceWithSourceContent:(id)arg1;
+ (id)_preferredFileDisplayNameForSourceContent:(id)arg1;
+ (id)_preferredFileExtensionForContentType:(id)arg1;
+ (void)_shouldFlattenEXIFOrientation:(BOOL*)arg1 andDownsample:(BOOL*)arg2 sourceContent:(id)arg3;
+ (struct CGSize { float x1; float x2; })_sizeFittingArea:(float)arg1 withSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)_sourceContentType:(id)arg1;
+ (id)_uniqueTemporaryDirectory;

@end
