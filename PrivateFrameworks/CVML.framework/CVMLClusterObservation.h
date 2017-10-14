/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLClusterObservation : CVMLObservation {
    NSData * _clusterState;
    NSSet * _clusteredFaceIds;
    NSArray * _clusters;
    NSNumber * _distance;
    NSDictionary * _distancesById;
    NSArray * _groupedClusteredFaceIdsForCluster;
    NSArray * _suggestionsForCluster;
}

@property (retain) NSData *clusterState;
@property (retain) NSSet *clusteredFaceIds;
@property (retain) NSArray *clusters;
@property (retain) NSNumber *distance;
@property (retain) NSDictionary *distancesById;
@property (retain) NSArray *groupedClusteredFaceIdsForCluster;
@property (retain) NSArray *suggestionsForCluster;

- (void).cxx_destruct;
- (id)clusterState;
- (id)clusteredFaceIds;
- (id)clusters;
- (id)distance;
- (id)distancesById;
- (id)groupedClusteredFaceIdsForCluster;
- (void)setClusterState:(id)arg1;
- (void)setClusteredFaceIds:(id)arg1;
- (void)setClusters:(id)arg1;
- (void)setDistance:(id)arg1;
- (void)setDistancesById:(id)arg1;
- (void)setGroupedClusteredFaceIdsForCluster:(id)arg1;
- (void)setSuggestionsForCluster:(id)arg1;
- (id)suggestionsForCluster;

@end
