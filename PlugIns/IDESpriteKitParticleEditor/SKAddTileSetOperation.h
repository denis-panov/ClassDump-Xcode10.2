//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class SKTileSetNavigableContainer;

@interface SKAddTileSetOperation : SKDocumentOperation
{
    SKTileSetNavigableContainer *_tileSetContainer;
    id _newSet;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (id)initWithDocument:(id)arg1 addingSet:(id)arg2 toTileSetContainer:(id)arg3;

@end

