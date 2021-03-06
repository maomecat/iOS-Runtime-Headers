/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {
    NSData *_artworkData;
    NSString *_artworkIdentifier;
    BOOL _keepAlive;
}

@property (nonatomic, retain) NSData *artworkData;
@property (nonatomic, retain) NSString *artworkIdentifier;

- (void).cxx_destruct;
- (id)artworkData;
- (id)artworkIdentifier;
- (BOOL)beginContentAccess;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)isContentDiscarded;
- (void)setArtworkData:(id)arg1;
- (void)setArtworkIdentifier:(id)arg1;

@end
