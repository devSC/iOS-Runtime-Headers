/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableGradient : TSDGradient <TSDGradientStopContainer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TSUColor *firstColor;
@property (nonatomic, retain) NSArray *gradientStops;
@property (nonatomic) unsigned int gradientType;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isAdvancedGradient;
@property (nonatomic, retain) TSUColor *lastColor;
@property (nonatomic) float opacity;
@property (readonly) Class superclass;

- (void)evenlyDistributeStops;
- (void)insertGradientStop:(id)arg1;
- (id)insertStopAtFraction:(float)arg1;
- (id)insertStopAtFraction:(float)arg1 withColor:(id)arg2;
- (void)moveStopAtIndex:(unsigned int)arg1 toFraction:(float)arg2;
- (void)removeStop:(id)arg1;
- (id)removeStopAtIndex:(unsigned int)arg1;
- (void)reverseStopOrder;
- (void)setColorOfStopAtIndex:(unsigned int)arg1 toColor:(id)arg2;
- (void)setFirstColor:(id)arg1;
- (void)setFraction:(float)arg1 ofStopAtIndex:(unsigned long)arg2;
- (void)setGradientStops:(id)arg1;
- (void)setGradientType:(unsigned int)arg1;
- (void)setInflectionOfStopAtIndex:(unsigned int)arg1 toInflection:(float)arg2;
- (void)setIsAdvancedGradient:(BOOL)arg1;
- (void)setLastColor:(id)arg1;
- (void)setOpacity:(float)arg1;
- (void)swapStopAtIndex:(unsigned int)arg1 withStopAtIndex:(unsigned int)arg2;

@end
