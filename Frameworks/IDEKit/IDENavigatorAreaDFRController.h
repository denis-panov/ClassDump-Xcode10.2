//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, NSString;

@interface IDENavigatorAreaDFRController : NSObject <DVTInvalidation>
{
    DVTObservingToken *_navigatorFilterHasTextObserver;
    DVTObservingToken *_navigatorFilterDefinitionObserver;
    DVTNotificationToken *_contentDelegateModeNotificationToken;
    DVTObservingToken *_navigatorItemsObserver;
}

+ (void)initialize;
@property(retain) DVTObservingToken *navigatorItemsObserver; // @synthesize navigatorItemsObserver=_navigatorItemsObserver;
@property(retain) DVTNotificationToken *contentDelegateModeNotificationToken; // @synthesize contentDelegateModeNotificationToken=_contentDelegateModeNotificationToken;
@property(retain) DVTObservingToken *navigatorFilterDefinitionObserver; // @synthesize navigatorFilterDefinitionObserver=_navigatorFilterDefinitionObserver;
@property(retain) DVTObservingToken *navigatorFilterHasTextObserver; // @synthesize navigatorFilterHasTextObserver=_navigatorFilterHasTextObserver;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

