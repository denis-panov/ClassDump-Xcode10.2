//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DevToolsCore/NSCopying-Protocol.h>
#import <DevToolsCore/NSMutableCopying-Protocol.h>

@class NSString;

@interface XCWorkQueueCommandInvocationParameters : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_ident;
    long long _qos;
    _Bool _dryRun;
}

- (void).cxx_destruct;
- (_Bool)isDryRunOnly;
- (long long)qualityOfService;
- (id)builderUniqueIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithBuilderIdentifier:(id)arg1 qualityOfService:(long long)arg2 dryRunOnly:(_Bool)arg3;

@end
