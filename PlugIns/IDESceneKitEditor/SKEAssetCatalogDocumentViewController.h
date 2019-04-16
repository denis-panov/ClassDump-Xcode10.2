//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEEditor.h>

#import <IDESceneKitEditor/DVTReplacementViewDelegate-Protocol.h>
#import <IDESceneKitEditor/IDECapsuleListViewDataSource-Protocol.h>

@class DVTControllerContentView, IDECapsuleListView, NSArray, NSButton, NSString, SKEAssetCatalogCapsuleViewController, SKEAssetCatalogDocument;

@interface SKEAssetCatalogDocumentViewController : IDEEditor <DVTReplacementViewDelegate, IDECapsuleListViewDataSource>
{
    IDECapsuleListView *_capsuleListView;
    DVTControllerContentView *_commonOptionsView;
    DVTControllerContentView *_iosOptionsView;
    NSButton *_forceYUpButton;
    NSButton *_interleaveButton;
    NSButton *_preferCompressedTexturesButton;
    SKEAssetCatalogCapsuleViewController *_commonOptionsViewController;
    SKEAssetCatalogCapsuleViewController *_iosOptionsViewController;
    NSArray *_currentSelectedItems;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)selectDocumentLocations:(id)arg1;
- (void)setCurrentSelectedItems:(id)arg1;
- (id)currentSelectedItems;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (BOOL)canBecomeMainViewController;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) SKEAssetCatalogDocument *document; // @dynamic document;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

