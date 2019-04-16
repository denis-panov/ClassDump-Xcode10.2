//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEPlaygroundEditor/DVTDiffTextFilter-Protocol.h>

@class NSString;

@interface IDEPlaygroundTextConversionProvider : NSObject <DVTDiffTextFilter>
{
}

+ (id)pathToTextFileFromInputFilePath:(id)arg1 error:(id *)arg2;
+ (id)textFileDataTypeForInputFilePath:(id)arg1;
+ (BOOL)pathRequiresFilter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

