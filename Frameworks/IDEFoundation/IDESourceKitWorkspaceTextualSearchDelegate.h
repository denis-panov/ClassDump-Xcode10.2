//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEBatchFindQueryDelegate-Protocol.h>

@class IDESourceKitWorkspace, NSString;

@interface IDESourceKitWorkspaceTextualSearchDelegate : NSObject <IDEBatchFindQueryDelegate>
{
    IDESourceKitWorkspace *_skWorkspace;
    long long _token;
    IDESourceKitWorkspaceTextualSearchDelegate *_strongSelf;
}

- (void).cxx_destruct;
- (void)findNavigatorQuery:(id)arg1 didFinishGeneratingLazyChildrenOfResult:(id)arg2;
- (void)findNavigatorQuery:(id)arg1 isStalledOnFilePaths:(id)arg2;
- (void)findNavigatorQuery:(id)arg1 progressUpdate:(long long)arg2;
- (void)findNavigatorQuery:(id)arg1 didGenerateResults:(id)arg2;
- (void)findNavigatorQueryDidComplete:(id)arg1;
- (id)initWithSKWorkspace:(id)arg1 token:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

