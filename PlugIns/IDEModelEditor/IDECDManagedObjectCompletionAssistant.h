//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Xcode3UI/Xcode3FileTemplateCompletionAssistant.h>

#import <IDEModelEditor/NSOpenSavePanelDelegate-Protocol.h>

@class NSString;

@interface IDECDManagedObjectCompletionAssistant : Xcode3FileTemplateCompletionAssistant <NSOpenSavePanelDelegate>
{
    BOOL _deleteFilesForReplacement;
}

@property BOOL deleteFilesForReplacement; // @synthesize deleteFilesForReplacement=_deleteFilesForReplacement;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (id)configuredSavePanel;
- (id)configuredOpenPanel;
- (void)configureDataSourceFileTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

