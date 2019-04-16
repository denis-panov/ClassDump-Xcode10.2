//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/NSCollectionViewDataSource-Protocol.h>
#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBICAbstractCatalogItem, IBICAssetCollectionViewItem, IBICAssetOverviewCapsuleController, NSIndexPath;

@protocol IBICAssetCollectionViewItemDataSource <NSCollectionViewDataSource, NSObject>
- (void)collectionViewItem:(IBICAssetCollectionViewItem *)arg1 setHeight:(double)arg2 forCatalogItem:(IBICAbstractCatalogItem *)arg3;
- (NSIndexPath *)collectionViewItem:(IBICAssetCollectionViewItem *)arg1 indexPathForCatalogItem:(IBICAbstractCatalogItem *)arg2;
- (void)collectionViewItem:(IBICAssetCollectionViewItem *)arg1 invalidateViewController:(IBICAssetOverviewCapsuleController *)arg2;
- (IBICAssetOverviewCapsuleController *)collectionViewItem:(IBICAssetCollectionViewItem *)arg1 createCatalogDetailControllerForCatalogItem:(IBICAbstractCatalogItem *)arg2;
@end

