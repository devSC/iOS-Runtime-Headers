/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKColor : NSObject <NSCopying> {
    UIColor * _color;
    int  _colorType;
    NSArray * _gradientColors;
    int  _gradientDirectionType;
    NSArray * _gradientPoints;
    int  _gradientType;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) int colorType;
@property (nonatomic, copy) NSArray *gradientColors;
@property (nonatomic) int gradientDirectionType;
@property (nonatomic, readonly, copy) NSArray *gradientPoints;
@property (nonatomic) int gradientType;

+ (id)colorMap;
+ (void)registerColorNameMap:(id)arg1;

- (void).cxx_destruct;
- (id)color;
- (int)colorType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)gradientColors;
- (int)gradientDirectionType;
- (id)gradientPoints;
- (int)gradientType;
- (id)initWithColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColorType:(int)arg1;
- (void)setGradientColors:(id)arg1;
- (void)setGradientColors:(id)arg1 andPoints:(id)arg2;
- (void)setGradientDirectionType:(int)arg1;
- (void)setGradientType:(int)arg1;

@end
