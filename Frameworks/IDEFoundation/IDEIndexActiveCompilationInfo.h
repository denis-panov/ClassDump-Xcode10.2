//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IDEActivityLogSectionRecorder, NSString;

@interface IDEIndexActiveCompilationInfo : NSObject
{
    NSString *_compileID;
    NSString *_toolID;
    IDEActivityLogSectionRecorder *_recorder;
}

@property(retain) IDEActivityLogSectionRecorder *recorder; // @synthesize recorder=_recorder;
@property(readonly) NSString *toolID; // @synthesize toolID=_toolID;
@property(readonly) NSString *compileID; // @synthesize compileID=_compileID;
- (void).cxx_destruct;
- (id)initWithCompileID:(id)arg1 toolID:(id)arg2;

@end
