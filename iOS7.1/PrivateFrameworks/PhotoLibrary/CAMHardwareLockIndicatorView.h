//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibrary/CAMBadgeTextView.h>

@class NSDictionary;

@interface CAMHardwareLockIndicatorView : CAMBadgeTextView
{
    BOOL _focusLocked;
    BOOL _exposureLocked;
    NSDictionary *__indicatorTextAttributes;
}

@property(readonly, nonatomic) NSDictionary *_indicatorTextAttributes; // @synthesize _indicatorTextAttributes=__indicatorTextAttributes;
@property(nonatomic, getter=isExposureLocked) BOOL exposureLocked; // @synthesize exposureLocked=_exposureLocked;
@property(nonatomic, getter=isFocusLocked) BOOL focusLocked; // @synthesize focusLocked=_focusLocked;
- (float)_textHorizontalKerningOffset;
- (float)_textVerticalInset;
- (float)_textHorizontalInset;
- (id)_textAttributes;
- (id)_text;
- (void)_updateFromHardwareChange;
- (id)_textForCurrentHardwareState;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMHardwareLockIndicatorViewInitialization;

@end

