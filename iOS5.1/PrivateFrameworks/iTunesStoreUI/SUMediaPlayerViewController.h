/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPMoviePlayerViewController.h"

#import "ISOperationDelegate-Protocol.h"

@class NSMutableArray, SUMediaPlayerItem, UIView;

@interface SUMediaPlayerViewController : MPMoviePlayerViewController <ISOperationDelegate>
{
    UIView *_backgroundContainerView;
    SUMediaPlayerItem *_mediaItem;
    NSMutableArray *_operations;
    int _playerState;
}

+ (BOOL)_URLIsITunesU:(id)arg1;
+ (void)_sendPingRequestsForURLs:(id)arg1 URLBagKey:(id)arg2 playerItem:(id)arg3;
+ (void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg1;
+ (void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg1;
@property(readonly, nonatomic) SUMediaPlayerItem *mediaPlayerItem; // @synthesize mediaPlayerItem=_mediaItem;
- (void)_showBackgroundImage:(id)arg1;
- (void)_setIsActivePlayer:(BOOL)arg1;
- (void)_prepareMediaItem;
- (void)_insertBackgroundContainerView;
- (void)_loadBackgroundImage;
- (void)_enqueueOperation:(id)arg1;
- (void)_dequeueOperation:(id)arg1;
- (void)_bookmarkCurrentTime;
- (id)_backgroundContainerView;
- (void)_playbackFinishedNotification:(id)arg1;
- (void)_mediaTypesAvailableNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)operationFinished:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)loadView;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)initWithMediaPlayerItem:(id)arg1;
- (id)init;

@end
