/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapAccessTransitAccessPoint : NSObject <GEOMapTransitAccessPoint> {
    struct shared_ptr<geo::MapAccessPointFeature> { 
        struct MapAccessPointFeature {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _accessPoint;
    GEOMapAccess * _map;
    <GEOMapTransitStation> * _station;
}

@property (nonatomic, readonly) unsigned short accessType;
@property (nonatomic, readonly) double boundingRadius;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned char entranceExitType;
@property (nonatomic, readonly) double groundRadius;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) struct { double x1; double x2; }*polygonPoints;
@property (nonatomic, readonly) int polygonPointsCount;
@property (nonatomic, readonly) unsigned long long stationID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long transitID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned short)accessType;
- (double)boundingRadius;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (double)distanceInMetersFrom:(struct { double x1; double x2; })arg1;
- (unsigned char)entranceExitType;
- (id)findAccessPoints:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)findGeometryWithCompletionHandler:(id /* block */)arg1;
- (id)findStation:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)findStops:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (double)groundRadius;
- (id)initWithMap:(id)arg1 accessPoint:(struct shared_ptr<geo::MapAccessPointFeature> { struct MapAccessPointFeature {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id)internalName;
- (struct { double x1; double x2; }*)polygonPoints;
- (int)polygonPointsCount;
- (unsigned long long)stationID;
- (unsigned long long)transitID;

@end
