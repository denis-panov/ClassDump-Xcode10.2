//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTLayoutView_ML.h>

#import "IBNSViewControllerEditorViewContainer-Protocol.h"

@class IBNSTouchBar, IBNSTouchBarView, NSString;

@interface IBNSTouchBarEditorView : DVTLayoutView_ML <IBNSViewControllerEditorViewContainer>
{
    IBNSTouchBar *_touchBar;
    BOOL _updatingTouchBar;
    IBNSTouchBarView *_touchBarView;
}

@property(readonly) IBNSTouchBarView *touchBarView; // @synthesize touchBarView=_touchBarView;
- (void).cxx_destruct;
- (void)updateHardwarePreviewForTouchBar:(id)arg1 withClonedTouchBar:(id)arg2 documentEditor:(id)arg3;
- (void)viewDidChangeForViewController:(id)arg1;
- (void)updateItemsAndLayoutWindow;
- (BOOL)shouldReactToDescendantChanges;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutTopDown;
- (id)initWithTouchBar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
