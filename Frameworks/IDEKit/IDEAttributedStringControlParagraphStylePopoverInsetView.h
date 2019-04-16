//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTLayoutView_ML.h>

@class NSView;

@interface IDEAttributedStringControlParagraphStylePopoverInsetView : DVTLayoutView_ML
{
    int _horizontalResizingMode;
    int _verticalResizingMode;
    NSView *_contentView;
    CDStruct_bf6d4a14 _inset;
}

@property int verticalResizingMode; // @synthesize verticalResizingMode=_verticalResizingMode;
@property int horizontalResizingMode; // @synthesize horizontalResizingMode=_horizontalResizingMode;
@property(nonatomic) CDStruct_bf6d4a14 inset; // @synthesize inset=_inset;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (id)initWithFrame:(struct CGRect)arg1;

@end

