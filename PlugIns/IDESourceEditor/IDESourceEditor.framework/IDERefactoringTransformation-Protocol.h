//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class IDEWorkspaceDocument, NSString;
@protocol IDEIndexSymbol;

@protocol IDERefactoringTransformation
@property(nonatomic, retain) IDEWorkspaceDocument *workspaceDocument;
@property(nonatomic, retain) id <IDEIndexSymbol> selectedSymbol;
@property(nonatomic, copy) NSString *renameNewName;
@property(nonatomic, readonly) NSString *renameOldName;
@end

