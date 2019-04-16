//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEActivityReporter.h>

@class NSMapTable;

@interface IDEPlaygroundActivityReporter : IDEActivityReporter
{
    NSMapTable *_playgroundDocumentsToActivityEntriesTable;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_prepareToRemoveEntry:(id)arg1;
- (void)_removeAndInvalidateActivityReportForEntry:(id)arg1;
- (void)_addActivityReportForTitle:(id)arg1 forEntry:(id)arg2;
- (void)watchPlaygroundDocumentForActivity:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

@end
