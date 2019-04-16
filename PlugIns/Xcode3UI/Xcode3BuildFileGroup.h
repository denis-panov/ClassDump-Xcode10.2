//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTModelTreeNode.h>

#import <Xcode3UI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSMutableArray, NSNull, NSString, NSURL, Xcode3BuildPhase, _TtC13DVTFoundation9DVTSymbol;

@interface Xcode3BuildFileGroup : DVTModelTreeNode <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSString *_name;
}

+ (void)initialize;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly, nonatomic) NSImage *navigableItem_image;
- (void)primitiveInvalidate;
- (void)_buildPhaseChanged;
- (id)alertTextForRemovalOfItemsAtIndexes:(id)arg1;
- (BOOL)removeItemsAtIndexes:(id)arg1;
- (BOOL)canRemoveItemsAtIndexes:(id)arg1;
- (BOOL)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canInsertItems:(id)arg1;
- (void)initializeGroup;
- (id)init;

// Remaining properties
@property(readonly) Xcode3BuildPhase *buildPhase; // @dynamic buildPhase;
@property(copy) NSArray *buildPhaseItems; // @dynamic buildPhaseItems;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableBuildPhaseItems; // @dynamic mutableBuildPhaseItems;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Xcode3BuildFileGroup *parentGroup; // @dynamic parentGroup;
@property(readonly) Class superclass;

@end
