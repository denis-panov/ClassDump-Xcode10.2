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

@interface IBICSlotSuggestionSetSection : NSObject
{
    Class _slotClass;
    NSString *_title;
    NSString *_identifier;
    double _displayOrder;
}

@property(readonly) double displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) Class slotClass; // @synthesize slotClass=_slotClass;
- (void).cxx_destruct;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 slotClass:(Class)arg2 title:(id)arg3 displayOrder:(double)arg4;

@end

