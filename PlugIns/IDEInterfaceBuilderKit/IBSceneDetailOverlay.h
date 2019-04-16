//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBCanvasOverlay.h>

@class IBDeviceConfiguration, NSObject;
@protocol IBSceneDetailDelegate;

@interface IBSceneDetailOverlay : IBCanvasOverlay
{
    NSObject<IBSceneDetailDelegate> *_detail;
    IBDeviceConfiguration *_configuration;
}

@property(readonly, nonatomic) IBDeviceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSObject<IBSceneDetailDelegate> *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (BOOL)scalesWithCanvasFrameChrome;
- (BOOL)canScaleIndependentlyFromCanvasContent;
- (void)drawRect:(struct CGRect)arg1;
- (void)setDetail:(id)arg1 configuration:(id)arg2;

@end
