//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEOpenQuicklyResultBlockGenerator.h>

@class IDEOpenQuicklyQueryCandidateBlock;

@interface IDEOpenQuicklyFileReferenceResultGenerator : IDEOpenQuicklyResultBlockGenerator
{
    IDEOpenQuicklyQueryCandidateBlock *_workspaceRelativeStyleCandidates;
    BOOL _representsDynamicContent;
}

@property(readonly) BOOL representsDynamicContent; // @synthesize representsDynamicContent=_representsDynamicContent;
- (void).cxx_destruct;
- (id)candidateBlockForQuery:(id)arg1;
- (id)workspaceRelativeStyleCandidates;
- (BOOL)supportsLineNumberMatches;
- (id)resultForPrototype:(id)arg1 candidate:(struct IDEOpenQuicklyQueryCandidate *)arg2 query:(id)arg3 fromIndex:(long long)arg4;
- (id)initWithPrototypes:(id)arg1 candidates:(id)arg2 queryContext:(id)arg3 representsDynamicContent:(BOOL)arg4 consumer:(id)arg5;

@end
