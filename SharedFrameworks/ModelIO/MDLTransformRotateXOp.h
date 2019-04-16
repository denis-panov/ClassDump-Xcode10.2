//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTransformOp-Protocol.h>

@class MDLAnimatedScalar, NSString;

@interface MDLTransformRotateXOp : NSObject <MDLTransformOp>
{
    _Bool _inverse;
    NSString *_name;
    MDLAnimatedScalar *_animatedValue;
}

@property(nonatomic) _Bool inverse; // @synthesize inverse=_inverse;
@property(readonly, nonatomic) MDLAnimatedScalar *animatedValue; // @synthesize animatedValue=_animatedValue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
-     // Error parsing type: {?=[4]}24@0:8d16, name: double4x4AtTime:
-     // Error parsing type: {?=[4]}24@0:8d16, name: float4x4AtTime:
- (_Bool)IsInverseOp;
- (id)initWithName:(id)arg1 inverse:(_Bool)arg2 data:(id)arg3;

@end

