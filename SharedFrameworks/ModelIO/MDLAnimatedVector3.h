//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedVector3 : MDLAnimatedValue
{
}

-     // Error parsing type: Q32@0:8^16Q24, name: getDouble3Array:maxCount:
-     // Error parsing type: Q32@0:8^16Q24, name: getFloat3Array:maxCount:
-     // Error parsing type: v40@0:8r^16r^d24Q32, name: resetWithDouble3Array:atTimes:count:
-     // Error parsing type: v40@0:8r^16r^d24Q32, name: resetWithFloat3Array:atTimes:count:
-     // Error parsing type: 24@0:8d16, name: double3AtTime:
-     // Error parsing type: 24@0:8d16, name: float3AtTime:
- (void)setDouble3:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)setFloat3:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (struct VtValue)defaultVtValue;
- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

