/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileServerProxy : NSObject {
    <GEOTileServerProxyDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQ;
    NSLocale * _locale;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    int  _resourceNotificationToken;
}

@property (nonatomic) <GEOTileServerProxyDelegate> *delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *delegateQ;

- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(BOOL)arg2;
- (void)calculateFreeableSize;
- (void)cancel:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (id)delegateQ;
- (void)endPreloadSession;
- (void)flushPendingWrites;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;
- (void)loadTiles:(id)arg1 priorities:(unsigned int*)arg2 options:(unsigned int)arg3 client:(id)arg4;
- (void)open;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 newPriority:(unsigned int)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQ:(id)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;

@end
