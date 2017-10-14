/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParametersLocalitiesAndLandmarks : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
        unsigned int highlightDiff : 1; 
    }  _has;
    BOOL  _highlightDiff;
    int  _maxResults;
    NSString * _query;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) BOOL hasHighlightDiff;
@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic, readonly) BOOL hasQuery;
@property (nonatomic, readonly) BOOL hasViewportInfo;
@property (nonatomic) BOOL highlightDiff;
@property (nonatomic) int maxResults;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHighlightDiff;
- (BOOL)hasMaxResults;
- (BOOL)hasQuery;
- (BOOL)hasViewportInfo;
- (unsigned int)hash;
- (BOOL)highlightDiff;
- (BOOL)isEqual:(id)arg1;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (BOOL)readFrom:(id)arg1;
- (void)setHasHighlightDiff:(BOOL)arg1;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setHighlightDiff:(BOOL)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setQuery:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
