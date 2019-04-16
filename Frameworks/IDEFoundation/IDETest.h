//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDETestContainer-Protocol.h>

@class DVTStackBacktrace, DVTTextDocumentLocation, IDETestIdentifier, NSArray, NSMutableArray, NSMutableSet, NSSet, NSString;
@protocol IDETestable;

@interface IDETest : NSObject <IDETestContainer, DVTInvalidation>
{
    NSMutableSet *_subtests;
    NSMutableArray *_cachedArrangedSubtests;
    BOOL _canHaveSubtests;
    BOOL _indexLocationWasSet;
    id <IDETestable> _testable;
    IDETestIdentifier *_testIdentifier;
    NSString *_name;
    IDETest *_supertest;
    NSString *_parentClassName;
    DVTTextDocumentLocation *_indexLocation;
    NSArray *_recentErrorLocations;
}

+ (BOOL)automaticallyNotifiesObserversForIndexLocationWasSet;
+ (BOOL)automaticallyNotifiesObserversForIndexLocation;
+ (id)keyPathsForValuesAffectingLocation;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property BOOL indexLocationWasSet; // @synthesize indexLocationWasSet=_indexLocationWasSet;
@property(copy) NSArray *recentErrorLocations; // @synthesize recentErrorLocations=_recentErrorLocations;
@property(copy, nonatomic) DVTTextDocumentLocation *indexLocation; // @synthesize indexLocation=_indexLocation;
@property BOOL canHaveSubtests; // @synthesize canHaveSubtests=_canHaveSubtests;
@property(copy) NSString *parentClassName; // @synthesize parentClassName=_parentClassName;
@property(readonly) IDETest *supertest; // @synthesize supertest=_supertest;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) IDETestIdentifier *testIdentifier; // @synthesize testIdentifier=_testIdentifier;
@property(readonly) id <IDETestable> testable; // @synthesize testable=_testable;
- (void).cxx_destruct;
@property(readonly, copy) NSArray *arrangedSubtests; // @dynamic arrangedSubtests;
- (void)_primitiveRemoveSubtest:(id)arg1;
- (void)_primitiveAddSubtest:(id)arg1;
- (void)_setErrorLocations:(id)arg1;
- (void)_setIndexLocation:(id)arg1;
- (void)_primitiveSetIndexLocation:(id)arg1;
- (void)_setIndexLocation:(id)arg1 forSubtest:(id)arg2;
@property(readonly, copy, nonatomic) DVTTextDocumentLocation *location; // @dynamic location;
@property(readonly, copy) NSString *displayName;
@property(readonly, copy) NSString *identifierString;
- (long long)localizedStandardCompare:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithTestable:(id)arg1 identifier:(id)arg2 location:(id)arg3 parentClassName:(id)arg4;
- (void)primitiveInvalidate;
- (BOOL)_isInFile:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableSet *mutableSubtests; // @dynamic mutableSubtests;
@property(readonly, copy) NSSet *subtests; // @dynamic subtests;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

