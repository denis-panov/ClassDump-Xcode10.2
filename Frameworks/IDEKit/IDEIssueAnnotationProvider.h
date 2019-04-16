//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTAnnotationProvider.h>

#import <IDEKit/DVTMessageBubbleAnnotationDelegate-Protocol.h>

@class IDEAnnotationContext, NSString;
@protocol DVTCancellable;

@interface IDEIssueAnnotationProvider : DVTAnnotationProvider <DVTMessageBubbleAnnotationDelegate>
{
    id <DVTCancellable> _fileIssueObservingToken;
    BOOL _shouldHandleLiveIssues;
    BOOL _shouldHandleFixableIssues;
    BOOL _shouldDeferAnnotationRebuilding;
    IDEAnnotationContext *_context;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(nonatomic) BOOL shouldDeferAnnotationRebuilding; // @synthesize shouldDeferAnnotationRebuilding=_shouldDeferAnnotationRebuilding;
@property(nonatomic) BOOL shouldHandleFixableIssues; // @synthesize shouldHandleFixableIssues=_shouldHandleFixableIssues;
@property(nonatomic) BOOL shouldHandleLiveIssues; // @synthesize shouldHandleLiveIssues=_shouldHandleLiveIssues;
@property(retain) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)providerWillUninstall;
- (void)_rebuildAnnotations;
- (id)initWithContext:(id)arg1;
- (id)init;
- (void)didDeleteOrReplaceParagraphForAnnotation:(id)arg1;
- (void)_revealInIssueNavigator:(id)arg1;
- (double)sidebarMarkerOpacityForAnnotation:(id)arg1;
- (id)contextMenuItemsForAnnotation:(id)arg1 inTextSidebarView:(id)arg2;
- (BOOL)shouldMoveCursorForAnnotation:(id)arg1;
- (void)didClickAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didClickMessageBubbleForAnnotation:(id)arg1 onIcon:(BOOL)arg2 inView:(id)arg3 event:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

