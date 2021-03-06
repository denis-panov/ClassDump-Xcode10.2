//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSSlider.h>

@class NSColor, NSFont, NSNumberFormatter, NSString;

@interface DVTLabeledSlider : NSSlider
{
    NSString *_maxValueLabelOverride;
}

+ (Class)cellClass;
@property(copy, nonatomic) NSString *maxValueLabelOverride; // @synthesize maxValueLabelOverride=_maxValueLabelOverride;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *minValueLabelOverride;
@property(retain, nonatomic) NSColor *labelColor;
@property(retain, nonatomic) NSFont *labelFont;
@property(retain, nonatomic) NSNumberFormatter *labelFormatter;
- (id)sliderCell;

@end

