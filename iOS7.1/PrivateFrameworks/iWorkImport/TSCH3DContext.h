//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSCH3DContext : NSObject <NSCopying>
{
    struct FramebufferAttributes mCurrentFramebufferAttributes;
}

- (id).cxx_construct;
- (void)setCurrentFramebufferAttributes:(const struct FramebufferAttributes *)arg1;
- (const struct FramebufferAttributes *)currentFramebufferAttributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;

@end

