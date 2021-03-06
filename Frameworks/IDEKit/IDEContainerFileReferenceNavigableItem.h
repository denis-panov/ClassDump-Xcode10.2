//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEFileReferenceNavigableItem.h>

@class NSString;

@interface IDEContainerFileReferenceNavigableItem : IDEFileReferenceNavigableItem
{
    NSString *_scmAggregateLocalStatus;
    NSString *_scmAggregateServerStatus;
    BOOL _isRecursiveContainerReference;
}

+ (id)keyPathsForValuesAffectingAggregateSourceControlServerStatus;
+ (id)keyPathsForValuesAffectingAggregateSourceControlLocalStatus;
- (void).cxx_destruct;
@property(readonly) NSString *aggregateSourceControlServerStatus;
@property(readonly) NSString *aggregateSourceControlLocalStatus;
- (void)updateAttributes;
- (BOOL)coordinatorFilteringShouldFilterChildItems;
- (BOOL)_shouldResetChildItemsOnDocumentClose;
- (void)updateChildRepresentedObjects;
- (id)childRepresentedObjects;
- (id)childItemsKeyPath;
- (BOOL)isLeaf;
- (void)_setParentItem:(id)arg1;
- (BOOL)isDocumentNavigableItem;

@end

