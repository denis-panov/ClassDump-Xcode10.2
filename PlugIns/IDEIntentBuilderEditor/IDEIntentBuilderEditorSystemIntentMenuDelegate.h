//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEIntentBuilderEditor/NSMenuDelegate-Protocol.h>

@class IDEIntentBuilderModel, NSString;

@interface IDEIntentBuilderEditorSystemIntentMenuDelegate : NSObject <NSMenuDelegate>
{
    IDEIntentBuilderModel *_systemIntentsModel;
}

- (void).cxx_destruct;
- (void)menuWillOpen:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

