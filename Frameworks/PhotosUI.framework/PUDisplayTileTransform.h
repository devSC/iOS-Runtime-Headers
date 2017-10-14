/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDisplayTileTransform : NSObject <NSCopying> {
    struct CGSize { 
        float width; 
        float height; 
    }  __displaySize;
    float  __initialScale;
    struct CGSize { 
        float width; 
        float height; 
    }  __initialSize;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _affineTransform;
    BOOL  _hasUserInput;
    struct CGSize { 
        float width; 
        float height; 
    }  _transformPadding;
    NSString * _userInputOriginIdentifier;
}

@property (setter=_setDisplaySize:, nonatomic) struct CGSize { float x1; float x2; } _displaySize;
@property (setter=_setInitialScale:, nonatomic) float _initialScale;
@property (setter=_setInitialSize:, nonatomic) struct CGSize { float x1; float x2; } _initialSize;
@property (setter=_setAffineTransform:, nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } affineTransform;
@property (setter=_setHasUserInput:, nonatomic) BOOL hasUserInput;
@property (nonatomic, readonly) PUModelTileTransform *modelTileTransform;
@property (setter=_setTransformPadding:, nonatomic) struct CGSize { float x1; float x2; } transformPadding;
@property (setter=_setUserInputOriginIdentifier:, nonatomic, copy) NSString *userInputOriginIdentifier;

+ (id)displayTileTransformWithModelTileTransform:(id)arg1 initialScale:(float)arg2 initialSize:(struct CGSize { float x1; float x2; })arg3 displaySize:(struct CGSize { float x1; float x2; })arg4 secondaryDisplayTileTransform:(id)arg5;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_displaySize;
- (float)_initialScale;
- (struct CGSize { float x1; float x2; })_initialSize;
- (void)_setAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)_setDisplaySize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setHasUserInput:(BOOL)arg1;
- (void)_setInitialScale:(float)arg1;
- (void)_setInitialSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setTransformPadding:(struct CGSize { float x1; float x2; })arg1;
- (void)_setUserInputOriginIdentifier:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)hasUserInput;
- (id)init;
- (id)modelTileTransform;
- (id)newDisplayTileTransformWithUserAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 userInputOriginIdentifier:(id)arg2;
- (struct CGSize { float x1; float x2; })transformPadding;
- (id)userInputOriginIdentifier;

@end
