//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSAppearance, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DTTimelineTileDrawingContext : NSObject
{
    struct CGContext *_cgContext;
    NSAppearance *_savedAppearance;
    struct TileMetrics _tileMetrics;
    struct CGPath *_defaultColorPath;
    struct unordered_map<NSColor *, CGPath *, std::__1::hash<NSColor *>, std::__1::equal_to<NSColor *>, std::__1::allocator<std::__1::pair<NSColor *const, CGPath *>>> _paths;
    struct unordered_map<NSColor *, CGColor *, std::__1::hash<NSColor *>, std::__1::equal_to<NSColor *>, std::__1::allocator<std::__1::pair<NSColor *const, CGColor *>>> _resolvedColors;
    NSMutableDictionary *_stringsDictionary;
    NSMutableArray *_clippableStringsArray;
    struct unordered_map<double, NSImage *, std::__1::hash<double>, std::__1::equal_to<double>, std::__1::allocator<std::__1::pair<const double, NSImage *>>> _imageDictionary;
    long long _dynamicRangeLow;
    long long _dynamicRangeHigh;
    double _range;
    double _screenScale;
    unsigned long long _intervals;
    unsigned long long _circles;
    unsigned long long _images;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const struct TileMetrics *tileMetrics;
- (double)_heightForPlane:(int)arg1;
- (double)_yForBottomOfPlane:(int)arg1;
- (double)_yForTopOfPlane:(int)arg1;
- (double)_heightOfPlane:(int)arg1;
- (void)unlockContext;
- (void)_renderClippableStringsInContext:(struct CGContext *)arg1;
- (void)_renderStringsInContext:(struct CGContext *)arg1;
- (void)_renderImages;
- (void)lockContext:(struct CGContext *)arg1;
- (void)addPlaneConnectionFromPlane:(int)arg1 toPlane:(int)arg2 span:(struct Span)arg3 instantaneous:(_Bool)arg4 color:(id)arg5 sourceAnchorLocation:(unsigned char)arg6 sourceImage:(id)arg7 sourceImageLocation:(unsigned char)arg8 sinkAnchorLocation:(unsigned char)arg9 sinkImage:(id)arg10 sinkImageLocation:(unsigned char)arg11 swapImagesIfInverted:(BOOL)arg12 swapImageLocationsIfInverted:(BOOL)arg13 hideSource:(BOOL)arg14 hideSink:(BOOL)arg15 hideLine:(BOOL)arg16;
- (void)addAttributedString:(id)arg1 span:(struct Span)arg2;
- (void)addAttributedString:(id)arg1 position:(double)arg2;
- (void)addArrayOfIntervalValues:(const long long *)arg1 colors:(const id *)arg2 count:(unsigned int)arg3 span:(struct Span)arg4;
- (void)addIntervalValue:(long long)arg1 color:(id)arg2 secondaryColor:(id)arg3 icon:(id)arg4 span:(struct Span)arg5;
- (void)addCenteredCircleAtPt:(double)arg1 color:(id)arg2;
- (void)addCapsuleShapeInSpan:(struct Span)arg1 color:(id)arg2;
- (void)addEventIcon:(id)arg1 origin:(double)arg2 multiplicity:(unsigned int)arg3;
- (void)addPointValue:(long long)arg1 color:(id)arg2 position:(double)arg3;
- (void)dealloc;
- (id)initWithTileMetrics:(const struct TileMetrics *)arg1;

@end

