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

@class NSSet;

@interface XCAssetTagSet : NSObject <NSCopying>
{
    NSSet *_tags;
    unsigned long long _hash;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTagSet:(id)arg1;

@end

