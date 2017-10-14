/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoder> {
    MTLToolsPointerArray * _renderCommandEncoders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned int hash;
@property (copy) NSString *label;
@property (nonatomic, readonly) MTLToolsPointerArray *renderCommandEncoders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)renderCommandEncoder;
- (id)renderCommandEncoders;
- (void)setColorStoreAction:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setDepthStoreAction:(unsigned int)arg1;
- (void)setStencilStoreAction:(unsigned int)arg1;

@end
