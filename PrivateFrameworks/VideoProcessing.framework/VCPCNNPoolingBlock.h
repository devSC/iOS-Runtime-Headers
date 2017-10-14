/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNPoolingBlock : VCPCNNBlock {
    int  _chunk;
    MPSCNNPoolingMax * _mpsPooling;
    int  _px;
    int  _py;
}

- (void).cxx_destruct;
- (long)constructBlock:(id)arg1 context:(id)arg2;
- (long)doMaxPoolingChunkFour;
- (long)doMaxPoolingChunkOne;
- (long)forward;
- (id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3;
- (BOOL)supportGPU;
- (BOOL)useGPU;

@end
