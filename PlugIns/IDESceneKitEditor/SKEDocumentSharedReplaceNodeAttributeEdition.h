//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESceneKitEditor/SKEDocumentEdition.h>

@class NSMutableArray;

@interface SKEDocumentSharedReplaceNodeAttributeEdition : SKEDocumentEdition
{
    NSMutableArray *_subEditions;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (id)initWithDocument:(id)arg1 hierarchyRootNode:(id)arg2 oldAttribute:(id)arg3 newAttribute:(id)arg4;

@end

