//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, NSString;

@interface IDEPlaygroundIssueInfo : NSObject
{
    DVTDocumentLocation *_documentLocation;
    NSString *_message;
}

@property(readonly) NSString *message; // @synthesize message=_message;
@property(readonly) DVTDocumentLocation *documentLocation; // @synthesize documentLocation=_documentLocation;
- (void).cxx_destruct;
- (id)initWithDocumentLocation:(id)arg1 message:(id)arg2;

@end

