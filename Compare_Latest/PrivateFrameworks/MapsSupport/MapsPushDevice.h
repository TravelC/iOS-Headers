//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSDevice, NSData, NSString;

__attribute__((visibility("hidden")))
@interface MapsPushDevice : NSObject
{
    IDSDevice *_device;
    NSData *pushToken;
}

@property(readonly, nonatomic) IDSDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
@property(readonly, getter=isFake) BOOL fake;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSString *colorName;
@property(readonly, copy) NSString *model;
- (id)initWithIDSDevice:(id)arg1;

@end
