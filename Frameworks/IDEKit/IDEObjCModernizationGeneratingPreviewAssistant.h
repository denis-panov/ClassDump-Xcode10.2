//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEAssistant.h>

@class NSString;

@interface IDEObjCModernizationGeneratingPreviewAssistant : IDEAssistant
{
    NSString *_message;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
@property(copy) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (id)nextAssistantIdentifier;

@end
