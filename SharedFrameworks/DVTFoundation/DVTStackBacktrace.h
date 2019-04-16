//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray;

@interface DVTStackBacktrace : NSObject
{
    NSArray *_symbolicatedStackBacktraceFrames;
    unsigned long long *_returnAddresses;
    unsigned long long _returnAddressesCount;
    unsigned long long _hash;
}

+ (void)allowFetchingSymbolsViaXPC;
+ (id)compileTimeClassNameByRemovingSwiftModuleNameFromRuntimeClassName:(id)arg1;
+ (id)classNameFromSymbolName:(id)arg1;
+ (id)compileTimeClassNameFromRuntimeClassName:(id)arg1;
+ (id)symbolNameByRemovingDynamicBlockCountersFromRawSymbolName:(id)arg1;
+ (void)disableMainThreadSoftAssertionsDuringBlock:(CDUnknownBlockType)arg1;
+ (unsigned long long *)_callStackReturnAddressesExcludingTopFrames:(unsigned long long)arg1 returningCount:(unsigned long long *)arg2;
+ (unsigned long long *)_callStackReturnAddressesFromNumbers:(id)arg1 excludingTopFrames:(unsigned long long)arg2 returningCount:(unsigned long long *)arg3;
+ (id)currentStackBacktraceStartingFromFrame:(long long)arg1;
+ (id)currentStackBacktrace;
+ (id)stackBacktraceWithCallStackReturnAddresses:(id)arg1;
- (void).cxx_destruct;
- (id)symbolicatedFramesFromXPCServiceForReturnAddresses:(unsigned long long *)arg1 returnAddressesCount:(unsigned long long)arg2 dyldImageSuffix:(id)arg3 allowDsymData:(BOOL)arg4;
- (id)callStackReturnAddresses;
- (id)_primitiveSymbolicatedStackBacktraceFrames;
- (id)_symbolicatedStackBacktraceFrames;
- (id)_stringRepresentationWithAddresses:(BOOL)arg1;
- (id)symbolicatedStackBacktraceFrames;
- (id)stringRepresentationWithAddresses:(BOOL)arg1;
- (id)stringRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCallStackReturnAddresses:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)init;

@end

