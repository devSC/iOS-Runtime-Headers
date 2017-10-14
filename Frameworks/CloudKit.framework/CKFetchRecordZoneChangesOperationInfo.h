/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordZoneChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    int  _changeTypes;
    BOOL  _fetchAllChanges;
    NSDictionary * _optionsByRecordZoneID;
    NSArray * _recordZoneIDs;
    BOOL  _shouldFetchAssetContents;
}

@property (nonatomic) int changeTypes;
@property (nonatomic) BOOL fetchAllChanges;
@property (nonatomic, retain) NSDictionary *optionsByRecordZoneID;
@property (nonatomic, retain) NSArray *recordZoneIDs;
@property (nonatomic) BOOL shouldFetchAssetContents;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)changeTypes;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)fetchAllChanges;
- (id)initWithCoder:(id)arg1;
- (id)optionsByRecordZoneID;
- (id)recordZoneIDs;
- (void)setChangeTypes:(int)arg1;
- (void)setFetchAllChanges:(BOOL)arg1;
- (void)setOptionsByRecordZoneID:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setShouldFetchAssetContents:(BOOL)arg1;
- (BOOL)shouldFetchAssetContents;

@end
