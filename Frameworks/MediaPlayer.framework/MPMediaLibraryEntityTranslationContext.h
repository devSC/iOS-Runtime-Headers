/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryEntityTranslationContext : NSObject {
    NSArray * _allowedItemIdentifiers;
    unsigned int  _filteringOptions;
    MPMediaLibrary * _mediaLibrary;
    MPModelKind * _modelKind;
    BOOL  _multiQuery;
    NSArray * _scopedContainers;
}

@property (nonatomic, retain) NSArray *allowedItemIdentifiers;
@property (nonatomic) unsigned int filteringOptions;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, retain) MPModelKind *modelKind;
@property (getter=isMultiQuery, nonatomic) BOOL multiQuery;
@property (nonatomic, retain) NSArray *scopedContainers;

- (void).cxx_destruct;
- (id)allowedItemIdentifiers;
- (unsigned int)filteringOptions;
- (BOOL)isMultiQuery;
- (id)mediaLibrary;
- (id)modelKind;
- (id)scopedContainers;
- (void)setAllowedItemIdentifiers:(id)arg1;
- (void)setFilteringOptions:(unsigned int)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setModelKind:(id)arg1;
- (void)setMultiQuery:(BOOL)arg1;
- (void)setScopedContainers:(id)arg1;

@end
