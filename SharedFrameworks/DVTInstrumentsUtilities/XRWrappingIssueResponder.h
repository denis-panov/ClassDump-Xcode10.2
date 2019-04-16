//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRIssueResponder-Protocol.h>

@class NSError, NSString;
@protocol XRIssueResponder;

@interface XRWrappingIssueResponder : NSObject <XRIssueResponder>
{
    NSError *_prototype;
    id <XRIssueResponder> _nextResponder;
}

- (void).cxx_destruct;
- (void)handleIssue:(id)arg1 type:(unsigned long long)arg2 from:(id)arg3;
- (id)init;
- (id)initWithNextResponder:(id)arg1 prototype:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

