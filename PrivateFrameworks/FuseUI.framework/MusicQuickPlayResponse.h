/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicQuickPlayResponse : NSObject {
    NSString * _containerID;
    int  _containerType;
    NSData * _recommendationData;
    NSDictionary * _storePlatformDictionary;
}

@property (nonatomic, retain) NSString *containerID;
@property (nonatomic) int containerType;
@property (nonatomic, retain) NSData *recommendationData;
@property (nonatomic, retain) NSDictionary *storePlatformDictionary;

- (void).cxx_destruct;
- (id)containerID;
- (int)containerType;
- (id)createPlaybackContext;
- (id)initWithStoreDictionary:(id)arg1;
- (id)recommendationData;
- (void)setContainerID:(id)arg1;
- (void)setContainerType:(int)arg1;
- (void)setRecommendationData:(id)arg1;
- (void)setStorePlatformDictionary:(id)arg1;
- (id)storePlatformDictionary;

@end
