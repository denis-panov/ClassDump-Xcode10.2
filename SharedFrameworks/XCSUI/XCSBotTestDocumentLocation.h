//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSString;

@interface XCSBotTestDocumentLocation : DVTDocumentLocation
{
    NSString *_testIdentifier;
}

@property(copy, nonatomic) NSString *testIdentifier; // @synthesize testIdentifier=_testIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 testIdentifier:(id)arg3;

@end

