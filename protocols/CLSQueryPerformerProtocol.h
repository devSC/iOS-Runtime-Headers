/* Generated by RuntimeBrowser.
 */

@protocol CLSQueryPerformerProtocol <NSObject>

@required

+ (unsigned int)numberOfRegionsPerBatch;
+ (id)queryForRegions:(NSArray *)arg1;
+ (BOOL)shouldQueryItemsForRegion:(CLCircularRegion *)arg1 selectedRegions:(NSArray *)arg2;

- (void)cacheItems:(NSArray *)arg1;
- (void)cancel;
- (BOOL)isCancelled;
- (NSArray *)regions;
- (void)submitWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
