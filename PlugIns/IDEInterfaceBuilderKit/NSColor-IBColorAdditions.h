//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSColor.h>

@interface NSColor (IBColorAdditions)
+ (id)ib_colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (BOOL)ib_isAnyGraySpaceColor;
- (id)ib_displayP3Color;
- (id)ib_calibratedRGBColor;
- (id)ib_sRGBColor;
- (id)ib_genericGamma22WhiteColor;
- (id)ib_calibratedWhiteColor;
- (id)ib_patternImageOrNil;
- (id)ib_colorSpace;
- (BOOL)ib_isPatternColor;
@end
