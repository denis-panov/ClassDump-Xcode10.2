//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSPathComponentCell.h>

@class NSImageCell;

@interface DVTPathComponentCell : NSPathComponentCell
{
    NSImageCell *_imageCell;
    BOOL _isLastItem;
    BOOL _isFirstItem;
    int _gradientStyle;
    unsigned long long _textAlignment;
}

@property unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property BOOL isFirstItem; // @synthesize isFirstItem=_isFirstItem;
@property BOOL isLastItem; // @synthesize isLastItem=_isLastItem;
@property int gradientStyle; // @synthesize gradientStyle=_gradientStyle;
- (void).cxx_destruct;
- (BOOL)_delegateRespondsToAndIsDeemphasizedInView:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)iconHitTest:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2;
- (double)_textOffsetForIcon:(id)arg1 inFrame:(struct CGRect)arg2 doDraw:(BOOL)arg3 isActive:(BOOL)arg4;
- (void)_drawDividerForFrame:(struct CGRect)arg1 inControlView:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (double)_rightDividerWidth;
- (double)_leftDividerWidth;
- (void)_useChevronForLeftEdge:(char *)arg1 rightEdge:(char *)arg2;
- (id)textColor;
- (void)_commonInit;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
