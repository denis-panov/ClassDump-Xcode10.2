//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <InterfaceBuilderKit/IBBoundInspector.h>

@class IBLabelChooser, NSButton, NSPopUpButton, NSTextField, NSTextView;

@interface IBObjectIdentityInspector : IBBoundInspector
{
    NSTextField *nameTextField;
    NSTextField *objectIDTextField;
    NSTextView *notesTextView;
    NSButton *showNotesCheckBox;
    NSPopUpButton *propertyAccessControlPopUp;
    IBLabelChooser *labelChooser;
}

- (id)label;
- (void)changeSnowNotes:(id)arg1;
- (void)changeLabel:(id)arg1;
- (void)changeName:(id)arg1;
- (id)affectedKeyPathsOfInspectedObjectsForView:(id)arg1;
- (void)reflectLockedStateForView:(id)arg1;
- (void)clearLockedStateForView:(id)arg1;
- (void)refresh;
- (long long)inheritedPropertyAccessControlForObject:(id)arg1;
- (void)awakeFromNib;

@end
