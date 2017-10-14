/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRSupportedCommandsProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _supportedCommands;
}

@property (nonatomic, retain) NSMutableArray *supportedCommands;

+ (Class)supportedCommandType;

- (void).cxx_destruct;
- (void)addSupportedCommand:(id)arg1;
- (void)clearSupportedCommands;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (id)supportedCommandAtIndex:(unsigned int)arg1;
- (id)supportedCommands;
- (unsigned int)supportedCommandsCount;
- (void)writeTo:(id)arg1;

@end
