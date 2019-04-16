//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

#import <DVTKit/NSDraggingSource-Protocol.h>
#import <DVTKit/NSMenuDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTMutableOrderedDictionary, DVTObservingToken, NSAppearance, NSArray, NSColor, NSMenu, NSMenuItem, NSObject, NSString;
@protocol DVTColorPickerDelegate;

@interface DVTAbstractColorPicker : NSView <NSMenuDelegate, NSDraggingSource>
{
    NSMenu *_colorsMenu;
    NSMenuItem *_defaultColorMenuItem;
    NSMenuItem *_currentColorMenuItem;
    NSMenuItem *_multipleValuesMenuItem;
    NSMenuItem *_recentColorsMenuItem;
    NSMenuItem *_noColorMenuItem;
    NSArray *_namedColorMenuItems;
    NSMenuItem *_customColorMenuItem;
    DVTDelayedInvocation *_updateInvocation;
    BOOL _pushingToColorPanel;
    id _colorValueBindingController;
    NSString *_colorValueBindingKeyPath;
    DVTObservingToken *_colorValueBindingObservation;
    DVTObservingToken *_supportsNilColorBindingObservation;
    BOOL _supportsNilColor;
    BOOL _showingMultipleValues;
    BOOL _showsCurrentColorInMenu;
    BOOL _enabled;
    BOOL _linkedToColorPanel;
    BOOL _highlighted;
    int _defaultColorMode;
    NSColor *_color;
    NSColor *_defaultColor;
    NSAppearance *_colorSwatchAppearance;
    id _target;
    SEL _action;
    NSObject<DVTColorPickerDelegate> *_delegate;
    unsigned long long _controlSize;
    DVTMutableOrderedDictionary *_colorGroups;
    NSMenuItem *_selectedMenuItem;
}

+ (id)swatchImageForColor:(id)arg1 withSize:(struct CGSize)arg2 appearanceToUse:(id)arg3 forRenderingIntoContext:(id)arg4 noColorStrokeWidth:(double)arg5 isShowingMultipleValues:(BOOL)arg6;
@property(retain, nonatomic) NSMenuItem *selectedMenuItem; // @synthesize selectedMenuItem=_selectedMenuItem;
@property(retain) DVTMutableOrderedDictionary *colorGroups; // @synthesize colorGroups=_colorGroups;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL linkedToColorPanel; // @synthesize linkedToColorPanel=_linkedToColorPanel;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long controlSize; // @synthesize controlSize=_controlSize;
@property __weak NSObject<DVTColorPickerDelegate> *delegate; // @synthesize delegate=_delegate;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSAppearance *colorSwatchAppearance; // @synthesize colorSwatchAppearance=_colorSwatchAppearance;
@property BOOL showsCurrentColorInMenu; // @synthesize showsCurrentColorInMenu=_showsCurrentColorInMenu;
@property(nonatomic, getter=isShowingMultipleValues) BOOL showingMultipleValues; // @synthesize showingMultipleValues=_showingMultipleValues;
@property(nonatomic) BOOL supportsNilColor; // @synthesize supportsNilColor=_supportsNilColor;
@property(nonatomic) int defaultColorMode; // @synthesize defaultColorMode=_defaultColorMode;
@property(retain, nonatomic) NSColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)observedColorValueDidChangeToValue:(id)arg1;
- (void)displayColorPanel:(id)arg1;
- (void)takeDrawnColorFrom:(id)arg1;
- (void)takeDrawnColorFromPopUpMenu:(id)arg1;
- (void)sendAction;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)beginColorDragForEvent:(id)arg1;
- (id)imageForDraggedColor:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)colorPanelColorChanged:(id)arg1;
- (void)colorPanelWillClose:(id)arg1;
- (void)colorPickerDidBecomeActive:(id)arg1;
- (void)colorChosenFromColorChooser:(id)arg1;
- (void)_pushColorToActiveColorPanel;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)showColorsMenu;
- (double)minimumPopUpMenuWidth;
- (struct CGPoint)popUpMenuLocation;
- (id)effectiveSwatchFillColor;
- (void)putIntoMultipleValuesState;
- (void)_updateCustomColorSwatch;
- (void)_updateColorSwatches;
- (void)updateColorsMenu;
- (id)_createMenuItemForColor:(id)arg1 withTitle:(id)arg2;
- (id)_addHeaderMenuItemWithTitle:(id)arg1 toMenu:(id)arg2;
- (void)updateColorsMenuIfNeeded;
- (void)_colorsMenuNeedsUpdate;
- (id)colorsMenu;
- (double)swatchWidth;
- (double)swatchHeight;
- (id)swatchImageForColor:(id)arg1 withSize:(struct CGSize)arg2;
- (id)effectiveTextColor;
- (BOOL)isShowingDefaultColor;
- (id)nameForPossiblyMissingColor;
@property(readonly, nonatomic, getter=isShowingMissingColor) BOOL showingMissingColor;
- (BOOL)isShowingCustomColor;
- (BOOL)isShowingNamedColor;
- (BOOL)supportsDefaultColor;
- (double)noColorStrokeWidth;
- (id)titleFont;
- (void)addColorGroupUsingColorList:(id)arg1;
- (void)addColorGroup:(id)arg1 forName:(id)arg2;
- (void)clearColorGroups;
- (id)nameForColor:(id)arg1;
- (BOOL)containsColor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect)arg1 colorGroup:(id)arg2 colorGroupName:(id)arg3 defaultColor:(id)arg4 defaultColorMode:(int)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

