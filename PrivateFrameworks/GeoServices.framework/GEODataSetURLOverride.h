/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSetURLOverride : PBCodable <NSCopying> {
    NSString * _addressCorrectionInitURL;
    NSString * _addressCorrectionUpdateURL;
    NSString * _announcementsURL;
    NSString * _batchReverseGeocoderURL;
    NSString * _businessPortalBaseURL;
    unsigned int  _dataSet;
    NSString * _directionsURL;
    NSString * _dispatcherURL;
    NSString * _etaURL;
    struct { 
        unsigned int dataSet : 1; 
    }  _has;
    NSString * _logMessageUsageURL;
    NSString * _problemCategoriesURL;
    NSString * _problemOptInURL;
    NSString * _problemStatusURL;
    NSString * _problemSubmissionURL;
    NSString * _simpleETAURL;
    NSString * _spatialLookupURL;
}

@property (nonatomic, retain) NSString *addressCorrectionInitURL;
@property (nonatomic, retain) NSString *addressCorrectionUpdateURL;
@property (nonatomic, retain) NSString *announcementsURL;
@property (nonatomic, retain) NSString *batchReverseGeocoderURL;
@property (nonatomic, retain) NSString *businessPortalBaseURL;
@property (nonatomic) unsigned int dataSet;
@property (nonatomic, retain) NSString *directionsURL;
@property (nonatomic, retain) NSString *dispatcherURL;
@property (nonatomic, retain) NSString *etaURL;
@property (nonatomic, readonly) BOOL hasAddressCorrectionInitURL;
@property (nonatomic, readonly) BOOL hasAddressCorrectionUpdateURL;
@property (nonatomic, readonly) BOOL hasAnnouncementsURL;
@property (nonatomic, readonly) BOOL hasBatchReverseGeocoderURL;
@property (nonatomic, readonly) BOOL hasBusinessPortalBaseURL;
@property (nonatomic) BOOL hasDataSet;
@property (nonatomic, readonly) BOOL hasDirectionsURL;
@property (nonatomic, readonly) BOOL hasDispatcherURL;
@property (nonatomic, readonly) BOOL hasEtaURL;
@property (nonatomic, readonly) BOOL hasLogMessageUsageURL;
@property (nonatomic, readonly) BOOL hasProblemCategoriesURL;
@property (nonatomic, readonly) BOOL hasProblemOptInURL;
@property (nonatomic, readonly) BOOL hasProblemStatusURL;
@property (nonatomic, readonly) BOOL hasProblemSubmissionURL;
@property (nonatomic, readonly) BOOL hasSimpleETAURL;
@property (nonatomic, readonly) BOOL hasSpatialLookupURL;
@property (nonatomic, retain) NSString *logMessageUsageURL;
@property (nonatomic, retain) NSString *problemCategoriesURL;
@property (nonatomic, retain) NSString *problemOptInURL;
@property (nonatomic, retain) NSString *problemStatusURL;
@property (nonatomic, retain) NSString *problemSubmissionURL;
@property (nonatomic, retain) NSString *simpleETAURL;
@property (nonatomic, retain) NSString *spatialLookupURL;

- (id)addressCorrectionInitURL;
- (id)addressCorrectionUpdateURL;
- (id)announcementsURL;
- (id)batchReverseGeocoderURL;
- (id)businessPortalBaseURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataSet;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsURL;
- (id)dispatcherURL;
- (id)etaURL;
- (BOOL)hasAddressCorrectionInitURL;
- (BOOL)hasAddressCorrectionUpdateURL;
- (BOOL)hasAnnouncementsURL;
- (BOOL)hasBatchReverseGeocoderURL;
- (BOOL)hasBusinessPortalBaseURL;
- (BOOL)hasDataSet;
- (BOOL)hasDirectionsURL;
- (BOOL)hasDispatcherURL;
- (BOOL)hasEtaURL;
- (BOOL)hasLogMessageUsageURL;
- (BOOL)hasProblemCategoriesURL;
- (BOOL)hasProblemOptInURL;
- (BOOL)hasProblemStatusURL;
- (BOOL)hasProblemSubmissionURL;
- (BOOL)hasSimpleETAURL;
- (BOOL)hasSpatialLookupURL;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)logMessageUsageURL;
- (void)mergeFrom:(id)arg1;
- (id)problemCategoriesURL;
- (id)problemOptInURL;
- (id)problemStatusURL;
- (id)problemSubmissionURL;
- (BOOL)readFrom:(id)arg1;
- (void)setAddressCorrectionInitURL:(id)arg1;
- (void)setAddressCorrectionUpdateURL:(id)arg1;
- (void)setAnnouncementsURL:(id)arg1;
- (void)setBatchReverseGeocoderURL:(id)arg1;
- (void)setBusinessPortalBaseURL:(id)arg1;
- (void)setDataSet:(unsigned int)arg1;
- (void)setDirectionsURL:(id)arg1;
- (void)setDispatcherURL:(id)arg1;
- (void)setEtaURL:(id)arg1;
- (void)setHasDataSet:(BOOL)arg1;
- (void)setLogMessageUsageURL:(id)arg1;
- (void)setProblemCategoriesURL:(id)arg1;
- (void)setProblemOptInURL:(id)arg1;
- (void)setProblemStatusURL:(id)arg1;
- (void)setProblemSubmissionURL:(id)arg1;
- (void)setSimpleETAURL:(id)arg1;
- (void)setSpatialLookupURL:(id)arg1;
- (id)simpleETAURL;
- (id)spatialLookupURL;
- (void)writeTo:(id)arg1;

@end
