//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SUClientInterfaceDelegate.h"

@class SUClientInterface, UIViewController;

@protocol SUClientInterfaceDelegatePrivate <SUClientInterfaceDelegate>

@optional
- (void)clientInterface:(SUClientInterface *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 willDismissViewController:(UIViewController *)arg2;
@end
