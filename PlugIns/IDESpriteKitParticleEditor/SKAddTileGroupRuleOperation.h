//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@interface SKAddTileGroupRuleOperation : SKDocumentOperation
{
    id _tileSet;
    id _tileGroup;
    id _newRule;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (id)initWithDocument:(id)arg1 addingRule:(id)arg2 toTileGroup:(id)arg3 forTileSet:(id)arg4;

@end

