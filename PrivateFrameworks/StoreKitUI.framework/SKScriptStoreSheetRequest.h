/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKScriptStoreSheetRequest : SUScriptObject {
    int  _pageStyle;
    WebScriptObject * _productParameters;
    NSString * _productURL;
}

@property int productPageStyle;
@property (readonly) int productPageStyleAutomatic;
@property (readonly) int productPageStyleBanner;
@property (readonly) int productPageStylePad;
@property (readonly) int productPageStylePhone;
@property (retain) WebScriptObject *productParameters;
@property (retain) NSString *productURL;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)_className;
- (id)_safeValueForValue:(id)arg1;
- (id)attributeKeys;
- (id)newNativeStorePageRequest;
- (int)productPageStyle;
- (int)productPageStyleAutomatic;
- (int)productPageStyleBanner;
- (int)productPageStylePad;
- (int)productPageStylePhone;
- (id)productParameters;
- (id)productURL;
- (id)scriptAttributeKeys;
- (void)setProductPageStyle:(int)arg1;
- (void)setProductParameters:(id)arg1;
- (void)setProductURL:(id)arg1;

@end
