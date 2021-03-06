//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSAnimation.h>

@class GPUTracePostVertexTransformView, GPUTracePostVertexTransformViewCamera;

__attribute__((visibility("hidden")))
@interface FocusCameraAnimation : NSAnimation
{
    GPUTracePostVertexTransformView *_view;
    GPUTracePostVertexTransformViewCamera *_camera;
    union _GLKVector3 _targetPosition;
    union _GLKVector3 _startPosition;
    union _GLKQuaternion _targetRotation;
    union _GLKQuaternion _startRotation;
}

@property(nonatomic) union _GLKQuaternion startRotation; // @synthesize startRotation=_startRotation;
@property(nonatomic) union _GLKVector3 startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) union _GLKQuaternion targetRotation; // @synthesize targetRotation=_targetRotation;
@property(nonatomic) union _GLKVector3 targetPosition; // @synthesize targetPosition=_targetPosition;
- (void).cxx_destruct;
- (void)setCurrentProgress:(float)arg1;
- (id)initWithView:(id)arg1 camera:(id)arg2;

@end

