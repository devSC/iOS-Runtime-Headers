/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSPlaybackControlRequest : HSRequest {
    int  _controlCommand;
    unsigned int  _interfaceID;
}

@property (nonatomic, readonly) int controlCommand;
@property (nonatomic, readonly) unsigned int interfaceID;

- (int)controlCommand;
- (id)initWithInterfaceID:(unsigned int)arg1 controlCommand:(int)arg2;
- (unsigned int)interfaceID;

@end
