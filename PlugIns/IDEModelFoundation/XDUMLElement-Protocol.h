//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEModelFoundation/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol XDUMLComment, XDUMLElement, XDUMLNamedElement, XDUMLStereotype;

@protocol XDUMLElement <NSObject>
- (id <XDUMLNamedElement>)elementForName:(NSString *)arg1 inBucketNamed:(NSString *)arg2;
- (NSArray *)elementsInAllBuckets;
- (unsigned long long)elementsCountInBucketNamed:(NSString *)arg1;
- (NSArray *)elementsInBucketNamed:(NSString *)arg1;
- (unsigned long long)indexForElement:(id <XDUMLElement>)arg1 inBucketNamed:(NSString *)arg2;
- (void)removeElementAtIndex:(unsigned long long)arg1 fromBucketNamed:(NSString *)arg2;
- (void)removeElement:(id <XDUMLElement>)arg1 fromBucketNamed:(NSString *)arg2;
- (void)addElement:(id <XDUMLElement>)arg1 toBucketNamed:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (void)deleteElementsBucketWithName:(NSString *)arg1;
- (void)createElementsBucketWithName:(NSString *)arg1 allowsDuplicates:(BOOL)arg2 preserveInsertOrder:(BOOL)arg3;
- (void)setUniqueElementID:(id)arg1;
- (id)createUniqueElementID;
- (id)uniqueElementID;
- (id <XDUMLStereotype>)newStereotypeWithName:(NSString *)arg1;
- (void)removeStereotype:(id <XDUMLStereotype>)arg1;
- (void)addStereotype:(id <XDUMLStereotype>)arg1;
- (NSArray *)stereotypes;
- (void)removeObjectFromOwnedCommentsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id <XDUMLComment>)arg1 inOwnedCommentsAtIndex:(unsigned long long)arg2;
- (void)setOwner:(id <XDUMLElement>)arg1;
- (NSArray *)ownedComments;
- (id <XDUMLElement>)owner;
- (NSArray *)ownedElements;
@end

