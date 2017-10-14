/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFAction : NSObject <NSCopying> {
    PDFActionPrivate * _private;
}

+ (id)actionWithActionDictionary:(struct CGPDFDictionary { }*)arg1 forDocument:(id)arg2 forPage:(id)arg3;
+ (Class)classForActionDictionary:(struct CGPDFDictionary { }*)arg1;

- (void).cxx_destruct;
- (id)baseURLForDocument:(id)arg1;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFDictionary { }*)createDictionaryRef;
- (id)description;
- (id)init;
- (id)initWithActionDictionary:(struct CGPDFDictionary { }*)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)nextActions;
- (void)setNextAction:(struct CGPDFDictionary { }*)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (void)setNextActions:(id)arg1;
- (void)setNextActions:(struct CGPDFArray { }*)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (void)setType:(id)arg1;
- (id)toolTip;
- (id)toolTipNoLabel;
- (id)type;

@end
