//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneObject.h>

#import "TSCH3DSceneObjectDelegator.h"

__attribute__((visibility("hidden")))
@interface TSCH3DChartSelectedElementHighlightSceneObject : TSCH3DSceneObject <TSCH3DSceneObjectDelegator>
{
}

+ (void)setHighlightColor:(id)arg1 scene:(id)arg2;
+ (void)setSelectedSeriesIndex:(unsigned int)arg1 scene:(id)arg2;
+ (id)propertiesForScene:(id)arg1;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)makeDelegateWithScene:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)render:(id)arg1;
- (id)p_calculateEdgeVerticesForPipeline:(id)arg1;

@end
