/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasViewElementViewController : VideosExtrasElementViewController {
    BOOL  _embedded;
    IKViewElement * _viewElement;
}

@property (nonatomic) BOOL embedded;
@property (nonatomic, readonly) BOOL matchParentHeight;
@property (nonatomic, readonly) int preferredLayoutAttribute;
@property (nonatomic, readonly) id preferredLayoutGuide;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (BOOL)embedded;
- (id)initWithViewElement:(id)arg1;
- (BOOL)matchParentHeight;
- (int)preferredLayoutAttribute;
- (id)preferredLayoutGuide;
- (void)setEmbedded:(BOOL)arg1;
- (void)setViewElement:(id)arg1;
- (void)viewDidLoad;
- (id)viewElement;

@end
