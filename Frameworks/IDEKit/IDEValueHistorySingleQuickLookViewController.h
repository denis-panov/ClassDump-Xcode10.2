//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEValueHistoryToyViewController.h>

@class IDEPlaygroundQuickLookController, NSView;

@interface IDEValueHistorySingleQuickLookViewController : IDEValueHistoryToyViewController
{
    BOOL _playgroundIsExecuting;
    BOOL _playgroundDidCompleteLastExecution;
    IDEPlaygroundQuickLookController *_currentQuickLookController;
    struct CGSize _cachedPreferredSize;
    NSView *_containerView;
    NSView *_quickLookView;
}

+ (id)displayableReflectionTags;
@property(retain, nonatomic) NSView *quickLookView; // @synthesize quickLookView=_quickLookView;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (id)toolTip;
- (double)preferredVerticalInset;
- (double)preferredHorizontalInset;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (unsigned long long)representationType;
- (void)viewDidLoad;

@end

