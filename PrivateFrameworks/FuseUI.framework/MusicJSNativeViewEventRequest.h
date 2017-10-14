/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSNativeViewEventRequest : NSObject {
    id /* block */  _completion;
    NSDictionary * _extraInfo;
    int  _nativeViewEventType;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, copy) NSDictionary *extraInfo;
@property (nonatomic) int nativeViewEventType;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)extraInfo;
- (int)nativeViewEventType;
- (void)setCompletion:(id /* block */)arg1;
- (void)setExtraInfo:(id)arg1;
- (void)setNativeViewEventType:(int)arg1;

@end
