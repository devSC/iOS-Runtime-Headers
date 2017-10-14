/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideNodeSlideSpecificTableCounter : NSObject {
    unsigned int  _linkCount;
    NSUUID * _tableInfoUUID;
}

@property (nonatomic, readonly) unsigned int linkCount;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, retain) NSUUID *tableInfoUUID;

- (void)dealloc;
- (void)decrement;
- (id)description;
- (void)increment;
- (id)initWithTableInfoUUID:(id)arg1 andLinkCount:(unsigned int)arg2;
- (unsigned int)linkCount;
- (void)setTableInfoUUID:(id)arg1;
- (id)stringValue;
- (id)tableInfoUUID;

@end