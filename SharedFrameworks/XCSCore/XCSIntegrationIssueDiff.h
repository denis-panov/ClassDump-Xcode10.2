//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSObject.h>

@class NSArray;

@interface XCSIntegrationIssueDiff : XCSObject
{
    NSArray *_freshIssues;
    NSArray *_unresolvedIssues;
    NSArray *_resolvedIssues;
    NSArray *_silencedIssues;
}

+ (id)integrationIssueDiffWithFreshIssues:(id)arg1 unresolvedIssues:(id)arg2 resolvedIssues:(id)arg3 validationErrors:(id *)arg4;
+ (id)emptyIntegrationIssueDiff;
@property(readonly, nonatomic) NSArray *silencedIssues; // @synthesize silencedIssues=_silencedIssues;
@property(readonly, nonatomic) NSArray *resolvedIssues; // @synthesize resolvedIssues=_resolvedIssues;
@property(readonly, nonatomic) NSArray *unresolvedIssues; // @synthesize unresolvedIssues=_unresolvedIssues;
@property(readonly, nonatomic) NSArray *freshIssues; // @synthesize freshIssues=_freshIssues;
- (void).cxx_destruct;
- (BOOL)_validateFreshIssues:(id)arg1 unresolvedIssues:(id)arg2 resolvedIssues:(id)arg3 silencedIssues:(id)arg4 validationErrors:(id *)arg5;
- (id)integrationIssues;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithFreshIssues:(id)arg1 unresolvedIssues:(id)arg2 resolvedIssues:(id)arg3 silencedIssues:(id)arg4 validationErrors:(id *)arg5;

@end

