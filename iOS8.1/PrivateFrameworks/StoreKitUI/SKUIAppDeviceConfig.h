//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IKAppDeviceConfig.h"

@class NSString;

@interface SKUIAppDeviceConfig : NSObject <IKAppDeviceConfig>
{
}

- (id)timeZone;
- (id)systemLanguage;
- (id)storeFrontCountryCode;
- (struct CGSize)screenSize;
- (unsigned int)preferredVideoPreviewFormat;
- (unsigned int)preferredVideoFormat;
- (BOOL)isTimeZoneSet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

