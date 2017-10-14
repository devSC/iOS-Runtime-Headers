/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFitnessFriendsRelationshipEvent : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _anchor;
    NSDate * _timestamp;
    int  _type;
    int  _version;
}

@property (nonatomic) unsigned int anchor;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic) int type;
@property (nonatomic) int version;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)anchor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAnchor:(unsigned int)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setType:(int)arg1;
- (void)setVersion:(int)arg1;
- (id)timestamp;
- (int)type;
- (int)version;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)_fitnessFriendRelationshipEventWithCodable:(id)arg1;
+ (id)fitnessFriendRelationshipEventWithRecord:(id)arg1;

- (id)_codableRelationshipEvent;

@end
