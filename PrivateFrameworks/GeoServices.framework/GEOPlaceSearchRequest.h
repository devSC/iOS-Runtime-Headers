/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchRequest : PBRequest <NSCopying> {
    GEOAdditionalEnabledMarkets * _additionalEnabledMarkets;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _additionalPlaceTypes;
    GEOAddress * _address;
    struct { 
        unsigned long long *list; 
        unsigned int count; 
        unsigned int size; 
    }  _businessIDs;
    GEOBusinessOptions * _businessOptions;
    int  _businessSortOrder;
    GEOClientCapabilities * _clientCapabilities;
    NSString * _deviceCountryCode;
    GEOLatLng * _deviceLocation;
    NSString * _deviceLocationCountryCode;
    NSString * _deviceTimeZone;
    BOOL  _excludeAddressInResults;
    NSMutableArray * _filterByBusinessCategorys;
    long long  _geoId;
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int geoId : 1; 
        unsigned int intersectingGeoId : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
        unsigned int timestamp : 1; 
        unsigned int businessSortOrder : 1; 
        unsigned int knownAccuracy : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int mapMode : 1; 
        unsigned int maxBusinessReviews : 1; 
        unsigned int maxResults : 1; 
        unsigned int placeTypeLimit : 1; 
        unsigned int searchSource : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int transportTypeForTravelTimes : 1; 
        unsigned int excludeAddressInResults : 1; 
        unsigned int includeBusinessCategories : 1; 
        unsigned int includeBusinessRating : 1; 
        unsigned int includeEntryPoints : 1; 
        unsigned int includeFeatureSets : 1; 
        unsigned int includeGeoId : 1; 
        unsigned int includeMatchedToken : 1; 
        unsigned int includeNameForForwardGeocodingResults : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeQuads : 1; 
        unsigned int includeRoadAccessPoints : 1; 
        unsigned int includeSpokenNames : 1; 
        unsigned int includeStatusCodeInfo : 1; 
        unsigned int includeSuggestionsOnly : 1; 
        unsigned int includeTravelDistance : 1; 
        unsigned int includeTravelTime : 1; 
        unsigned int includeUnmatchedStrings : 1; 
        unsigned int isCanonicalLocationSearch : 1; 
        unsigned int isFromAPI : 1; 
        unsigned int isPopularNearbyRequest : 1; 
        unsigned int isStrictGeocoding : 1; 
        unsigned int isStrictMapRegion : 1; 
        unsigned int structuredSearch : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    }  _has;
    BOOL  _includeBusinessCategories;
    BOOL  _includeBusinessRating;
    BOOL  _includeEntryPoints;
    BOOL  _includeFeatureSets;
    BOOL  _includeGeoId;
    BOOL  _includeMatchedToken;
    BOOL  _includeNameForForwardGeocodingResults;
    BOOL  _includePhonetics;
    BOOL  _includeQuads;
    BOOL  _includeRoadAccessPoints;
    BOOL  _includeSpokenNames;
    BOOL  _includeStatusCodeInfo;
    BOOL  _includeSuggestionsOnly;
    BOOL  _includeTravelDistance;
    BOOL  _includeTravelTime;
    BOOL  _includeUnmatchedStrings;
    GEOIndexQueryNode * _indexFilter;
    NSString * _inputLanguage;
    unsigned long long  _intersectingGeoId;
    BOOL  _isCanonicalLocationSearch;
    BOOL  _isFromAPI;
    BOOL  _isPopularNearbyRequest;
    BOOL  _isStrictGeocoding;
    BOOL  _isStrictMapRegion;
    int  _knownAccuracy;
    GEOLatLng * _knownLocation;
    NSMutableArray * _limitToCountryCodeIso2s;
    int  _localSearchProviderID;
    GEOLocation * _location;
    int  _mapMode;
    GEOMapRegion * _mapRegion;
    int  _maxBusinessReviews;
    int  _maxResults;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _optionalSuppressionReasons;
    NSString * _phoneticLocaleIdentifier;
    int  _placeTypeLimit;
    GEOAddress * _preserveFields;
    NSString * _search;
    NSString * _searchContext;
    GEOSearchSubstring * _searchContextSubstring;
    GEOLatLng * _searchLocation;
    int  _searchSource;
    NSMutableArray * _searchSubstrings;
    int  _sequenceNumber;
    NSMutableArray * _serviceTags;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionGUID;
    BOOL  _structuredSearch;
    GEOSuggestionsOptions * _suggestionsOptions;
    NSString * _suggestionsPrefix;
    BOOL  _suppressResultsRequiringAttribution;
    double  _timeSinceMapEnteredForeground;
    double  _timeSinceMapViewportChanged;
    double  _timestamp;
    int  _transportTypeForTravelTimes;
    NSString * _viewportCenterCountryCode;
    NSData * _zilchPoints;
}

@property (nonatomic, retain) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic, readonly) int*additionalPlaceTypes;
@property (nonatomic, readonly) unsigned int additionalPlaceTypesCount;
@property (nonatomic, retain) GEOAddress *address;
@property (nonatomic, readonly) unsigned long long*businessIDs;
@property (nonatomic, readonly) unsigned int businessIDsCount;
@property (nonatomic, retain) GEOBusinessOptions *businessOptions;
@property (nonatomic) int businessSortOrder;
@property (nonatomic, retain) GEOClientCapabilities *clientCapabilities;
@property (nonatomic, retain) NSString *deviceCountryCode;
@property (nonatomic, retain) GEOLatLng *deviceLocation;
@property (nonatomic, retain) NSString *deviceLocationCountryCode;
@property (nonatomic, retain) NSString *deviceTimeZone;
@property (nonatomic) BOOL excludeAddressInResults;
@property (nonatomic, retain) NSMutableArray *filterByBusinessCategorys;
@property (nonatomic) long long geoId;
@property (nonatomic, readonly) BOOL hasAdditionalEnabledMarkets;
@property (nonatomic, readonly) BOOL hasAddress;
@property (nonatomic, readonly) BOOL hasBusinessOptions;
@property (nonatomic) BOOL hasBusinessSortOrder;
@property (nonatomic, readonly) BOOL hasClientCapabilities;
@property (nonatomic, readonly) BOOL hasDeviceCountryCode;
@property (nonatomic, readonly) BOOL hasDeviceLocation;
@property (nonatomic, readonly) BOOL hasDeviceLocationCountryCode;
@property (nonatomic, readonly) BOOL hasDeviceTimeZone;
@property (nonatomic) BOOL hasExcludeAddressInResults;
@property (nonatomic) BOOL hasGeoId;
@property (nonatomic) BOOL hasIncludeBusinessCategories;
@property (nonatomic) BOOL hasIncludeBusinessRating;
@property (nonatomic) BOOL hasIncludeEntryPoints;
@property (nonatomic) BOOL hasIncludeFeatureSets;
@property (nonatomic) BOOL hasIncludeGeoId;
@property (nonatomic) BOOL hasIncludeMatchedToken;
@property (nonatomic) BOOL hasIncludeNameForForwardGeocodingResults;
@property (nonatomic) BOOL hasIncludePhonetics;
@property (nonatomic) BOOL hasIncludeQuads;
@property (nonatomic) BOOL hasIncludeRoadAccessPoints;
@property (nonatomic) BOOL hasIncludeSpokenNames;
@property (nonatomic) BOOL hasIncludeStatusCodeInfo;
@property (nonatomic) BOOL hasIncludeSuggestionsOnly;
@property (nonatomic) BOOL hasIncludeTravelDistance;
@property (nonatomic) BOOL hasIncludeTravelTime;
@property (nonatomic) BOOL hasIncludeUnmatchedStrings;
@property (nonatomic, readonly) BOOL hasIndexFilter;
@property (nonatomic, readonly) BOOL hasInputLanguage;
@property (nonatomic) BOOL hasIntersectingGeoId;
@property (nonatomic) BOOL hasIsCanonicalLocationSearch;
@property (nonatomic) BOOL hasIsFromAPI;
@property (nonatomic) BOOL hasIsPopularNearbyRequest;
@property (nonatomic) BOOL hasIsStrictGeocoding;
@property (nonatomic) BOOL hasIsStrictMapRegion;
@property (nonatomic) BOOL hasKnownAccuracy;
@property (nonatomic, readonly) BOOL hasKnownLocation;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic, readonly) BOOL hasLocation;
@property (nonatomic) BOOL hasMapMode;
@property (nonatomic, readonly) BOOL hasMapRegion;
@property (nonatomic) BOOL hasMaxBusinessReviews;
@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic, readonly) BOOL hasPhoneticLocaleIdentifier;
@property (nonatomic) BOOL hasPlaceTypeLimit;
@property (nonatomic, readonly) BOOL hasPreserveFields;
@property (nonatomic, readonly) BOOL hasSearch;
@property (nonatomic, readonly) BOOL hasSearchContext;
@property (nonatomic, readonly) BOOL hasSearchContextSubstring;
@property (nonatomic, readonly) BOOL hasSearchLocation;
@property (nonatomic) BOOL hasSearchSource;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionGUID;
@property (nonatomic) BOOL hasStructuredSearch;
@property (nonatomic, readonly) BOOL hasSuggestionsOptions;
@property (nonatomic, readonly) BOOL hasSuggestionsPrefix;
@property (nonatomic) BOOL hasSuppressResultsRequiringAttribution;
@property (nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property (nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportTypeForTravelTimes;
@property (nonatomic, readonly) BOOL hasViewportCenterCountryCode;
@property (nonatomic, readonly) BOOL hasZilchPoints;
@property (nonatomic) BOOL includeBusinessCategories;
@property (nonatomic) BOOL includeBusinessRating;
@property (nonatomic) BOOL includeEntryPoints;
@property (nonatomic) BOOL includeFeatureSets;
@property (nonatomic) BOOL includeGeoId;
@property (nonatomic) BOOL includeMatchedToken;
@property (nonatomic) BOOL includeNameForForwardGeocodingResults;
@property (nonatomic) BOOL includePhonetics;
@property (nonatomic) BOOL includeQuads;
@property (nonatomic) BOOL includeRoadAccessPoints;
@property (nonatomic) BOOL includeSpokenNames;
@property (nonatomic) BOOL includeStatusCodeInfo;
@property (nonatomic) BOOL includeSuggestionsOnly;
@property (nonatomic) BOOL includeTravelDistance;
@property (nonatomic) BOOL includeTravelTime;
@property (nonatomic) BOOL includeUnmatchedStrings;
@property (nonatomic, retain) GEOIndexQueryNode *indexFilter;
@property (nonatomic, retain) NSString *inputLanguage;
@property (nonatomic) unsigned long long intersectingGeoId;
@property (nonatomic) BOOL isCanonicalLocationSearch;
@property (nonatomic) BOOL isFromAPI;
@property (nonatomic) BOOL isPopularNearbyRequest;
@property (nonatomic) BOOL isStrictGeocoding;
@property (nonatomic) BOOL isStrictMapRegion;
@property (nonatomic) int knownAccuracy;
@property (nonatomic, retain) GEOLatLng *knownLocation;
@property (nonatomic, retain) NSMutableArray *limitToCountryCodeIso2s;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) int mapMode;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) int maxBusinessReviews;
@property (nonatomic) int maxResults;
@property (nonatomic, readonly) int*optionalSuppressionReasons;
@property (nonatomic, readonly) unsigned int optionalSuppressionReasonsCount;
@property (nonatomic, retain) NSString *phoneticLocaleIdentifier;
@property (nonatomic) int placeTypeLimit;
@property (nonatomic, retain) GEOAddress *preserveFields;
@property (nonatomic, retain) NSString *search;
@property (nonatomic, retain) NSString *searchContext;
@property (nonatomic, retain) GEOSearchSubstring *searchContextSubstring;
@property (nonatomic, retain) GEOLatLng *searchLocation;
@property (nonatomic) int searchSource;
@property (nonatomic, retain) NSMutableArray *searchSubstrings;
@property (nonatomic) int sequenceNumber;
@property (nonatomic, retain) NSMutableArray *serviceTags;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property (nonatomic) BOOL structuredSearch;
@property (nonatomic, retain) GEOSuggestionsOptions *suggestionsOptions;
@property (nonatomic, retain) NSString *suggestionsPrefix;
@property (nonatomic) BOOL suppressResultsRequiringAttribution;
@property (nonatomic) double timeSinceMapEnteredForeground;
@property (nonatomic) double timeSinceMapViewportChanged;
@property (nonatomic) double timestamp;
@property (nonatomic) int transportTypeForTravelTimes;
@property (nonatomic, retain) NSString *viewportCenterCountryCode;
@property (nonatomic, retain) NSData *zilchPoints;

+ (Class)filterByBusinessCategoryType;
+ (Class)limitToCountryCodeIso2Type;
+ (Class)searchSubstringType;
+ (Class)serviceTagType;

- (int)StringAsAdditionalPlaceTypes:(id)arg1;
- (int)StringAsBusinessSortOrder:(id)arg1;
- (int)StringAsKnownAccuracy:(id)arg1;
- (int)StringAsMapMode:(id)arg1;
- (int)StringAsOptionalSuppressionReasons:(id)arg1;
- (int)StringAsPlaceTypeLimit:(id)arg1;
- (int)StringAsSearchSource:(id)arg1;
- (int)StringAsTransportTypeForTravelTimes:(id)arg1;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)addBusinessID:(unsigned long long)arg1;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)addLimitToCountryCodeIso2:(id)arg1;
- (void)addOptionalSuppressionReason:(int)arg1;
- (void)addSearchSubstring:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (id)additionalEnabledMarkets;
- (int)additionalPlaceTypeAtIndex:(unsigned int)arg1;
- (int*)additionalPlaceTypes;
- (id)additionalPlaceTypesAsString:(int)arg1;
- (unsigned int)additionalPlaceTypesCount;
- (id)address;
- (unsigned long long)businessIDAtIndex:(unsigned int)arg1;
- (unsigned long long*)businessIDs;
- (unsigned int)businessIDsCount;
- (id)businessOptions;
- (int)businessSortOrder;
- (id)businessSortOrderAsString:(int)arg1;
- (void)clearAdditionalPlaceTypes;
- (void)clearBusinessIDs;
- (void)clearFilterByBusinessCategorys;
- (void)clearLimitToCountryCodeIso2s;
- (void)clearOptionalSuppressionReasons;
- (void)clearSearchSubstrings;
- (void)clearServiceTags;
- (id)clientCapabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceCountryCode;
- (id)deviceLocation;
- (id)deviceLocationCountryCode;
- (id)deviceTimeZone;
- (id)dictionaryRepresentation;
- (BOOL)excludeAddressInResults;
- (id)filterByBusinessCategoryAtIndex:(unsigned int)arg1;
- (id)filterByBusinessCategorys;
- (unsigned int)filterByBusinessCategorysCount;
- (long long)geoId;
- (BOOL)hasAdditionalEnabledMarkets;
- (BOOL)hasAddress;
- (BOOL)hasBusinessOptions;
- (BOOL)hasBusinessSortOrder;
- (BOOL)hasClientCapabilities;
- (BOOL)hasDeviceCountryCode;
- (BOOL)hasDeviceLocation;
- (BOOL)hasDeviceLocationCountryCode;
- (BOOL)hasDeviceTimeZone;
- (BOOL)hasExcludeAddressInResults;
- (BOOL)hasGeoId;
- (BOOL)hasIncludeBusinessCategories;
- (BOOL)hasIncludeBusinessRating;
- (BOOL)hasIncludeEntryPoints;
- (BOOL)hasIncludeFeatureSets;
- (BOOL)hasIncludeGeoId;
- (BOOL)hasIncludeMatchedToken;
- (BOOL)hasIncludeNameForForwardGeocodingResults;
- (BOOL)hasIncludePhonetics;
- (BOOL)hasIncludeQuads;
- (BOOL)hasIncludeRoadAccessPoints;
- (BOOL)hasIncludeSpokenNames;
- (BOOL)hasIncludeStatusCodeInfo;
- (BOOL)hasIncludeSuggestionsOnly;
- (BOOL)hasIncludeTravelDistance;
- (BOOL)hasIncludeTravelTime;
- (BOOL)hasIncludeUnmatchedStrings;
- (BOOL)hasIndexFilter;
- (BOOL)hasInputLanguage;
- (BOOL)hasIntersectingGeoId;
- (BOOL)hasIsCanonicalLocationSearch;
- (BOOL)hasIsFromAPI;
- (BOOL)hasIsPopularNearbyRequest;
- (BOOL)hasIsStrictGeocoding;
- (BOOL)hasIsStrictMapRegion;
- (BOOL)hasKnownAccuracy;
- (BOOL)hasKnownLocation;
- (BOOL)hasLocalSearchProviderID;
- (BOOL)hasLocation;
- (BOOL)hasMapMode;
- (BOOL)hasMapRegion;
- (BOOL)hasMaxBusinessReviews;
- (BOOL)hasMaxResults;
- (BOOL)hasPhoneticLocaleIdentifier;
- (BOOL)hasPlaceTypeLimit;
- (BOOL)hasPreserveFields;
- (BOOL)hasSearch;
- (BOOL)hasSearchContext;
- (BOOL)hasSearchContextSubstring;
- (BOOL)hasSearchLocation;
- (BOOL)hasSearchSource;
- (BOOL)hasSequenceNumber;
- (BOOL)hasSessionGUID;
- (BOOL)hasStructuredSearch;
- (BOOL)hasSuggestionsOptions;
- (BOOL)hasSuggestionsPrefix;
- (BOOL)hasSuppressResultsRequiringAttribution;
- (BOOL)hasTimeSinceMapEnteredForeground;
- (BOOL)hasTimeSinceMapViewportChanged;
- (BOOL)hasTimestamp;
- (BOOL)hasTransportTypeForTravelTimes;
- (BOOL)hasViewportCenterCountryCode;
- (BOOL)hasZilchPoints;
- (unsigned int)hash;
- (BOOL)includeBusinessCategories;
- (BOOL)includeBusinessRating;
- (BOOL)includeEntryPoints;
- (BOOL)includeFeatureSets;
- (BOOL)includeGeoId;
- (BOOL)includeMatchedToken;
- (BOOL)includeNameForForwardGeocodingResults;
- (BOOL)includePhonetics;
- (BOOL)includeQuads;
- (BOOL)includeRoadAccessPoints;
- (BOOL)includeSpokenNames;
- (BOOL)includeStatusCodeInfo;
- (BOOL)includeSuggestionsOnly;
- (BOOL)includeTravelDistance;
- (BOOL)includeTravelTime;
- (BOOL)includeUnmatchedStrings;
- (id)indexFilter;
- (id)initWithTraits:(id)arg1;
- (id)inputLanguage;
- (unsigned long long)intersectingGeoId;
- (BOOL)isCanonicalLocationSearch;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFromAPI;
- (BOOL)isPopularNearbyRequest;
- (BOOL)isStrictGeocoding;
- (BOOL)isStrictMapRegion;
- (int)knownAccuracy;
- (id)knownAccuracyAsString:(int)arg1;
- (id)knownLocation;
- (id)limitToCountryCodeIso2AtIndex:(unsigned int)arg1;
- (id)limitToCountryCodeIso2s;
- (unsigned int)limitToCountryCodeIso2sCount;
- (int)localSearchProviderID;
- (id)location;
- (int)mapMode;
- (id)mapModeAsString:(int)arg1;
- (id)mapRegion;
- (int)maxBusinessReviews;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (int)optionalSuppressionReasonAtIndex:(unsigned int)arg1;
- (int*)optionalSuppressionReasons;
- (id)optionalSuppressionReasonsAsString:(int)arg1;
- (unsigned int)optionalSuppressionReasonsCount;
- (id)phoneticLocaleIdentifier;
- (int)placeTypeLimit;
- (id)placeTypeLimitAsString:(int)arg1;
- (id)preserveFields;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)search;
- (id)searchContext;
- (id)searchContextSubstring;
- (id)searchLocation;
- (int)searchSource;
- (id)searchSourceAsString:(int)arg1;
- (id)searchSubstringAtIndex:(unsigned int)arg1;
- (id)searchSubstrings;
- (unsigned int)searchSubstringsCount;
- (int)sequenceNumber;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (id)serviceTags;
- (unsigned int)serviceTagsCount;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (void)setAdditionalEnabledMarkets:(id)arg1;
- (void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setAddress:(id)arg1;
- (void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned int)arg2;
- (void)setBusinessOptions:(id)arg1;
- (void)setBusinessSortOrder:(int)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setDeviceLocationCountryCode:(id)arg1;
- (void)setDeviceTimeZone:(id)arg1;
- (void)setExcludeAddressInResults:(BOOL)arg1;
- (void)setFilterByBusinessCategorys:(id)arg1;
- (void)setGeoId:(long long)arg1;
- (void)setHasBusinessSortOrder:(BOOL)arg1;
- (void)setHasExcludeAddressInResults:(BOOL)arg1;
- (void)setHasGeoId:(BOOL)arg1;
- (void)setHasIncludeBusinessCategories:(BOOL)arg1;
- (void)setHasIncludeBusinessRating:(BOOL)arg1;
- (void)setHasIncludeEntryPoints:(BOOL)arg1;
- (void)setHasIncludeFeatureSets:(BOOL)arg1;
- (void)setHasIncludeGeoId:(BOOL)arg1;
- (void)setHasIncludeMatchedToken:(BOOL)arg1;
- (void)setHasIncludeNameForForwardGeocodingResults:(BOOL)arg1;
- (void)setHasIncludePhonetics:(BOOL)arg1;
- (void)setHasIncludeQuads:(BOOL)arg1;
- (void)setHasIncludeRoadAccessPoints:(BOOL)arg1;
- (void)setHasIncludeSpokenNames:(BOOL)arg1;
- (void)setHasIncludeStatusCodeInfo:(BOOL)arg1;
- (void)setHasIncludeSuggestionsOnly:(BOOL)arg1;
- (void)setHasIncludeTravelDistance:(BOOL)arg1;
- (void)setHasIncludeTravelTime:(BOOL)arg1;
- (void)setHasIncludeUnmatchedStrings:(BOOL)arg1;
- (void)setHasIntersectingGeoId:(BOOL)arg1;
- (void)setHasIsCanonicalLocationSearch:(BOOL)arg1;
- (void)setHasIsFromAPI:(BOOL)arg1;
- (void)setHasIsPopularNearbyRequest:(BOOL)arg1;
- (void)setHasIsStrictGeocoding:(BOOL)arg1;
- (void)setHasIsStrictMapRegion:(BOOL)arg1;
- (void)setHasKnownAccuracy:(BOOL)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setHasMapMode:(BOOL)arg1;
- (void)setHasMaxBusinessReviews:(BOOL)arg1;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setHasPlaceTypeLimit:(BOOL)arg1;
- (void)setHasSearchSource:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasSessionGUID:(BOOL)arg1;
- (void)setHasStructuredSearch:(BOOL)arg1;
- (void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1;
- (void)setHasTimeSinceMapViewportChanged:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportTypeForTravelTimes:(BOOL)arg1;
- (void)setIncludeBusinessCategories:(BOOL)arg1;
- (void)setIncludeBusinessRating:(BOOL)arg1;
- (void)setIncludeEntryPoints:(BOOL)arg1;
- (void)setIncludeFeatureSets:(BOOL)arg1;
- (void)setIncludeGeoId:(BOOL)arg1;
- (void)setIncludeMatchedToken:(BOOL)arg1;
- (void)setIncludeNameForForwardGeocodingResults:(BOOL)arg1;
- (void)setIncludePhonetics:(BOOL)arg1;
- (void)setIncludeQuads:(BOOL)arg1;
- (void)setIncludeRoadAccessPoints:(BOOL)arg1;
- (void)setIncludeSpokenNames:(BOOL)arg1;
- (void)setIncludeStatusCodeInfo:(BOOL)arg1;
- (void)setIncludeSuggestionsOnly:(BOOL)arg1;
- (void)setIncludeTravelDistance:(BOOL)arg1;
- (void)setIncludeTravelTime:(BOOL)arg1;
- (void)setIncludeUnmatchedStrings:(BOOL)arg1;
- (void)setIndexFilter:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setIntersectingGeoId:(unsigned long long)arg1;
- (void)setIsCanonicalLocationSearch:(BOOL)arg1;
- (void)setIsFromAPI:(BOOL)arg1;
- (void)setIsPopularNearbyRequest:(BOOL)arg1;
- (void)setIsStrictGeocoding:(BOOL)arg1;
- (void)setIsStrictMapRegion:(BOOL)arg1;
- (void)setKnownAccuracy:(int)arg1;
- (void)setKnownLocation:(id)arg1;
- (void)setLimitToCountryCodeIso2s:(id)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapMode:(int)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMaxBusinessReviews:(int)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setOptionalSuppressionReasons:(int*)arg1 count:(unsigned int)arg2;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setPlaceTypeLimit:(int)arg1;
- (void)setPreserveFields:(id)arg1;
- (void)setSearch:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (void)setSearchContextSubstring:(id)arg1;
- (void)setSearchLocation:(id)arg1;
- (void)setSearchSource:(int)arg1;
- (void)setSearchSubstrings:(id)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionGUID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStructuredSearch:(BOOL)arg1;
- (void)setSuggestionsOptions:(id)arg1;
- (void)setSuggestionsPrefix:(id)arg1;
- (void)setSuppressResultsRequiringAttribution:(BOOL)arg1;
- (void)setTimeSinceMapEnteredForeground:(double)arg1;
- (void)setTimeSinceMapViewportChanged:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTransportTypeForTravelTimes:(int)arg1;
- (void)setViewportCenterCountryCode:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (BOOL)structuredSearch;
- (id)suggestionsOptions;
- (id)suggestionsPrefix;
- (BOOL)suppressResultsRequiringAttribution;
- (double)timeSinceMapEnteredForeground;
- (double)timeSinceMapViewportChanged;
- (double)timestamp;
- (int)transportTypeForTravelTimes;
- (id)transportTypeForTravelTimesAsString:(int)arg1;
- (id)viewportCenterCountryCode;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end
