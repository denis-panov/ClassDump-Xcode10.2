//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESourceEditor/IDECodeLibraryDetailController.h>

@class _TtC15IDESourceEditor37IDECodeLibraryPegasusSourceEditorView;

__attribute__((visibility("hidden")))
@interface _TtC15IDESourceEditor37IDECodeLibraryPegasusDetailController : IDECodeLibraryDetailController
{
    // Error parsing type: , name: sourceEditorView
    // Error parsing type: , name: refreshingWithAsset
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)sizeToFitSuggestedSize:(struct CGSize)arg1 forAsset:(id)arg2;
- (void)refreshWithAsset:(id)arg1 representedObject:(id)arg2;
- (void)detailEditorControllerDidChangeCurrentDetailController:(id)arg1;
- (void)detailEditorControllerWillChangeCurrentDetailController:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
@property(nonatomic) __weak _TtC15IDESourceEditor37IDECodeLibraryPegasusSourceEditorView *sourceEditorView; // @synthesize sourceEditorView;

@end

