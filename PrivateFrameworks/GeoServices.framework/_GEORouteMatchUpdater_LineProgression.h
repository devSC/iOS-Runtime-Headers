/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater {
    GEOComposedTransitTripRouteStep * _alightStep;
    GEOComposedTransitTripRouteStep * _boardStep;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _startRouteCoordinate;
}

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithTransitRouteMatcher:(id)arg1 tripLeg:(id)arg2;
- (unsigned int)priority;
- (BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end
