/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRequestRideIntent : PBCodable <NSCopying> {
    _INPBLocation * _dropOffLocation;
    _INPBIntentMetadata * _intentMetadata;
    _INPBInteger * _partySize;
    _INPBPaymentMethod * _paymentMethod;
    _INPBLocation * _pickupLocation;
    _INPBDataString * _rideOptionName;
    _INPBDateTimeRange * _scheduledPickupTime;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBLocation *dropOffLocation;
@property (nonatomic, readonly) BOOL hasDropOffLocation;
@property (nonatomic, readonly) BOOL hasIntentMetadata;
@property (nonatomic, readonly) BOOL hasPartySize;
@property (nonatomic, readonly) BOOL hasPaymentMethod;
@property (nonatomic, readonly) BOOL hasPickupLocation;
@property (nonatomic, readonly) BOOL hasRideOptionName;
@property (nonatomic, readonly) BOOL hasScheduledPickupTime;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBInteger *partySize;
@property (nonatomic, retain) _INPBPaymentMethod *paymentMethod;
@property (nonatomic, retain) _INPBLocation *pickupLocation;
@property (nonatomic, retain) _INPBDataString *rideOptionName;
@property (nonatomic, retain) _INPBDateTimeRange *scheduledPickupTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dropOffLocation;
- (BOOL)hasDropOffLocation;
- (BOOL)hasIntentMetadata;
- (BOOL)hasPartySize;
- (BOOL)hasPaymentMethod;
- (BOOL)hasPickupLocation;
- (BOOL)hasRideOptionName;
- (BOOL)hasScheduledPickupTime;
- (unsigned int)hash;
- (id)intentMetadata;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)partySize;
- (id)paymentMethod;
- (id)pickupLocation;
- (BOOL)readFrom:(id)arg1;
- (id)rideOptionName;
- (id)scheduledPickupTime;
- (void)setDropOffLocation:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPartySize:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setRideOptionName:(id)arg1;
- (void)setScheduledPickupTime:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
