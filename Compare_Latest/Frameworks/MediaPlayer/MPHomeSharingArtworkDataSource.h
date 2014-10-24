//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@class HSHomeSharingLibrary;

@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
    HSHomeSharingLibrary *_library;
}

@property(retain, nonatomic) HSHomeSharingLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)supportedSizesForCatalog:(id)arg1;
- (BOOL)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;

@end
