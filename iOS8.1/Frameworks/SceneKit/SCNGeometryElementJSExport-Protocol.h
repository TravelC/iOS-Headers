//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSData;

@protocol SCNGeometryElementJSExport <JSExport>
+ (id)geometryElementWithData:(NSData *)arg1 primitiveType:(int)arg2 primitiveCount:(int)arg3 bytesPerIndex:(int)arg4;
@property(readonly, nonatomic) int bytesPerIndex;
@property(readonly, nonatomic) int primitiveCount;
@property(readonly, nonatomic) int primitiveType;
@property(readonly, nonatomic) NSData *data;
@end
