//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IDEWindowMenuController : NSObject
{
}

+ (void)_activateXcode;
+ (id)_activeEditorDocumentDictionariesForWorkspaceDocument:(id)arg1 allEditorDocumentDictionaries:(id *)arg2;
+ (id)_tabDictionaryForTabController:(id)arg1 isSelected:(BOOL)arg2;
+ (id)_iconForURL:(id)arg1 forWorkspace:(id)arg2 inWindow:(id)arg3;
+ (void)_createAttributedTitlesForItemDictionaries:(id)arg1 includeIconInTitles:(BOOL)arg2;
+ (void)_createDisambiguatedAttributedTitlesForItemDictionaries:(id)arg1 includeIconInTitles:(BOOL)arg2;
+ (id)titleForItemWithURL:(id)arg1 name:(id)arg2 image:(id)arg3 parentLocations:(id)arg4 presentedParentLocationCount:(unsigned long long)arg5 includeIconInTitles:(BOOL)arg6;
+ (id)_iconAsAttributedStringForURL:(id)arg1 image:(id)arg2;
+ (id)_unknownItemIcon;
+ (id)_localizedNameForURL:(id)arg1;
+ (id)_parentDirectoryURLForURL:(id)arg1;
+ (id)_nameForURL:(id)arg1;
+ (id)sharedWindowMenuController;
- (void)_showDocumentationWindow:(id)arg1;
- (void)_activateWorkspaceWindow:(id)arg1 sender:(id)arg2;
- (id)_windowForWorkspaceWindowControllerMenuItem:(id)arg1;
- (void)_activateWorkspaceWindowController:(id)arg1;
- (void)_activateSelectedTabForWorkspaceWindowController:(id)arg1;
- (id)dockWindowMenuItems;
- (id)windowMenuItems;
- (id)_windowMenuItemsWithIconInTitles:(BOOL)arg1;
- (id)_workspaceDocumentDictionaries;
- (id)_menuItemForWindow:(id)arg1 target:(id)arg2 selector:(SEL)arg3 withPrefix:(id)arg4 iconOverride:(id)arg5;
- (id)_menuItemForEditorDocumentDictionary:(id)arg1 withIndentationLevel:(long long)arg2;

@end

