//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GameplayKit/GKAgent.h>

@interface GKAgent3D : GKAgent
{
}

+ (BOOL)supportsSecureCoding;
- (void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2;
- (void)applySteeringForce:(double)arg1 deltaTime: /* Error: Ran out of types for this method. */;
- (void)updateWithDeltaTime:(double)arg1;
// Error parsing type for property rotation:
// Property attributes: T{?=[3]},N

@property(nonatomic) BOOL rightHanded;
// Error parsing type for property velocity:
// Property attributes: T,R,N

// Error parsing type for property position:
// Property attributes: T,N

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

