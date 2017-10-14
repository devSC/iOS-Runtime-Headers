/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSaveToCameraRollActivity : UISaveToCameraRollActivity <PUActivity> {
    PUActivityItemSourceController * _itemSourceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) PUActivityItemSourceController *itemSourceController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)itemSourceController;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setItemSourceController:(id)arg1;

@end
