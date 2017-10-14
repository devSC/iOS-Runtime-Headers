/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBTextWriter : NSObject {
    NSMutableDictionary * _cachedObjectTypes;
    NSMutableString * _dest;
    int  _indent;
    BOOL  _newlinesPrinted;
}

- (void)_closeBrace;
- (void)_indent;
- (void)_openBrace;
- (void)_outdent;
- (void)_printLine:(BOOL)arg1 format:(id)arg2;
- (void)_printNewlines;
- (BOOL)_write:(id)arg1;
- (void)_writePropertyAndValue:(id)arg1 forObject:(id)arg2;
- (void)_writeResult:(id)arg1 forProperty:(id)arg2 bracePrefix:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)reset;
- (id)string;
- (BOOL)write:(id)arg1;

@end
