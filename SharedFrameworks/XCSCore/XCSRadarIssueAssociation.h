//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSObject.h>

#import <XCSCore/XCSIssueAssociationType-Protocol.h>

@class NSString;

@interface XCSRadarIssueAssociation : XCSObject <XCSIssueAssociationType>
{
    unsigned long long _problemID;
}

+ (id)radarIssueAssociationWithProblemID:(unsigned long long)arg1;
+ (id)associationKey;
@property(readonly, nonatomic) unsigned long long problemID; // @synthesize problemID=_problemID;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithProblemID:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

