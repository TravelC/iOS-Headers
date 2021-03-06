/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface PEPServiceConfiguration : NSObject
{
    NSString *_cacheFilePath;
    BOOL _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)_postNotification;
- (void)_updateDefaults:(id)arg1;
- (BOOL)registerNetworkDefaultsForAppID:(id)arg1;
- (BOOL)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(BOOL)arg2;

@end

