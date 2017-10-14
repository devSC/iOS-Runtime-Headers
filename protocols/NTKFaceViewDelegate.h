/* Generated by RuntimeBrowser.
 */

@protocol NTKFaceViewDelegate <NSObject>

@required

- (BOOL)faceViewComplicationIsEmptyForSlot:(NSString *)arg1;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewDidLayoutSubviews;
- (void)faceViewDidReloadSnapshotContentViews;
- (void)faceViewDidScrubToDate:(NSDate *)arg1 forced:(BOOL)arg2;
- (void)faceViewRequestedLaunchFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)faceViewUpdatedResourceDirectory:(NSString *)arg1 wantsToTransferOwnership:(BOOL)arg2;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(int)arg1;
- (void)faceViewWantsStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewWillUnloadSnapshotContentViews;

@end
