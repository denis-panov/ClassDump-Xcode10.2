//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

#import <IDEKit/IDEDataSourceReloadable-Protocol.h>

@class NSString;
@protocol IDEDebugGaugeDataSource;

@interface IDEDebugGaugeTrayChartView : NSView <IDEDataSourceReloadable>
{
    double _maxValueFromValues;
    BOOL _maxValueIsSet;
    unsigned long long _numberOfValuesToKeep;
    unsigned long long _lastCountOfDisplayableBars;
    id <IDEDebugGaugeDataSource> _gaugeDataSource;
    long long _backgroundStyle;
}

@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(retain, nonatomic) id <IDEDebugGaugeDataSource> gaugeDataSource; // @synthesize gaugeDataSource=_gaugeDataSource;
- (void).cxx_destruct;
- (void)_notifyDataSourceOfNewNumberOfValuesToKeep;
- (void)_drawChartBarValuesWithFrame:(struct CGRect)arg1 inactive:(BOOL)arg2;
- (id)_barColorFromValue:(double)arg1 inactive:(BOOL)arg2;
- (double)_leadingSpaceToAlign:(unsigned long long)arg1 toRightOfFrame:(struct CGRect)arg2;
- (unsigned long long)_numberOfBarsThatFitFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)reloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

