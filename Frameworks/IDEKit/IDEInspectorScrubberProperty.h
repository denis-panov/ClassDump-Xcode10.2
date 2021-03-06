//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTStepperTextField, IDEInspectorKeyPath, NSString, NSTextField;

@interface IDEInspectorScrubberProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_nilPlaceholder;
    DVTStepperTextField *_scrubber;
    NSTextField *_label;
}

@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
@property(retain, nonatomic) DVTStepperTextField *scrubber; // @synthesize scrubber=_scrubber;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (BOOL)canTileIntoColumnsWithMinimumWidth:(double)arg1;
- (void)userDidChangeValue:(id)arg1;
- (BOOL)roundPrecisionValue;
- (float)precisionValue;
- (float)incrementValue;
- (BOOL)integerValues;
- (BOOL)hasButtons;
- (float)maxValue;
- (float)minValue;
- (double)baseline;
- (id)nibName;

@end

