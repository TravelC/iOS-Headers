/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class PLCameraButtonBar;

@interface PLCameraControlsContainerView : UIView
{
    PLCameraButtonBar *_topButtonBar;
    BOOL _shouldFollowOverlayView;
}

@property(readonly, nonatomic) BOOL shouldFollowOverlayView; // @synthesize shouldFollowOverlayView=_shouldFollowOverlayView;
@property(readonly, nonatomic) PLCameraButtonBar *topButtonBar; // @synthesize topButtonBar=_topButtonBar;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 showControlsBackground:(BOOL)arg2;

@end

