/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRInodeObjectID : BRFileObjectID {
    unsigned long long  _ino;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)folderID;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileID:(unsigned long long)arg1;
- (BOOL)isFolderOrAliasID;
- (unsigned long long)rawID;

@end
