//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSObject.h>

@class XCSTrigger;

@interface XCSNotificationRequest : XCSObject
{
    XCSTrigger *_trigger;
}

+ (id)notificationRequestWithTrigger:(id)arg1;
@property(readonly, nonatomic) XCSTrigger *trigger; // @synthesize trigger=_trigger;
- (void).cxx_destruct;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithTrigger:(id)arg1;

@end

