//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface DTRenderableContentResponse : NSObject
{
    BOOL _cancelled;
    unsigned long long _status;
    id _content;
    unsigned long long _serialNumber;
    NSObject<OS_dispatch_group> *_group;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (BOOL)_isFinished;
- (void)_cancel;

@end

