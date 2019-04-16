//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBAbstractSegueConnection.h>

@class NSString;

@interface IBStoryboardRelationshipSegue : IBAbstractSegueConnection
{
}

+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
+ (id)prototypeConnectionsForObject:(id)arg1;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)classIdentifier;
+ (id)menuLabelForConnection:(id)arg1;
+ (id)relationshipSegueWithKeyPath:(id)arg1 from:(id)arg2 to:(id)arg3;
+ (double)displayOrderPriority;
+ (BOOL)isObjectValidDestination:(id)arg1;
+ (BOOL)isObjectValidSource:(id)arg1;
- (id)displayGroupForDragFromObject:(id)arg1 toObject:(id)arg2;
- (id)missingComponents;
- (void)populateSegueTemplates:(id)arg1 andOutletsForCompiledDocument:(id)arg2;
- (BOOL)validateDestination:(id)arg1;
- (BOOL)validateSource:(id)arg1;
- (id)badgeImage;
- (id)displayValuesWithRespectToPrototype:(id)arg1 inDocument:(id)arg2;
- (BOOL)isExclusiveTo:(id)arg1 inObjectContainer:(id)arg2;
- (BOOL)isValidForDocument:(id)arg1 message:(id *)arg2;
- (id)_descriptionSubstringForLabel;
- (id)displayDescriptionInDocument:(id)arg1;
- (id)userPresentableLabel;
- (id)_relationshipDescriptionForKeyPath:(id)arg1;
@property(readonly) NSString *relationshipKeyPath;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

@end

