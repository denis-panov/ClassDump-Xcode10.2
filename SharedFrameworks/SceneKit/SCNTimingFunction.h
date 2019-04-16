//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@interface SCNTimingFunction : NSObject <NSSecureCoding>
{
    struct __C3DTimingFunction *_timingFunction;
}

+ (BOOL)supportsSecureCoding;
+ (id)functionWithCAMediaTimingFunction:(id)arg1;
+ (id)functionWithTimingMode:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DTimingFunction *)c3dTimingFunction;
- (void)dealloc;
- (id)initWithTimingFunctionRef:(struct __C3DTimingFunction *)arg1;

@end
