//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTTheme;

@interface GPUDebuggerTheme : NSObject
{
    DVTTheme *_dvtTheme;
}

+ (BOOL)dark;
+ (id)addVisualEffectToView:(id)arg1;
+ (id)invertColor:(id)arg1;
+ (id)mixColor:(id)arg1 withColor:(id)arg2 percentage:(float)arg3;
+ (id)currentTheme;
+ (id)iconWithName:(id)arg1;
+ (id)invalidValueTextColor;
+ (id)updatedValueTextColor;
+ (double)bufferViewerTableCellCalculateTextWithComponents:(unsigned long long)arg1 width:(double)arg2;
+ (double)bufferViewerTableTextPadding;
+ (double)bufferViewerTableCellPadding;
+ (struct CGSize)dataCharacterSize;
+ (id)boldListFont;
+ (id)reportTopSectionDescriptionFont;
+ (id)listFont;
+ (id)labelFont;
+ (id)dataFont;
+ (id)inactiveColor;
+ (id)stroke4Color;
+ (id)stroke3Color;
+ (id)bluePunchOutColor;
+ (id)reportColorGraphGreen;
+ (id)reportColorGraphRed;
+ (id)reportColorGraphBlue;
+ (id)reportColorBlue;
+ (id)reportColorGreen;
+ (id)reportColorLightGray;
+ (id)reportColorDarkGray;
+ (id)reportColorGray;
+ (id)canvasBackgroundColor;
+ (id)editorAreaBackgroundColor;
+ (id)debugBarBackgroundColor;
+ (id)debugBarTrackColor;
+ (id)checkerboardColor1;
+ (id)checkerboardColor0;
+ (id)reportTopSectionDescriptionColor;
+ (id)labelDisabledColor;
+ (id)secondaryLabelColor;
+ (id)labelColor;
+ (id)formatDouble:(double)arg1 withDefaultColor:(id)arg2;
+ (id)attributedStringForDYPixelValueFormattedString:(id)arg1 withDefaultColor:(id)arg2;
+ (id)formatValueString:(id)arg1 withDefaultColor:(id)arg2;
+ (id)colorForFormatString:(id)arg1;
+ (id)doubleNumberFormatter;
@property(readonly, nonatomic) DVTTheme *dvtTheme; // @synthesize dvtTheme=_dvtTheme;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDVTTheme:(id)arg1;

@end

