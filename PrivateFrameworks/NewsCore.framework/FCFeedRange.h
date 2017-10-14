/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedRange : NSObject <NSCoding, NSCopying> {
    FCFeedCursor * _bottom;
    FCFeedCursor * _top;
}

@property (nonatomic, copy) FCFeedCursor *bottom;
@property (nonatomic, readonly, copy) FCDateRange *dateRange;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) BOOL reachesBottomOfFeed;
@property (nonatomic, readonly) BOOL reachesTopOfFeed;
@property (nonatomic, copy) FCFeedCursor *top;

+ (id)feedRangeByMergingRange:(id)arg1 withRange:(id)arg2;
+ (id)feedRangeFromDate:(id)arg1 toDate:(id)arg2;
+ (id)feedRangeFromDateRange:(id)arg1;
+ (id)feedRangeWithMaxOrder:(unsigned long long)arg1 minOrder:(unsigned long long)arg2;
+ (id)feedRangeWithTop:(id)arg1 bottom:(id)arg2;

- (void).cxx_destruct;
- (id)bottom;
- (BOOL)containsCursor:(id)arg1;
- (BOOL)containsFeedRange:(id)arg1;
- (BOOL)containsOrder:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateRange;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)feedRangeByIntersectingWithRange:(id)arg1;
- (id)feedRangeByUnioningWithRange:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)intersectsOrAdjoinsRange:(id)arg1;
- (BOOL)intersectsRange:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)reachesBottomOfFeed;
- (BOOL)reachesTopOfFeed;
- (void)setBottom:(id)arg1;
- (void)setTop:(id)arg1;
- (id)top;

@end
