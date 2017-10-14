/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PACSSymbolOwnerWrapper : PACSRefWrapper {
    NSString * _path;
    BOOL  _usedDsymForUUID;
}

@property (readonly) NSString *path;
@property BOOL usedDsymForUUID;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithSymbolOwner:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithSymbolOwner:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1 andPath:(id)arg2;
- (id)path;
- (void)setUsedDsymForUUID:(BOOL)arg1;
- (BOOL)usedDsymForUUID;

@end
