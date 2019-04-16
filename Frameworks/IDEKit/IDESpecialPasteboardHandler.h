//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IDESpecialPasteboardHandler : NSObject
{
    NSString *_outputPasteboardType;
    NSDictionary *_context;
}

@property(readonly) NSDictionary *context; // @synthesize context=_context;
@property(readonly) NSString *outputPasteboardType; // @synthesize outputPasteboardType=_outputPasteboardType;
- (void).cxx_destruct;
- (id)specialPasteMenuItemTitleFromPasteboard:(id)arg1;
- (id)specialPasteboardDataFromPasteboard:(id)arg1 error:(id *)arg2;
- (id)initWithOutputPasteboardType:(id)arg1 context:(id)arg2;
- (id)init;

@end

