/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDTimeNode : NSObject {
    NSDictionary * attributeMap;
    double  mAcceleration;
    int  mAnimationPresetClass;
    NSMutableArray * mChildTimeNodeList;
    double  mDeceleration;
    BOOL  mDisplay;
    double  mDuration;
    NSMutableArray * mEndTimeConditions;
    int  mFillType;
    NSString * mGroupId;
    BOOL  mHasAcceleration;
    BOOL  mHasDeceleration;
    BOOL  mHasDisplay;
    BOOL  mHasDuration;
    BOOL  mHasFillType;
    BOOL  mHasPresetId;
    BOOL  mHasPresetSubType;
    BOOL  mHasRepeatCount;
    BOOL  mHasRepeatDuration;
    BOOL  mHasSpeed;
    PDIterate * mIterate;
    int  mPresetId;
    int  mPresetSubType;
    int  mRepeatCount;
    int  mRepeatDuration;
    int  mRestartType;
    double  mSpeed;
    NSMutableArray * mStartTimeConditions;
    NSMutableArray * mSubTimeNodeList;
    int  mType;
}

@property (nonatomic, retain) NSDictionary *attributeMap;

- (double)acceleration;
- (int)animationPresetClass;
- (id)attributeMap;
- (id)childTimeNodeList;
- (void)dealloc;
- (double)deceleration;
- (id)description;
- (BOOL)display;
- (double)duration;
- (id)endTimeConditions;
- (int)fillType;
- (id)groupId;
- (BOOL)hasAcceleration;
- (BOOL)hasDeceleration;
- (BOOL)hasDisplay;
- (BOOL)hasDuration;
- (BOOL)hasFillType;
- (BOOL)hasPresetClass;
- (BOOL)hasPresetId;
- (BOOL)hasPresetSubType;
- (BOOL)hasRepeatCount;
- (BOOL)hasRepeatDuration;
- (BOOL)hasRestartType;
- (BOOL)hasSpeed;
- (BOOL)hasType;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)iterate;
- (int)presetId;
- (int)presetSubType;
- (int)repeatCount;
- (int)repeatDuration;
- (int)restartType;
- (void)setAcceleration:(double)arg1;
- (void)setAnimationPresetClass:(int)arg1;
- (void)setAttributeMap:(id)arg1;
- (void)setChildTimeNodeList:(id)arg1;
- (void)setDeceleration:(double)arg1;
- (void)setDisplay:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndTimeConditions:(id)arg1;
- (void)setFillType:(int)arg1;
- (void)setGroupId:(id)arg1;
- (void)setGroupIdValue:(int)arg1;
- (void)setIterate:(id)arg1;
- (void)setPresetId:(int)arg1;
- (void)setPresetSubType:(int)arg1;
- (void)setRepeatCount:(int)arg1;
- (void)setRepeatDuration:(int)arg1;
- (void)setRestartType:(int)arg1;
- (void)setSpeed:(double)arg1;
- (void)setStartTimeConditions:(id)arg1;
- (void)setSubTimeNodeList:(id)arg1;
- (void)setType:(int)arg1;
- (double)speed;
- (id)startTimeConditions;
- (id)subTimeNodeList;
- (int)type;
- (long)writeDuration;
- (long)writeRepeatCount;

@end
