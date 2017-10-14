/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

@interface DAEASOpenIDMetadataResponse : NSObject {
    NSDictionary * _data;
    NSError * _error;
    NSString * _errorMessage;
    int  _statusCode;
    NSString * _tokenRequestURI;
}

@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) int statusCode;
@property (nonatomic, readonly) NSString *tokenRequestURI;

- (void).cxx_destruct;
- (id)data;
- (id)error;
- (id)errorMessage;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (int)statusCode;
- (id)tokenRequestURI;

@end
