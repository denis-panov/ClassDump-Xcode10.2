//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <SceneKit/JSExport-Protocol.h>

@protocol SCNJSValueSExport <JSExport>
+ (id)valueWithMatrix4:(struct CATransform3D)arg1;
+ (id)valueWithVector4:(struct SCNVector4)arg1;
+ (id)valueWithVector3:(struct SCNVector3)arg1;
@property(readonly) struct CATransform3D matrix4;
@property(readonly) struct SCNVector4 vector4;
@property(readonly) struct SCNVector3 vector3;
@end

