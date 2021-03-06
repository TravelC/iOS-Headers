/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIActivityItemsSource-Protocol.h"

@class NSMutableDictionary, RadioStation;

@interface RUStationActivityItemsProvider : NSObject <UIActivityItemsSource>
{
    NSMutableDictionary *_shareMessageByShareType;
    NSMutableDictionary *_shareURLByShareType;
    RadioStation *_station;
}

@property(readonly, nonatomic) RadioStation *station; // @synthesize station=_station;
- (void).cxx_destruct;
- (id)_shareURLForActivityType:(id)arg1;
- (long long)_shareTypeForActivityType:(id)arg1;
- (id)_shareMessageForActivityType:(id)arg1;
- (void)_loadSharingInformationForActivityType:(id)arg1;
- (_Bool)_hasLoadedSharingInformationForActivityType:(id)arg1;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)initWithRadioStation:(id)arg1;

@end

