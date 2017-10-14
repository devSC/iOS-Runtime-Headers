/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewList : NSObject <SKUICacheCoding> {
    NSDictionary * _dictionary;
    NSMutableArray * _reviews;
}

@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int fiveStarRatingCount;
@property (nonatomic, readonly) int fourStarRatingCount;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int numberOfPages;
@property (nonatomic, readonly) int oneStarRatingCount;
@property (nonatomic, readonly) int ratingCount;
@property (nonatomic, readonly) NSArray *reviews;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int threeStarRatingCount;
@property (nonatomic, readonly) int twoStarRatingCount;
@property (nonatomic, readonly) float userRating;
@property (nonatomic, readonly) NSURL *writeReviewURL;

- (void).cxx_destruct;
- (void)addReviews:(id)arg1;
- (id)cacheRepresentation;
- (int)fiveStarRatingCount;
- (int)fourStarRatingCount;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithReviewListDictionary:(id)arg1;
- (int)numberOfPages;
- (int)oneStarRatingCount;
- (int)ratingCount;
- (id)reviews;
- (int)threeStarRatingCount;
- (int)twoStarRatingCount;
- (float)userRating;
- (id)writeReviewURL;

@end
