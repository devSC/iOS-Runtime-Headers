/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface GeometricCutTools : NSObject

+ (id)boxInNormalizedSpace:(id)arg1 toImageSpaceWithSize:(struct CGSize { float x1; float x2; })arg2 plusPadding:(struct CGPoint { float x1; float x2; })arg3 destSize:(struct CGSize { float x1; float x2; }*)arg4;
+ (id)cleanTextDetectorOutput:(id)arg1;
+ (BOOL)derotateContentsOf:(id)arg1 inImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2 andOutputTo:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg3 withPadding:(struct CGPoint { float x1; float x2; })arg4;
+ (id)findCorrectedBoundingBoxOfTextFeature:(id)arg1 inImageWithSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2 withPadding:(struct CGPoint { float x1; float x2; })arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(struct CGSize { float x1; float x2; })arg5 withNetwork:(struct CHNeuralNetwork { struct vector<int, std::__1::allocator<int> > { int *x_1_1_1; int *x_1_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_1_1_3; } x1; struct vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > > { struct pair<int, int> {} *x_2_1_1; struct pair<int, int> {} *x_2_1_2; struct __compressed_pair<std::__1::pair<int, int> *, std::__1::allocator<std::__1::pair<int, int> > > { struct pair<int, int> {} *x_3_2_1; } x_2_1_3; } x2; struct set<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<int, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<int> > { unsigned long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg6 activations:(struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x1; struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x2; struct __compressed_pair<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x_3_1_1; } x3; })arg7 invert:(BOOL)arg8;
+ (BOOL)isPointArrayARectangle:(id)arg1;
+ (BOOL)lineThroughPoint:(struct CGPoint { float x1; float x2; })arg1 andPoint:(struct CGPoint { float x1; float x2; })arg2 andImageWithSize:(struct CGSize { float x1; float x2; })arg3 intersectAtPoint:(struct CGPoint { float x1; float x2; }*)arg4 andPoint:(struct CGPoint { float x1; float x2; }*)arg5;
+ (BOOL)lineThroughPoint:(struct CGPoint { float x1; float x2; })arg1 andPoint:(struct CGPoint { float x1; float x2; })arg2 andLineThroughPoint:(struct CGPoint { float x1; float x2; })arg3 andPoint:(struct CGPoint { float x1; float x2; })arg4 intersectAt:(struct CGPoint { float x1; float x2; }*)arg5;
+ (BOOL)lineThroughPoint:(struct CGPoint { float x1; float x2; })arg1 andPoint:(struct CGPoint { float x1; float x2; })arg2 andRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 intersectAtPoint:(struct CGPoint { float x1; float x2; }*)arg4 andPoint:(struct CGPoint { float x1; float x2; }*)arg5;
+ (BOOL)lineThroughPoint:(struct CGPoint { float x1; float x2; })arg1 andPoint:(struct CGPoint { float x1; float x2; })arg2 andSegmentStartingAt:(struct CGPoint { float x1; float x2; })arg3 andEndingAt:(struct CGPoint { float x1; float x2; })arg4 intersectAt:(struct CGPoint { float x1; float x2; }*)arg5;
+ (id)stringByInjectingSpaces:(id)arg1 textFeatures:(id)arg2;
+ (id)widestVersionOfRect:(id)arg1 insideImageWithSize:(struct CGSize { float x1; float x2; })arg2;

@end
