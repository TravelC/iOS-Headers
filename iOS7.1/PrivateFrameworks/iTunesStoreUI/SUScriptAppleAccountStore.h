//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountStore, NSString;

@interface SUScriptAppleAccountStore : SUScriptObject
{
    ACAccountStore *_accountStore;
    NSString *_effectiveBundleID;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_accountStore;
@property(readonly) int renewResultRenewed;
@property(readonly) int renewResultRejected;
@property(readonly) int renewResultFailed;
@property(readonly) NSString *accountTypeIdentifierTwitter;
@property(readonly) NSString *accountTypeIdentifierSinaWeibo;
@property(readonly) NSString *accountTypeIdentifierFacebook;
@property(readonly) NSString *accessPurposeWrite;
@property(readonly) NSString *accessPurposeReadWrite;
@property(readonly) NSString *accessPurposeRead;
- (void)setEffectiveBundleID:(id)arg1;
@property(readonly) NSString *effectiveBundleID;
- (id)_className;
- (void)requestAccessWithInfo:(id)arg1 completionHandler:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 completionHandler:(id)arg2;
- (id)makeClientAccessInfoWithAccountType:(id)arg1;
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)accountsWithAccountType:(id)arg1;
- (void)dealloc;

@end

