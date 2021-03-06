//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTConsoleLogger.h>

@interface IDEDistributionConsoleLogger : DVTConsoleLogger
{
    unsigned long long _exclusiveLogLevel;
}

@property(readonly) unsigned long long exclusiveLogLevel; // @synthesize exclusiveLogLevel=_exclusiveLogLevel;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(unsigned long long)arg3;
- (id)initWithExclusiveLogLevel:(unsigned long long)arg1;

@end

