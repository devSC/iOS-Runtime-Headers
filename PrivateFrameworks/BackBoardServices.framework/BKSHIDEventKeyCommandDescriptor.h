/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventKeyCommandDescriptor : BKSHIDEventDescriptor {
    NSString * _commandModifiedInput;
    NSString * _input;
    int  _modifierFlags;
    NSString * _shiftModifiedInput;
    NSString * _unmodifiedInput;
}

@property (nonatomic, retain) NSString *commandModifiedInput;
@property (nonatomic, readonly, retain) NSString *input;
@property (nonatomic, readonly) BOOL isTextualDescriptor;
@property (nonatomic, readonly) int modifierFlags;
@property (nonatomic, retain) NSString *shiftModifiedInput;
@property (nonatomic, retain) NSString *unmodifiedInput;

+ (BOOL)_keyCodeIsModifierKey:(long)arg1;
+ (BOOL)_shouldMatchKeyCommandsWithKeyCode:(long)arg1 gsKeyboard:(struct __GSKeyboard { }*)arg2;
+ (id)descriptorWithInput:(id)arg1 modifierFlags:(int)arg2;
+ (id)keyCommandDescriptorForEvent:(struct __IOHIDEvent { }*)arg1 gsKeyboard:(struct __GSKeyboard { }*)arg2;
+ (BOOL)supportsSecureCoding;

- (id)commandModifiedInput;
- (void)dealloc;
- (int)describes:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 modifierFlags:(int)arg2;
- (id)input;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTextualDescriptor;
- (int)modifierFlags;
- (void)setCommandModifiedInput:(id)arg1;
- (void)setShiftModifiedInput:(id)arg1;
- (void)setUnmodifiedInput:(id)arg1;
- (id)shiftModifiedInput;
- (id)unmodifiedInput;

@end
