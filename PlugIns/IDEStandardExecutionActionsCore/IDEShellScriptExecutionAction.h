//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEExecutionAction.h>

@class DVTNotificationToken, IDESchemeBuildableReference, NSString;

@interface IDEShellScriptExecutionAction : IDEExecutionAction
{
    NSString *_shellToInvoke;
    NSString *_embeddedScriptText;
    IDESchemeBuildableReference *_buildableReferenceToUseForBuildSettings;
    DVTNotificationToken *_buildablesToken;
}

+ (id)actionType;
@property(retain, nonatomic) IDESchemeBuildableReference *buildableReferenceToUseForBuildSettings; // @synthesize buildableReferenceToUseForBuildSettings=_buildableReferenceToUseForBuildSettings;
@property(copy) NSString *shellToInvoke; // @synthesize shellToInvoke=_shellToInvoke;
@property(copy, nonatomic) NSString *embeddedScriptText; // @synthesize embeddedScriptText=_embeddedScriptText;
- (void).cxx_destruct;
- (void)setShellToInvokeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setScriptTextFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)addEnvironmentBuildable:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (BOOL)needsCurrentArchiveVersion;
@property(readonly) NSString *defaultShell;
- (id)operationForExecutionWithBuildParameters:(id)arg1 error:(id *)arg2;
- (void)_updateBuildableReferenceToUseForBuildSettings;
- (void)schemeObjectGraphSetupComplete;
- (void)setRunContext:(id)arg1;
- (void)setDefaultShell:(id)arg1;

@end

