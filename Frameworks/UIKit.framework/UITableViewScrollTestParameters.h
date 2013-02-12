/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UITableViewScrollTestParameters : NSObject {
    NSString *_currentTest;
    NSInteger _iterations;
    NSInteger _scrollLength;
    NSInteger _yDelta;
}

@property(retain) NSString *currentTest;
@property NSInteger iterations;
@property NSInteger scrollLength;
@property NSInteger yDelta;

- (id)currentTest;
- (void)dealloc;
- (id)initWithName:(id)arg1 iterations:(NSInteger)arg2 delta:(NSInteger)arg3 length:(NSInteger)arg4;
- (NSInteger)iterations;
- (NSInteger)scrollLength;
- (void)setCurrentTest:(id)arg1;
- (void)setIterations:(NSInteger)arg1;
- (void)setScrollLength:(NSInteger)arg1;
- (void)setYDelta:(NSInteger)arg1;
- (NSInteger)yDelta;

@end