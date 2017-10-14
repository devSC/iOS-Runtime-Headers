/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDServerResponder : NSObject {
    CDDebug * _debug;
}

@property (readonly) CDDebug *debug;

- (void).cxx_destruct;
- (id)debug;
- (id)init;
- (id)makeStashWithId:(unsigned long long)arg1;
- (BOOL)respondIndicatingProtocolErrorOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 protocolErrorNumber:(int)arg4 error:(id*)arg5;
- (BOOL)respondToAdmissionCheckAndStartedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 admissionGranted:(BOOL)arg4 grantValiditySeconds:(unsigned long long)arg5 admissionCondition:(unsigned long long)arg6 error:(id*)arg7;
- (BOOL)respondToAdmissionCheckOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 admissionGranted:(BOOL)arg4 grantValiditySeconds:(unsigned long long)arg5 admissionCondition:(unsigned long long)arg6 error:(id*)arg7;
- (BOOL)respondToAppsLaunchedButNotPrewarmedSinceDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToAssociateToBudgetOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToAttributeNamesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToAttributeOccurredOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToAttributeRepeatedStatisticOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 statisticsArray:(id)arg4 error:(id*)arg5;
- (BOOL)respondToAttributeReset:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToAttributeStatisticOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 statisticsDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToBackgroundLaunchOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToBroadcastSystemDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToBudgetsForAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToBundleIdChangeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToBundleIdEntriesOlderThanDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(BOOL)arg4 error:(id*)arg5;
- (BOOL)respondToCompareAndSwapPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 finalValue:(long long)arg4 error:(id*)arg5;
- (BOOL)respondToDebugBitmapOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToDecrementPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 decrementedValue:(long long)arg4 error:(id*)arg5;
- (BOOL)respondToDeleteAllDatabaseEntriesOlderThanDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToDeleteAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToDeleteBundleIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToDeleteDataForClientIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToDeletePoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToDeregisterTrendableAppOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToForecastAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToGetCtlOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 mitigationDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToGetDeviceFromDescriptionOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToGetDevicesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToGetRemoteSystemDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToHistoryQueryOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToIdForAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 attributeId:(unsigned long long)arg4 error:(id*)arg5;
- (BOOL)respondToIdForPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5;
- (BOOL)respondToIncrementPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 incrementedValue:(long long)arg4 error:(id*)arg5;
- (BOOL)respondToLiveAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToLocalFocalAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToMeteringForAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 meterToken:(unsigned long long)arg4 error:(id*)arg5;
- (BOOL)respondToPoolNamesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToReadPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 readValue:(long long)arg4 error:(id*)arg5;
- (BOOL)respondToReadRemoteRequestResultOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseKey:(const char *)arg4 responseDictionary:(id)arg5 error:(id*)arg6;
- (BOOL)respondToReadSystemDataFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToRegisterAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 registeredAttributeId:(unsigned long long)arg4 error:(id*)arg5;
- (BOOL)respondToRegisterChildPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 initialValue:(long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6;
- (BOOL)respondToRegisterForSignoff:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToRegisterPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 initialValue:(long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6;
- (BOOL)respondToRegisterTrendableAppOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToRemoteFocalAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToRequestAdmissionLogFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToRequestDeviceForecastDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToRequestDeviceStatisticDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToRequestSystemDataFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToResetAdmissionMask:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToSetAdmissionMask:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToSetCategoryOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToSetCtlOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToSetNonAppFocalOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToSignoffConditionsChangedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToTrendingAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (BOOL)respondToTriggerSystemDataExchange:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)respondToVersionOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (BOOL)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(int)arg4 dictionaryKey:(id)arg5 dictionary:(id)arg6 error:(id*)arg7;
- (BOOL)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(int)arg4 error:(id*)arg5;
- (BOOL)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(int)arg4 nameKey:(id)arg5 name:(id)arg6 dictionaryKey:(id)arg7 dictionary:(id)arg8 error:(id*)arg9;
- (BOOL)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(int)arg4 nameKey:(id)arg5 name:(id)arg6 error:(id*)arg7;
- (BOOL)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(int)arg4 nameKey:(id)arg5 name:(id)arg6 valueKey:(id)arg7 value:(long long)arg8 error:(id*)arg9;
- (BOOL)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(int)arg4 valueKey:(id)arg5 value:(unsigned long long)arg6 error:(id*)arg7;

@end
