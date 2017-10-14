/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {
    int  _fingerID;
    int  _forcedKeyCode;
    struct CGPoint { 
        float x; 
        float y; 
    }  _location;
    int  _pathIndex;
    float  _radius;
    int  _stage;
    double  _timestamp;
}

@property (nonatomic, readonly) int fingerID;
@property (nonatomic, readonly) int forcedKeyCode;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } location;
@property (nonatomic, readonly) int pathIndex;
@property (nonatomic, readonly) float radius;
@property (nonatomic, readonly) int stage;
@property (nonatomic, readonly) double timestamp;

+ (BOOL)supportsSecureCoding;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3 timestamp:(double)arg4 pathIndex:(int)arg5 fingerID:(int)arg6 forcedKeyCode:(int)arg7;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3 timestamp:(double)arg4 pathIndex:(int)arg5 forcedKeyCode:(int)arg6;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)fingerID;
- (int)forcedKeyCode;
- (id)initWithCoder:(id)arg1;
- (id)initWithStage:(int)arg1 location:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3 timestamp:(double)arg4 pathIndex:(int)arg5 fingerID:(int)arg6 forcedKeyCode:(int)arg7;
- (struct CGPoint { float x1; float x2; })location;
- (int)pathIndex;
- (float)radius;
- (id)shortDescription;
- (int)stage;
- (double)timestamp;

@end
