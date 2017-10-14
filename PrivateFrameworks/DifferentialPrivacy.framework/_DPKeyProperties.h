/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPKeyProperties : NSObject {
    NSNumber * _acceptableError;
    _DPPrivacyBudget * _budget;
    unsigned int  _dataAlgorithm;
    unsigned int  _fragmentCount;
    unsigned int  _fragmentWidth;
    BOOL  _keyPatternsAllowed;
    NSString * _noiseDistribution;
    NSDictionary * _parameterDictionary;
    _DPValueRange * _possibleRange;
    NSNumber * _privacyParameter;
    unsigned int  _privatizationAlgorithm;
    NSString * _propertiesName;
    NSString * _serverAlgorithmString;
    unsigned int  _submissionPriority;
    unsigned int  _transport;
    _DPValueRange * _trimmedScale;
}

@property (nonatomic, readonly) NSNumber *acceptableError;
@property (nonatomic, readonly) _DPPrivacyBudget *budget;
@property (nonatomic, readonly) unsigned int dataAlgorithm;
@property (nonatomic, readonly) unsigned int fragmentCount;
@property (nonatomic, readonly) unsigned int fragmentWidth;
@property (nonatomic, readonly) BOOL keyPatternsAllowed;
@property (nonatomic, readonly, copy) NSString *noiseDistribution;
@property (nonatomic, readonly) NSDictionary *parameterDictionary;
@property (nonatomic, readonly) _DPValueRange *possibleRange;
@property (nonatomic, readonly) NSNumber *privacyParameter;
@property (nonatomic, readonly) unsigned int privatizationAlgorithm;
@property (nonatomic, readonly, copy) NSString *propertiesName;
@property (nonatomic, readonly, copy) NSString *serverAlgorithmString;
@property (nonatomic, readonly) unsigned int submissionPriority;
@property (nonatomic, readonly) unsigned int transport;
@property (nonatomic, readonly) _DPValueRange *trimmedScale;

+ (id)defaultPropertiesWithKey:(id)arg1;
+ (id)keyPropertiesForName:(id)arg1;
+ (id)keyPropertiesFromDictionary:(id)arg1;
+ (id)propertiesFromFile:(id)arg1;

- (void).cxx_destruct;
- (id)acceptableError;
- (id)budget;
- (unsigned int)dataAlgorithm;
- (id)description;
- (unsigned int)fragmentCount;
- (unsigned int)fragmentWidth;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (BOOL)keyPatternsAllowed;
- (id)noiseDistribution;
- (id)parameterDictionary;
- (id)possibleRange;
- (id)privacyParameter;
- (unsigned int)privatizationAlgorithm;
- (id)privatizationAlgorithmString;
- (id)propertiesName;
- (id)serverAlgorithmString;
- (unsigned int)submissionPriority;
- (unsigned int)transport;
- (id)trimmedScale;

@end
