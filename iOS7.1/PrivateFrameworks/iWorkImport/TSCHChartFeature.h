//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCHUnretainedParent.h"

@class NSArray, TSCHChartType;

__attribute__((visibility("hidden")))
@interface TSCHChartFeature : NSObject <TSCHUnretainedParent>
{
    TSCHChartType *mChartType;
    NSArray *mValueAxisIDs;
    NSArray *mCategoryAxisIDs;
}

@property(readonly, nonatomic) NSArray *categoryAxisIDs; // @synthesize categoryAxisIDs=mCategoryAxisIDs;
@property(readonly, nonatomic) NSArray *valueAxisIDs; // @synthesize valueAxisIDs=mValueAxisIDs;
- (float)sageMaxDepthRatio;
- (float)maxDepthRatio;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(CDStruct_1f804ca1)arg2;
- (Class)stageClass;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsSharedAndSeparateX;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsMoreThanOneLiveCategory;
- (BOOL)supportsIndividualShadowRendering;
- (BOOL)supportsBorderFrame;
- (BOOL)isPie;
- (BOOL)isHorizontal;
- (BOOL)supportsCategoryAxisMinorTickmarks;
- (BOOL)supportsCategoryAxisSeriesNames;
- (BOOL)supportsElementChunking;
- (int)stackingSignRule;
- (BOOL)supportsSymbolOverhang;
- (id)supportedAxisScales;
- (BOOL)supportsPercentNumberFormatting;
- (BOOL)supportsLabelExplosion;
- (BOOL)supportsElementSeriesNames;
- (int)labelOrientation;
- (id)columnShapeUIName;
- (BOOL)supportsColumnShape;
- (BOOL)supportsInterSetDepthGap;
- (BOOL)supportsErrorBars;
- (BOOL)supportsTrendLines;
- (BOOL)supportsReverseChunking;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsEditing;
- (BOOL)supportsValueLabels;
- (BOOL)supportsSeriesLabels;
- (BOOL)supportsGroupedShadows;
- (BOOL)drawValueLabelsForZero;
- (BOOL)requiresAxisOrdinal;
- (id)supportedSeriesTypes;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)reverseSingleColumnLegendOrder;
- (id)genericToSpecificPropertyMap;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (Class)presetImagerClass;
- (id)categoryLabelPositioner;
- (id)valueLabelPositioner;
- (id)defaultDataFileName;
- (unsigned int)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (void)p_initializeAxisIDs;
- (BOOL)supportsEditingForAxisID:(id)arg1;
- (Class)p_selectAxisClassForScale:(int)arg1 linearClass:(Class)arg2 logClass:(Class)arg3 percentClass:(Class)arg4;
- (void)dealloc;
- (void)clearParent;
- (id)initWithChartType:(id)arg1;
- (id)init;
- (int)deprecated3DShadowSpecificProperty;
- (int)deprecated3DBevelEdgesSpecificProperty;

@end

