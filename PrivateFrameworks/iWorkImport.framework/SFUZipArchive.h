/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUZipArchive : NSObject {
    SFUCryptoKey * mCryptoKey;
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> * mDataRepresentation;
    NSData * mEncryptedDocumentUuid;
    NSMutableDictionary * mEntries;
    NSString * mPassphraseHint;
    NSData * mPassphraseVerifier;
}

+ (BOOL)isZipArchiveAtPath:(id)arg1;

- (id)allEntryNames;
- (void)collapseCommonRootDirectoryIgnoreCase:(BOOL)arg1;
- (id)commonRootDirectoryIgnoringCase:(BOOL)arg1;
- (void)dealloc;
- (BOOL)decompressAtPath:(id)arg1;
- (BOOL)decompressAtPath:(id)arg1 wasEmpty:(BOOL*)arg2;
- (id)encryptedDocumentUuid;
- (id)entryWithName:(id)arg1;
- (id)entryWithName:(id)arg1 dataLength:(long long)arg2;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ignoreCase:(BOOL)arg3;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ignoreCase:(BOOL)arg3;
- (BOOL)isEncrypted;
- (id)passphraseHint;
- (id)passphraseVerifier;
- (struct SFUZipEndOfCentralDirectory { unsigned int x1; long long x2; long long x3; })readEndOfCentralDirectoryFromInputStream:(id)arg1;
- (void)readEntries;
- (void)readExtraFieldFromBuffer:(const char *)arg1 size:(unsigned long)arg2 entry:(id)arg3;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (struct SFUZipEndOfCentralDirectory { unsigned int x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2;
- (struct SFUZipEndOfCentralDirectory { unsigned int x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2;
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2;
- (void)setCryptoKey:(id)arg1;

@end
