/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutDimension : NSLayoutAnchor

- (id)anchorByAddingConstant:(float)arg1;
- (id)anchorByAddingDimension:(id)arg1;
- (id)anchorByMultiplyingByConstant:(float)arg1;
- (id)anchorBySubtractingDimension:(id)arg1;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(float)arg2;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3;
- (id)constraintEqualToConstant:(float)arg1;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3;
- (id)constraintGreaterThanOrEqualToConstant:(float)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3;
- (id)constraintLessThanOrEqualToConstant:(float)arg1;
- (BOOL)isCompatibleWithAnchor:(id)arg1;
- (id)minusDimension:(id)arg1;
- (id)plus:(float)arg1;
- (id)plusDimension:(id)arg1;
- (id)relationshipEqualToConstant:(float)arg1;
- (id)relationshipEqualToConstant:(float)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)relationshipGreaterThanOrEqualToConstant:(float)arg1;
- (id)relationshipGreaterThanOrEqualToConstant:(float)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)relationshipLessThanOrEqualToConstant:(float)arg1;
- (id)relationshipLessThanOrEqualToConstant:(float)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)times:(float)arg1;
- (BOOL)validateOtherAttribute:(int)arg1;

@end
