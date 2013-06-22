/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PKPassGroupStackViewDatasource-Protocol.h"
#import "PKPassGroupStackViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WLCardGroupsControllerDelegate-Protocol.h"

@class NSMutableArray, NSTimer, PKPassGroupStackView, PKPassGroupsController, PKPassLibrary, PKWelcomePass;

@interface PKPassGroupsViewController : UIViewController <WLCardGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate>
{
    PKPassLibrary *_passLibrary;
    PKPassGroupsController *_cardGroupsController;
    NSMutableArray *_minimumCardHeightFromHereToTop;
    PKPassGroupStackView *_cardStackView;
    unsigned int _modalCardIndex;
    BOOL _viewAppeared;
    BOOL _viewAppearedBefore;
    int _presentationState;
    NSTimer *_allowDimmingTimer;
    PKWelcomePass *_welcomePass;
    unsigned long long tick;
    unsigned long long tock;
    id <PKPassGroupsViewControllerDelegate> _delegate;
}

@property(nonatomic) id <PKPassGroupsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPassGroupStackView *groupStackView; // @synthesize groupStackView=_cardStackView;
- (void)cardsChanged:(id)arg1;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)_applyPresentationState;
- (void)_calculateMinimumCardHeights;
- (void)_setWelcomePassDeleted:(BOOL)arg1;
- (BOOL)_welcomePassDeleted;
- (id)_welcomePass;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cardStackView:(id)arg1 didAnimateToState:(int)arg2;
- (void)updateLockscreenIdleTimer;
- (void)allowIdleTimer;
- (int)suppressedContent;
- (BOOL)passesGrowWhenFlipped;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (float)minimumItemHeightStartingAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfGroup:(id)arg1;
- (float)groupHeightAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfGroups;
- (id)groupAtIndex:(unsigned int)arg1;
- (void)presentPassWithBulletinRecordID:(id)arg1;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)presentGroupTable;
- (void)reloadPasses;
- (void)startListeningForNotifications;
- (void)stopListentingForNotifications;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)wantsFullScreenLayout;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
