/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSkipTrackCommand : MPRemoteCommand {
    struct { 
        int numberOfAvailableSkips; 
        int skipFrequency; 
        double skipInterval; 
    }  _skipLimit;
}

@property (nonatomic) struct { int x1; int x2; double x3; } skipLimit;

- (id)_mediaRemoteCommandInfoOptions;
- (void)setSkipLimit:(struct { int x1; int x2; double x3; })arg1;
- (struct { int x1; int x2; double x3; })skipLimit;

@end
