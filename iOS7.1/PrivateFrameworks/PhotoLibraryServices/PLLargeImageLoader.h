//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLPreheatItemSource.h"

@interface PLLargeImageLoader : NSObject <PLPreheatItemSource>
{
    int _format;
}

@property(nonatomic) int format; // @synthesize format=_format;
- (id)preheatItemForAsset:(id)arg1 options:(unsigned int)arg2;
- (id)initWithFormat:(int)arg1;

@end

