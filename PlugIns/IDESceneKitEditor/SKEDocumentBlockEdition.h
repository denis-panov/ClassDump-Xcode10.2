//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESceneKitEditor/SKEDocumentEdition.h>

@interface SKEDocumentBlockEdition : SKEDocumentEdition
{
    id _object;
    CDUnknownBlockType _doBlock;
    CDUnknownBlockType _undoBlock;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (id)initWithDocument:(id)arg1 object:(id)arg2 doBlock:(CDUnknownBlockType)arg3 undoBlock:(CDUnknownBlockType)arg4;

@end

