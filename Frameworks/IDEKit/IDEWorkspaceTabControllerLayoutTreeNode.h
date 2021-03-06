//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEKit/NSCoding-Protocol.h>

@class IDENavigableItemArchivableRepresentation, IDEWorkspaceTabControllerLayoutTree, NSArray, NSString, NSURL;

@interface IDEWorkspaceTabControllerLayoutTreeNode : NSObject <NSCoding>
{
    unsigned long long _orientation;
    unsigned long long _contentType;
    IDEWorkspaceTabControllerLayoutTreeNode *_parent;
    IDENavigableItemArchivableRepresentation *_documentArchivableRepresentation;
    IDEWorkspaceTabControllerLayoutTree *_layoutTree;
    NSArray *_children;
}

@property(readonly) IDENavigableItemArchivableRepresentation *documentArchivableRepresentation; // @synthesize documentArchivableRepresentation=_documentArchivableRepresentation;
@property(readonly) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(readonly) NSArray *children; // @synthesize children=_children;
@property(nonatomic) __weak IDEWorkspaceTabControllerLayoutTreeNode *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak IDEWorkspaceTabControllerLayoutTree *layoutTree; // @synthesize layoutTree=_layoutTree;
- (void).cxx_destruct;
@property(readonly) NSString *fullDescription;
- (void)appendDescriptionToString:(id)arg1 withIndentation:(id)arg2;
- (id)description;
@property(readonly) NSArray *descendantLeafNodes;
- (void)addLeafNodesToMutableArray:(id)arg1;
@property(readonly) NSURL *fileURL;
- (id)lastLeafNodeOfContentType:(unsigned long long)arg1;
- (id)firstLeafNodeOfContentType:(unsigned long long)arg1;
- (id)descendantTreeNodeForIndexPath:(id)arg1;
- (id)indexPathRelativeToNode:(id)arg1;
@property(readonly) IDEWorkspaceTabControllerLayoutTreeNode *rootLayoutTreeNode;
@property(readonly, getter=isLeaf) BOOL leaf;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChildren:(id)arg1 orientation:(unsigned long long)arg2;
- (id)initLeafNodeWithContentType:(unsigned long long)arg1 documentArchivableRepresentation:(id)arg2;
- (id)generateLayoutTreeCell;

@end

