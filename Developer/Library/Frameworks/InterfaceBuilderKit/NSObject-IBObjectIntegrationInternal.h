//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface NSObject (IBObjectIntegrationInternal)
+ (void)ibRemoveStaticlyPopulatedKeyPaths:(id)arg1 toKeyPathSet:(id)arg2;
+ (void)ibAddStaticlyPopulatedKeyPaths:(id)arg1 toKeyPathSet:(id)arg2;
+ (void)didPutObjects:(id)arg1 onPasteboard:(id)arg2;
- (void)customizeForInsertionIntoDocument:(id)arg1 withObjects:(id)arg2 andInsertionContext:(id)arg3;
- (void)ibPopulatePreferredInspectorModes:(id)arg1;
- (id)ibPreferredInspectorModes;
- (void)ibWillAcceptedPastedObjects:(id)arg1 atIndexes:(id)arg2 intoToManyRelation:(id)arg3 inDocument:(id)arg4 insertionContext:(id)arg5;
- (void)ibWillAcceptedPastedObject:(id)arg1 intoToOneRelation:(id)arg2 inDocument:(id)arg3 insertionContext:(id)arg4;
- (void)ibDocument:(id)arg1 didStartSimulatorWithContext:(id)arg2;
- (void)ibDocument:(id)arg1 willStartSimulatorWithContext:(id)arg2;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (id)ibEditorSelectionOrderRelationLists;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (id)ibChildRelationOrder;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (BOOL)ibToManyRelationSupportsReplacement:(id)arg1;
- (BOOL)ibToManyRelationSupportsInsertion:(id)arg1;
- (BOOL)ibShouldIncludeKeyPathInIbtoolPrintingOutput:(id)arg1;
- (BOOL)ibIsKeyPathExemptFromLockingRules:(id)arg1;
- (BOOL)ibIsCustomObject;
- (id)ibDesignableColorKeyPath;
- (id)ibDesignableFontKeyPath;
- (id)designableTypeAliases;
- (void)noteDesignableDescendant:(id)arg1 didChangeProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (id)designableSubElementKeyPaths;
- (BOOL)ibDocument:(id)arg1 shouldPersistMetadataWithKey:(id)arg2;
- (void)ibFinishArchivingDocument:(id)arg1 withContext:(id)arg2;
- (void)ibBeginArchivingDocument:(id)arg1 withContext:(id)arg2;
- (void)customizeAfterRemovalFromDesignableDocument:(id)arg1;
- (void)ibDidRemoveFromDesignableDocument:(id)arg1;
- (void)customizeAfterAdditionToDesignableDocument:(id)arg1;
- (void)ibDidAddToDesignableDocument:(id)arg1;
- (void)awakeInDesignableDocument:(id)arg1;
- (void)ibAwakeInDesignableDocument:(id)arg1;
- (id)springLoadedObjectAtPoint:(struct CGPoint)arg1 inWindowController:(id)arg2;
- (BOOL)canEditInPersonalWindow;
- (BOOL)mustEditInPersonalWindow;
- (id)ibEditorWindowSizeVerificationKeyPath;
- (BOOL)ibShouldRebuildEditorAfterChangingProperty:(id)arg1;
- (void)takePastedAttributes:(id)arg1;
- (void)takeSnapshotValues:(id)arg1;
- (id)designableAttributesConfiguration;
- (id)configurationPasteboardType;
- (id)displayNameForDesignableKeyPath:(id)arg1;
- (id)ibDocumentationKeyPathForKeyPath:(id)arg1;
- (id)editorWindowControllerForDocument:(id)arg1;
- (void)didExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (void)didPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (id)orderedDesignableAttributesKeyPaths;
@end

