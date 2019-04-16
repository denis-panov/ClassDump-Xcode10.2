//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSFileHandle, NSMutableDictionary, NSString;

@interface IDECoverageArchiver : NSObject
{
    BOOL _finished;
    BOOL _initializedSuccessfully;
    NSString *_path;
    NSFileHandle *_dataFileHandle;
    NSFileHandle *_indexFileHandle;
    NSMutableDictionary *_index;
    unsigned long long _offset;
}

+ (id)encodeSubrangesForLines:(id)arg1;
+ (id)encodeLines:(id)arg1;
@property BOOL initializedSuccessfully; // @synthesize initializedSuccessfully=_initializedSuccessfully;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSMutableDictionary *index; // @synthesize index=_index;
@property(retain, nonatomic) NSFileHandle *indexFileHandle; // @synthesize indexFileHandle=_indexFileHandle;
@property(retain, nonatomic) NSFileHandle *dataFileHandle; // @synthesize dataFileHandle=_dataFileHandle;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(getter=isFinished) BOOL finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)finish:(id *)arg1;
- (BOOL)archiveCoverageLines:(id)arg1 error:(id *)arg2;
- (BOOL)archiveCoverageLines:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (BOOL)archiveContainsKey:(id)arg1;
- (id)initWithArchivePath:(id)arg1 error:(id *)arg2;

@end

