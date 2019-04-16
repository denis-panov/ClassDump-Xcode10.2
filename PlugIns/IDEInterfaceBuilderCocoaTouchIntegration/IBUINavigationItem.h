//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBSceneUpdateRequestConfiguring-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class IBCocoaTouchTargetRuntime, IBUIBarButtonItem, IBUINamedEditableStringArea, IBUINavigationBar, IBUIView, NSArray, NSString;

@interface IBUINavigationItem : NSObject <IBDocumentArchiving, NSCoding, IBSceneUpdateRequestConfiguring>
{
    BOOL _leftItemsSupplementBackButton;
    NSString *_title;
    NSString *_prompt;
    long long _ibLargeTitleDisplayMode;
    IBUIView *_titleView;
    IBUIBarButtonItem *_backBarButtonItem;
    IBUINamedEditableStringArea *_titleEditableArea;
    IBUINamedEditableStringArea *_largeTitleEditableArea;
    IBUINamedEditableStringArea *_promptEditableArea;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    IBUINavigationBar *_navigationBar;
    IBCocoaTouchTargetRuntime *_targetRuntime;
    struct CGRect _titleViewFrameInEnclosingBar;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbInspectedBackButtonTitle;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(nonatomic) __weak IBUINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(copy, nonatomic) NSArray *rightBarButtonItems; // @synthesize rightBarButtonItems=_rightBarButtonItems;
@property(copy, nonatomic) NSArray *leftBarButtonItems; // @synthesize leftBarButtonItems=_leftBarButtonItems;
@property(readonly, nonatomic) IBUINamedEditableStringArea *promptEditableArea; // @synthesize promptEditableArea=_promptEditableArea;
@property(readonly, nonatomic) IBUINamedEditableStringArea *largeTitleEditableArea; // @synthesize largeTitleEditableArea=_largeTitleEditableArea;
@property(readonly, nonatomic) IBUINamedEditableStringArea *titleEditableArea; // @synthesize titleEditableArea=_titleEditableArea;
@property(readonly, nonatomic) struct CGRect titleViewFrameInEnclosingBar; // @synthesize titleViewFrameInEnclosingBar=_titleViewFrameInEnclosingBar;
@property(retain, nonatomic) IBUIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) IBUIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) long long ibLargeTitleDisplayMode; // @synthesize ibLargeTitleDisplayMode=_ibLargeTitleDisplayMode;
@property(nonatomic) BOOL leftItemsSupplementBackButton; // @synthesize leftItemsSupplementBackButton=_leftItemsSupplementBackButton;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)configureIncrementalSceneUpdateRequest:(id)arg1;
- (void)configureFullSceneUpdateRequest:(id)arg1;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)_decodeBarButtonItemsForToManyKey:(id)arg1 toOneKey:(id)arg2 coder:(id)arg3;
- (void)_encodeBarButtonItems:(id)arg1 forToManyKey:(id)arg2 toOneKey:(id)arg3 coder:(id)arg4;
- (void)removeRightBarButtonItems:(id)arg1;
- (void)insertRightBarButtonItemsFromCollection:(id)arg1 atIndex:(long long)arg2;
- (void)addRightBarButtonItemsFromCollection:(id)arg1;
- (void)removeLeftBarButtonItems:(id)arg1;
- (void)insertLeftBarButtonItemsFromCollection:(id)arg1 atIndex:(long long)arg2;
- (void)addLeftBarButtonItemsFromCollection:(id)arg1;
- (void)_setBarButtonItems:(id)arg1 forItemArrayReference:(id *)arg2;
- (void)setTitleViewFrameInEnclosingBar:(struct CGRect)arg1;
- (void)invalidateNavBarIfNeeded;
- (void)decodeOldValuesNames:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithTargetRuntime:(id)arg1;
- (void)setIbInspectedPrompt:(id)arg1;
- (id)ibInspectedPrompt;
- (id)parentViewController;
- (void)setIbInspectedBackButtonTitle:(id)arg1;
- (id)ibInspectedBackButtonTitle;
- (BOOL)ibInspectedSupportsLargeTitles;
- (BOOL)ibIsChildViewMovable:(id)arg1;
- (void)ibUnarchiveRightBarButtonItems:(id)arg1;
- (void)ibArchiveRightBarButtonItems:(id)arg1;
- (void)ibUnarchiveLeftBarButtonItems:(id)arg1;
- (void)ibArchiveLeftBarButtonItems:(id)arg1;
- (id)_ibUnarchiveBarButtonItemsForToManyKey:(id)arg1 toOneKey:(id)arg2 unarchiver:(id)arg3;
- (void)_ibArchiveBarButtonItems:(id)arg1 forToManyKey:(id)arg2 toOneKey:(id)arg3 archiver:(id)arg4;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (id)ibImageForSubgroupWithIdentifier:(id)arg1;
- (id)ibTitleForSubgroupWithIdentifier:(id)arg1;
- (id)ibToManyRelationshipNameForSubgroupWithIdentifier:(id)arg1;
- (id)ibSubgroupIdentifiers;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibConfigureSceneUpdateRequest:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibPasteboardTypes;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibLabelQualifierForChild:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibInitialConnectionLabelSearchTerm;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (Class)ibEditorClass;
- (id)ibLocalPropertiesForInheritableMetricsInvalidation;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

