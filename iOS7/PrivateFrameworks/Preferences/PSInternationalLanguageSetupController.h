/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSSetupController.h>

@class NSString;

@interface PSInternationalLanguageSetupController : PSSetupController
{
    NSString *_languageToSet;
}

- (void)setupController;
- (id)language:(id)arg1;
- (void)setLanguage:(id)arg1 specifier:(id)arg2;
- (void)didFinishCommit;
- (void)commit;
- (void)rotateView:(id)arg1 toOrientation:(long long)arg2;
- (void)showBlackViewWithLabel:(id)arg1;
- (void)dealloc;

@end

