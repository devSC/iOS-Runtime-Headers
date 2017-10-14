/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAResponse : NSObject {
    NSData * _data;
    NSError * _error;
    NSHTTPURLResponse * _httpResponse;
    NSNumber * _maxAge;
    NSDictionary * _responseDictionary;
    int  _statusCode;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSHTTPURLResponse *httpResponse;
@property (nonatomic, readonly) NSNumber *maxAge;
@property (nonatomic, readonly) NSString *protocolVersion;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) int statusCode;

- (void).cxx_destruct;
- (id)_deviceSpecificLocalizedString:(id)arg1;
- (void)_parseJSONResponse:(id)arg1;
- (void)_parsePlistResponse:(id)arg1;
- (id)_stringWithDescriptionForResponseError:(id)arg1;
- (id)data;
- (id)error;
- (id)httpResponse;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(BOOL)arg3;
- (id)maxAge;
- (id)protocolVersion;
- (id)responseDictionary;
- (void)setError:(id)arg1;
- (int)statusCode;

@end
