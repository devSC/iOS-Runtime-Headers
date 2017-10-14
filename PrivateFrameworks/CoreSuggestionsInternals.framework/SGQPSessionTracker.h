/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGQPSessionTracker : NSObject {
    SGAppleDirectory * _appleDirectory;
    PMLAWDSessionTracker * _awdSessionTracker;
    NSDictionary * _categoryMap;
    PMLHashingVectorizer * _vectorizer;
}

+ (id)_normalizeSearchQueryIntoCategory:(id)arg1;
+ (id)_phoneOrEmailFromConversationId:(id)arg1;
+ (id)_stringConversationFromMessages:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_isAppleInternalConversation:(id)arg1;
- (id)init;
- (id)initWithAWDTracker:(id)arg1 appleDirectory:(id)arg2;
- (void)trackSession:(id)arg1 withEngagedCategory:(id)arg2;

@end
