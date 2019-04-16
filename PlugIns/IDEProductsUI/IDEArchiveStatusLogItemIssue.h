//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEProductsUI/IDEArchiveStatusLogItemChild-Protocol.h>
#import <IDEProductsUI/NSCopying-Protocol.h>

@class NSArray, NSAttributedString, NSError, NSString;

@interface IDEArchiveStatusLogItemIssue : NSObject <IDEArchiveStatusLogItemChild, NSCopying>
{
    NSAttributedString *_attributedString;
    NSError *_error;
    long long _severity;
    NSArray *_children;
}

+ (id)issueWithError:(id)arg1 severity:(long long)arg2;
@property(retain) NSArray *children; // @synthesize children=_children;
@property(readonly) long long severity; // @synthesize severity=_severity;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly) BOOL isNotice;
@property(readonly) BOOL isWarning;
@property(readonly) BOOL isError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

