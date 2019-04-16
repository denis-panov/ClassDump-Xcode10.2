//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface IDEDocSampleCodeDownloadManager : NSObject
{
    NSMutableArray *_downloads;
}

+ (void)initialize;
+ (id)defaultDownloadManager;
- (void).cxx_destruct;
- (void)removeDownloadAtIndex:(unsigned long long)arg1;
- (void)addDownload:(id)arg1;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSArray *downloads; // @dynamic downloads;
@property(readonly, copy) NSMutableArray *mutableDownloads; // @dynamic mutableDownloads;

@end

