//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESourceEditor/IDESourceCodeDocument.h>

#import <IDELanguageSupportUI/IDESwiftSourceCodeGenerationDestination-Protocol.h>

@class NSString;

@interface IDESourceCodeDocument (IDESwiftSourceCodeGenerationAdditions) <IDESwiftSourceCodeGenerationDestination>
- (BOOL)classItemIsValid:(id)arg1;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddSwiftClassMethodDefinitionWithName:(id)arg2 inClassItem:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddSwiftInstanceMethodDefinitionWithName:(id)arg2 inClassItem:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_primitiveAddSwiftMethodSourceCode:(id)arg1 toClassItem:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddSwiftInstanceVariableReleaseForTeardownWithName:(id)arg2 inClassItem:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_primitiveAddSwiftReleaseForTeardownMethodWithSourceCodeGenerator:(id)arg1 withReleaseCallCode:(id)arg2 inClassItem:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_insertSwiftSourceCode:(id)arg1 inTeardownMethodForClassItem:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_swiftMethodItemForName:(id)arg1 inClassItem:(id)arg2;
- (id)_teardownMethodNameForSourceCodeGeneratorWithOptions:(id)arg1;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddSwiftPropertyDeclarationWithName:(id)arg2 type:(id)arg3 inClassItem:(id)arg4 options:(id)arg5 error:(id *)arg6;
- (id)_primitiveAddSwiftSourceCode:(id)arg1 toClassItem:(id)arg2 withOptions:(id)arg3 insertAdditionalNewlineWhenInsertingWithAfterBeforeHint:(BOOL)arg4 insertAtEndWhenInsertingWithoutHint:(BOOL)arg5 error:(id *)arg6;
- (id)_insertSwiftSourceCode:(id)arg1 inTopLevelOfClassItem:(id)arg2 asCloseAsPossibleToLineNumber:(unsigned long long)arg3 error:(id *)arg4;
- (id)_insertSwiftSourceCode:(id)arg1 inContainingSourceLandmarkItem:(id)arg2 asCloseAsPossibleToLineNumber:(unsigned long long)arg3 firstPossibleItemToInsertBefore:(id)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

