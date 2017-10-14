/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAvailabilityCachedSpanRange : NSObject {
    NSMutableArray * _cachedSpans;
}

+ (id)_clampDateRangeForSpans:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)_generateCachedSpansFromSpans:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_rangeCompletelyCoversPeriodBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)_validateCachedSpansIfDebugLoggingIsEnabled;
- (id)description;
- (id)gatherFreshlyCachedSpansBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;
- (void)injectSpans:(id)arg1;
- (id)spans;

@end
