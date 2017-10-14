/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSampleTypesDeletionEntry : HDJournalEntry {
    NSNumber * _sourceID;
    NSSet * _types;
}

@property (nonatomic, copy) NSNumber *sourceID;
@property (nonatomic, retain) NSSet *types;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceID:(id)arg1 types:(id)arg2;
- (void)setSourceID:(id)arg1;
- (void)setTypes:(id)arg1;
- (id)sourceID;
- (id)types;

@end
