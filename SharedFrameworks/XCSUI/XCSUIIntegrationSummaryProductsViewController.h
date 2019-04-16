//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTViewController.h>

@class NSMutableArray, NSTextField, NSView, XCSIntegration;

@interface XCSUIIntegrationSummaryProductsViewController : DVTViewController
{
    XCSIntegration *_integration;
    NSMutableArray *_assetViews;
    NSView *_assetContainerView;
    NSTextField *_numberOfFilesField;
    NSTextField *_totalFileSizeField;
}

@property __weak NSTextField *totalFileSizeField; // @synthesize totalFileSizeField=_totalFileSizeField;
@property __weak NSTextField *numberOfFilesField; // @synthesize numberOfFilesField=_numberOfFilesField;
@property __weak NSView *assetContainerView; // @synthesize assetContainerView=_assetContainerView;
- (void).cxx_destruct;
- (void)repopulateAssets;
- (id)createAssetViewWithAsset:(id)arg1 type:(unsigned long long)arg2;
@property(retain, nonatomic) XCSIntegration *integration;
- (void)loadView;

@end

