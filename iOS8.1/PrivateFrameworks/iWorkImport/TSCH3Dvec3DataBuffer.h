//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DFloatVectorDataBuffer.h>

__attribute__((visibility("hidden")))
@interface TSCH3Dvec3DataBuffer : TSCH3DFloatVectorDataBuffer
{
    vector_45b393db mContainer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (id)elementsAtIndices:(id)arg1;
- (unsigned int)componentByteSize;
- (unsigned int)components;
- (unsigned int)count;
- (void)fillCapacity;
- (const void *)data;
@property(readonly, nonatomic) vector_45b393db *container;
- (id)initWithCapacity:(unsigned int)arg1;

@end
