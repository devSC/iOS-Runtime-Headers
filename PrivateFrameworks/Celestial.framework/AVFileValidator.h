/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVFileValidator : NSObject {
    /* Warning: unhandled struct encoding: '{AVFileValidatorPrivate=@@^{FigOpaqueMediaValidator}{FigMediaValidatorDataLocation=QQ}^{OpaqueCMByteStream}cc@}' */ struct AVFileValidatorPrivate { id x1; struct FigOpaqueMediaValidator {} *x2; struct FigMediaValidatorDataLocation { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct OpaqueCMByteStream {} *x4; BOOL x5; BOOL x6; id x7; } * _priv;
    NSString * _validationRules;
}

@property (retain) NSString *validationRules;

- (void)cancel;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (BOOL)isCompleted;
- (BOOL)isStreaming;
- (id)notificationForFileCheckResult:(id)arg1;
- (void)postNotificationForCallback:(id)arg1;
- (float)progress;
- (void)setValidationRules:(id)arg1;
- (id)url;
- (void)validate;
- (id)validateBlocking:(BOOL)arg1;
- (void)validateForCameraRoll;
- (BOOL)validateSyncWithError:(id*)arg1;
- (id)validationRules;

@end
