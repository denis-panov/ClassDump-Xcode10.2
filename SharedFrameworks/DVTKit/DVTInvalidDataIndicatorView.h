//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class NSString;

@interface DVTInvalidDataIndicatorView : NSView
{
    NSString *_alertMessage;
    NSString *_alertInformativeText;
}

@property(copy) NSString *alertInformativeText; // @synthesize alertInformativeText=_alertInformativeText;
@property(copy) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;

@end

