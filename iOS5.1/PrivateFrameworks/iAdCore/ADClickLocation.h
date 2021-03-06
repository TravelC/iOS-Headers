/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@interface ADClickLocation : PBCodable
{
    BOOL _hasX;
    int _x;
    BOOL _hasY;
    int _y;
    BOOL _hasW;
    int _w;
    BOOL _hasH;
    int _h;
}

@property(nonatomic) int h; // @synthesize h=_h;
@property(nonatomic) BOOL hasH; // @synthesize hasH=_hasH;
@property(nonatomic) int w; // @synthesize w=_w;
@property(nonatomic) BOOL hasW; // @synthesize hasW=_hasW;
@property(nonatomic) int y; // @synthesize y=_y;
@property(nonatomic) BOOL hasY; // @synthesize hasY=_hasY;
@property(nonatomic) int x; // @synthesize x=_x;
@property(nonatomic) BOOL hasX; // @synthesize hasX=_hasX;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end

