/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCategoryValueFilter : _HKFilter {
    NSNumber * _comparisonValue;
    HKCategoryType * _dataType;
    unsigned int  _operatorType;
}

@property (nonatomic, readonly) NSNumber *comparisonValue;
@property (nonatomic, readonly) HKCategoryType *dataType;
@property (nonatomic, readonly) unsigned int operatorType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned int)arg1 comparisonValue:(id)arg2 dataType:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)comparisonValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)operatorType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
