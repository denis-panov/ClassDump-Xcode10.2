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

@interface IDELocalizationRecordItem : NSObject
{
    BOOL _projectChange;
    NSString *_message;
}

@property(readonly, getter=isProjectChange) BOOL projectChange; // @synthesize projectChange=_projectChange;
@property(readonly, copy) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMessage:(id)arg1 projectChange:(BOOL)arg2;

@end

