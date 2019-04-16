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

@class DVTDelayedInvocation, DVTStackBacktrace, IDEContainerContentProductionSpecifier, NSMutableDictionary, NSMutableSet, NSString;
@protocol DVTInvalidation, IDEContainerContentProducer, OS_dispatch_queue;

@interface IDEContainerContentProductionCoordinator : NSObject <DVTInvalidation>
{
    id <DVTInvalidation> _filePathObservationToken;
    NSMutableDictionary *_deliveredResults;
    NSMutableDictionary *_pendingProducedValues;
    NSMutableSet *_pendingRemoves;
    NSObject<OS_dispatch_queue> *_productionQueue;
    NSMutableDictionary *_observers;
    IDEContainerContentProductionSpecifier *_specifier;
    DVTDelayedInvocation *_observationInvocation;
    id <IDEContainerContentProducer> _producer;
}

+ (id)observeContentProductionSpecifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (void)deliverPendingResults:(id)arg1;
- (void)scheduleRemoveOfFilePath:(id)arg1;
- (void)scheduleUpdateOrAddToFilePath:(id)arg1 withDataType:(id)arg2;
- (void)scheduleUpdateToFilePath:(id)arg1 withDataType:(id)arg2 updateType:(long long)arg3;
- (id)addObserver:(CDUnknownBlockType)arg1;
- (void)primitiveInvalidate;
- (id)initWithContentProductionSpecifier:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

