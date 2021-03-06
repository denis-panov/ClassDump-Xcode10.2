//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebuggerUI/DBGDebugNavigatorContentObjectDataSource-Protocol.h>
#import <DebuggerUI/IDEDebugNavigableModel-Protocol.h>
#import <DebuggerUI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DBGViewDebuggerAdditionUIController, DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDELaunchSession, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;
@protocol IDEKeyDrivenNavigableItemRepresentedObject;

@interface DBGFocusedRoot : NSObject <DBGDebugNavigatorContentObjectDataSource, IDEKeyDrivenNavigableItemRepresentedObject, IDEDebugNavigableModel>
{
    id <IDEKeyDrivenNavigableItemRepresentedObject> _focusedRoot;
    CDUnknownBlockType _unfocusHandler;
    DBGViewDebuggerAdditionUIController *_viewDebuggingUIController;
}

+ (id)focusedRootWithObject:(id)arg1 uiController:(id)arg2 unfocusHandler:(CDUnknownBlockType)arg3;
+ (void)registerTableCellViewsForDebugNavigatorContentDelegateWithOutlineView:(id)arg1;
@property __weak DBGViewDebuggerAdditionUIController *viewDebuggingUIController; // @synthesize viewDebuggingUIController=_viewDebuggingUIController;
@property(copy) CDUnknownBlockType unfocusHandler; // @synthesize unfocusHandler=_unfocusHandler;
@property __weak id <IDEKeyDrivenNavigableItemRepresentedObject> focusedRoot; // @synthesize focusedRoot=_focusedRoot;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (id)focusedChildren;
- (id)tokenStringForDebugNavigatorContent;
- (BOOL)shouldShowOutlineCell;
- (void)_unfocusHierarchy:(id)arg1;
- (id)_createUnfocusButton;
- (id)createDebugNavigatorTableCellViewWithContentDelegate:(id)arg1;
- (id)createThreadsStackContentTableRowViewForWithContentDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
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
@property(readonly) Class superclass;

@end

