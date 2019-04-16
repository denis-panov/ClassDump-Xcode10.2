//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTCacheDeleteExtension-Protocol.h>

@class NSSet, NSString;

@interface DVTCacheDeleteExtensionManager : NSObject <DVTCacheDeleteExtension>
{
    NSSet *_extensions;
}

- (void).cxx_destruct;
- (id)purgeVolume:(id)arg1 amount:(unsigned long long)arg2 urgency:(int)arg3 error:(id *)arg4;
- (id)purgeableSizeOnVolume:(id)arg1 urgency:(int)arg2 error:(id *)arg3;
- (id)initWithExtensions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

