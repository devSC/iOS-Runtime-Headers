/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSolarPath : NSObject {
    float  _altitude;
    UIBezierPath * _bezierPath;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _bounds;
    struct CGPoint { 
        float x; 
        float y; 
    }  _points;
    NTKSolarTimeModel * _solarTimeModel;
    BOOL  _usePlaceholderData;
    BOOL  _verticallyFitsPathToBounds;
}

@property (nonatomic, readonly) UIBezierPath *bezierPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) NTKSolarTimeModel *solarTimeModel;
@property (nonatomic, readonly) BOOL verticallyFitsPathToBounds;

- (void).cxx_destruct;
- (id)_computeSolarPath;
- (float)altitudeAtPercentage:(float)arg1;
- (float)altitudeAtX:(float)arg1;
- (id)bezierPath;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 solarTimeModel:(id)arg2 verticallyFitsPathToBounds:(BOOL)arg3 usePlaceholderData:(BOOL)arg4;
- (id)solarTimeModel;
- (BOOL)verticallyFitsPathToBounds;

@end
