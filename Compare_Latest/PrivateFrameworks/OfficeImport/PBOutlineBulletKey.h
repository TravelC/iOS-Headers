//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface PBOutlineBulletKey : NSObject <NSCopying>
{
    unsigned long mSlideId;
    int mTextType;
    unsigned long mPlaceholderIndex;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSlideId:(unsigned long)arg1 textType:(int)arg2 placeholderIndex:(unsigned long)arg3;
- (id)initWithOutlineBullet:(id)arg1;

@end

