//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTToolchainOverrideOption, IDEComponentsToolchainsTableController, NSNumber, NSString;

@interface IDEComponentsToolchainsTableRowItem : NSObject
{
    IDEComponentsToolchainsTableController *_controller;
    DVTToolchainOverrideOption *_option;
}

@property(readonly) DVTToolchainOverrideOption *option; // @synthesize option=_option;
- (void).cxx_destruct;
- (id)contextImage;
@property(readonly) NSString *displaySize;
@property(readonly) NSString *origin;
@property(readonly) NSString *createdDate;
@property(readonly) NSString *displayName;
- (void)setIsActive:(id)arg1;
@property(readonly) NSNumber *isActive;
- (BOOL)isValid;
- (id)initWithOption:(id)arg1 controller:(id)arg2;

@end

