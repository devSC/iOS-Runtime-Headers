/* Generated by RuntimeBrowser.
 */

@protocol CDPRecoveryKeyValidator <NSObject>

@required

- (void)confirmRecoveryKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (BOOL)confirmRecoveryKey:(NSString *)arg1 error:(id*)arg2;
- (void)generateRecoveryKey:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (NSString *)generateRecoveryKeyWithError:(id*)arg1;

@end
