/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate * _private;
}

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (void)advance;
- (BOOL)atEnd;
- (id)currentNode;
- (id)currentRange;
- (id)currentText;
- (unsigned int)currentTextLength;
- (const unsigned short*)currentTextPointer;
- (void)dealloc;
- (id)initWithRange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

+ (id)dd_iteratorForDocument:(id)arg1;

- (BOOL)dd_checkCurrentRangeAgainstString:(struct __CFString { }*)arg1;
- (id)dd_collectDDRangesForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryFragment {} *x2; int x3; int x4; int (*x5)(); void *x6; }*)arg1 forResults:(id)arg2;
- (id)dd_doUrlificationForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryFragment {} *x2; int x3; int x4; int (*x5)(); void *x6; }*)arg1 forResults:(id)arg2 referenceDate:(id)arg3 document:(id)arg4 DOMWasModified:(BOOL*)arg5 relevantResults:(id*)arg6 URLificationBlock:(id /* block */)arg7;
- (struct __DDScanQuery { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryFragment {} *x2; int x3; int x4; int (*x5)(); void *x6; }*)dd_newQueryStopRange:(id*)arg1;

@end
