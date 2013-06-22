/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AccountSettings/BasicAccount.h>

@interface BasicAccount (Private)
+ (id)createNewAccountUID;
+ (id)_accountCreationMap;
- (void)_forcedSetAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)_forcedSetEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setFullAccount:(id)arg1;
- (id)_creatorClassNameForAccountType:(id)arg1 creatorType:(id)arg2 loader:(id)arg3;
- (id)fullAccountCreatorClassNameForAccountType:(id)arg1 loader:(id)arg2;
- (id)syncAccountCreatorClassNameForAccountType:(id)arg1;
@end
