/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABEKParticipantPredicate : CNPredicate <CNiOSContactPredicate> {
    NSURL * _URL;
    NSString * _customDescription;
    NSString * _emailAddress;
    NSString * _name;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *customDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *emailAddress;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (id)URL;
- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id*)arg3 options:(unsigned int)arg4 error:(struct __CFError {}**)arg5;
- (BOOL)cn_supportsNativeSorting;
- (id)customDescription;
- (void)dealloc;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 URL:(id)arg2 emailAddress:(id)arg3 customDescription:(id)arg4;
- (id)name;
- (void)setCustomDescription:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setName:(id)arg1;
- (void)setURL:(id)arg1;

@end
