//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray;

@interface DVTiOSDeviceErrorReport : NSObject
{
    NSArray *_reportEntries;
}

+ (id)errorReportForDevice:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 keyphrases:(id)arg4 outError:(id *)arg5;
@property(readonly, nonatomic) NSArray *reportEntries; // @synthesize reportEntries=_reportEntries;
- (void).cxx_destruct;
- (id)initWithReportEntries:(id)arg1;

@end

