/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _UTTypeQueryWithIdentifier : _UTTypeQuery {
    BOOL  _dynamic;
    NSString * _identifier;
    BOOL  _valid;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)_canResolveLocallyWithoutMappingDatabase;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getLocallyResolvedType:(id*)arg1 orErrorWithoutMappingDatabase:(id*)arg2;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
