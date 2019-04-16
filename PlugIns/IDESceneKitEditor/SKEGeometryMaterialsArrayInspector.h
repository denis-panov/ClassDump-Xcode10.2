//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESceneKitEditor/SKEStaticTableViewInspector.h>

#import <IDESceneKitEditor/NSTableViewDataSource-Protocol.h>
#import <IDESceneKitEditor/SKEMaterialPickerDataSource-Protocol.h>

@class DVTGradientImageButton, DVTObservingToken, NSString;

@interface SKEGeometryMaterialsArrayInspector : SKEStaticTableViewInspector <NSTableViewDataSource, SKEMaterialPickerDataSource>
{
    BOOL _isShowingPicker;
    BOOL _ignoreSelectionChange;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_deleteButton;
    DVTObservingToken *_geometryObservingToken;
    DVTObservingToken *_geometryMaterialsObservingToken;
    DVTObservingToken *_geometryMaterialSelectedIndexObservingToken;
}

+ (struct _NSRange)visibleRowCountRange;
+ (BOOL)wantsEditionBar;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)materialLibraryForMaterialPicker:(id)arg1;
- (id)defaultMaterialForMaterialPicker:(id)arg1;
- (void)deleteMaterialAction:(id)arg1;
- (void)dismissViewController:(id)arg1;
- (void)addMaterialAction:(id)arg1;
- (void)moveMaterialAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeMaterialsAtIndexes:(id)arg1;
- (void)addMaterial:(id)arg1;
- (void)configureEditionBar;
- (void)updateMaterialSelection;
- (void)updateMaterialsArray;
- (id)inspectedGeometryAndState:(long long *)arg1;
- (id)inspectedNodeAndState:(long long *)arg1;
- (void)resetGeometryMaterialsObserving;
- (void)setContent:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

