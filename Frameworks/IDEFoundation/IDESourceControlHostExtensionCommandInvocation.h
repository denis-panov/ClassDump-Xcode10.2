//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;

@interface IDESourceControlHostExtensionCommandInvocation : NSObject
{
    NSString *_extensionIdentifier;
    NSString *_command;
}

@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
@property(copy) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (void).cxx_destruct;
- (id)init:(id)arg1 command:(SEL)arg2;

@end

