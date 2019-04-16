//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <SpriteKit/NSSecureCoding-Protocol.h>

@interface SKReachConstraints : NSObject <NSSecureCoding>
{
    double _lowerAngleLimit;
    double _upperAngleLimit;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double upperAngleLimit; // @synthesize upperAngleLimit=_upperAngleLimit;
@property(nonatomic) double lowerAngleLimit; // @synthesize lowerAngleLimit=_lowerAngleLimit;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithLowerAngleLimit:(double)arg1 upperAngleLimit:(double)arg2;

@end

