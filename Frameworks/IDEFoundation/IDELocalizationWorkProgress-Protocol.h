//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/NSObject-Protocol.h>

@class NSString;

@protocol IDELocalizationWorkProgress <NSObject>
@property(readonly, copy) NSString *workTitle;
@property(readonly, copy) NSString *phase;
@property(readonly) long long progress;
@property(readonly) BOOL complete;
@end

