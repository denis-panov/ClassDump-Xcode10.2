//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Foundation/NSData.h>

@interface NSData (Gzip)
- (id)dbg_gzipDeflateWithLevel:(int)arg1 windowBits:(int)arg2 memLevel:(int)arg3;
- (id)dbg_gzipDeflateRaw;
- (id)dbg_gzipDeflate;
- (id)dbg_gzipInflateWithWindowBits:(int)arg1;
- (id)dbg_gzipInflateRaw;
- (id)dbg_gzipInflate;
- (id)dbg_gzipInflateIfCompressed;
- (BOOL)dbg_isGzipped;
@end

