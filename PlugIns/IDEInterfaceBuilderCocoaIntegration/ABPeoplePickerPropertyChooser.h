//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTBorderedView, DVTGradientImageButton, IDEControlGroup, NSArrayController, NSMenu, NSTableView;

@interface ABPeoplePickerPropertyChooser : IDEInspectorProperty
{
    NSTableView *_propertyTableView;
    NSMenu *_propertyMenu;
    NSArrayController *_propertyNamesAndTitlesArrayController;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlBar;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
}

@property(retain, nonatomic) DVTGradientImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) DVTGradientImageButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) DVTBorderedView *controlBar; // @synthesize controlBar=_controlBar;
@property(retain, nonatomic) IDEControlGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(retain, nonatomic) NSArrayController *propertyNamesAndTitlesArrayController; // @synthesize propertyNamesAndTitlesArrayController=_propertyNamesAndTitlesArrayController;
@property(retain, nonatomic) NSMenu *propertyMenu; // @synthesize propertyMenu=_propertyMenu;
@property(retain, nonatomic) NSTableView *propertyTableView; // @synthesize propertyTableView=_propertyTableView;
- (void).cxx_destruct;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (void)loadView;
- (void)updateAddRemoveButtonEnabledState;
- (void)setupControlBarAfterLoading;
- (BOOL)validateMenuItem:(id)arg1;
- (void)removeProperty:(id)arg1;
- (void)addProperty:(id)arg1;
- (void)popMenu:(id)arg1;
- (id)propertyNames;
- (id)selectedPickerView;
- (void)awakeFromNib;

@end

