//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSDocument;

@interface SKDocumentOperation : NSObject
{
    SKDocumentOperation *_reverseOperation;
    NSDocument *_document;
}

@property(readonly, nonatomic) __weak NSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)registerWithoutApply;
- (id)reverseOperation;
- (void)revertWithObject:(id)arg1;
- (BOOL)revert;
- (BOOL)apply;
- (id)initWithDocument:(id)arg1;

@end

