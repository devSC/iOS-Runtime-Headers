/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISFrameProcessingRequest : NSObject {
    CIImage * _image;
    float  _renderScale;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    int  _type;
}

@property (nonatomic, retain) CIImage *image;
@property (nonatomic) float renderScale;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)image;
- (float)renderScale;
- (void)setImage:(id)arg1;
- (void)setRenderScale:(float)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setType:(int)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (int)type;

@end
