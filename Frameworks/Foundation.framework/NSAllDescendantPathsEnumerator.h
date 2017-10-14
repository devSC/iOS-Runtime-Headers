/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {
    BOOL  _padding;
    NSArray * contents;
    BOOL  cross;
    unsigned int  depth;
    NSFileAttributes * directoryAttributes;
    unsigned int  idx;
    NSString * path;
    NSString * pathToLastReportedItem;
    NSString * prepend;
    NSAllDescendantPathsEnumerator * under;
}

+ (id)newWithPath:(id)arg1 prepend:(id)arg2 attributes:(id)arg3 cross:(BOOL)arg4 depth:(unsigned int)arg5;

- (id)_under;
- (id)currentSubdirectoryAttributes;
- (void)dealloc;
- (id)directoryAttributes;
- (id)fileAttributes;
- (unsigned int)level;
- (id)nextObject;
- (void)skipDescendants;
- (void)skipDescendents;

@end
