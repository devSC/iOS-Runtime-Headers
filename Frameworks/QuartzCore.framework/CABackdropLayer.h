/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CABackdropLayer : CALayer

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } backdropRect;
@property BOOL captureOnly;
@property <CABackdropLayerDelegate><CALayerDelegate> *delegate;
@property BOOL disablesOccludedBackdropBlurs;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *groupName;
@property float marginWidth;
@property float scale;
@property double statisticsInterval;
@property (copy) NSString *statisticsType;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { struct Vec4<float> { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 4; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; struct Vec2<double> { double x_35_2_1; double x_35_2_2; } x_3_1_35; } x3; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; struct Atomic { struct { int x_1_2_1; } x_17_1_1; } x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backdropRect;
- (BOOL)captureOnly;
- (void)didChangeValueForKey:(id)arg1;
- (BOOL)disablesOccludedBackdropBlurs;
- (id)groupName;
- (BOOL)isEnabled;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (float)marginWidth;
- (float)scale;
- (void)setBackdropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCaptureOnly:(BOOL)arg1;
- (void)setDisablesOccludedBackdropBlurs:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setGroupName:(id)arg1;
- (void)setMarginWidth:(float)arg1;
- (void)setScale:(float)arg1;
- (void)setStatisticsInterval:(double)arg1;
- (void)setStatisticsType:(id)arg1;
- (double)statisticsInterval;
- (id)statisticsType;
- (id)statisticsValues;

@end
