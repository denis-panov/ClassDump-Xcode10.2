//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (ConvenienceAppendMethods)
- (void)appendHexadecimalRepresentationOfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)appendUnicodeStringAsQuotedUTF8:(id)arg1 quoteOnlyIfNeeded:(BOOL)arg2 quoteTabsAndEOLs:(BOOL)arg3;
- (void)appendStringAsUTF8:(id)arg1;
- (void)appendUTF8String:(const char *)arg1;
- (void)appendIndentation:(unsigned long long)arg1;
@end

