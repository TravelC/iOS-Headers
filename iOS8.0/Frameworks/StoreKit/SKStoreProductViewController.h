//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSDictionary, NSString, SKInvocationQueueProxy<SKUIServiceProductPageViewController>, SKRemoteProductViewController, _UIAsyncInvocation;

@interface SKStoreProductViewController : UIViewController
{
    NSString *_additionalBuyParameters;
    NSString *_affiliateIdentifier;
    BOOL _automaticallyDismisses;
    _UIAsyncInvocation *_cancelRequest;
    NSString *_clientIdentifier;
    id <SKStoreProductViewControllerDelegatePrivate> _delegate;
    CDUnknownBlockType _loadBlock;
    int _originalStatusBarStyle;
    int _productPageStyle;
    SKRemoteProductViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;
    NSDictionary *_scriptContextDictionary;
    BOOL _showsStoreButton;
    NSString *_cancelButtonTitle;
    NSString *_rightBarButtonTitle;
    BOOL _showsRightBarButton;
    BOOL _askToBuy;
    NSString *_promptString;
}

+ (void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)getCanLoadURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) BOOL showsStoreButton; // @synthesize showsStoreButton=_showsStoreButton;
@property(nonatomic) BOOL askToBuy; // @synthesize askToBuy=_askToBuy;
@property(copy, nonatomic) NSDictionary *scriptContextDictionary; // @synthesize scriptContextDictionary=_scriptContextDictionary;
@property(nonatomic) BOOL showsRightBarButton; // @synthesize showsRightBarButton=_showsRightBarButton;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *rightBarButtonTitle; // @synthesize rightBarButtonTitle=_rightBarButtonTitle;
@property(copy, nonatomic) NSString *promptString; // @synthesize promptString=_promptString;
@property(nonatomic) int productPageStyle; // @synthesize productPageStyle=_productPageStyle;
@property(nonatomic) id <SKStoreProductViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) BOOL automaticallyDismisses; // @synthesize automaticallyDismisses=_automaticallyDismisses;
@property(copy, nonatomic) NSString *affiliateIdentifier; // @synthesize affiliateIdentifier=_affiliateIdentifier;
@property(copy, nonatomic) NSString *additionalBuyParameters; // @synthesize additionalBuyParameters=_additionalBuyParameters;
- (void)_throwUnsupportedPresentationException;
- (void)_setLoadBlock:(CDUnknownBlockType)arg1;
- (void)_requestRemoteViewController;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)_addRemoteView;
- (void)_resetRemoteViewController;
- (void)_presentPageWithRequest:(id)arg1 animated:(BOOL)arg2;
- (void)_loadDidFinishWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_didFinishWithResult:(int)arg1;
- (void)_didFinish;
- (void)loadProductWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)finishImmediately;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

