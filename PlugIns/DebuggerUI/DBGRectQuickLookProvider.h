//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebuggerUI/IDEVariablesViewQuickLookProvider-Protocol.h>

@class DBGDataValue, DVTRectViewController, NSString, NSURL, NSView;

@interface DBGRectQuickLookProvider : NSObject <IDEVariablesViewQuickLookProvider>
{
    DBGDataValue *_dataValue;
    DVTRectViewController *_rectViewController;
    int _loadedState;
}

@property int loadedState; // @synthesize loadedState=_loadedState;
- (void).cxx_destruct;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)_startRetrieval;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

