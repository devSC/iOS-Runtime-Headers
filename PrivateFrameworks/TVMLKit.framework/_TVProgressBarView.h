/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVProgressBarView : UIView {
    UIColor * _completeTintColor;
    float  _cornerRadius;
    float  _progress;
    UIColor * _progressTintColor;
    BOOL  _useMaterial;
}

@property (nonatomic, retain) UIColor *completeTintColor;
@property (nonatomic) float cornerRadius;
@property (nonatomic) float progress;
@property (nonatomic, retain) UIColor *progressTintColor;
@property (nonatomic) BOOL useMaterial;

- (void).cxx_destruct;
- (id)completeTintColor;
- (float)cornerRadius;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)progress;
- (id)progressTintColor;
- (void)setCompleteTintColor:(id)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressTintColor:(id)arg1;
- (void)setUseMaterial:(BOOL)arg1;
- (BOOL)useMaterial;

@end
