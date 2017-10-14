/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneImpl : FBSScene <FBSSceneAgentProxy, FBSSceneHandle, FBSSceneSnapshotRequestDelegate> {
    <FBSSceneClientAgent> * _agent;
    id /* block */  _agentMessageHandler;
    NSMutableArray * _agentSessions;
    FBSSerialQueue * _callOutQueue;
    FBSSceneClientSettings * _clientSettings;
    <FBSSceneDelegate> * _delegate;
    CADisplay * _display;
    FBSDisplay * _fbsDisplay;
    NSString * _identifier;
    NSMutableArray * _layers;
    NSObject<OS_dispatch_queue> * _queue;
    FBSSceneSettings * _settings;
    BOOL  _shouldObserveLayers;
    FBSSceneSpecification * _specification;
    <FBSSceneUpdater> * _updater;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_didCreateWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)_hasAgent;
- (id)_initWithCallOutQueue:(id)arg1 updater:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6;
- (id)_initWithInternalQueue:(id)arg1 callOutQueue:(id)arg2 updater:(id)arg3 identifier:(id)arg4 specification:(id)arg5 display:(id)arg6 settings:(id)arg7 clientSettings:(id)arg8;
- (id)_initWithQueue:(id)arg1 callOutQueue:(id)arg2 identifier:(id)arg3 specification:(id)arg4 display:(id)arg5 settings:(id)arg6 clientSettings:(id)arg7;
- (id)_initWithWorkspace:(id)arg1 updater:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6;
- (void)_performDelegateCallOut:(id /* block */)arg1;
- (void)_queue_configureReceivedActions:(id)arg1;
- (void)_queue_invalidate;
- (void)_updateLayer:(id)arg1;
- (void)_willDestroyWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (void)agent:(id)arg1 registerMessageHandler:(id /* block */)arg2;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (id)callOutQueue;
- (id)clientProcess;
- (id)clientSettings;
- (void)closeSession:(id)arg1;
- (id)counterpartAgent;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (id)display;
- (id)fbsDisplay;
- (id)hostProcess;
- (id)identifier;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (BOOL)invalidateSnapshotWithContext:(id)arg1;
- (id)layers;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)parameters;
- (BOOL)performSnapshotWithContext:(id)arg1;
- (void)sceneLayerDidInvalidate:(id)arg1;
- (void)sceneLayerDidUpdate:(id)arg1;
- (BOOL)sceneLayerShouldObserveUpdates:(id)arg1;
- (void)sendActions:(id)arg1;
- (id)sessionForIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)snapshotRequest;
- (BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (BOOL)snapshotRequestAllowSnapshot:(id)arg1;
- (id)specification;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateClientSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;

@end
