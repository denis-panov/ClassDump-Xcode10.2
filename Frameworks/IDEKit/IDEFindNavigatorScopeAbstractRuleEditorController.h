//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSRuleEditorDelegate-Protocol.h>

@class DVTStackBacktrace, IDEWorkspace, NSRuleEditor, NSString;

@interface IDEFindNavigatorScopeAbstractRuleEditorController : NSObject <DVTInvalidation, NSRuleEditorDelegate>
{
    IDEWorkspace *_hostWorkspace;
    NSRuleEditor *_ruleEditor;
}

+ (void)initialize;
@property(readonly) NSRuleEditor *ruleEditor; // @synthesize ruleEditor=_ruleEditor;
@property(readonly) IDEWorkspace *hostWorkspace; // @synthesize hostWorkspace=_hostWorkspace;
- (void).cxx_destruct;
- (id)ruleEditor:(id)arg1 displayValueForCriterion:(id)arg2 inRow:(long long)arg3;
- (id)ruleEditor:(id)arg1 child:(long long)arg2 forCriterion:(id)arg3 withRowType:(unsigned long long)arg4;
- (long long)ruleEditor:(id)arg1 numberOfChildrenForCriterion:(id)arg2 withRowType:(unsigned long long)arg3;
- (id)childrenForCriterion:(id)arg1 withRowType:(unsigned long long)arg2;
- (void)primitiveInvalidate;
- (id)initWithRuleEditor:(id)arg1 hostWorkspace:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

