/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCachedDrawableStyle : NSObject {
    int  mFillCategory;
    unsigned int  mFillIndex;
    unsigned char  mReflectionOpacity;
    unsigned int  mShadowIndex;
    unsigned int  mStrokeIndex;
    unsigned int  mTextStyleIndex;
}

@property (nonatomic, readonly) int fillCategory;
@property (nonatomic, readonly) unsigned int fillIndex;
@property (nonatomic, readonly) unsigned char reflectionOpacity;
@property (nonatomic, readonly) unsigned int shadowIndex;
@property (nonatomic, readonly) unsigned int strokeIndex;
@property (nonatomic, readonly) unsigned int textStyleIndex;

- (int)fillCategory;
- (unsigned int)fillIndex;
- (unsigned int)hash;
- (id)initWithFillCategory:(int)arg1 mFillIndex:(unsigned int)arg2 strokeIndex:(unsigned int)arg3 shadowIndex:(unsigned int)arg4 reflectionOpacity:(unsigned char)arg5 textStyleIndex:(unsigned int)arg6;
- (BOOL)isEqual:(id)arg1;
- (unsigned char)reflectionOpacity;
- (unsigned int)shadowIndex;
- (unsigned int)strokeIndex;
- (unsigned int)textStyleIndex;

@end
