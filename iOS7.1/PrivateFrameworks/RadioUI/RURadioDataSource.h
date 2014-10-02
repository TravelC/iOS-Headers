//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RadioPushNotificationControllerDelegate.h"

@class NSArray, NSMutableSet, RadioPushNotificationController;

@interface RURadioDataSource : NSObject <RadioPushNotificationControllerDelegate>
{
    id <RURadioDataSourceDelegate> _delegate;
    BOOL _optedInToRadio;
    RadioPushNotificationController *_pushNotificationController;
    int _stationCountToRefresh;
    NSMutableSet *_stationsBeingRefreshed;
    NSArray *_stations;
}

+ (void)_updateRadioAvailabilityWithStoreBag:(id)arg1 error:(id)arg2;
+ (void)_reloadRadioAvailability;
+ (void)_storeBagDidLoadNotification:(id)arg1;
+ (void)_networkReachabilityDidChangeNotification:(id)arg1;
+ (void)_accountStoreDidChangeNotification:(id)arg1;
+ (BOOL)isRadioAvailable;
+ (BOOL)isOptedInToRadio;
+ (void)initialize;
@property(nonatomic) __weak id <RURadioDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reloadOptedInToRadio;
- (void)_notifyAssistantOfStationChanges;
- (void)_deauthenticate;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)synchronizeStationsAsAutomaticUpdate:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *stations;
- (void)refreshFeaturedStations;
@property(readonly, nonatomic, getter=isOptedInToRadio) BOOL optedInToRadio;
- (id)featuredStations;
- (void)deauthenticateIfNecessary;
- (void)checkAcceptedTermsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pushNotificationControllerDidReceiveSyncRequest:(id)arg1 toGlobalVersion:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end
