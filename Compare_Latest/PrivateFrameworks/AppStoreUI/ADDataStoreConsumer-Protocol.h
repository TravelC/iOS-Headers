/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol ADDataStoreConsumer
- (void)distributionReceived:(CDStruct_f79156c4 *)arg1 withDaysSince1970:(int)arg2 forKey:(id)arg3;
- (void)scalarReceived:(long long)arg1 withDaysSince1970:(int)arg2 forKey:(id)arg3;
- (BOOL)shouldCancelQuery;
@end
