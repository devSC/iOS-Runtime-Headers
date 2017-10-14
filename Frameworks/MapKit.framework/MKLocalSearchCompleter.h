/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearchCompleter : NSObject {
    GEOSearchCategory * _categoryFilter;
    id  _context;
    <MKLocalSearchCompleterDelegate> * _delegate;
    CLLocation * _deviceLocation;
    BOOL  _dirty;
    int  _filterType;
    NSString * _identifier;
    double  _lastRequestTime;
    int  _listType;
    unsigned int  _mapType;
    NSString * _queryFragment;
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _region;
    NSArray * _results;
    <MKLocationManagerOperation> * _singleLocationUpdate;
    int  _source;
    <GEOMapServiceCompletionTicket> * _ticket;
    double  _timeSinceLastInBoundingRegion;
    NSTimer * _timer;
    GEOMapServiceTraits * _traits;
}

@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRegion;
@property (nonatomic, retain) GEOSearchCategory *categoryFilter;
@property (nonatomic) id context;
@property (nonatomic) <MKLocalSearchCompleterDelegate> *delegate;
@property (nonatomic, retain) CLLocation *deviceLocation;
@property (nonatomic) int entriesType;
@property (nonatomic) int filterType;
@property (nonatomic, copy) NSString *fragment;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int listType;
@property (nonatomic) unsigned int mapType;
@property (nonatomic, copy) NSString *queryFragment;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (nonatomic, readonly) NSArray *results;
@property (getter=isSearching, nonatomic, readonly) BOOL searching;
@property (nonatomic) double timeSinceLastInBoundingRegion;
@property (nonatomic, retain) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_fireRequest;
- (void)_handleCompletion:(id)arg1 forTicket:(id)arg2;
- (void)_handleError:(id)arg1 forTicket:(id)arg2;
- (void)_markDirty;
- (void)_schedulePendingRequest;
- (void)_scheduleRequest;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRegion;
- (void)cancel;
- (id)categoryFilter;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)deviceLocation;
- (int)entriesType;
- (int)filterType;
- (id)fragment;
- (id)identifier;
- (id)init;
- (BOOL)isSearching;
- (int)listType;
- (unsigned int)mapType;
- (id)queryFragment;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (id)results;
- (BOOL)resultsAreCurrent;
- (void)retry;
- (void)setBoundingRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCategoryFilter:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setEntriesType:(int)arg1;
- (void)setFilterType:(int)arg1;
- (void)setFragment:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setListType:(int)arg1;
- (void)setMapType:(unsigned int)arg1;
- (void)setQueryFragment:(id)arg1;
- (void)setRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSource:(int)arg1;
- (void)setTimeSinceLastInBoundingRegion:(double)arg1;
- (void)setTraits:(id)arg1;
- (int)source;
- (double)timeSinceLastInBoundingRegion;
- (id)traits;

@end
