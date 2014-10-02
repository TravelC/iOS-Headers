//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface NSFileAccessIntent : NSObject
{
    NSURL *_url;
    BOOL _isRead;
    int _options;
}

+ (id)writingIntentWithURL:(id)arg1 options:(unsigned int)arg2;
+ (id)readingIntentWithURL:(id)arg1 options:(unsigned int)arg2;
@property(readonly) BOOL isRead; // @synthesize isRead=_isRead;
@property(copy) NSURL *URL; // @synthesize URL=_url;
- (void)dealloc;
- (id)description;
@property(readonly) unsigned int writingOptions;
@property(readonly) unsigned int readingOptions;

@end
