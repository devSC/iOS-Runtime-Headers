/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSRestrictions : IKJSObject <IKJSRestrictions, NSObject, _IKJSRestrictions, _IKJSRestrictionsProxy>

@property (nonatomic, readonly) BOOL allowArtistActivity;
@property (nonatomic, readonly) BOOL allowsErotica;
@property (nonatomic, readonly) BOOL allowsExplicit;
@property (nonatomic, readonly) BOOL allowsITunes;
@property (nonatomic, readonly) BOOL allowsShowingUndownloadedMovies;
@property (nonatomic, readonly) BOOL allowsShowingUndownloadedTVShows;
@property (nonatomic, readonly) BOOL appAnalyticsAllowed;
@property (nonatomic, readonly) BOOL appInstallationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int maxAppRank;
@property (nonatomic, readonly) NSString *maxAppRating;
@property (nonatomic, readonly) int maxMovieRank;
@property (nonatomic, readonly) int maxTVShowRank;
@property (readonly) Class superclass;

+ (id)restrictionsDidChangeNotificationName;

- (id)_contentRestrictionsCountryCode;
- (id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3;
- (BOOL)allowArtistActivity;
- (BOOL)allowsErotica;
- (BOOL)allowsExplicit;
- (BOOL)allowsITunes;
- (BOOL)allowsShowingUndownloadedMovies;
- (BOOL)allowsShowingUndownloadedTVShows;
- (BOOL)appAnalyticsAllowed;
- (BOOL)appInstallationAllowed;
- (id)asPrivateIKJSRestrictions;
- (int)maxAppRank;
- (id)maxAppRating;
- (int)maxMovieRank;
- (id)maxMovieRatingForCountry:(id)arg1;
- (int)maxTVShowRank;
- (id)maxTVShowRatingForCountry:(id)arg1;

@end
