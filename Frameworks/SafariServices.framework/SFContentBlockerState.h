/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFContentBlockerState : NSObject <NSSecureCoding> {
    BOOL  _enabled;
}

@property (getter=isEnabled, nonatomic) BOOL enabled;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledState:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;

@end
