/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPAudioAndSubtitlesController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    MPAVItem * _avItem;
    _UIBackdropView * _backdropView;
    id /* block */  _completionHandler;
    BOOL  _hasAudio;
    BOOL  _hasSubtitles;
    MPAlternateTrack * _newAudioTrack;
    MPAlternateTrack * _newSubtitleTrack;
    MPAlternateTrack * _originalAudioTrack;
    MPAlternateTrack * _originalSubtitleTrack;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyChanges;
- (void)_configurePopover;
- (void)_doneButtonTapped:(id)arg1;
- (id)_trackAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithAVItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
