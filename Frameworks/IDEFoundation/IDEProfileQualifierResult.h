//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSAttributedString, NSError;

@interface IDEProfileQualifierResult : NSObject
{
    BOOL _success;
    NSError *_error;
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
}

+ (id)failingResultWithTitle:(id)arg1 subtitle:(id)arg2 error:(id)arg3;
+ (id)successfulResultWithTitle:(id)arg1 subtitle:(id)arg2;
@property(readonly, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3 error:(id)arg4;

@end

