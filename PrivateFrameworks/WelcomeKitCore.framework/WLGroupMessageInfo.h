/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLGroupMessageInfo : NSObject {
    NSString * _groupID;
    BOOL  _handleIDsAreComplete;
    NSString * _roomName;
    NSArray * _sortedHandleIDs;
    NSString * _sourceThreadID;
}

@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) BOOL handleIDsAreComplete;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, readonly) NSArray *sortedHandleIDs;
@property (nonatomic, readonly) NSString *sourceThreadID;

+ (id)groupMessageInfoWithSourceThreadID:(id)arg1 sortedHandleIDs:(id)arg2 handleIDsAreComplete:(BOOL)arg3 roomName:(id)arg4 groupID:(id)arg5;

- (void).cxx_destruct;
- (id)groupID;
- (BOOL)handleIDsAreComplete;
- (id)roomName;
- (id)sortedHandleIDs;
- (id)sourceThreadID;

@end
