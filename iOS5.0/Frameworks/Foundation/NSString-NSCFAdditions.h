/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSString.h>

@interface NSString (NSCFAdditions)
- (BOOL)_getCString:(char *)arg1 maxLength:(unsigned int)arg2 encoding:(unsigned long)arg3;
- (unsigned long)_fastestEncodingInCFStringEncoding;
- (unsigned long)_smallestEncodingInCFStringEncoding;
- (unsigned char)_encodingCantBeStoredInEightBitCFString;
- (id)_createSubstringWithRange:(struct _NSRange)arg1;
- (unsigned long)_cfTypeID;
@end

