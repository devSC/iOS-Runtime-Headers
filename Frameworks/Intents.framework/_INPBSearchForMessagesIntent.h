/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForMessagesIntent : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _attributes;
    _INPBDateTimeRange * _dateTimeRange;
    _INPBStringList * _groupName;
    _INPBStringList * _identifier;
    _INPBIntentMetadata * _intentMetadata;
    _INPBStringList * _notificationIdentifier;
    _INPBContactList * _recipient;
    _INPBStringList * _searchTerm;
    _INPBContactList * _sender;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*attributes;
@property (nonatomic, readonly) unsigned int attributesCount;
@property (nonatomic, retain) _INPBDateTimeRange *dateTimeRange;
@property (nonatomic, retain) _INPBStringList *groupName;
@property (nonatomic, readonly) BOOL hasDateTimeRange;
@property (nonatomic, readonly) BOOL hasGroupName;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, readonly) BOOL hasIntentMetadata;
@property (nonatomic, readonly) BOOL hasNotificationIdentifier;
@property (nonatomic, readonly) BOOL hasRecipient;
@property (nonatomic, readonly) BOOL hasSearchTerm;
@property (nonatomic, readonly) BOOL hasSender;
@property (nonatomic, retain) _INPBStringList *identifier;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBStringList *notificationIdentifier;
@property (nonatomic, retain) _INPBContactList *recipient;
@property (nonatomic, retain) _INPBStringList *searchTerm;
@property (nonatomic, retain) _INPBContactList *sender;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAttributes:(id)arg1;
- (void)addAttribute:(int)arg1;
- (int)attributeAtIndex:(unsigned int)arg1;
- (int*)attributes;
- (id)attributesAsString:(int)arg1;
- (unsigned int)attributesCount;
- (void)clearAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTimeRange;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupName;
- (BOOL)hasDateTimeRange;
- (BOOL)hasGroupName;
- (BOOL)hasIdentifier;
- (BOOL)hasIntentMetadata;
- (BOOL)hasNotificationIdentifier;
- (BOOL)hasRecipient;
- (BOOL)hasSearchTerm;
- (BOOL)hasSender;
- (unsigned int)hash;
- (id)identifier;
- (id)intentMetadata;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notificationIdentifier;
- (BOOL)readFrom:(id)arg1;
- (id)recipient;
- (id)searchTerm;
- (id)sender;
- (void)setAttributes:(int*)arg1 count:(unsigned int)arg2;
- (void)setDateTimeRange:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setNotificationIdentifier:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSender:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
