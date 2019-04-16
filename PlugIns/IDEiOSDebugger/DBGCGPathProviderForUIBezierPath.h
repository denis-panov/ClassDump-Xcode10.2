//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEiOSDebugger/DBGCGPathProvider-Protocol.h>

@class DBGNSDataForDataValueProvider, DVTObservingToken, NSArray, NSString;
@protocol IDEDataValue;

@interface DBGCGPathProviderForUIBezierPath : NSObject <DBGCGPathProvider>
{
    int _loadedState;
    id <IDEDataValue> _dataValue;
    DBGNSDataForDataValueProvider *_nsDataForDataValueProvider;
    DVTObservingToken *_nsDataForDataValueProviderObserver;
    struct CGPath *_path;
    BOOL _usesEvenOddFillRule;
    BOOL _hasPathBeenRetrieved;
    int _lineCapStyle;
    int _lineJoinStyle;
    double _lineWidth;
    double _miterLimit;
    double _flatness;
    NSArray *_lineDashPattern;
    double _lineDashPhase;
}

@property BOOL hasPathBeenRetrieved; // @synthesize hasPathBeenRetrieved=_hasPathBeenRetrieved;
@property double lineDashPhase; // @synthesize lineDashPhase=_lineDashPhase;
@property(retain) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property BOOL usesEvenOddFillRule; // @synthesize usesEvenOddFillRule=_usesEvenOddFillRule;
@property double flatness; // @synthesize flatness=_flatness;
@property double miterLimit; // @synthesize miterLimit=_miterLimit;
@property int lineJoinStyle; // @synthesize lineJoinStyle=_lineJoinStyle;
@property int lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) struct CGPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (struct CGPath *)_createMutablePathByDecodingData:(id)arg1 addressSize:(unsigned long long)arg2;
- (void)_updateCGPathAndPropertiesFromNSData;
- (void)cancel;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

