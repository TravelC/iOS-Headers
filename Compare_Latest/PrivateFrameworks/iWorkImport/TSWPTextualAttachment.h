/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPAttachment.h>

// Not exported
@interface TSWPTextualAttachment : TSWPAttachment
{
}

+ (id)newObjectForUnarchiver:(id)arg1;
- (id)stringEquivalentWithLayoutParent:(id)arg1;
- (void)setStringEquivalent:(id)arg1;
- (id)stringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3;
- (void)saveToArchive:(struct TextualAttachmentArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (const struct TextualAttachmentArchive *)textualAttachmentArchiveFromUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (_Bool)shouldArchiveStringEquivalent;

@end
