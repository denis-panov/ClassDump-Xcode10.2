//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface GKPath : NSObject
{
    struct PolylinePathway _pathway;
}

+     // Error parsing type: @40@0:8^16Q24f32c36, name: pathWithFloat3Points:count:radius:cyclical:
+ (id)pathWithGraphNodes:(id)arg1 radius:(float)arg2;
+     // Error parsing type: @40@0:8^16Q24f32c36, name: pathWithPoints:count:radius:cyclical:
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: 24@0:8Q16, name: float3AtIndex:
-     // Error parsing type: 24@0:8Q16, name: float2AtIndex:
-     // Error parsing type: 24@0:8Q16, name: pointAtIndex:
-     // Error parsing type: @40@0:8^16Q24f32c36, name: initWithFloat3Points:count:radius:cyclical:
- (id)initWithGraphNodes:(id)arg1 radius:(float)arg2;
-     // Error parsing type: @40@0:8^16Q24f32c36, name: initWithPoints:count:radius:cyclical:
@property(readonly) unsigned long long numPoints;
@property(nonatomic) float radius;
@property(nonatomic, getter=isCyclical) BOOL cyclical;
- (struct PolylinePathway *)pathway;
- (BOOL)_cyclical;
- (void)set_cyclical:(BOOL)arg1;

@end

