//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSDocument, NSError;

@interface SKEErrorPresenter : NSObject
{
    NSError *_error;
    NSDocument *_document;
    BOOL _usesActivity;
    CDUnknownBlockType _recoveryBlock;
    CDUnknownBlockType _activityCompletionHandler;
}

+ (void)presentError:(id)arg1 inDocument:(id)arg2 asActivity:(BOOL)arg3 recoveryBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)present;
- (id)initWithError:(id)arg1 document:(id)arg2 asActivity:(BOOL)arg3 recoveryBlock:(CDUnknownBlockType)arg4;

@end

