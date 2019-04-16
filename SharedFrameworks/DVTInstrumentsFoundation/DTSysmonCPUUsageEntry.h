//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface DTSysmonCPUUsageEntry : NSObject
{
    double _totalLoad;
    double _userLoad;
    double _systemLoad;
    double _niceLoad;
}

@property(nonatomic) double niceLoad; // @synthesize niceLoad=_niceLoad;
@property(nonatomic) double systemLoad; // @synthesize systemLoad=_systemLoad;
@property(nonatomic) double userLoad; // @synthesize userLoad=_userLoad;
@property(nonatomic) double totalLoad; // @synthesize totalLoad=_totalLoad;
- (id)initWithTotal:(double)arg1 user:(double)arg2 system:(double)arg3 nice:(double)arg4;

@end

