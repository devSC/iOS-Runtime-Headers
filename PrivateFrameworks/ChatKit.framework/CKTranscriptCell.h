/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptCell : CKEditableCollectionViewCell {
    float  _associatedItemOffset;
    float  _drawerPercentRevealed;
    BOOL  _orientation;
    BOOL  _wantsDrawerLayout;
}

@property (nonatomic) float associatedItemOffset;
@property (nonatomic) float drawerPercentRevealed;
@property (nonatomic) BOOL orientation;
@property (nonatomic) BOOL wantsDrawerLayout;

- (void)addFilter:(id)arg1;
- (float)associatedItemOffset;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (float)drawerPercentRevealed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)layoutSubviewsForDrawer;
- (BOOL)orientation;
- (void)performHide:(id /* block */)arg1;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performRemoval:(id /* block */)arg1;
- (void)performReveal:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setAssociatedItemOffset:(float)arg1;
- (void)setDrawerPercentRevealed:(float)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setWantsDrawerLayout:(BOOL)arg1;
- (BOOL)wantsDrawerLayout;

@end
