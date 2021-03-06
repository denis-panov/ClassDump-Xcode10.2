//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEOpenQuicklyResultGenerator.h>

#import <IDEFoundation/IDEOpenQuicklyResultConsumer-Protocol.h>

@class NSMapTable, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_group;

@interface IDEOpenQuicklyResultAggregator : IDEOpenQuicklyResultGenerator <IDEOpenQuicklyResultConsumer>
{
    NSMapTable *_indexedCoordinationEntries;
    NSMutableArray *_allCoordinationEntries;
    NSObject<OS_dispatch_group> *_startupGroup;
    BOOL _sendsIncompleteResults;
    long long _cutoff;
}

@property(readonly) long long cutoff; // @synthesize cutoff=_cutoff;
@property(readonly) BOOL sendsIncompleteResults; // @synthesize sendsIncompleteResults=_sendsIncompleteResults;
- (void).cxx_destruct;
- (id)resultConsumptionQueue;
- (void)updateUserInput:(id)arg1 generation:(long long)arg2;
- (void)resultGeneratorFinishedStarting:(id)arg1;
- (void)resultGenerator:(id)arg1 didGenerateOrderedResults:(id)arg2 generation:(long long)arg3;
- (id)generateOutputResults;
- (id)transformAggregateResults:(id)arg1;
- (id)entryForGenerator:(id)arg1;
- (long long)minimumReceivedGeneration;
- (void)addGenerator:(id)arg1;
- (void)start;
- (void)generateGeneratorsWithCompletionGroup:(id)arg1;
- (id)initWithCutoff:(long long)arg1 sendsIncompleteResults:(BOOL)arg2 queryContext:(id)arg3 consumer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

