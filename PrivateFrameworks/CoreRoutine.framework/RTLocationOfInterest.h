/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    NSString * _customLabel;
    <GEOMapItem> * _geoMapItem;
    int  _geoMapItemSource;
    NSUUID * _identifier;
    double  _latitude;
    double  _longitude;
    int  _type;
    int  _typeSource;
    double  _uncertainty;
    NSArray * _visits;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *customLabel;
@property (nonatomic, readonly) <GEOMapItem> *geoMapItem;
@property (nonatomic, readonly) int geoMapItemSource;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) int typeSource;
@property (nonatomic, readonly) double uncertainty;
@property (nonatomic, readonly) NSArray *visits;

+ (id)geoMapItemSourceToString:(int)arg1;
+ (id)locationOfInterestTypeSourceToString:(int)arg1;
+ (id)locationOfInterestTypeToString:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customLabel;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)frequencyCompare:(id)arg1;
- (id)geoMapItem;
- (int)geoMapItemSource;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 confidence:(double)arg4 identifier:(id)arg5 type:(int)arg6 typeSource:(int)arg7 geoMapItem:(id)arg8 geoMapItemSource:(int)arg9 visits:(id)arg10 customLabel:(id)arg11;
- (BOOL)isEqual:(id)arg1;
- (double)latitude;
- (id)localizedAllVisitsDescription;
- (id)localizedLastVisitDescription;
- (double)longitude;
- (id)name;
- (id)preciseName;
- (int)recentCompare:(id)arg1;
- (id)relativeNameToMapItem:(id)arg1;
- (int)type;
- (int)typeSource;
- (double)uncertainty;
- (id)visits;

@end
