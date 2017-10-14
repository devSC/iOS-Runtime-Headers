/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFileBackedAssetsDataSourceManager : PXAssetsDataSourceManager {
    NSMutableDictionary * _fileURLsBySection;
}

@property (nonatomic, readonly) NSDictionary *fileURLsBySection;

- (void).cxx_destruct;
- (void)_createDataSource;
- (id)fileURLsBySection;
- (id)initWithFileURLsBySection:(id)arg1;
- (void)insertFileURL:(id)arg1 atIndex:(int)arg2 inSection:(int)arg3;
- (void)removeFileURLsAtIndexes:(id)arg1 inSection:(int)arg2;

@end
