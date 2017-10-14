/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject {
    BOOL  _didFinish;
    BOOL  _didStart;
    NSData * _finalData;
    NSError * _finalError;
    CPLResource * _finalResource;
    BOOL  _inMemoryRequest;
    float  _progress;
}

@property (nonatomic) BOOL didFinish;
@property (nonatomic) BOOL didStart;
@property (nonatomic, retain) NSData *finalData;
@property (nonatomic, retain) NSError *finalError;
@property (nonatomic, retain) CPLResource *finalResource;
@property (getter=isInMemoryRequest, nonatomic) BOOL inMemoryRequest;
@property (nonatomic) float progress;

- (void).cxx_destruct;
- (id)description;
- (BOOL)didFinish;
- (BOOL)didStart;
- (id)finalData;
- (id)finalError;
- (id)finalResource;
- (BOOL)isInMemoryRequest;
- (float)progress;
- (void)setDidFinish:(BOOL)arg1;
- (void)setDidStart:(BOOL)arg1;
- (void)setFinalData:(id)arg1;
- (void)setFinalError:(id)arg1;
- (void)setFinalResource:(id)arg1;
- (void)setInMemoryRequest:(BOOL)arg1;
- (void)setProgress:(float)arg1;

@end
