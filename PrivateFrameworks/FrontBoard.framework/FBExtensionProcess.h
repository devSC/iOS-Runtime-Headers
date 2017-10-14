/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBExtensionProcess : FBProcess {
    BOOL  _XPCBundle;
    FBExtensionInfo * _extensionInfo;
    NSString * _hostBundleID;
    int  _hostPID;
}

@property (getter=isXPCBundle, nonatomic, readonly) BOOL XPCBundle;
@property (nonatomic, readonly, retain) FBExtensionInfo *extensionInfo;
@property (nonatomic, readonly, copy) NSString *hostBundleID;
@property (nonatomic, readonly) int hostPID;
@property (nonatomic, readonly) FBProcess *hostProcess;

- (void)dealloc;
- (id)extensionInfo;
- (id)hostBundleID;
- (int)hostPID;
- (id)hostProcess;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (BOOL)isExtensionProcess;
- (BOOL)isXPCBundle;
- (id)succinctDescriptionBuilder;

@end
