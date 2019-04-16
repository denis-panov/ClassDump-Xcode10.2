//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSMutableDictionary, NSSet, NSString;

@interface IDEMediaRepository : NSObject <DVTInvalidation>
{
    NSMutableDictionary *_observers;
}

+ (id)defaultMediaRepositoriesForContainer:(id)arg1 fileDataTypes:(id)arg2;
+ (id)defaultMediaRepositoryClasses;
+ (id)defaultRepositoryExtensions;
+ (id)defaultRepositoriesExtensionPoint;
+ (void)initialize;
- (void).cxx_destruct;
- (id)registerMediaRepositoryObserverWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)pin;
- (void)notifyObserversOfAddsAndModifies:(id)arg1 andDeletes:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *resources;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

