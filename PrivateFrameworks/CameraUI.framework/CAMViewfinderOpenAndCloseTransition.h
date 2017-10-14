/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMViewfinderOpenAndCloseTransition : NSObject {
    CAMSnapshotView * __snapshotView;
    CAMViewfinderView * __viewfinderView;
}

@property (setter=_setSnapshotView:, nonatomic, retain) CAMSnapshotView *_snapshotView;
@property (nonatomic, readonly) CAMViewfinderView *_viewfinderView;

- (void).cxx_destruct;
- (void)_closeViewfinder:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_existingSnapshotViewCreateIfNecessary:(BOOL)arg1 removedOnCompletion:(BOOL)arg2;
- (void)_setSnapshotView:(id)arg1;
- (id)_snapshotView;
- (id)_viewfinderView;
- (void)closeAnimated:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithViewfinderView:(id)arg1;
- (void)openAnimated:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;

@end
