/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailAttendeesListView : UIView <EKEventDetailAttendeesList> {
    NSArray * _accepted;
    NSArray * _declined;
    BOOL  _groupsNames;
    BOOL  _highlighted;
    UIColor * _highlightedTextColor;
    NSArray * _maybe;
    NSArray * _noReply;
    UIColor * _textColor;
    NSArray * _ungrouped;
    UIViewController * _viewController;
}

@property (nonatomic, retain) NSArray *accepted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *declined;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL groupsNames;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic, retain) NSArray *maybe;
@property (nonatomic, retain) NSArray *noReply;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) NSArray *ungrouped;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_drawColumnOfStrings:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 startingAtPoint:(struct CGPoint { float x1; float x2; })arg3 givenWidth:(float)arg4;
- (float)_heightForGroupOfAttendeeNames:(id)arg1;
- (float)_offsetFromOffsetToBaseline:(float)arg1 withFont:(id)arg2;
- (id)accepted;
- (id)declined;
- (void)drawInvitees:(id)arg1 withStatus:(id)arg2 startingAtPoint:(struct CGPoint { float x1; float x2; })arg3 givenWidth:(float)arg4;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)groupsNames;
- (id)highlightedTextColor;
- (BOOL)isHighlighted;
- (id)maybe;
- (id)noReply;
- (void)setAccepted:(id)arg1;
- (void)setDeclined:(id)arg1;
- (void)setGroupsNames:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setMaybe:(id)arg1;
- (void)setNoReply:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUngrouped:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setup;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)textColor;
- (id)ungrouped;
- (id)viewController;

@end
