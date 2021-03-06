//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTAnnotationProvider.h>

#import <DebuggerUI/DVTMessageBubbleAnnotationDelegate-Protocol.h>

@class DVTObservingToken, IDEAnnotationContext, NSMapTable, NSMutableSet, NSString;

@interface DBGInstructionPointerAnnotationProvider : DVTAnnotationProvider <DVTMessageBubbleAnnotationDelegate>
{
    IDEAnnotationContext *_context;
    NSMapTable *_annotationForLocation;
    NSMutableSet *_nonSelectedPCAnnotations;
    DVTObservingToken *_ipLocationObserver;
    DVTObservingToken *_ipLocationForDisasObserver;
    DVTObservingToken *_issueIPLocationObserver;
    DVTObservingToken *_issueIPLocationForDisasObserver;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)providerWillUninstall;
- (void)_cancelObservers;
- (BOOL)_doesURLResolveToContextURL:(id)arg1;
- (BOOL)_shouldCreateAnnotationForLocation:(id)arg1;
- (void)_removeAnnotationForLocation:(id)arg1;
- (void)_invalidateAnnotation:(id)arg1;
- (void)_createAnnotationForInstructionPointerLocation:(id)arg1;
- (void)_removeAndInvalidateAllNonSelectedPCAnnocations;
- (void)_handleInstructionPointerLocationChanged:(id)arg1;
- (void)didMoveAnnotation:(id)arg1;
- (void)annotation:(id)arg1 willDrawInTextSidebarView:(id)arg2 withAnnotationsInSameLine:(id)arg3;
- (unsigned long long)annotation:(id)arg1 willMoveToParagraphNumber:(unsigned long long)arg2;
- (void)_updateNonPrimaryPCs:(id)arg1;
- (id)_initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

