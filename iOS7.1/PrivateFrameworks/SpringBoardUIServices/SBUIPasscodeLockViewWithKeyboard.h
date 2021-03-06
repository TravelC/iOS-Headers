//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>

#import "SBUIPasscodeEntryFieldDelegate.h"

@class SBPasscodeKeyboard, SBUIAlphanumericPasscodeEntryField, SBUIRingViewLabelButton, UILabel, UIView;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate>
{
    SBPasscodeKeyboard *_keyboard;
    SBUIAlphanumericPasscodeEntryField *_alphaEntryField;
    UILabel *_statusField;
    UILabel *_statusSubtitleView;
    UIView *_statusFieldBackground;
    SBUIRingViewLabelButton *_emergencyCallButton;
    UIView *_emergencyCallToTopFiller;
    UIView *_emergencyCallLeftFiller;
    UIView *_emergencyCallRightFiller;
    UIView *_statusFieldToTopOrEmergencyCallBottomFiller;
    UIView *_entryFieldToBottomFiller;
    BOOL _wasMinimizedWhenAnimationStarted;
    BOOL _previousKeyboardShowedInlineCandidates;
    BOOL _disableAnimationsDuringMinMax;
    BOOL _triedToMinMaxWhileRotating;
    BOOL _isAnimating;
}

@property(retain, nonatomic) UILabel *statusSubtitleView; // @synthesize statusSubtitleView=_statusSubtitleView;
@property(retain, nonatomic) UILabel *statusField; // @synthesize statusField=_statusField;
- (void)_updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;
- (void)_handleDidRotateNotification:(id)arg1;
- (void)_handleWillAnimateNotification:(id)arg1;
- (void)_handleWillRotateNotification:(id)arg1;
- (float)_statusTitleWidth;
- (float)_statusFieldHeight;
- (float)_keyboardToEntryFieldOffset;
- (struct CGRect)_keyboardFrameForInterfaceOrientation:(int)arg1;
- (void)_maximize;
- (void)_minimize;
- (void)_setMinimized:(BOOL)arg1;
- (BOOL)_isMinimized;
- (BOOL)_canMinMaxKeyboard;
- (void)_layoutForMinimizationState:(BOOL)arg1;
- (void)_toggleForStatusField;
- (void)_toggleForEmergencyCall;
- (void)_acceptOrCancelReturnKeyPress;
- (id)_newStatusSubtitleView;
- (id)_newStatusField;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (BOOL)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;
- (void)_notifyDelegatePasscodeEntered;
- (void)_hardwareReturnKeyPressed:(id)arg1;
- (void)_geometryChanged:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (void)setShowsStatusField:(BOOL)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)passcode;
- (void)_luminanceBoostDidChange;
- (float)backgroundAlpha;
- (void)dealloc;
- (id)init;

@end

