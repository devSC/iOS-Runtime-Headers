/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSData, NSObject<OS_dispatch_semaphore>;

@interface _UIDecompressionInfo : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    BOOL decompressionComplete;
    NSData *imageData;
    unsigned long jpegDecodeRequestID;
    } maxSize;
    BOOL metadataComplete;
    NSObject<OS_dispatch_semaphore> *metadataSemaphore;
    int renderingIntent;
    NSObject<OS_dispatch_semaphore> *syncSemaphore;
}

- (void)dealloc;
- (id)initWithData:(id)arg1 maxSize:(struct CGSize { float x1; float x2; })arg2 renderingIntent:(int)arg3;

@end