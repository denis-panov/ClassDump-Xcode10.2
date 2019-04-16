//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <Xcode3UI/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEWorkspaceTabController, NSString, Xcode3Project;

@interface Xcode3LocalizationController : NSObject <DVTInvalidation>
{
    Xcode3Project *_project;
    IDEWorkspaceTabController *_workspaceTabController;
}

+ (id)variantGroupsForProject:(id)arg1 coveringLocale:(id)arg2;
+ (id)localizableFilesForProject:(id)arg1 convertingToLocale:(id)arg2;
+ (void)initialize;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain) Xcode3Project *project; // @synthesize project=_project;
- (void).cxx_destruct;
- (void)upgradeLegacyLocale:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeBaseInternationalizationWithErrorHandler:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeLocale:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addLocale:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_migrateVariantFileReference:(id)arg1 localizationVariantGroup:(id)arg2 toLocalization:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_convertFileAtPath:(id)arg1 toDefaultFileTypeForVariantGroup:(id)arg2 locale:(id)arg3 errorHandler:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_convertLocalizationVariantGroups:(id)arg1 toLocalization:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_convertVariantFileReference:(id)arg1 localizationVariantGroup:(id)arg2 toLocalization:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_loadDocumentAtPath:(id)arg1 ofType:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithProject:(id)arg1 workspaceTabController:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

