//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGValue-Protocol.h>

@class NSString;

@interface DBGLongLong : NSObject <DBGValue>
{
    long long _longLongValue;
}

+ (id)withValue:(long long)arg1;
@property long long longLongValue; // @synthesize longLongValue=_longLongValue;
- (id)objectValue;
- (id)initWithLongLong:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

