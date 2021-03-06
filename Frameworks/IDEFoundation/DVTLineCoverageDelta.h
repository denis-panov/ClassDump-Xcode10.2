//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface DVTLineCoverageDelta : NSObject
{
    int _executableLinesDelta;
    int _coveredLinesDelta;
    double _lineCoverageDelta;
}

@property(readonly) double lineCoverageDelta; // @synthesize lineCoverageDelta=_lineCoverageDelta;
@property(readonly) int coveredLinesDelta; // @synthesize coveredLinesDelta=_coveredLinesDelta;
@property(readonly) int executableLinesDelta; // @synthesize executableLinesDelta=_executableLinesDelta;
@property(readonly, getter=isZero) BOOL zero;
- (id)initWithExecutableLinesDelta:(int)arg1 coveredLinesDelta:(int)arg2 lineCoverageDelta:(double)arg3;

@end

