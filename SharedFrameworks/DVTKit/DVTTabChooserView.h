//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTBorderedView.h>

@class DVTChoice, DVTTabChooserContentView, NSArray, NSMutableArray, NSSearchField;
@protocol DVTTabChooserViewDelegate;

@interface DVTTabChooserView : DVTBorderedView
{
    DVTTabChooserContentView *_contentView;
    NSSearchField *_searchField;
    DVTChoice *_selectedChoice;
    long long _mouseDownIndex;
    NSMutableArray *_choices;
    struct {
        unsigned int hasSearchField:1;
        unsigned int _reserved:7;
    } _flags;
    id <DVTTabChooserViewDelegate> _delegate;
    double _choicesOffset;
    long long _pressedIndex;
}

+ (id)keyPathsForValuesAffectingSelectedChoice;
+ (void)initialize;
@property long long pressedIndex; // @synthesize pressedIndex=_pressedIndex;
@property double choicesOffset; // @synthesize choicesOffset=_choicesOffset;
@property __weak id <DVTTabChooserViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSSearchField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
@property BOOL hasSearchField;
- (void)installSearchField;
- (struct CGRect)searchFieldFrame;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)choiceForEvent:(id)arg1 index:(long long *)arg2;
- (id)choiceForPoint:(struct CGPoint)arg1 index:(long long *)arg2;
- (id)attributedTitleForChoice:(id)arg1 forceActive:(BOOL)arg2;
- (id)_choiceGeometry;
- (struct CGRect)_rectForChoice:(id)arg1;
- (struct CGRect)_rectForChoiceAtIndex:(long long)arg1;
- (struct CGRect)_rectForChoiceAtIndex:(long long)arg1 withChoiceGeometry:(id)arg2;
@property(readonly) double minimumWidth;
- (struct CGRect)totalChoicesRect;
- (double)totalWidth;
- (double)_widthForChoiceAtIndex:(long long)arg1;
- (double)_widthForChoice:(id)arg1;
- (void)updateBoundSelectedObjects;
@property(retain) DVTChoice *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(readonly) NSMutableArray *mutableChoices;
- (void)updateBoundContent;
@property(copy) NSArray *choices;
- (id)choiceWithIdentifier:(id)arg1;
- (id)choiceAtIndex:(long long)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;
- (id)dvt_extraBindings;

@end

