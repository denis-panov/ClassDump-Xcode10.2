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

@interface IDEDeclarativeInspectorPopupItem : NSObject
{
    id _representedObject;
    NSString *_displayValue;
}

+ (id)matchingRepresentedObject:(id)arg1 inItems:(id)arg2;
@property(retain) NSString *displayValue; // @synthesize displayValue=_displayValue;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)initWithRepresentedObject:(id)arg1 displayValue:(id)arg2;

@end

