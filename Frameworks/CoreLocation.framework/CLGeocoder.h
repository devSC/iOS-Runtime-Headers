/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLGeocoder : NSObject {
    CLGeocoderInternal * _internal;
}

@property (getter=isGeocoding, nonatomic, readonly) BOOL geocoding;

- (void)_ensureMainThreadExecutionContextForBlock:(id /* block */)arg1;
- (void)_geocodeAddressString:(id)arg1 inRegion:(id)arg2 preferredLocales:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_notifyCancel;
- (void)_notifyError:(id)arg1;
- (void)_notifyNoResult;
- (void)_notifyPartialResult:(id)arg1;
- (void)_notifyResult:(id)arg1;
- (void)_notifyResult:(id)arg1 error:(id)arg2;
- (void)_reverseGeocodeLocation:(id)arg1 preferredLocales:(id)arg2 heading:(double)arg3 localResultsOnly:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3;
- (void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2;
- (void)cancelGeocode;
- (void)dealloc;
- (void)geocodeAddressDictionary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)geocodeAddressString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (BOOL)isGeocoding;
- (void)reverseGeocodeLocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(BOOL)arg2 completionHandler:(id /* block */)arg3;

@end
