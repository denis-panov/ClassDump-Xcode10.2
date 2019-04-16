//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSObject.h>

@class NSArray, XCSIssueSuspectStrategy;

@interface XCSIssueAuthorSuspects : XCSObject
{
    XCSIssueSuspectStrategy *_strategy;
    NSArray *_suspects;
}

+ (id)issueAuthorSuspectsWithStrategy:(id)arg1 suspects:(id)arg2 validationErrors:(id *)arg3;
@property(readonly, nonatomic) NSArray *suspects; // @synthesize suspects=_suspects;
@property(readonly, nonatomic) XCSIssueSuspectStrategy *strategy; // @synthesize strategy=_strategy;
- (void).cxx_destruct;
- (BOOL)_validateStrategy:(id)arg1 suspects:(id)arg2 validationErrors:(id *)arg3;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithStrategy:(id)arg1 suspects:(id)arg2 validationErrors:(id *)arg3;

@end

