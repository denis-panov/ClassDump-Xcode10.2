//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <SceneKit/SCNNode.h>

@class NSString;

@interface DBGSimpleNode : SCNNode
{
    struct CATransform3D _scaleTransform;
    BOOL _scales;
    BOOL _geometryShinesThrough;
    BOOL _hiddenForClipping;
    BOOL _hiddenForRangeSlider;
    BOOL _hiddenForOptionalVisibility;
    BOOL _respondsToHitTests;
    double _shineThroughOpacity;
    NSString *_identifier;
    DBGSimpleNode *_forwardsHitTestsToNode;
    double _minScaleFactor;
    double _maxScaleFactor;
    DBGSimpleNode *_shineThroughNode;
    struct CGRect _rectRespondingToHitTests;
    struct CATransform3D _transform;
}

+ (id)nodeWithGeometry:(id)arg1;
+ (id)node;
@property struct CGRect rectRespondingToHitTests; // @synthesize rectRespondingToHitTests=_rectRespondingToHitTests;
@property(retain) DBGSimpleNode *shineThroughNode; // @synthesize shineThroughNode=_shineThroughNode;
@property double maxScaleFactor; // @synthesize maxScaleFactor=_maxScaleFactor;
@property double minScaleFactor; // @synthesize minScaleFactor=_minScaleFactor;
@property __weak DBGSimpleNode *forwardsHitTestsToNode; // @synthesize forwardsHitTestsToNode=_forwardsHitTestsToNode;
@property BOOL respondsToHitTests; // @synthesize respondsToHitTests=_respondsToHitTests;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)recursivelyUpdateRenderingOrder:(long long)arg1 withRootNode:(id)arg2;
- (void)setRenderingOrder:(long long)arg1 includingChildNodes:(BOOL)arg2;
@property double shineThroughOpacity; // @synthesize shineThroughOpacity=_shineThroughOpacity;
@property BOOL geometryShinesThrough; // @synthesize geometryShinesThrough=_geometryShinesThrough;
- (void)_updateHiddenState;
@property BOOL hiddenForOptionalVisibility; // @synthesize hiddenForOptionalVisibility=_hiddenForOptionalVisibility;
@property BOOL hiddenForRangeSlider; // @synthesize hiddenForRangeSlider=_hiddenForRangeSlider;
@property BOOL hiddenForClipping; // @synthesize hiddenForClipping=_hiddenForClipping;
- (void)adjustToUpdatedCameraZoomFactor:(double)arg1;
@property BOOL scales; // @synthesize scales=_scales;
- (struct CATransform3D)transform;
- (void)setTransform:(struct CATransform3D)arg1;
- (id)init;

@end

