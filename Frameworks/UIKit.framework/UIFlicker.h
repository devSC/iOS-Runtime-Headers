/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFlicker : NSObject {
    float  _delay;
    id  _delegate;
    int  _mouseDraggedCount;
    int  _mouseUpCount;
    struct CGPoint { 
        float x; 
        float y; 
    }  _offset;
    struct CGPoint { 
        float x; 
        float y; 
    }  _startLocation;
    UIView * _target;
    int  _throwIterations;
}

- (id)init;
- (struct CGPoint { float x1; float x2; })offset;
- (void)run;
- (void)setDelay:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIterations:(int)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStartLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTarget:(id)arg1;

@end
