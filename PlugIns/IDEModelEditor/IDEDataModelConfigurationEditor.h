//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEModelEditor/IDEDMEditorController.h>

#import <IDEModelEditor/IDECapsuleListViewDataSource-Protocol.h>
#import <IDEModelEditor/IDEDataModelEditorController-Protocol.h>

@class CDMModel, DVTStackBacktrace, IDECapsuleListView, IDEDataModelConfigurationTableController, IDEDataModelEditor, NSArray, NSString;

@interface IDEDataModelConfigurationEditor : IDEDMEditorController <IDEDataModelEditorController, IDECapsuleListViewDataSource>
{
    IDEDataModelConfigurationTableController *tableController;
    IDECapsuleListView *capsuleListView;
    IDEDataModelEditor *_parentEditor;
}

+ (id)keyPathsForValuesAffectingSelectedConfigurations;
+ (id)keyPathsForValuesAffectingSelection;
@property(retain) IDEDataModelEditor *parentEditor; // @synthesize parentEditor=_parentEditor;
- (void).cxx_destruct;
- (id)allSubViewControllers;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (id)capsuleViewControllers;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
@property(readonly) CDMModel *model;
- (void)editNameForModelObject:(id)arg1;
@property(readonly, copy) NSArray *selectedConfigurations;
- (void)selectModelObjects:(id)arg1;
- (id)selection;
- (id)nibBundle;
- (BOOL)allowsViewType:(unsigned long long)arg1;
- (id)nibName;
- (id)identifier;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)takeFocus;
@property(readonly) IDEDataModelEditor *rootEditor;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

