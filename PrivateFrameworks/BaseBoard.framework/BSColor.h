/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSColor : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    float  _alpha;
    float  _blue;
    struct CGColor { } * _colorRef;
    float  _green;
    float  _red;
}

@property (nonatomic, readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) float alpha;
@property (nonatomic, readonly) float blue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float green;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float red;
@property (readonly) Class superclass;

+ (id)blackColor;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (BOOL)supportsSecureCoding;

- (struct CGColor { }*)CGColor;
- (float)alpha;
- (float)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (float)green;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToColor:(id)arg1;
- (float)red;

@end
