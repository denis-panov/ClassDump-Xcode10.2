//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DBGSummaryPart, DVTFilePath, NSString;

@interface DBGDataValueSummaryFormat : NSObject
{
    BOOL _userDefined;
    NSString *_formatString;
    NSString *_type;
    DVTFilePath *_dylibPath;
    DBGSummaryPart *_formatRoot;
}

+ (id)zombieFormatForType:(id)arg1;
+ (BOOL)writeSummaryFormats:(id)arg1 toPath:(id)arg2;
+ (id)legacySummaryFormatsAtPath:(id)arg1;
@property(retain, nonatomic) DBGSummaryPart *formatRoot; // @synthesize formatRoot=_formatRoot;
@property BOOL userDefined; // @synthesize userDefined=_userDefined;
@property(readonly, copy) DVTFilePath *dylibPath; // @synthesize dylibPath=_dylibPath;
@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSString *formatString; // @synthesize formatString=_formatString;
- (void).cxx_destruct;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setType:(id)arg1;
- (id)init;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithString:(id)arg1 forType:(id)arg2 usingDylibPath:(id)arg3;

@end
