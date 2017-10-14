/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarResourceCacheKey : NSObject {
    struct BarExtrusionSetting { 
        float size; 
        BOOL hasTopBevel; 
        BOOL hasBottomBevel; 
        BOOL isCylindrical; 
        BOOL isStackedBar; 
        struct BarExtrusionDetails { 
            struct BarExtrusionCrossSectionDetails { 
                float detail; 
                float tension; 
                float adaptiveThreshold; 
                float creaseAngle; 
                int crossType; 
            } crossSection; 
            struct BarExtrusionSpineDetails { 
                float bevelHeight; 
                int bevelSlices; 
                int stride; 
                float creaseAngle; 
            } spine; 
        } details; 
    }  mSetting;
}

+ (id)keyWithExtrusionSetting:(const struct BarExtrusionSetting { float x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; int x_2_2_2; int x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; }*)arg1;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (id)initWithExtrusionSetting:(const struct BarExtrusionSetting { float x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; int x_2_2_2; int x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; }*)arg1;
- (BOOL)isEqual:(id)arg1;

@end
