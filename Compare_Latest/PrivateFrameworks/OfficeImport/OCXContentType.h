//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OCXContentType : NSObject
{
    NSString *mContentType;
    NSString *mPath;
    NSString *mExtension;
}

@property(readonly, nonatomic) NSString *path; // @synthesize path=mPath;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=mContentType;
- (void)writeToStreamWriter:(id)arg1;
- (BOOL)isOverride;
- (void)dealloc;
- (id)initWithContentType:(id)arg1 path:(id)arg2;
- (id)initWithContentType:(id)arg1 extension:(id)arg2;

@end

