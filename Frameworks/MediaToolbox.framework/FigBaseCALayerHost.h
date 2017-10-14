/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigBaseCALayerHost : CALayerHost {
    BOOL  _preventsChangesToSublayerHierarchy;
}

@property (nonatomic) BOOL preventsChangesToSublayerHierarchy;

+ (id)defaultActionForKey:(id)arg1;

- (id)actionForKey:(id)arg1;
- (void)addSublayer:(id)arg1;
- (id)init;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (BOOL)preventsChangesToSublayerHierarchy;
- (void)removeFromSuperlayer;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setPreventsChangesToSublayerHierarchy:(BOOL)arg1;
- (void)setSublayers:(id)arg1;

@end
