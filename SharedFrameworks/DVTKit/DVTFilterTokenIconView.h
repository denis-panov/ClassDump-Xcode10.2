//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

#import <DVTKit/NSAccessibilityButton-Protocol.h>

@class NSFont, NSImage, NSMenu, NSMenuItem, NSString;

@interface DVTFilterTokenIconView : NSView <NSAccessibilityButton>
{
    double _lineWidth;
    struct CGRect _iconContentViewContainer;
    struct CGRect _filterIconContainer;
    struct CGRect _comparisonTextContainer;
    struct CGRect _dropDownRectContainer;
    struct CGRect _iconViewContainer;
    NSString *_comparisonText;
    NSFont *_comparisonTextFont;
    NSImage *_dropDownIcon;
    NSImage *_dropDownIconActive;
    double _currentAlpha;
    double _screenScaleFactor;
    NSMenuItem *_itemANY;
    NSMenuItem *_itemALL;
    NSMenu *_menu;
    BOOL _active;
    BOOL _pullsDown;
    BOOL _isExpandedState;
    BOOL _allowsANYOperator;
    BOOL _comparisonANYSelected;
    BOOL _needsMenu;
    CDUnknownBlockType _comparisonChangedBlock;
    CDUnknownBlockType _menuSetupBlock;
}

@property(nonatomic) BOOL needsMenu; // @synthesize needsMenu=_needsMenu;
@property(copy, nonatomic) CDUnknownBlockType menuSetupBlock; // @synthesize menuSetupBlock=_menuSetupBlock;
@property(copy, nonatomic) CDUnknownBlockType comparisonChangedBlock; // @synthesize comparisonChangedBlock=_comparisonChangedBlock;
@property(nonatomic, getter=isComparisonANYSelected) BOOL comparisonANYSelected; // @synthesize comparisonANYSelected=_comparisonANYSelected;
@property(nonatomic) BOOL allowsANYOperator; // @synthesize allowsANYOperator=_allowsANYOperator;
@property(readonly, nonatomic) BOOL isExpandedState; // @synthesize isExpandedState=_isExpandedState;
@property(nonatomic) BOOL pullsDown; // @synthesize pullsDown=_pullsDown;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
- (void).cxx_destruct;
- (struct CGRect)_drawRect;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)_filterIconContainerWithOrigin:(struct CGPoint)arg1;
- (void)_drawFilterIconInContainer:(struct CGRect)arg1;
- (void)_drawText:(struct CGRect)arg1;
- (id)drawingColor;
- (id)drawingColorWithAlpha;
- (double)_expandedWidth;
- (double)_shrinkedWidth;
- (struct CGRect)_calculateIconWidthContentContainer;
- (struct CGRect)_iconContentViewContainerWithOrigin:(struct CGPoint)arg1;
- (struct CGRect)_comparisonTextContainerWithOrigin:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)_popUpMenu;
- (struct CGRect)_pullDownMenuRect;
- (double)_comparisonTextContainerWidth;
- (struct CGRect)_dropDownRectContainerForOrigin:(struct CGPoint)arg1;
- (void)shrinkIconAnimatedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)expandIconAnimatedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)shrinkIcon;
- (void)expandIcon;
- (void)_animateFrameToWidth:(double)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_isDrawingIconOnly;
- (double)_xOffset;
- (double)_alphaBasedOnWidth;
- (id)initWithOrigin:(struct CGPoint)arg1;
- (void)_updateMenu;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (struct CGRect)accessibilityFrame;
- (void)_selectALL:(id)arg1;
- (void)_selectANY:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

