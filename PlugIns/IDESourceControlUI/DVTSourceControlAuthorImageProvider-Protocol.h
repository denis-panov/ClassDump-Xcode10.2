//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESourceControlUI/NSObject-Protocol.h>

@class DVTSourceControlAuthor;

@protocol DVTSourceControlAuthorImageProvider <NSObject>
- (void)avatarForAuthor:(DVTSourceControlAuthor *)arg1 completion:(void (^)(NSImage *))arg2;
@property(nonatomic) BOOL enabled;
@end
