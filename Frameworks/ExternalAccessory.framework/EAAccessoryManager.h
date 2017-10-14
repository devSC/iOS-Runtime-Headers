/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAAccessoryManager : NSObject <EABluetoothAccessoryPickerDelegate> {
    NSMutableArray * _connectedAccessories;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    EABluetoothAccessoryPicker * _picker;
    id /* block */  _pickerCompletion;
    NSRecursiveLock * _pickerLock;
    NSTimer * _pickerTimer;
    NSString * _selectedBluetoothAddress;
    BOOL  _sequesterNewAccessories;
    NSMutableArray * _sequesteredAccessories;
}

@property (nonatomic, readonly) NSArray *connectedAccessories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)accessibilityStartListening;
+ (void)accessibilityStopListening;
+ (BOOL)isLoggingEnabled;
+ (void)registerCapabilities:(unsigned int)arg1;
+ (id)sharedAccessoryManager;

- (void)_OOBBTPairingCompletionStatusReceived:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_cameraInfoUpdated:(id)arg1;
- (void)_checkForConnectedAccessories:(BOOL)arg1 backgroundTaskIdentifier:(unsigned int)arg2;
- (void)_cleanUpForTaskSuspendWithTaskIdentifier:(unsigned int)arg1;
- (id)_connectedAccessories;
- (void)_ephemerisURLAvailable:(id)arg1;
- (void)_externalAccessoryConnected:(id)arg1;
- (void)_externalAccessoryConnectedNotificationHandler:(id)arg1;
- (void)_externalAccessoryDisconnected:(id)arg1;
- (void)_externalAccessoryReconnected:(id)arg1;
- (void)_externalAccessoryUpdated:(id)arg1;
- (id)_findExtraAccessoriesContainedOnlyInEA:(id)arg1;
- (id)_findExtraAccessoriesContainedOnlyIniAP:(id)arg1;
- (void)_gpsTimeRequested:(id)arg1;
- (void)_handleAccessoryNotificationTimeout:(id)arg1;
- (void)_iapServerDied:(id)arg1;
- (id)_initFromSingletonCreationMethod;
- (void)_integrateSequesteredAccessories;
- (void)_locationNmeaDataAvailable:(id)arg1;
- (void)_locationPointDataAvailable:(id)arg1;
- (void)_nmeaFilteringSupportChanged:(id)arg1;
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)arg1;
- (void)_pointOfInterestStatusReceived:(id)arg1;
- (void)_removeAllAccessoriesFromArray:(id)arg1 notifyClients:(BOOL)arg2;
- (void)_timeSyncInfoUpdated:(id)arg1;
- (void)_vehicleDataUpdated:(id)arg1;
- (void)accessibilityAction:(id)arg1;
- (void)accessibilityContextChange:(id)arg1;
- (void)accessibilityItemPropertyRequest:(id)arg1;
- (void)accessibilitySystemPropertyChange:(id)arg1;
- (void)accessibilitySystemPropertyRequest:(id)arg1;
- (BOOL)appDeclaresProtocol:(id)arg1;
- (BOOL)areLocationAccessoriesEnabled;
- (id)availableAccessories;
- (id)connectedAccessories;
- (void)dealloc;
- (void)devicePicker:(id)arg1 didSelectAddress:(id)arg2 errorCode:(int)arg3;
- (void)disconnectIPAccessory:(id)arg1;
- (void)endSession:(unsigned int)arg1 forConnectionID:(unsigned int)arg2;
- (id)init;
- (void)initiateConnectionToIPAccessory:(id)arg1;
- (void)openCompleteForSession:(unsigned int)arg1 connectionID:(unsigned int)arg2;
- (void)pointOfInterestSelection:(id)arg1;
- (void)registerForLocalNotifications;
- (void)setAreLocationAccessoriesEnabled:(BOOL)arg1;
- (void)setShouldAllowCppRuntime:(BOOL)arg1;
- (void)setShouldAllowInternalProtocols:(BOOL)arg1;
- (BOOL)shouldAllowCppRuntime;
- (BOOL)shouldAllowInternalProtocols;
- (void)showBluetoothAccessoryPickerWithNameFilter:(id)arg1 completion:(id /* block */)arg2;
- (void)startIPAccessoryDiscovery;
- (void)stopIPAccessoryDiscovery;
- (void)unregisterForLocalNotifications;
- (void)wakeAccessoryWithToken:(id)arg1;

@end
