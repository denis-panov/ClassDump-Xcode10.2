//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEModelFoundation/NSCoding-Protocol.h>

@class NSMutableArray, NSString, XDModelManager, XDModelPackage;

@interface XDModel : NSObject <NSCoding>
{
    XDModelManager *_manager;
    NSString *_name;
    XDModelPackage *_rootPackage;
    NSMutableArray *_comments;
    id _controller;
}

- (void).cxx_destruct;
- (id)newDataTypeWithName:(id)arg1 inPackage:(id)arg2;
- (id)newInterfaceWithName:(id)arg1 inPackage:(id)arg2;
- (id)newClassWithName:(id)arg1 inPackage:(id)arg2;
- (id)newComment;
- (id)newPackageWithName:(id)arg1;
- (id)newDataTypeWithName:(id)arg1;
- (id)newInterfaceWithName:(id)arg1;
- (id)newClassWithName:(id)arg1;
- (id)newAssociation;
- (id)newGeneralizationFrom:(id)arg1 to:(id)arg2;
- (id)newImplementationOf:(id)arg1 by:(id)arg2;
- (id)newStereotypeWithName:(id)arg1;
- (id)newParameterWithName:(id)arg1;
- (id)newOperationWithName:(id)arg1;
- (id)newPropertyWithName:(id)arg1;
- (void)removeObjectFromCommentsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inCommentsAtIndex:(unsigned long long)arg2;
- (id)comments;
- (id)controller;
- (void)setController:(id)arg1;
- (id)rootPackage;
- (void)setManager:(id)arg1;
- (id)manager;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)_packagePathFromQualifiedName:(id)arg1;
- (id)_nameFromQualifiedName:(id)arg1;

@end

