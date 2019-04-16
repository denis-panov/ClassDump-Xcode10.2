//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSResponder.h>

#import <GPUDebuggerMTLSupport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GPUTracePostVertexTransformViewCamera : NSResponder <NSCopying>
{
    union _GLKQuaternion _referenceRotation;
    struct CGPoint _referenceMouseLocation;
    float _maxSpeed;
    float _fov;
    float _speed;
    float _sensitivity;
    union _GLKVector3 _target;
    union _GLKVector3 _position;
    union _GLKQuaternion _rotation;
}

@property(nonatomic) float sensitivity; // @synthesize sensitivity=_sensitivity;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float fov; // @synthesize fov=_fov;
@property(nonatomic) union _GLKQuaternion rotation; // @synthesize rotation=_rotation;
@property(nonatomic) union _GLKVector3 position; // @synthesize position=_position;
@property(nonatomic) union _GLKVector3 target; // @synthesize target=_target;
- (union _GLKQuaternion)_rotateWithAngle:(float)arg1 axis:(union _GLKVector3)arg2 reference:(union _GLKQuaternion)arg3;
- (void)_moveInDirection:(union _GLKVector3)arg1;
- (void)scrollWheel:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)reset;
@property(readonly, nonatomic) union _GLKMatrix4 viewMatrix;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

