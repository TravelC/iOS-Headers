//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "PKRemotePaymentAuthorizationViewControllerProtocol.h"

@class NSString;

@interface PKRemotePaymentAuthorizationViewController : _UIRemoteViewController <PKRemotePaymentAuthorizationViewControllerProtocol>
{
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (void)_preferredContentSizeChanged:(struct CGSize)arg1;
- (void)_authorizationDidSelectShippingContact:(id)arg1;
- (void)_authorizationDidSelectShippingMethod:(id)arg1;
- (void)_authorizationDidAuthorizePayment:(id)arg1;
- (void)_authorizationDidFinishWithError:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

