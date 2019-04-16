//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class NSArray, NSColor, NSMenu, NSMutableArray, SKNode, SKSpriteNode, SKTileGroup, SKTileGroupRule;
@protocol SKTileSetEditorGroupOverviewViewDelegate;

@interface SKTileSetEditorGroupOverviewView : NSView
{
    SKTileGroup *_group;
    struct CGPoint _spriteOffsets[13];
    SKSpriteNode *_tileGroupTemplateSprites[13];
    SKSpriteNode *_tileSimpleGroupSprite;
    NSMutableArray *_tileCustomGroupSprites;
    NSArray *_inputTextures;
    SKTileGroupRule *_inputRule;
    SKSpriteNode *_inputSprite;
    struct CGSize _ruleSpriteSize;
    struct CGSize _advancedGroupDisplaySize;
    struct CGRect _advancedGroupDisplayRect;
    struct CGSize _customGroupDisplaySize;
    struct CGRect _customGroupDisplayRect;
    struct CGRect _footerRect;
    struct CGRect _usedFooterArea;
    unsigned long long _tileRequiredAdjacency[13];
    unsigned long long _customColumns;
    unsigned long long _customRows;
    NSColor *_footerDividerColor;
    NSMenu *_contextMenu;
    BOOL _selected;
    id <SKTileSetEditorGroupOverviewViewDelegate> _delegate;
    SKNode *_viewRoot;
    unsigned long long _selectedTileIndex;
}

@property(nonatomic) unsigned long long selectedTileIndex; // @synthesize selectedTileIndex=_selectedTileIndex;
@property(retain, nonatomic) SKNode *viewRoot; // @synthesize viewRoot=_viewRoot;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <SKTileSetEditorGroupOverviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (id)findRuleForTileTypeIndex:(unsigned long long)arg1 inTileGroup:(id)arg2;
- (id)createNewTileDefinitionWithTextures:(id)arg1;
- (void)setInputTextures:(id)arg1 forSprite:(id)arg2 withRule:(id)arg3;
- (void)createAndAddNewRuleForInputTextures:(id)arg1;
- (void)contextMenuReplaceExistingDefinition:(id)arg1;
- (void)contextMenuCreateNewDefinitions:(id)arg1;
- (void)contextMenuCreateNewAnimatedDefinition:(id)arg1;
- (void)processInputTextures:(id)arg1 forRule:(id)arg2 andSprite:(id)arg3;
- (void)processInputTextures:(id)arg1 atLocation:(struct CGPoint)arg2;
- (void)selectTileAtLocation:(struct CGPoint)arg1;
- (void)calculateRects;
- (id)attributedStringForDefinitionTitle:(id)arg1;
- (id)footerAttributedString;
- (id)arrtibutedStringFromString:(id)arg1 withFont:(id)arg2 andColor:(id)arg3;
- (void)setTileDefinitionPreview:(id)arg1 onSprite:(id)arg2;
- (id)baseTileDefinitionForRule:(id)arg1;
- (void)removeAllCustomSprites;
- (void)hideAllSprites;
- (void)updateFromGroup;
- (void)updateSpritePositions;
- (void)drawRect:(struct CGRect)arg1;
- (id)bezierPathSilhouetteForRule:(id)arg1 inRect:(struct CGRect)arg2;
- (void)drawRuleOverlayForSprite:(id)arg1 isSelected:(BOOL)arg2 isAddNewSlot:(BOOL)arg3 groupType:(unsigned long long)arg4 index:(unsigned long long)arg5;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
@property(nonatomic) __weak SKTileGroup *group;

@end
