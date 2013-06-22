/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <WebKit/WebPolicyDecisionListener-Protocol.h>

@class WebPolicyDecisionListenerPrivate;

@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener>
{
    WebPolicyDecisionListenerPrivate *_private;
}

- (id)_initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (void)_usePolicy:(int)arg1;
- (void)_invalidate;
- (void)use;
- (void)ignore;
- (void)download;

@end
