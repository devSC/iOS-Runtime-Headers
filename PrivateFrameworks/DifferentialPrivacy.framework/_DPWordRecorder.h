/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPWordRecorder : NSObject {
    <_DPDataRecorder><_DPDataRecorderKeyProperties> * _recorder;
    unsigned int  _wordFragmentWidth;
}

@property (nonatomic, readonly) <_DPDataRecorder><_DPDataRecorderKeyProperties> *recorder;
@property (nonatomic, readonly) unsigned int wordFragmentWidth;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(BOOL)arg3;
- (BOOL)record:(id)arg1;
- (id)recorder;
- (unsigned int)wordFragmentWidth;

@end
