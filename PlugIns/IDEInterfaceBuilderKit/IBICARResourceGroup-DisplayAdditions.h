//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/IBICARResourceGroup.h>

#import <IDEInterfaceBuilderKit/IBICAbstractCollectionParent-Protocol.h>

@class NSString;

@interface IBICARResourceGroup (DisplayAdditions) <IBICAbstractCollectionParent>
+ (id)itemsFromOverlayOrnament:(id)arg1;
+ (id)synthesizeItemsFromLoosePaths:(id)arg1 claimingPaths:(id *)arg2;
+ (id)typeNameForDisplay;
- (id)createChildContentFromDropIndicator:(id)arg1;
- (id)overviewCapsuleSpecification;
- (BOOL)displaysChildrenInOutlineView;
- (id)icon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

