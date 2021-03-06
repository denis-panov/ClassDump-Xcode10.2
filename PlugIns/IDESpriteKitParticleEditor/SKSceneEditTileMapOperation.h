//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class SKTileMapNode;

@interface SKSceneEditTileMapOperation : SKDocumentOperation
{
    SKTileMapNode *_tileMapNode;
    unsigned int *_oldTiles;
    unsigned int *_newTiles;
    unsigned long long _startColumn;
    unsigned long long _startRow;
    unsigned long long _width;
    unsigned long long _height;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 tileMap:(id)arg2 preChangeTileArray:(unsigned int *)arg3 postChangeTileArray:(unsigned int *)arg4 startColumn:(unsigned long long)arg5 startRow:(unsigned long long)arg6 modifiedWidth:(unsigned long long)arg7 modifiedHeight:(unsigned long long)arg8;

@end

