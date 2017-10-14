/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    NSDictionary * _dictionary;
    BOOL  _displaysNonForcedSubtitles;
    id  _groupID;
    id  _groupMediaType;
    NSString * _optionMediaType;
    AVWeakReference * _weakReferenceToGroup;
}

- (id)_groupID;
- (id)_groupMediaType;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (id)dictionary;
- (id)group;
- (unsigned int)hash;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPlayable;
- (id)locale;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;

@end
