//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEDocViewer/NSObject-Protocol.h>

@class NSAttributedString, NSString;

@protocol WebDocumentText <NSObject>
- (void)deselectAll;
- (void)selectAll;
- (NSAttributedString *)selectedAttributedString;
- (NSString *)selectedString;
- (NSAttributedString *)attributedString;
- (NSString *)string;
- (BOOL)supportsTextEncoding;
@end

