//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorViewController.h>

#import <IDEIntentBuilderEditor/IDECapsuleListViewDataSource-Protocol.h>

@class IDECapsuleListView, IDEIntentBuilderEditorEnumValuesCapsuleViewController, IDEIntentBuilderEditorIntentCapsuleViewController, IDEIntentBuilderEditorIntentParameterCombinationsCapsuleViewController, IDEIntentBuilderEditorIntentParametersCapsuleViewController, IDEIntentBuilderEditorIntentResponseCapsuleViewController, IDEIntentBuilderGroupItem, NSArray, NSScrollView, NSString;

@interface IDEIntentBuilderEditorContentViewController : IDEIntentBuilderEditorViewController <IDECapsuleListViewDataSource>
{
    NSArray *_capsuleViewControllers;
    IDEIntentBuilderGroupItem *_previouslySelectedGroupItem;
    NSScrollView *_capsuleListScrollView;
    IDECapsuleListView *_capsuleListView;
    IDEIntentBuilderEditorIntentCapsuleViewController *_intentCapsuleViewController;
    IDEIntentBuilderEditorIntentParametersCapsuleViewController *_intentParametersCapsuleViewController;
    IDEIntentBuilderEditorEnumValuesCapsuleViewController *_enumValuesCapsuleViewController;
    IDEIntentBuilderEditorIntentParameterCombinationsCapsuleViewController *_parameterCombinationsCapsuleViewController;
    IDEIntentBuilderEditorIntentResponseCapsuleViewController *_intentResponseCapsuleViewController;
}

@property __weak IDEIntentBuilderEditorIntentResponseCapsuleViewController *intentResponseCapsuleViewController; // @synthesize intentResponseCapsuleViewController=_intentResponseCapsuleViewController;
@property __weak IDEIntentBuilderEditorIntentParameterCombinationsCapsuleViewController *parameterCombinationsCapsuleViewController; // @synthesize parameterCombinationsCapsuleViewController=_parameterCombinationsCapsuleViewController;
@property __weak IDEIntentBuilderEditorEnumValuesCapsuleViewController *enumValuesCapsuleViewController; // @synthesize enumValuesCapsuleViewController=_enumValuesCapsuleViewController;
@property __weak IDEIntentBuilderEditorIntentParametersCapsuleViewController *intentParametersCapsuleViewController; // @synthesize intentParametersCapsuleViewController=_intentParametersCapsuleViewController;
@property __weak IDEIntentBuilderEditorIntentCapsuleViewController *intentCapsuleViewController; // @synthesize intentCapsuleViewController=_intentCapsuleViewController;
@property __weak IDECapsuleListView *capsuleListView; // @synthesize capsuleListView=_capsuleListView;
@property __weak NSScrollView *capsuleListScrollView; // @synthesize capsuleListScrollView=_capsuleListScrollView;
- (void).cxx_destruct;
- (BOOL)_needsToReloadData;
- (id)_capsuleViewControllersForGroup:(id)arg1;
- (id)_capsuleViewControllers;
- (void)selectionDidChange;
- (void)selectionWillChange;
- (void)modelDidChange;
- (void)modelWillChange;
- (void)primitiveInvalidate;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (void)addParameter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

