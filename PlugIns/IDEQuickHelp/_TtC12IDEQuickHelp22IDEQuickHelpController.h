//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTInvalidation_NSObject.h>

@class IDEQuickHelpQueryResult, _TtC16DVTDocumentation23DVTDocumentationManager;

@interface _TtC12IDEQuickHelp22IDEQuickHelpController : DVTInvalidation_NSObject
{
    // Error parsing type: , name: queryResult
    // Error parsing type: , name: documentationManager
    // Error parsing type: , name: placeholderString
    // Error parsing type: , name: _inFlightOperation
    // Error parsing type: , name: _inspectorViewController
    // Error parsing type: , name: renderedContentSize
    // Error parsing type: , name: quickHelpPerformanceLogAspect
    // Error parsing type: , name: quickHelpPerformanceMetric
}

- (void).cxx_destruct;
- (id)init;
- (void)generateContentFor:(id)arg1 container:(id)arg2 symbolKind:(id)arg3 context:(id)arg4;
- (void)generateContentFor:(id)arg1 with:(id)arg2 from:(id)arg3;
- (void)showDocumentation:(id)arg1;
- (void)primitiveInvalidate;
@property(nonatomic) struct CGSize renderedContentSize; // @synthesize renderedContentSize;
@property(nonatomic, retain) _TtC16DVTDocumentation23DVTDocumentationManager *documentationManager; // @synthesize documentationManager;
@property(nonatomic, retain) IDEQuickHelpQueryResult *queryResult; // @synthesize queryResult;

@end

