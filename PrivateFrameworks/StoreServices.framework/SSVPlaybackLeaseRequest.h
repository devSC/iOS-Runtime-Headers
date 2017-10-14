/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackLeaseRequest : NSObject <NSCopying> {
    int  _actionType;
    NSData * _certificateData;
    NSURL * _certificateURL;
    NSMutableDictionary * _httpHeaderFields;
    unsigned long long  _kdChannelIdentifier;
    unsigned long long  _kdMovieIdentifier;
    int  _leaseType;
    NSMutableDictionary * _parameters;
    BOOL  _startsLeaseSession;
    NSURL * _url;
}

@property (nonatomic, copy) NSDictionary *HTTPHeaderFields;
@property (nonatomic) unsigned long long KDChannelIdentifier;
@property (getter=_KDMovieIdentifier, setter=_setKDMovieIdentifier:, nonatomic) unsigned long long _KDMovieIdentifier;
@property (getter=_URL, setter=_setURL:, nonatomic, copy) NSURL *_URL;
@property (getter=_URLBagKey, nonatomic, readonly, copy) NSString *_URLBagKey;
@property (getter=_actionParameterValue, nonatomic, readonly, copy) NSString *_actionParameterValue;
@property (getter=_actionType, setter=_setActionType:, nonatomic) int _actionType;
@property (getter=_certificateData, setter=_setCertificateData:, nonatomic, copy) NSData *_certificateData;
@property (getter=_leaseType, nonatomic, readonly) int _leaseType;
@property (nonatomic, copy) NSDictionary *parameterValues;
@property (nonatomic) BOOL startsLeaseSession;

+ (id)_requestWithType:(int)arg1;

- (void).cxx_destruct;
- (id)HTTPHeaderFields;
- (unsigned long long)KDChannelIdentifier;
- (unsigned long long)_KDMovieIdentifier;
- (id)_URL;
- (id)_URLBagKey;
- (id)_actionParameterValue;
- (int)_actionType;
- (void)_applyValuesToCopy:(id)arg1;
- (id)_certificateData;
- (id)_copyBodyDictionaryWithFairPlaySession:(void**)arg1;
- (id)_copyWithLeaseType:(int)arg1;
- (int)_leaseType;
- (void)_setActionType:(int)arg1;
- (void)_setCertificateData:(id)arg1;
- (void)_setKDMovieIdentifier:(unsigned long long)arg1;
- (void)_setURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)parameterValues;
- (void)setHTTPHeaderFields:(id)arg1;
- (void)setKDChannelIdentifier:(unsigned long long)arg1;
- (void)setParameterValues:(id)arg1;
- (void)setStartsLeaseSession:(BOOL)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (BOOL)startsLeaseSession;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)valueForParameter:(id)arg1;

@end
