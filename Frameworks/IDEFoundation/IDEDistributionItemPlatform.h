//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTPlatform, NSError;

@interface IDEDistributionItemPlatform : NSObject
{
    DVTPlatform *_platform;
    NSError *_platformError;
}

+ (id)distributionItemPlatformWithPlatform:(id)arg1 platformError:(id)arg2;
@property(readonly) NSError *platformError; // @synthesize platformError=_platformError;
@property(readonly) DVTPlatform *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;

@end

