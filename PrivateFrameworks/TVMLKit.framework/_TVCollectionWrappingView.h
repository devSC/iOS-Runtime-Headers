/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVCollectionWrappingView : UIView <TVRowHosting> {
    float  _collectionCenteredPadding;
    _TVCollectionView * _collectionView;
    struct { 
        BOOL respondsToAugmentedSelectionFrameForFrame; 
    }  _collectionViewFlags;
    BOOL  _headerCanBecomeFocused;
    BOOL  _headerFocused;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _headerFrame;
    BOOL  _headerHidden;
    float  _headerSelectionMargin;
    UIView * _headerView;
    UIView * _selectingView;
}

@property (nonatomic) float collectionCenteredPadding;
@property (nonatomic, retain) _TVCollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL headerCanBecomeFocused;
@property (getter=isHeaderFocused, nonatomic) BOOL headerFocused;
@property (getter=isHeaderHidden, nonatomic) BOOL headerHidden;
@property (nonatomic) float headerSelectionMargin;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, readonly) BOOL shouldBindRowsTogether;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureHeaderView;
- (id)_currentHeaderView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_headerFrameForAuxiliarySelection;
- (void)_reevaluateAuxiliarySelection;
- (float)collectionCenteredPadding;
- (id)collectionView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)headerCanBecomeFocused;
- (float)headerSelectionMargin;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isHeaderFocused;
- (BOOL)isHeaderHidden;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (id)rowMetricsForExpectedWidth:(float)arg1 firstItemRowIndex:(int*)arg2;
- (void)setCollectionCenteredPadding:(float)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setHeaderCanBecomeFocused:(BOOL)arg1;
- (void)setHeaderFocused:(BOOL)arg1;
- (void)setHeaderHidden:(BOOL)arg1;
- (void)setHeaderSelectionMargin:(float)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;
- (BOOL)shouldBindRowsTogether;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
