//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEPlaygroundResult.h>

@class NSDate;

@interface IDETimestampedPlaygroundResult : IDEPlaygroundResult
{
    NSDate *_date;
}

@property(readonly) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2 resultDate:(id)arg3;

@end
