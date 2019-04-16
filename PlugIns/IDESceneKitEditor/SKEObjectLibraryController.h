//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDELibraryController.h>

@class NSMutableArray;

@interface SKEObjectLibraryController : IDELibraryController
{
    NSMutableArray *_defaultTemplateObjects;
    NSMutableArray *_userDefinedObjects;
    BOOL _activeEditorDocumentIsSKESceneDocument;
}

- (void).cxx_destruct;
- (id)createLibraryAssetWithRepresentedObject:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 image:(id)arg5 identifier:(id)arg6;
- (id)createLibraryAssetWithRepresentedObject:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 image:(id)arg5;
- (id)createLibraryAssetWithRepresentedObject:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 imageName:(id)arg5;
- (id)createLibraryAssetWithRepresentedObject:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 imageName:(id)arg5 bundleClass:(Class)arg6;
- (void)reloadObjectLibrary;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)activeEditorDidChange:(id)arg1;
- (BOOL)createAsset:(id *)arg1 forLibrarySourceWithIdentifier:(id *)arg2 fromPasteboard:(id)arg3;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (BOOL)canCreateAssetsFromPasteboard:(id)arg1 targetingLibrarySourceIdentifier:(id *)arg2;
- (id)readableAssetPasteboardTypes;
- (BOOL)removeAssets:(id)arg1 error:(id *)arg2;
- (BOOL)canRemoveAsset:(id)arg1;
- (void)userDidEditAsset:(id)arg1;
- (id)editorViewControllerForAsset:(id)arg1;
- (BOOL)canEditAsset:(id)arg1;
- (void)libraryDidLoad;

@end

