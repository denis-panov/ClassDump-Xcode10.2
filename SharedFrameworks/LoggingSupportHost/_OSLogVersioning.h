//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class _OSLogCollectionReference;

@interface _OSLogVersioning : NSObject
{
    _OSLogCollectionReference *_lcr;
    BOOL _closeOnRelease;
    BOOL _hasEndTimeRef;
    long long _state;
    long long _version;
}

@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) BOOL hasEndTimeRef; // @synthesize hasEndTimeRef=_hasEndTimeRef;
- (void).cxx_destruct;
- (BOOL)repairTimesyncDB:(id *)arg1;
- (BOOL)checkTimesyncDB:(char *)arg1 error:(id *)arg2;
- (BOOL)performDestructiveUpdates:(id *)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithCollection:(id)arg1 error:(id *)arg2;
- (id)initWithCollection:(id)arg1 closeOnRelease:(BOOL)arg2 error:(id *)arg3;

@end

