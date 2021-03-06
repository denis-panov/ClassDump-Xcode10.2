//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTTextDocumentLocation, IDEDiagnosticActivityLogMessage, NSString;

@interface IDEDiagnosticFixItItem : NSObject
{
    IDEDiagnosticActivityLogMessage *_diagnosticItem;
    NSString *_fixItString;
    DVTTextDocumentLocation *_replacementLocation;
}

@property(retain) DVTTextDocumentLocation *replacementLocation; // @synthesize replacementLocation=_replacementLocation;
@property(readonly) NSString *fixItString; // @synthesize fixItString=_fixItString;
@property(nonatomic) __weak IDEDiagnosticActivityLogMessage *diagnosticItem; // @synthesize diagnosticItem=_diagnosticItem;
- (void).cxx_destruct;
- (void)updateFixItInfoWithLocationEncodingConverter:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDiagnosticFixItItem:(id)arg1;
- (id)init;
- (id)initWithFixItString:(id)arg1 replacementLocation:(id)arg2;

@end

