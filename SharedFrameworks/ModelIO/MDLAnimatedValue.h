//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@class NSArray;

@interface MDLAnimatedValue : NSObject <NSCopying>
{
    struct vector<(anonymous namespace)::TimeSampledVtValue, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue>> _timeSampledData;
    unsigned long long _interpolation;
}

@property(nonatomic) unsigned long long interpolation; // @synthesize interpolation=_interpolation;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isAnimated;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (unsigned long long)getTimes:(double *)arg1 maxCount:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *keyTimes;
- (void)clear;
@property(readonly, nonatomic) double maximumTime;
@property(readonly, nonatomic) double minimumTime;
@property(readonly, nonatomic) unsigned long long timeSampleCount;
- (struct VtValue)defaultVtValue;
@property(readonly, nonatomic) unsigned long long precision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resetWithAnimatedValue:(id)arg1;
- (id)init;

@end

