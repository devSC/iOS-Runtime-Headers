/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCGreatStoriesYouMissedGroupEmitter : NSObject <FCFeedGroupEmitting> {
    <FCContentContext> * _context;
    unsigned int  _limit;
}

@property (nonatomic, retain) <FCContentContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSString *groupEmitterIdentifier;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isRequiredByFollowingEmitters;
@property (nonatomic) unsigned int limit;
@property (nonatomic, readonly) BOOL requiresForYouCatchUpOperation;
@property (readonly) Class superclass;

+ (BOOL)greatStoriesMayEmit:(id)arg1;
+ (void)setShouldEmitOverride:(BOOL)arg1;

- (void).cxx_destruct;
- (BOOL)canEmitGroupsWithType:(int)arg1;
- (id)context;
- (BOOL)emitsSingletonGroups;
- (id)groupEmitterIdentifier;
- (unsigned int)limit;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (BOOL)requiresForYouCatchUpOperation;
- (void)setContext:(id)arg1;
- (void)setLimit:(unsigned int)arg1;
- (BOOL)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (BOOL)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;

@end
