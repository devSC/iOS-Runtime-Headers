/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLDownloadInternal * _internal;
}

@property (readonly, copy) NSString *debugDescription;
@property BOOL deletesFileUponFailure;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSData *resumeData;
@property (readonly) Class superclass;

+ (id)_downloadWithLoadingCFURLConnection:(struct _CFURLConnection { }*)arg1 request:(struct _CFURLRequest { }*)arg2 response:(struct _CFURLResponse { }*)arg3 delegate:(id)arg4 proxy:(id)arg5;
+ (id)_downloadWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
+ (id)_downloadWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
+ (BOOL)_isEncodingMIMETypeResumable:(id)arg1;
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg1;

- (id)_delegate;
- (BOOL)_deletesFileAfterFailure;
- (id)_directoryPath;
- (BOOL)_downloadActive;
- (id)_initWithLoadingCFURLConnection:(struct _CFURLConnection { }*)arg1 request:(struct _CFURLRequest { }*)arg2 response:(struct _CFURLResponse { }*)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
- (id)_initWithResumeInformation:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (id)_originatingURL;
- (id)_resumeInformation;
- (void)_setDelegate:(id)arg1;
- (void)_setDelegateQueue:(id)arg1;
- (void)_setDeletesFileAfterFailure:(BOOL)arg1;
- (void)_setDirectoryPath:(id)arg1;
- (void)_setOriginatingURL:(id)arg1;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)cleanupChallenges;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (BOOL)deletesFileUponFailure;
- (id)description;
- (id)init;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithResumeData:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (void)releaseDelegate;
- (id)request;
- (id)resumeData;
- (BOOL)sendCanAuthenticateAgainstProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (void)sendDecideDestinationWithSuggestedObjectName:(struct __CFString { }*)arg1;
- (void)sendDidCreateDestination:(struct __CFURL { }*)arg1;
- (void)sendDidFail:(struct __CFError { }*)arg1;
- (void)sendDidFinish;
- (void)sendDidReceiveChallenge:(struct _CFURLAuthChallenge { }*)arg1;
- (void)sendDidReceiveData:(long)arg1;
- (void)sendDidReceiveResponse:(struct _CFURLResponse { }*)arg1;
- (void)sendDidStart:(struct _CFURLDownload { }*)arg1;
- (unsigned char)sendDownloadShouldUseCredentialStorage;
- (bool)sendShouldDecodeDataOfMIMEType:(struct __CFString { }*)arg1;
- (void)sendWillResumeWithResponse:(struct _CFURLResponse { }*)arg1 startingByte:(unsigned long long)arg2;
- (struct _CFURLRequest { }*)sendWillSendRequest:(struct _CFURLRequest { }*)arg1 redirectResponse:(struct _CFURLResponse { }*)arg2;
- (void)setDeletesFileUponFailure:(BOOL)arg1;
- (void)setDestination:(id)arg1 allowOverwrite:(BOOL)arg2;
- (id)url;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)withDelegate:(id /* block */)arg1;

@end
