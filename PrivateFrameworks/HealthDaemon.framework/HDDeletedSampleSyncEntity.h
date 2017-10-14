/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDeletedSampleSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_baseDataObjectPredicate;
+ (id)_companionNanoSyncPredicateConjunctionForSession:(id)arg1;
+ (BOOL)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;
+ (unsigned int)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)syncEntityType;

@end
