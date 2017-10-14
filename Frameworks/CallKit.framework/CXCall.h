/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCall : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    BOOL  _hasConnected;
    BOOL  _hasEnded;
    BOOL  _onHold;
    BOOL  _outgoing;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) BOOL hasEnded;
@property (getter=isOnHold, nonatomic) BOOL onHold;
@property (getter=isOutgoing, nonatomic) BOOL outgoing;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasConnected;
- (BOOL)hasEnded;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCall:(id)arg1;
- (BOOL)isOnHold;
- (BOOL)isOutgoing;
- (void)setHasConnected:(BOOL)arg1;
- (void)setHasEnded:(BOOL)arg1;
- (void)setOnHold:(BOOL)arg1;
- (void)setOutgoing:(BOOL)arg1;
- (void)setUUID:(id)arg1;

@end
