//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSUI/NSObject-Protocol.h>

@protocol DVTRadar_AttachmentDownloadDelegate <NSObject>
- (void)cancelFetchAttachments:(id)arg1;
- (id)fetchAttachmentsCompletionBlock:(void (^)(NSError *, double, BOOL, NSArray *))arg1;
@end

