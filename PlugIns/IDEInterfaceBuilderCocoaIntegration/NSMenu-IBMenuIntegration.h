//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSMenu.h>

@class NSArray;

@interface NSMenu (IBMenuIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedUserInterfaceLayoutDirection;
- (BOOL)ibCanSupportIdentifierProperty;
@property long long ibArchivedSystemMenuType;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibDefaultLabel;
@property long long ibInspectedUserInterfaceLayoutDirection;
- (void)setIbInspectedTitle:(id)arg1;
- (id)ibInspectedTitle;
@property(copy) NSArray *ibShadowedItemArray;
- (id)ibPasteboardTypes;
- (BOOL)ibMustBeBaseObjectOfEditorFrame;
- (Class)ibEditorClass;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (id)ibDefaultImage;
- (BOOL)ibRepresentsMainMenuOrDescendantOfMainMenu;
- (BOOL)ibRepresentsMainMenu;
- (BOOL)ibSupportsMultipleSimultaneousEditors;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
@end

