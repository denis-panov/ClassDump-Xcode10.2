//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/NSCopying-Protocol.h>

@interface XRSpaceDataToken : NSObject <NSCopying>
{
    id _tag;
    unsigned long long _seq;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpaceTag:(id)arg1 sequenceID:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
