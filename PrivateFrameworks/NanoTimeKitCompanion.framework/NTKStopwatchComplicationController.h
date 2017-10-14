/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKStopwatchComplicationController : NTKComplicationController

@property (nonatomic, readonly) <NTKStopwatchComplicationDisplay> *legacyDisplay;

+ (BOOL)_acceptsComplicationType:(unsigned int)arg1;

- (void)_activate;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_handleLocaleChange;
- (void)_handleReloadNotification;
- (void)_handleTimeFormatChange;
- (void)_startStopwatchTimerUpdates;
- (void)_stopStopwatchTimerUpdates;
- (void)_updateDisplay;
- (id)complicationApplicationIdentifier;
- (BOOL)hasTapAction;
- (void)performTapAction;
- (void)setDataMode:(int)arg1 forDisplayWrapper:(id)arg2;

@end
