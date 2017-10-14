/* Generated by RuntimeBrowser.
 */

@protocol CAMIrisRequest <NSObject>

@required

- (NSString *)irisIdentifierForOriginal:(BOOL)arg1;
- (NSURL *)irisLocalVideoDestinationURLForOriginal:(BOOL)arg1;
- (NSString *)irisStillImagePersistenceUUIDForOriginal:(BOOL)arg1;
- (NSString *)irisVideoPersistenceUUIDForOriginal:(BOOL)arg1;
- (BOOL)isOriginalLocalVideoDestinationURL:(NSURL *)arg1;
- (BOOL)shouldPersistToLivePhotoDirectory;

@end
