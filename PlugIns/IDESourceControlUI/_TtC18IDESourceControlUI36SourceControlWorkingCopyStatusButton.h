//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSButton.h>

@class NSString, NSURL;

@interface _TtC18IDESourceControlUI36SourceControlWorkingCopyStatusButton : NSButton
{
    // Error parsing type: , name: workingCopyFileURL
    // Error parsing type: , name: workingCopyStatus
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
- (void).cxx_destruct;
@property(nonatomic, readonly) BOOL hasDisplayableStatus;
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned long long workingCopyStatus; // @synthesize workingCopyStatus;
@property(nonatomic, copy) NSURL *workingCopyFileURL; // @synthesize workingCopyFileURL;

@end

