/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor {
    unsigned int  _biometricEventType;
}

@property (nonatomic, readonly) unsigned int biometricEventType;

+ (id)descriptorWithBiometricEventType:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;

- (unsigned int)biometricEventType;
- (BOOL)describes:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithBiometricEventType:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
