/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTDateLabel : UIView {
    NSArray * _currentConstraints;
    NSDate * _date;
    UILabel * _dateLabel;
    UIFont * _font;
    BOOL  _shouldAddLayoutConstraints;
    UIColor * _textColor;
    UIFont * _timeDesignatorFont;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) NSArray *currentConstraints;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, readonly) UILabel *dateLabel;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) float lastBaselineFrameOriginY;
@property (nonatomic) BOOL shouldAddLayoutConstraints;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIFont *timeDesignatorFont;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (void)_noteLayoutChange;
- (void)_updateDateString;
- (id)currentConstraints;
- (id)date;
- (id)dateLabel;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)lastBaselineFrameOriginY;
- (void)setCurrentConstraints:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLastBaselineFrameOriginY:(float)arg1;
- (void)setShouldAddLayoutConstraints:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeDesignatorFont:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (BOOL)shouldAddLayoutConstraints;
- (id)textColor;
- (id)timeDesignatorFont;
- (id)timeZone;
- (void)updateConstraints;
- (id)viewForBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
