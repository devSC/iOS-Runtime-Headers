/* Generated by RuntimeBrowser.
 */

@protocol UICollectionViewDelegateFlowLayout <UICollectionViewDelegate>

@optional

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForSectionAtIndex:(int)arg3;
- (float)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3;
- (float)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;

@end
