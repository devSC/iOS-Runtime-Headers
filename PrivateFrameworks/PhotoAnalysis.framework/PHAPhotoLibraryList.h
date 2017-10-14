/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAPhotoLibraryList : NSObject {
    NSMutableDictionary * _photoLibrariesByPath;
}

@property (readonly) unsigned int count;
@property (retain) NSMutableDictionary *photoLibrariesByPath;

- (void).cxx_destruct;
- (void)addPhotoLibraryAtURL:(id)arg1;
- (unsigned int)count;
- (void)enumeratePhotoLibrariesWithBlock:(id /* block */)arg1;
- (id)init;
- (id)photoLibrariesByPath;
- (void)removeAllPhotoLibraries;
- (void)removePhotoLibraryAtURL:(id)arg1;
- (void)saveToPersistentStorage;
- (void)setPhotoLibrariesByPath:(id)arg1;

@end
