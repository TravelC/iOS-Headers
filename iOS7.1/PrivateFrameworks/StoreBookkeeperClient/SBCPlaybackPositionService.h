//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreBookkeeperClient/SBCXPCService.h>

#import "SBCPlaybackPositionServiceProtocol.h"

@class NSString;

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol>
{
    NSString *_databasePath;
}

+ (id)bookkeeperForDatabasePath:(id)arg1;
@property(readonly) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (oneway void)synchronizeImmediately;
- (oneway void)synchronizeLocalChangesSoon;
- (oneway void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(BOOL)arg2;
- (oneway void)noteChangedNowPlayingTrackPersistentID:(long long)arg1;
- (oneway void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;
- (oneway void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;
- (oneway void)endUsingPlaybackPositions;
- (oneway void)beginUsingPlaybackPositions;
- (void)didConnectToService;
- (id)initWithServiceInterfaceClass:(Class)arg1 databasePath:(id)arg2;

@end

