/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPrepareTransactionDetailsRequest : PKPaymentWebServiceRequest {
    NSDecimalNumber * _amount;
    NSString * _currencyCode;
    PKPaymentMerchantSession * _merchantSession;
    NSString * _secureElementIdentifier;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, retain) PKPaymentMerchantSession *merchantSession;
@property (nonatomic, copy) NSString *secureElementIdentifier;

+ (id)serverSupportedLanguages;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)amount;
- (id)currencyCode;
- (id)initWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 amount:(id)arg3 currencyCode:(id)arg4;
- (id)merchantSession;
- (id)secureElementIdentifier;
- (void)setAmount:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setMerchantSession:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;

@end
