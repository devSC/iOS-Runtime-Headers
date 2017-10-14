/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation {
    NSData * _APDUTemplate;
    NSString * _PIN;
    int  _PINByteOffset;
    TKSmartCardPINFormat * _PINFormat;
    TKSmartCard * _smartCard;
}

@property (copy) NSData *APDUTemplate;
@property (copy) NSString *PIN;
@property int PINByteOffset;
@property (retain) TKSmartCardPINFormat *PINFormat;
@property (retain) TKSmartCard *smartCard;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)APDUTemplate;
- (id)PIN;
- (int)PINByteOffset;
- (id)PINFormat;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)finishWithError:(id*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAPDUTemplate:(id)arg1;
- (void)setPIN:(id)arg1;
- (void)setPINByteOffset:(int)arg1;
- (void)setPINFormat:(id)arg1;
- (void)setSmartCard:(id)arg1;
- (id)smartCard;

@end
