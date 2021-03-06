/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSPersistentStoreCoordinator, NSString, NSURL;

@interface NSPersistentStore : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    NSString *_configurationName;
    NSURL *_url;
    NSDictionary *_options;
    NSMutableDictionary *_oidFactories;
    id _defaultFaultHandler;
    struct _objectStoreFlags {
        unsigned int isReadOnly:1;
        unsigned int cleanOnRemove:1;
        unsigned int isMDDirty:1;
        unsigned int _RESERVED:29;
    } _flags;
    void *_temporaryIDClass;
    id _externalRecordsMonitor;
    void *_reserved3;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (Class)migrationManagerClass;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (BOOL)isReadOnly;
- (void)setReadOnly:(BOOL)arg1;
- (id)configurationName;
- (id)persistentStoreCoordinator;
- (id)URL;
- (void)setURL:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)metadata;
- (id)_rawMetadata__;
- (void)setMetadata:(id)arg1;
- (id)type;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;
- (id)options;
- (void)didAddToPersistentStoreCoordinator:(id)arg1;
- (BOOL)loadMetadata:(id *)arg1;

@end

