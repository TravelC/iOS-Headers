/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFAttachmentDataProvider-Protocol.h"

@class MFMailMessage;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProvider>
{
    MFMailMessage *_message;
}

- (id)messageForAttachment:(id)arg1;
- (_Bool)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithDecryptedMessage:(id)arg1;

@end
