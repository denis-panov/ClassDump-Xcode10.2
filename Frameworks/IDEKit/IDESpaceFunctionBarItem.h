//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSSpaceTouchBarItem.h>

@interface IDESpaceFunctionBarItem : NSSpaceTouchBarItem
{
    double _overriddenMaxWidth;
    double _overriddenMinWidth;
}

+ (id)buttonWidthSpace;
@property double overriddenMinWidth; // @synthesize overriddenMinWidth=_overriddenMinWidth;
@property double overriddenMaxWidth; // @synthesize overriddenMaxWidth=_overriddenMaxWidth;
- (double)maximumWidth;
- (double)minimumWidth;

@end

