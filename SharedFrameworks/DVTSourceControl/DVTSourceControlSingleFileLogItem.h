//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTSourceControl/DVTSourceControlLogItem-Protocol.h>
#import <DVTSourceControl/NSCopying-Protocol.h>
#import <DVTSourceControl/NSSecureCoding-Protocol.h>

@class DVTSourceControlAuthor, DVTSourceControlRevision, NSDate, NSString;

@interface DVTSourceControlSingleFileLogItem : NSObject <NSSecureCoding, NSCopying, DVTSourceControlLogItem>
{
    NSString *_currentFilePath;
    NSString *_filePath;
    unsigned long long _status;
    DVTSourceControlAuthor *_author;
    DVTSourceControlRevision *_revision;
    NSDate *_date;
    NSString *_message;
    unsigned long long _revisionType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long revisionType; // @synthesize revisionType=_revisionType;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) DVTSourceControlRevision *revision; // @synthesize revision=_revision;
@property(retain, nonatomic) DVTSourceControlAuthor *author; // @synthesize author=_author;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL isMerge;
- (id)initWithAuthor:(id)arg1 revision:(id)arg2 date:(id)arg3 message:(id)arg4 currentFilePath:(id)arg5 filePath:(id)arg6 status:(unsigned long long)arg7 revisionType:(unsigned long long)arg8;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

