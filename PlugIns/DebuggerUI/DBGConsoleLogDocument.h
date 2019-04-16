//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEEditorDocument.h>

@class DBGConsoleLog, NSTextStorage;

@interface DBGConsoleLogDocument : IDEEditorDocument
{
    DBGConsoleLog *_consoleLog;
    NSTextStorage *_textStorage;
    BOOL _setUpPrintInfoDefaults;
}

+ (id)writableTypes;
+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
@property(retain) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(readonly) DBGConsoleLog *consoleLog; // @synthesize consoleLog=_consoleLog;
- (void).cxx_destruct;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)saveDocument:(id)arg1;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (int)readOnlyStatus;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (id)printInfo;
- (id)displayName;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

