//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import "IBNSTouchBarItem.h"

#import "IBDocumentArchiving-Protocol.h"

@class IBNSTouchBar, NSGroupTouchBarItem, NSString;

@interface IBNSGroupTouchBarItem : IBNSTouchBarItem <IBDocumentArchiving>
{
    NSGroupTouchBarItem *_runtimeGroupTouchBarItem;
    IBNSTouchBar *_groupTouchBar;
    long long _groupUserInterfaceLayoutDirection;
}

+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property long long groupUserInterfaceLayoutDirection; // @synthesize groupUserInterfaceLayoutDirection=_groupUserInterfaceLayoutDirection;
@property(retain) IBNSTouchBar *groupTouchBar; // @synthesize groupTouchBar=_groupTouchBar;
- (void).cxx_destruct;
- (id)childTouchBar;
- (id)runtimeTouchBarItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoder;
- (void)setIbInspectedGroupUserInterfaceLayoutDirection:(long long)arg1;
- (long long)ibInspectedGroupUserInterfaceLayoutDirection;
- (id)ibLocalAttributeKeyPaths;
- (void)drawTouchBarPlaceholderInRect:(struct CGRect)arg1;
- (BOOL)touchBarItemDrawsPlaceholder;
- (id)ibTypeNameForParentTouchBarItem;
- (id)ibTypeNameForDefaultLabel;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibMutuallyExclusiveItemsFromItems:(id)arg1;
- (BOOL)ibChildTouchBarIsNested;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
