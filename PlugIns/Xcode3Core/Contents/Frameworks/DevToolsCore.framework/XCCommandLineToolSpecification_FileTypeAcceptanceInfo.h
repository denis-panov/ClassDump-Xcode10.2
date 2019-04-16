//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString, PBXFileType, XCPropertyMacroExpression;
@protocol DVTMacroExpansion;

@interface XCCommandLineToolSpecification_FileTypeAcceptanceInfo : NSObject
{
    PBXFileType *_fileType;
    XCPropertyMacroExpression *_conditionExpression;
    NSString<DVTMacroExpansion> *_errorString;
}

@property(copy) NSString<DVTMacroExpansion> *errorString; // @synthesize errorString=_errorString;
@property(retain) XCPropertyMacroExpression *conditionExpression; // @synthesize conditionExpression=_conditionExpression;
@property(retain) PBXFileType *fileType; // @synthesize fileType=_fileType;
- (void).cxx_destruct;
- (id)description;
- (BOOL)shouldProcessInputFileType:(id)arg1 withMacroExpansionScope:(id)arg2 errorString:(id *)arg3;
- (BOOL)acceptsFileType:(id)arg1;
- (id)initWithFileTypeIdentifier:(id)arg1 forToolSpecification:(id)arg2;
- (id)initWithPropertyListDictionary:(id)arg1 forToolSpecification:(id)arg2;

@end

