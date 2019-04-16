//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DebuggerUI/DBGNode.h>

@class DBGInteractiveSceneView, NSColor;

@interface DBGBorderNode : DBGNode
{
    BOOL _dashed;
    DBGInteractiveSceneView *_sceneView;
    NSColor *_borderColor;
    double _borderOpacity;
    double _lineWidth;
}

@property(nonatomic) BOOL dashed; // @synthesize dashed=_dashed;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double borderOpacity; // @synthesize borderOpacity=_borderOpacity;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) __weak DBGInteractiveSceneView *sceneView; // @synthesize sceneView=_sceneView;
- (void).cxx_destruct;
- (id)lineNodes;
- (void)updateLines;
- (void)setShineThroughOpacity:(double)arg1;
- (void)setGeometryShinesThrough:(BOOL)arg1;
- (void)setRenderingOrder:(long long)arg1;
- (id)init;

@end

