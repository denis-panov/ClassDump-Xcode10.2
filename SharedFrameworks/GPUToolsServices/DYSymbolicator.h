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

@interface DYSymbolicator : NSObject
{
    NSArray *_rootPaths;
    struct _CSTypeRef _coreSymbolicator;
}

+ (id)dysmURLForUUIDBytes:(const CDStruct_bd2f613f *)arg1 roots:(id)arg2;
@property(readonly, nonatomic) struct _CSTypeRef coreSymbolicator; // @synthesize coreSymbolicator=_coreSymbolicator;
- (void).cxx_destruct;
- (id)stackFramesWithBacktrace:(const unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithSignature:(id)arg1 rootPaths:(id)arg2 device:(id)arg3 error:(id *)arg4;
- (id)initWithCoreSymbolicator:(struct _CSTypeRef)arg1 rootPaths:(id)arg2 device:(id)arg3;
- (id)init;
- (void)_fixSymbolOwnerPaths;

@end

