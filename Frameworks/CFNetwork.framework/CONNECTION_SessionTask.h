/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface CONNECTION_SessionTask : NSObject {
    struct __CFDictionary { } * __atsContext;
    struct __PerformanceTiming { } * __performanceTiming;
    BOOL  __shouldSkipPreferredClientCertificateLookup;
    struct __CFDictionary { } * _connectionProperties;
    struct _CFURLRequest { } * _currentRequest;
    bool  _is_cellular;
    Class  _my_protocolForTask;
    NSMutableURLRequest * _nsCurrentRequest;
    NSURLRequest * _nsOriginalRequest;
    struct _CFURLRequest { } * _originalRequest;
    __NSCFURLSession * _session;
    struct __CFDictionary { } * _socketProperties;
    NSMutableArray * _transactionMetrics;
}

- (const struct __CFDictionary {}**)_DuetActivityProperties;
- (const struct __CFData {}**)_TCPConnectionMetadata;
- (unsigned long)_allowedProtocolTypes;
- (id)_allowsCellular;
- (id)_backgroundTaskTimingData;
- (id)_boundInterfaceIdentifier;
- (long long)_bytesPerSecondLimit;
- (BOOL)_cacheOnly;
- (int)_cachePolicy;
- (id)_cfCache;
- (id)_cfCookies;
- (id)_cfCreds;
- (id)_cfHSTS;
- (id)_connectionPropertyDuet;
- (id)_contentDispositionFallbackArray;
- (int)_cookieAcceptPolicy;
- (struct __CFDictionary { }*)_copyATSState;
- (struct _CFURLRequest { }*)_copyCurrentCFURLRequest;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (struct _CFURLRequest { }*)_copyOriginalCFURLRequest;
- (struct __CFDictionary { }*)_copySocketStreamProperties;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache;
- (struct _CFURLRequest { }*)_currentCFURLRequest;
- (struct __CFDictionary { }*)_dependencyInfo;
- (id)_disallowCellular;
- (id)_expectedWorkload;
- (void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse { }*)arg1 completionHandler:(id /* block */)arg2;
- (struct __CFSet { }*)_getAuthenticatorStatusCodes;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (id)_networkServiceType;
- (struct __PerformanceTiming { }*)_performanceTiming;
- (void)_prepareNewTimingDataContainer;
- (unsigned char)_preventsIdleSystemSleep;
- (BOOL)_preventsSystemHTTPProxyAuthentication;
- (id)_priorityValue;
- (void)_processConnectionProperties;
- (id)_prohibitAuthUI;
- (id)_protocolForTask;
- (struct __CFDictionary { }*)_proxySettings;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (long)_requestPriority;
- (void)_setConnectionIsCellular:(bool)arg1;
- (void)_setSocketProperties:(struct __CFDictionary { }*)arg1 connectionProperties:(struct __CFDictionary { }*)arg2;
- (id)_shouldHandleCookies;
- (unsigned char)_shouldPipelineHTTP;
- (unsigned char)_shouldSkipPipelineProbe;
- (BOOL)_shouldSkipPreferredClientCertificateLookup;
- (unsigned char)_shouldUsePipelineHeuristics;
- (struct __CFDictionary { }*)_sslSettings;
- (id)_storagePartitionIdentifier;
- (unsigned char)_strictContentLength;
- (long long)_suspensionThreshhold;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (id)_timeWindowDelay;
- (id)_timeWindowDuration;
- (double)_timeoutInterval;
- (id)_trailers;
- (id)_transactionMetrics;
- (id)countOfBytesExpectedToReceive;
- (id)countOfBytesExpectedToSend;
- (id)countOfBytesReceived;
- (id)countOfBytesSent;
- (id)currentRequest;
- (struct __CFURL { }*)currentRequest_URL;
- (struct __CFURL { }*)currentRequest_mainDocumentURL;
- (void)dealloc;
- (id)error;
- (id)initWithRequest:(struct _CFURLRequest { }*)arg1 mutableCurrent:(struct _CFURLRequest { }*)arg2 connProps:(struct __CFDictionary { }*)arg3 sockProps:(struct __CFDictionary { }*)arg4 session:(id)arg5;
- (id)originalRequest;
- (float)priority;
- (id)session;
- (void)set_TCPConnectionMetadata:(id)arg1;
- (void)set_protocolForTask:(id)arg1;
- (void)set_trailers:(id)arg1;
- (bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (id)startTime;
- (id)state;
- (id)taskIdentifier;
- (void)updateCurrentRequest:(id)arg1;
- (id)workQueue;

@end
