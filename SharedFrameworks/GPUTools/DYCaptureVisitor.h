//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface DYCaptureVisitor : NSObject
{
    BOOL _abort;
    BOOL _visitUnusedResoures;
}

@property(nonatomic) BOOL visitUnusedResoures; // @synthesize visitUnusedResoures=_visitUnusedResoures;
- (void)abort;
- (void)visitInternalFile:(id)arg1;
- (void)visitDataFile:(id)arg1;
- (void)visitFunctionStreamFile:(id)arg1;
- (void)visitCaptureArchive:(id)arg1;
- (void)visitCaptureArchiveStack:(id)arg1;
- (void)visitCaptureStore:(id)arg1;
- (id)init;

@end

