/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATArbitrator : NSObject {
    NSMutableDictionary * mRegistrationByKey;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (void)registerResource:(id)arg1 forKey:(id)arg2;
- (void)registerResource:(id)arg1 forKey:(id)arg2 maxConcurrentCount:(unsigned int)arg3;
- (id)resourceForKey:(id)arg1 exclusive:(BOOL)arg2;
- (id)resourcesForKeys:(id)arg1 exclusive:(BOOL)arg2;
- (void)stopWaiting:(id)arg1;
- (unsigned int)unregisterResourceForKey:(id)arg1;
- (id)waitForResourcesForKeys:(id)arg1 exclusive:(BOOL)arg2 delegateQueue:(id)arg3 completionBlock:(id /* block */)arg4;

@end
