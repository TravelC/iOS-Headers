/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMCore/IMChat.h>

@interface IMChat (IMChat_HistoryAdditions)
- (id)loadMessagesUpToGUID:(id)arg1 loadImmediately:(BOOL)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2 loadImmediately:(BOOL)arg3;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2;
- (id)loadMessagesWithGUIDs:(id)arg1;
- (id)_buildLoadQueryForSynchronize;
@property(nonatomic) unsigned int numberOfMessagesToKeepLoaded;
- (void)_trimMessagesAsNeeded;
- (void)_trimMessagesLeavingNumber:(unsigned int)arg1;
@end

