//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <SourceEditor/PGERunDelegateWrapper-Protocol.h>

@class NSString;

@interface PGERunDelegateWrapper : NSObject <PGERunDelegateWrapper>
{
    struct __CTRunDelegate *_runDelegateRef;
}

@property struct __CTRunDelegate *runDelegateRef; // @synthesize runDelegateRef=_runDelegateRef;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

