/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFBase64Encoder : MFBaseFilterDataConsumer
{
    char *_table;
    unsigned int _left;
    unsigned char _leftovers[3];
    unsigned int _line;
    unsigned int _lineBreak;
    BOOL _padChar;
}

- (id)initWithConsumers:(id)arg1;
- (int)appendData:(id)arg1;
- (void)done;
@property(nonatomic) BOOL allowSlash;
- (void)setStandardLineBreak;
@property(nonatomic) BOOL padChar; // @synthesize padChar=_padChar;
@property(nonatomic) unsigned int lineBreak; // @synthesize lineBreak=_lineBreak;

@end

