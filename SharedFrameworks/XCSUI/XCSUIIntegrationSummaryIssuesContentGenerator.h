//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface XCSUIIntegrationSummaryIssuesContentGenerator : NSObject
{
}

+ (id)attributedStringForSection:(id)arg1 rowSelected:(BOOL)arg2;
+ (id)committersResponsibleAttributedStringForIssue:(id)arg1 rowSelected:(BOOL)arg2;
+ (id)issueRadarAttributedString:(id)arg1 rowSelected:(BOOL)arg2;
+ (id)issueFileAttributedStringForFile:(id)arg1 line:(id)arg2 testCase:(id)arg3 selected:(BOOL)arg4;
+ (id)issueReasonAttributedStringForIssue:(id)arg1 rowSelected:(BOOL)arg2;
+ (id)issueTypeAndCauseAttributedStringForIssue:(id)arg1 rowSelected:(BOOL)arg2;

@end

