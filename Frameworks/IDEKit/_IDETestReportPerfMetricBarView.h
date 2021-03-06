//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class NSTrackingArea;

@interface _IDETestReportPerfMetricBarView : NSView
{
    NSTrackingArea *_trackingArea;
    BOOL _mouseDown;
    BOOL _isBaseline;
    BOOL _mouseInside;
    double _rawValue;
    double _percentChanged;
    unsigned long long _iterationNumber;
    NSView *_hostView;
    double _graphXOriginRelativeToHostView;
}

@property(nonatomic) BOOL mouseInside; // @synthesize mouseInside=_mouseInside;
@property double graphXOriginRelativeToHostView; // @synthesize graphXOriginRelativeToHostView=_graphXOriginRelativeToHostView;
@property(retain) NSView *hostView; // @synthesize hostView=_hostView;
@property BOOL isBaseline; // @synthesize isBaseline=_isBaseline;
@property unsigned long long iterationNumber; // @synthesize iterationNumber=_iterationNumber;
@property double percentChanged; // @synthesize percentChanged=_percentChanged;
@property double rawValue; // @synthesize rawValue=_rawValue;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

