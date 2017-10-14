/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetClimateSettingsInCarIntent : INIntent <INSetClimateSettingsInCarIntentExport>

@property (nonatomic, readonly) int airCirculationMode;
@property (nonatomic, readonly) int climateZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *enableAirConditioner;
@property (nonatomic, readonly, copy) NSNumber *enableAutoMode;
@property (nonatomic, readonly, copy) NSNumber *enableClimateControl;
@property (nonatomic, readonly, copy) NSNumber *enableFan;
@property (nonatomic, readonly, copy) NSNumber *fanSpeedIndex;
@property (nonatomic, readonly, copy) NSNumber *fanSpeedPercentage;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int relativeFanSpeedSetting;
@property (nonatomic, readonly) int relativeTemperatureSetting;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSMeasurement *temperature;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned int)arg1;
- (id)_typedBackingStore;
- (int)airCirculationMode;
- (int)climateZone;
- (id)description;
- (id)domain;
- (id)enableAirConditioner;
- (id)enableAutoMode;
- (id)enableClimateControl;
- (id)enableFan;
- (id)fanSpeedIndex;
- (id)fanSpeedPercentage;
- (id)initWithEnableFan:(id)arg1 enableAirConditioner:(id)arg2 enableClimateControl:(id)arg3 enableAutoMode:(id)arg4 airCirculationMode:(int)arg5 fanSpeedIndex:(id)arg6 fanSpeedPercentage:(id)arg7 relativeFanSpeedSetting:(int)arg8 temperature:(id)arg9 relativeTemperatureSetting:(int)arg10 climateZone:(int)arg11;
- (id)parametersByName;
- (int)relativeFanSpeedSetting;
- (int)relativeTemperatureSetting;
- (void)setAirCirculationMode:(int)arg1;
- (void)setClimateZone:(int)arg1;
- (void)setDomain:(id)arg1;
- (void)setEnableAirConditioner:(id)arg1;
- (void)setEnableAutoMode:(id)arg1;
- (void)setEnableClimateControl:(id)arg1;
- (void)setEnableFan:(id)arg1;
- (void)setFanSpeedIndex:(id)arg1;
- (void)setFanSpeedPercentage:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRelativeFanSpeedSetting:(int)arg1;
- (void)setRelativeTemperatureSetting:(int)arg1;
- (void)setTemperature:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)temperature;
- (id)verb;

@end
