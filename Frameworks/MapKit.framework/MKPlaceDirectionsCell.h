/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceDirectionsCell : MKPlaceSectionRowView <MKLocationManagerObserver, MKQuickRouteConfigurableView, MKQuickRouteManagerDelegate> {
    NSMutableArray * _baseConstraints;
    NSMutableArray * _buttonBaselineConstraints;
    UIButton * _directionsButton;
    NSLayoutConstraint * _directionsToDriveButtonConstraint;
    NSLayoutConstraint * _directionsToTransitButtonConstraint;
    NSLayoutConstraint * _directionsToWalkButtonConstraint;
    NSLayoutConstraint * _directionsTrailingConstraint;
    UIButton * _driveButton;
    NSLayoutConstraint * _driveButtonTrailingConstraint;
    UILabel * _driveTimeLabel;
    MKMapItem * _mapItem;
    BOOL  _offlineMode;
    _MKQuickRouteManager * _quickRouteManager;
    id /* block */  _requestDirectionsBlock;
    UIButton * _transitButton;
    NSLayoutConstraint * _transitButtonToDriveButtonConstraint;
    NSLayoutConstraint * _transitButtonTrailingConstraint;
    UILabel * _transitTimeLabel;
    UIButton * _walkButton;
    NSLayoutConstraint * _walkButtonToDriveButtonConstraint;
    NSLayoutConstraint * _walkButtonToTransitButtonConstraint;
    NSLayoutConstraint * _walkButtonTrailingConstraint;
    UILabel * _walkTimeLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) BOOL offlineMode;
@property (nonatomic, copy) id /* block */ requestDirectionsBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_drivingDirectionsTapped:(id)arg1;
- (void)_quickDirectionsTapped:(id)arg1;
- (void)_transitDirectionsTapped:(id)arg1;
- (void)_walkingDirectionsTapped:(id)arg1;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)mapItem;
- (id)newButtonWithImage:(id)arg1 andSelector:(SEL)arg2;
- (id)newLabel;
- (BOOL)offlineMode;
- (unsigned int)preferredDirectionsTypeForQuickRoute;
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(BOOL)arg4;
- (BOOL)quickRouteShouldIncludeTransit;
- (BOOL)quickRouteShouldOnlyUseAutomobile;
- (id /* block */)requestDirectionsBlock;
- (void)setMapItem:(id)arg1;
- (void)setOfflineMode:(BOOL)arg1;
- (void)setRequestDirectionsBlock:(id /* block */)arg1;
- (id)timeEstimateFont;
- (void)updateConstraints;
- (void)updateETAFor:(unsigned int)arg1 button:(id)arg2 label:(id)arg3;
- (void)updateETAs:(BOOL)arg1 constraintsOnly:(BOOL)arg2;

@end
