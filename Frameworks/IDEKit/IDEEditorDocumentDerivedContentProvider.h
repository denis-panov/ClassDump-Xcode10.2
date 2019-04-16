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

@class DVTFileDataType, DVTStackBacktrace, NSMutableArray, NSString;
@protocol IDEEditorDocumentDerivedContentOwner, NSCopying;

@interface IDEEditorDocumentDerivedContentProvider : NSObject <DVTInvalidation>
{
    id <IDEEditorDocumentDerivedContentOwner> _owner;
    NSMutableArray *_registeredClients;
    DVTFileDataType *_derivedContentType;
    id <NSCopying> _derivedContent;
}

+ (void)initialize;
@property(readonly) id <NSCopying> derivedContent; // @synthesize derivedContent=_derivedContent;
@property(readonly) DVTFileDataType *derivedContentType; // @synthesize derivedContentType=_derivedContentType;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)setDerivedContent:(id)arg1 ofType:(id)arg2;
- (BOOL)hasClients;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1;
- (id)owner;
- (id)init;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

