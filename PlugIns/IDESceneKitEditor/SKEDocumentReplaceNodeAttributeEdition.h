//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESceneKitEditor/SKEDocumentEdition.h>

@class SCNNode;

@interface SKEDocumentReplaceNodeAttributeEdition : SKEDocumentEdition
{
    SCNNode *_node;
    id _newAttribute;
    id _oldAttribute;
    Class _nodeAttributeClass;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (BOOL)_edit:(BOOL)arg1;
- (id)initWithDocument:(id)arg1 node:(id)arg2 nodeAttributeClass:(Class)arg3 newAttribute:(id)arg4;

@end

