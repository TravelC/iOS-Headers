/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EDCollection.h>

@interface EDStylesCollection : EDCollection
{
    unsigned int mDefaultWorkbookStyleIndex;
}

- (id)init;
- (unsigned int)addObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeAllObjects;
- (id)defaultWorkbookStyle;
- (unsigned int)defaultWorkbookStyleIndex;
- (void)setDefaultWorkbookStyleIndex:(unsigned int)arg1;

@end

