//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC13DVTFoundation14DVTIssueReport : NSObject
{
    // Error parsing type: , name: radarIdentifier
    // Error parsing type: , name: title
    // Error parsing type: , name: component
    // Error parsing type: , name: reproducibility
    // Error parsing type: , name: explanation
    // Error parsing type: , name: attachments
}

+ (id)defaultExplanation;
+ (id)defaultIssuesDirectoryLocationAndReturnError:(id *)arg1;
+ (id)issueLocationWithNamed:(id)arg1 error:(id *)arg2;
+ (id)createAndSaveNewIssueToLocation:(id)arg1 title:(id)arg2 component:(id)arg3 files:(id)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) BOOL uploaded;
@property(nonatomic, copy) NSString *explanation; // @synthesize explanation;
@property(nonatomic, copy) NSString *component; // @synthesize component;
@property(nonatomic, copy) NSString *title; // @synthesize title;

@end

