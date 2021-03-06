/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HSCloudAvailability-Protocol.h"
#import "RadiosPreferencesDelegate-Protocol.h"

@class NSObject<OS_dispatch_queue>, RadiosPreferences;

@interface HSCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, HSCloudAvailability>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _isAirplaneModeActive;
    _Bool _isAutoDownloadOnCellularAllowed;
    _Bool _isCellularDataActive;
    _Bool _isShowingAllMusic;
    _Bool _isShowingAllVideo;
    _Bool _isUpdateInProgress;
    _Bool _isWiFiEnabled;
    _Bool _canShowCloudMusic;
    _Bool _canShowCloudVideo;
    _Bool _canShowCloudDownloadButtons;
    int _preferencesChangedNotifyToken;
    _Bool _preferencesChangedNotifyTokenIsValid;
    long long _networkType;
    RadiosPreferences *_radiosPreferences;
}

+ (id)sharedController;
- (_Bool)_uncachedIsShowingAllVideo;
- (_Bool)_uncachedIsShowingAllMusic;
- (_Bool)_uncachedIsAutoDownloadOnCellularAllowed;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(_Bool)arg1;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(_Bool)arg1;
- (_Bool)_hasWiFiCapability;
- (_Bool)_hasCellularCapability;
- (void)_handleTelephonyNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (_Bool)_isAutoDownloadOnCellularAllowed;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_wifiEnabledDidChangeNotification:(id)arg1;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (void)airplaneModeChanged;
- (_Bool)canShowCloudVideo;
- (_Bool)canShowCloudMusic;
- (_Bool)canShowCloudDownloadButtons;
- (void)dealloc;
- (id)init;
- (_Bool)shouldProhibitActionsForCurrentNetworkConditions;
- (_Bool)isCellularDataRestricted;
- (_Bool)hasProperNetworkConditionsToPlayMedia;

@end

