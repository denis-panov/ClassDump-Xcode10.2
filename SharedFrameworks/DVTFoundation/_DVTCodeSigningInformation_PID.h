//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTCodeSigningInformation.h>

@class NSNumber;

@interface _DVTCodeSigningInformation_PID : DVTCodeSigningInformation
{
    NSNumber *_appleSigned;
    int _processID;
}

@property(readonly) int processID; // @synthesize processID=_processID;
- (void).cxx_destruct;
- (BOOL)isAppleSigned;
- (id)initWithProcessID:(int)arg1 error:(id *)arg2;

@end

