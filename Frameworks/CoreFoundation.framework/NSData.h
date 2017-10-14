/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSData : NSObject <ASParsingLeafNode, CKRecordValue, FCKeyValueStoreCoding, HFPropertyListConvertible, NSCopying, NSMutableCopying, NSSecureCoding, PQLValuable, SiriCoreSQLiteValue, TSPSplitableData>

@property (nonatomic, readonly) NSData *NRSHA256;
@property (nonatomic, readonly) NSData *SHA1Data;
@property (nonatomic, readonly) NSString *SHA1HexString;
@property (nonatomic, readonly) unsigned int br_qtnFlags;
@property (nonatomic, readonly) NSString *brc_hexadecimalString;
@property (nonatomic, readonly) NSData *brc_signature;
@property (nonatomic, readonly) BOOL brc_signatureIsPackage;
@property (nonatomic, readonly) BOOL brc_signatureIsPendingPlaceHolder;
@property (nonatomic, readonly) BOOL brc_signatureIsValid;
@property (readonly) const void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *fm_hexString;
@property (nonatomic, readonly, copy) NSData *fm_md5Hash;
@property (nonatomic, readonly, copy) NSData *fm_sha1Hash;
@property (nonatomic, readonly, copy) NSData *fm_sha256Hash;
@property (nonatomic, readonly, copy) NSData *fm_sha512Hash;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *hexString;
@property (readonly) unsigned int length;
@property (nonatomic, readonly) NSString *md5;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (BOOL)supportsSecureCoding;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (id)abDecodeVCardBase64;
- (id)abDecodedUTF7;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned int)arg1;
- (BOOL)abIsUTF16EntourageVCard;
- (id)abStringAtRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inEncoding:(unsigned int)arg2;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (BOOL)_isSafeResumeDataForBackgroundDownload;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKDataFromBase64URLSafeString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2;

- (id)CKBase64URLSafeString;
- (id)CKHexString;
- (id)CKLowercaseHexStringWithoutSpaces;
- (id)CKSHA256;
- (id)CKUppercaseHexStringWithoutSpaces;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (BOOL)_base64DecodingAlwaysSucceedsForOptions:(unsigned int)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)data;
+ (id)dataWithBytes:(const void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithData:(id)arg1;

- (BOOL)_allowsDirectEncoding;
- (id)_asciiDescription;
- (id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned int)arg2;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (unsigned long)_cfTypeID;
- (BOOL)_copyWillRetain;
- (id)_createDispatchData;
- (BOOL)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3 buffer:(char *)arg4 bufferLength:(unsigned int)arg5 state:(struct { BOOL x1; BOOL x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg6;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned int)arg2;
- (BOOL)_isCompact;
- (BOOL)_isDispatchData;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMETypeForXML;
- (id)_web_parseRFC822HeaderFields;
- (id)base64EncodedDataWithOptions:(unsigned int)arg1;
- (id)base64EncodedStringWithOptions:(unsigned int)arg1;
- (id)base64Encoding;
- (const void*)bytes;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateByteRangesUsingBlock:(id /* block */)arg1;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)hash;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned int)arg2;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithBase64Encoding:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 deallocator:(id /* block */)arg4;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 deallocator:(id /* block */)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (BOOL)isNSData__;
- (unsigned int)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (unsigned int)hk_countOfUUIDs;
- (void)hk_enumerateUUIDsUsingBlock:(id /* block */)arg1;
- (id)hk_stripCorruptedUUIDs;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)generateSHA1;
- (id)stringInHexFormat;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_attachmentWithFilename:(id)arg1 UTIType:(id)arg2 fromManager:(id)arg3 contextID:(id)arg4;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)safari_SHA1Hash;
- (id)safari_dataByAppendingData:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (id)_operateOnDataUsingCompressionAlgorithm:(int)arg1 operation:(int)arg2;
- (id)scn_compressedDataUsingCompressionAlgorithm:(int)arg1;
- (id)scn_indexedDataDecodingDeltaWithBytesPerIndex:(unsigned int)arg1;
- (id)scn_indexedDataDecodingHighWatermarkWithBytesPerIndex:(unsigned int)arg1;
- (id)scn_indexedDataDecodingTrianglePairsWithBytesPerIndex:(unsigned int)arg1;
- (id)scn_indexedDataEncodingDeltaWithBytesPerIndex:(unsigned int)arg1;
- (id)scn_indexedDataEncodingHighWatermarkWithBytesPerIndex:(unsigned int)arg1;
- (id)scn_indexedDataEncodingTrianglePairsWithBytesPerIndex:(unsigned int)arg1;
- (id)scn_uncompressedDataUsingCompressionAlgorithm:(int)arg1;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)makeArchive:(const void*)arg1 length:(unsigned long)arg2 level:(float)arg3;

- (id)gzipDeflate:(float)arg1;
- (id)gzipInflate;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)encodeCGPath:(struct CGPath { }*)arg1;
+ (struct CGPath { }*)newCGPathDecodedFromData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_hexString;

// Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit

+ (id)dataGZipDeflatedWithData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)afui_dataByCompressingWithGzip;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (id)ak_hexString;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_dataWithVMAllocatedBytes:(const void*)arg1 length:(unsigned int)arg2;

- (void*)bs_bytesForMIG;
- (unsigned int)bs_lengthForMIG;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (void)MD5:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

+ (id)dataWithIOSurface:(void*)arg1 usedSize:(unsigned long)arg2;

// Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo

- (id)CertUIHexString;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (id)crk_hexString;
- (id)crk_sha1Hash;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_pendingPlaceholderForPackage:(BOOL)arg1;

- (unsigned int)br_qtnFlags;
- (id)brc_SHA256WithSalt:(id)arg1;
- (id)brc_hexadecimalString;
- (id)brc_signature;
- (BOOL)brc_signatureIsPackage;
- (BOOL)brc_signatureIsPendingPlaceHolder;
- (BOOL)brc_signatureIsValid;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)cplQueryCursorDescription;
- (id)cplQueryCursorSimpleDescription;
- (id)cplSyncAnchorDescription;
- (id)cplSyncAnchorSimpleDescription;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

- (id)_CUTCopyGzippedData;
- (id)_CUTDecompressData;
- (id)_CUTOptionallyDecompressData;
- (id)_CUTStringFromBaseData;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)_cn_dataFromHexString:(id)arg1;

- (id)_cn_SHA256HashDataWithSalt:(id)arg1;
- (id)_cn_decodeBase64;
- (id)_cn_decodeBase64IgnoringWhitespace;
- (id)_cn_hexString;
- (id)_cn_md5Hash;
- (id)_cn_writeToURL:(id)arg1 options:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (id)ccuiSHA1Hash;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (id)cdp_unarchivedRoot;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

- (id)MSBase64Encoding;
- (id)MSHexString;
- (id)MSInitWithBase64Encoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)parsec_MD5Hash;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (id)cr_md5DigestHexString;

// Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit

- (id)md5;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

+ (id)da_dataWithHexString:(id)arg1;
+ (id)da_dataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2;

- (id)da_hexString;
- (id)da_lowercaseHexStringWithoutSpaces;
- (id)da_uppercaseHexStringWithoutSpaces;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)expectsContent;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (id)initForLengthTokenOfLength:(unsigned int)arg1;
- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (int)parsingState;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal

- (id)digestForSubCal;

// Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore

- (id)fm_hexString;
- (id)fm_md5Hash;
- (id)fm_sha1Hash;
- (id)fm_sha256Hash;
- (id)fm_sha512Hash;
- (id)hexString;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (id)_FTCopyGzippedData;
- (id)_FTDecompressData;
- (id)_FTOptionallyDecompressData;
- (id)_FTStringFromBaseData;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (void)_gkLoadRemoteImageDataForORBForURL:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
+ (void)_gkLoadRemoteImageDataForUrl:(id)arg1 queue:(id)arg2 imageQueue:(id)arg3 handler:(id /* block */)arg4;
+ (void)_gkRequestClientsRemoteImageDataForURL:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3;

- (id)_gkBase64EncodedString;
- (id)_gkMD5HashData;
- (id)_gkMD5HashString;
- (id)_gkSHA1HashData;
- (id)_gkSHA1HashString;
- (id)initWithBase64EncodedString_gk:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices

+ (id)dataWithSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;

- (const struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)CDXTicket;
- (id)CDXTicketExpirationDate;
- (BOOL)CDXTicketIsHolePunch;
- (BOOL)CDXTicketIsReflected;
- (BOOL)CDXTicketIsRelatedToTicket:(id)arg1;
- (BOOL)CDXTicketIsStub;
- (int)CDXTicketPCNT;
- (int)CDXTicketPID;
- (unsigned int)CDXTicketRevision;
- (unsigned long long)CDXTicketSID;
- (id)CDXTicketTrimmed;
- (BOOL)CDXTicketWellFormed;
- (struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)mutableCDXTicket;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)sockAddr;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_dataForHexString:(id)arg1;
+ (id)dataWithCPPData:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_4_1; unsigned int x_1_4_2; char *x_1_4_3; } x_1_3_1; struct __short { union { unsigned char x_1_5_1; BOOL x_1_5_2; } x_2_4_1; BOOL x_2_4_2[11]; } x_1_3_2; struct __raw { unsigned long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 copy:(BOOL)arg2;

- (id)_geo_MD5Hash;
- (id)_geo_SHA1Hash;
- (id)_geo_hexString;
- (id)_geo_newXPCData;
- (id)_geo_uppercaseMD5HashString;
- (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_4_1; unsigned int x_1_4_2; char *x_1_4_3; } x_1_3_1; struct __short { union { unsigned char x_1_5_1; BOOL x_1_5_2; } x_2_4_1; BOOL x_2_4_2[11]; } x_1_3_2; struct __raw { unsigned long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })cppData;
- (id)initWithCPPData:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_4_1; unsigned int x_1_4_2; char *x_1_4_3; } x_1_3_1; struct __short { union { unsigned char x_1_5_1; BOOL x_1_5_2; } x_2_4_1; BOOL x_2_4_2[11]; } x_1_3_2; struct __raw { unsigned long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 copy:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)compress;
- (id)generateSHA1;
- (id)stringInHexFormat;
- (id)uncompress;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

- (id)subdataWithRangeNoCopy:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)__imDataWithHexString:(id)arg1;
+ (id)__imDataWithRandomBytes:(unsigned int)arg1;

- (id)SHA1Data;
- (id)SHA1HexString;
- (id)__imHexString;
- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)dataWithMessageSummaryInfoDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture

- (id)hexRepresentationWithSpaces_AS:(BOOL)arg1;

// Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices

- (unsigned long long)_hashCKMigration;

// Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle

+ (id)dataWithEncodedSequenceData:(id)arg1 data:(id)arg2 error:(id*)arg3;
+ (id)dataWithEncodedSequenceString:(id)arg1 data:(id)arg2 error:(id*)arg3;
+ (id)dataWithEncodedString:(id)arg1 error:(id*)arg2;

- (bool)decodeSequenceData:(id*)arg1 data:(id*)arg2 error:(id*)arg3;
- (bool)decodeSequenceString:(id*)arg1 data:(id*)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (id)mf_MD5Digest;
- (id)mf_copyHexString;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (id)mf_decodeBase64;
- (id)mf_decodeBase64InRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)mf_decodeModifiedBase64;
- (id)mf_decodeQuotedPrintableForText:(BOOL)arg1;
- (id)mf_decodeUuencoded;
- (id)mf_encodeBase64;
- (id)mf_encodeBase64HeaderData;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_encodeModifiedBase64;
- (BOOL)mf_immutable;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })mf_rangeOfRFC822HeaderData;
- (id)mf_subdataFromIndex:(unsigned int)arg1;
- (id)mf_subdataToIndex:(unsigned int)arg1;
- (id)mf_subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCDataWithCFData:(struct __CFData { }*)arg1;
+ (id)MCDataWithHexString:(id)arg1;

- (id)MCHexString;
- (id)MCSHA1Hash;

// Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup

+ (id)dataFromHexadecimalString:(id)arg1;

- (id)hexadecimalString;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

- (id)compressedData;
- (id)decompressedData;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (id)dataWithRandomBytesOfSize:(unsigned int)arg1;

- (id)NRSHA256;
- (void)NRSHA256:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber

- (void)MD5:(unsigned char)arg1;
- (id)hexString;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (id)fc_gzipDeflate;
- (id)fc_gzipInflate;
- (id)fc_zlibDeflate;
- (id)fc_zlibInflate;
- (void)writeToKeyValuePair:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)md5;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)keyWithUserPassphrase:(id)arg1 salt:(id)arg2 iterationCount:(unsigned int)arg3 error:(id*)arg4;
+ (id)random128BitData:(id*)arg1;
+ (id)randomDataOfLength:(unsigned long)arg1 error:(id*)arg2;

- (id)TT_gzipDeflate;
- (id)TT_gzipInflate;
- (id)decryptedDataWithKey:(id)arg1 tag:(id)arg2 initialVector:(id)arg3 error:(id*)arg4;
- (id)encryptedDataWithKey:(id)arg1 tag:(id*)arg2 initialVector:(id*)arg3 error:(id*)arg4;
- (id)unwrapWithKey:(id)arg1 error:(id*)arg2;
- (id)wrapWithKey:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tc_nsDataWithOcBinaryData:(const struct OcBinaryData { int (**x1)(); unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; bool x7; struct SsrwOOStream {} *x8; }*)arg1;
+ (id)tsu_decodeFromBase64CString:(const char *)arg1 srcLength:(unsigned int)arg2;
+ (id)tsu_decodeFromBase64String:(id)arg1;
+ (id)tsu_decodeFromBase64StringWithWhitespace:(id)arg1;
+ (id)tsu_decodeFromHexidecimalString:(id)arg1;

- (id)tsu_encodeToBase64String;
- (id)tsu_encodeToBase64URLSafeString;
- (id)tsu_encodeToHexidecimalString;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)dataWithCGImage:(struct CGImage { }*)arg1;

- (id)SHA1Hash;
- (id)SHA256Hash;
- (id)fileSafeBase64Encoding;
- (id)hexEncoding;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

- (struct { unsigned char x1[16]; })md5sum;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit

- (id)hexaStringRepresentation;
- (id)sha1Hash;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

- (id)hexString;
- (id)sha1Hash;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/PipelineKit.framework/PipelineKit

- (id)hexaStringRepresentation;
- (id)sha1Hash;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph

- (id)hexaStringRepresentation;
- (id)sha1Hash;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)pl_dataWithMappedContentsOfFileDescriptor:(int)arg1;
+ (id)pl_dataWithMappedContentsOfFileHandle:(id)arg1;

- (void)pl_adviceDoNotNeed;
- (void)pl_adviceWillNeed;
- (unsigned int)pl_advisoryLength;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(BOOL)arg2 error:(id*)arg3;
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(BOOL)arg3 error:(id*)arg4;

- (id)propertyListForRadioResponseReturningError:(id*)arg1;
- (id)propertyListForRadioResponseReturningError:(id*)arg1 unparsedResponseDictionary:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (id)safari_SHA1Hash;
- (BOOL)safari_dataAppearsToBeCompressed;
- (id)safari_dataByCompressingData;
- (id)safari_dataByDecompressingData;
- (unsigned long long)safari_hashMD5;

// Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol

+ (id)pu_dataFromHexString:(id)arg1;

- (id)pu_hex;
- (int)sd_compare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)base64StringFromData:(id)arg1;
+ (id)dataFromBase64String:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (const void*)siriCoreSQLiteValue_blobRepresentationWithLength:(unsigned long long*)arg1;
- (id)siriCoreSQLiteValue_escapedString:(BOOL)arg1;
- (id)siriCoreSQLiteValue_toData;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_toString;
- (int)siriCoreSQLiteValue_type;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (BOOL)AES128CheckVerifier:(id)arg1 withPassword:(id)arg2;
+ (id)AES128GenerateVerifierWithPassword:(id)arg1;

- (id)AES128DecryptWithPassword:(id)arg1;
- (id)AES128EncryptWithPassword:(id)arg1;
- (id)dictionaryFromNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 parentResult:(id)arg2 isParentContent:(BOOL)arg3;
- (id)hexaStringRepresentation;
- (id)hmacSha1Hash:(id)arg1;
- (id)md5Hash;
- (id)searchDataByXPathQuery:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1 query:(id)arg2;
- (id)searchHTMLContentByXPathQuery:(id)arg1;
- (id)sha1Hash;
- (id)stringWithEncoding:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)sb_hexadecimalEncodedString;

// Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper

+ (id)SBKStringByMD5HashingString:(id)arg1;
+ (id)SBKStringFromDigestData:(id)arg1;

- (id)SBKDataByDeflatingWithGZip;
- (id)SBKDataByDeflatingWithNoZipHeader;
- (id)SBKDataByInflatingWithGZip;
- (id)SBKDataByInflatingWithNoZipHeader;
- (id)_SBKDataByDeflatingWithNoZipHeaderWithCompression:(unsigned int)arg1;
- (id)_SBKDataByInflatingWithNoZipHeader;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_MD5Digest;
- (id)tv_SHA1Digest;
- (id)tv_SHA256Digest;
- (id)tv_lowercaseHexString;

// Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote

- (id)TR_compressedGzipData;
- (id)TR_decompressedGzipData;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

+ (id)uns_PNGDataForImage:(struct CGImage { }*)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger

- (id)MD5HashString;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (BOOL)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (int)_web_locationAfterFirstBlankLine;
- (BOOL)_web_startsWithBlankLine;
- (id)_webkit_guessedMIMEType;
- (id)_webkit_guessedMIMETypeForXML;
- (id)_webkit_parseRFC822HeaderFields;

// Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore

+ (id)wl_dataFromHexEncodedData:(id)arg1;
+ (id)wl_dataFromHexEncodedString:(id)arg1;
+ (id)wl_hmacSHA256DataForData:(id)arg1 key:(id)arg2;
+ (id)wl_lengthPrefixedBlobSequenceFromDataArray:(id)arg1;

- (id)wl_arrayOfDataFromLengthPrefixedBlobSequenceWithExpectedCount:(unsigned int)arg1;
- (BOOL)wl_blobIsComplete;
- (id)wl_dataFromLengthPrefixedBlob;
- (id)wl_hexEncodedData;
- (id)wl_hexEncodedString;
- (id)wl_lengthPrefixedBlob;
- (id)wl_subdataWithRangeExcludingTrailingCrnl:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)wl_utf8String;

// Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube

- (id)webSafeBase64Data;

// Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper

- (id)copyDeflatedData;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsp_dataFromDispatchData:(id)arg1;
+ (id)tsp_dataWithContentsOfURL:(id)arg1 decryptionKey:(id)arg2;
+ (id)tsu_decodeFromBase64CString:(const char *)arg1 srcLength:(unsigned int)arg2;
+ (id)tsu_decodeFromBase64String:(id)arg1;
+ (id)tsu_decodeFromBase64StringWithWhitespace:(id)arg1;

- (id)tsp_dispatchData;
- (id)tsp_dispatchDataWithApplier:(id /* block */)arg1;
- (void)tsp_splitDataWithMaxSize:(unsigned long)arg1 subdataHandlerBlock:(id /* block */)arg2;
- (BOOL)tsp_writeToURL:(id)arg1 encryptionKey:(id)arg2;
- (id)tsu_encodeToBase64String;
- (id)tsu_encodeToBase64URLSafeString;

// Image: /System/Library/PrivateFrameworks/vCard.framework/vCard

+ (unsigned int)_cn_maxDataLengthFittingInBase64EncodingLength:(unsigned int)arg1;

- (id)_cn_MD5Hash;
- (id)_cn_encodeVCardBase64DataWithInitialLength:(unsigned int)arg1;

// Image: /usr/lib/libnfshared.dylib

+ (id)NF_dataWithHexString:(id)arg1;

- (id)NF_asHexString;
- (BOOL)NF_isZeroed;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteValue:(struct Mem { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
