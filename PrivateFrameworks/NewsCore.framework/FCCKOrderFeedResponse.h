/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKOrderFeedResponse : NSObject {
    unsigned long long  _extent;
    NSString * _feedID;
    NSArray * _feedItemAndArticleRecords;
    BOOL  _reachedEnd;
    BOOL  _reachedMinOrder;
    BOOL  _wasDropped;
}

@property (nonatomic) unsigned long long extent;
@property (nonatomic, copy) NSString *feedID;
@property (nonatomic, copy) NSArray *feedItemAndArticleRecords;
@property (nonatomic) BOOL reachedEnd;
@property (nonatomic) BOOL reachedMinOrder;
@property (nonatomic) BOOL wasDropped;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)extent;
- (id)feedID;
- (id)feedItemAndArticleRecords;
- (BOOL)reachedEnd;
- (BOOL)reachedMinOrder;
- (void)setExtent:(unsigned long long)arg1;
- (void)setFeedID:(id)arg1;
- (void)setFeedItemAndArticleRecords:(id)arg1;
- (void)setReachedEnd:(BOOL)arg1;
- (void)setReachedMinOrder:(BOOL)arg1;
- (void)setWasDropped:(BOOL)arg1;
- (BOOL)wasDropped;

@end
