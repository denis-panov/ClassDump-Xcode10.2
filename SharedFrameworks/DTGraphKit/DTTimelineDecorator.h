//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface DTTimelineDecorator : NSObject
{
}

- (void)decorateInspectionRanges:(id)arg1 qualityOfService:(unsigned int)arg2 priority:(int)arg3 group:(id)arg4;
- (id)decorateInspectionRanges:(id)arg1;
- (id)decorateContainer:(struct DTTimelineDecorationContainer *)arg1;
- (void)decorateContainer:(struct DTTimelineDecorationContainer *)arg1 qualityOfService:(unsigned int)arg2 priority:(int)arg3 group:(id)arg4;
- (BOOL)heightChangedForPlane:(id)arg1;
- (void)effectiveAppearance:(id)arg1 didChangeForPlane:(id)arg2;
- (void)setDefaultsForPlane:(id)arg1;
- (BOOL)mustDecorateOnMainThread;
- (BOOL)needsMajorMinorTickPOIs;

@end

