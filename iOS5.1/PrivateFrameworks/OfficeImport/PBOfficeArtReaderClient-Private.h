/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/PBOfficeArtReaderClient.h>

@interface PBOfficeArtReaderClient (Private)
+ (void)readClientAnchorFromContainer:(id)arg1 toDrawable:(id)arg2;
+ (void)readHyperlinkFromShapeContainerHolder:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (BOOL)readRecolorInfoFromClientDataHolder:(id)arg1 toClientData:(id)arg2;
+ (void)addRecolorSpec:(const struct PptRecolorSpec *)arg1 toDictionary:(id)arg2;
+ (BOOL)readOleFromClientDataHolder:(id)arg1 toGraphic:(id)arg2 tgtClientData:(id)arg3 state:(id)arg4;
+ (BOOL)readPlaceholderInfo:(id)arg1 clientData:(id)arg2 toGraphic:(id)arg3 presentationState:(id)arg4;
+ (id)createTargetElementFromDrawable:(id)arg1 clientData:(id)arg2 buildType:(int)arg3;
@end

