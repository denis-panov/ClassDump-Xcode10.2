//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTSUReadChannel-Protocol.h>

@class MDLTSUZipArchive, MDLTSUZipEntry, NSString;
@protocol MDLTSUReadChannel;

@interface MDLTSUZipReadChannel : NSObject <MDLTSUReadChannel>
{
    MDLTSUZipEntry *_entry;
    MDLTSUZipArchive *_archive;
    BOOL _validateCRC;
    id <MDLTSUReadChannel> _archiveReadChannel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)close;
- (void)handleFailureWithHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (BOOL)processData:(id)arg1 CRC:(unsigned int *)arg2 isDone:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (void)readWithFileHeaderLength:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long *)arg2;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

