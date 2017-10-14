/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSTextPreProcessorRule : NSObject {
    BOOL  _caseSensitive;
    BOOL  _eatPunctuation;
    NSString * _matchPattern;
    NSString * _replacement;
}

- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)matchedString:(id)arg1 forTokenInRange:(struct { int x1; int x2; }*)arg2;

@end
