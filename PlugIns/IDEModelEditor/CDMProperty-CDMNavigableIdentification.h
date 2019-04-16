//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEModelFoundation/CDMProperty.h>

#import <IDEModelEditor/IDEDataModelObject-Protocol.h>

@class IDETypeIdentifier, NSArray, NSImage, NSString;
@protocol IDEDMModelObject, IDEDMSourceObject;

@interface CDMProperty (CDMNavigableIdentification) <IDEDataModelObject>
@property(readonly) NSArray *hierarchyTreeControllerChildren;
- (id)treeControllerChildren;
@property(readonly) id <IDEDMModelObject> parentObject;
@property(readonly) NSArray *structuralChildren;
@property(readonly) id <IDEDMSourceObject> sourceObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier; // @dynamic ideModelObjectTypeIdentifier;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) NSImage *representativeIcon; // @dynamic representativeIcon;
@property(readonly) Class superclass;
@end

