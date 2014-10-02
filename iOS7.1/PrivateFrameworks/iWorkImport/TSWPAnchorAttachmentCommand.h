//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPTextBaseCommand.h>

#import "TSDCoalesceableInfoPositioningCommmand.h"

@class TSKAddedToDocumentContext, TSWPAttachment, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPAnchorAttachmentCommand : TSWPTextBaseCommand <TSDCoalesceableInfoPositioningCommmand>
{
    TSWPStorage *_storage;
    TSWPAttachment *_attachment;
    TSKAddedToDocumentContext *_dolcContext;
    unsigned int _charIndex;
    int _hOffsetType;
    float _hOffset;
    int _vOffsetType;
    float _vOffset;
    BOOL _isHTMLWrap;
    struct TSWPStorageTransaction *_undoRedoTransaction;
}

- (void)p_invalidateSelection:(id)arg1;
- (void)p_invalidateRange:(struct _NSRange)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (struct TSWPStorageTransaction *)undoRedoTransaction;
- (BOOL)shouldBeCoalescedWithInsertionCommandOfInfo:(id)arg1;
- (id)drawable;
- (void)redo;
- (void)undo;
- (void)undoRedo;
- (void)commit;
- (BOOL)process;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct AnchorAttachmentCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct AnchorAttachmentCommandArchive *)arg1 archiver:(id)arg2;
- (id)actionString;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 attachment:(id)arg2 charIndex:(unsigned int)arg3 hOffsetType:(int)arg4 hOffset:(float)arg5 vOffsetType:(int)arg6 vOffset:(float)arg7 dolcContext:(id)arg8;

@end
