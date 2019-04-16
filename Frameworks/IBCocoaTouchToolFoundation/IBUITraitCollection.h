//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IBUITraitCollection : NSObject <IBBinaryArchiving, NSCopying>
{
    long long _horizontalSizeClass;
    long long _verticalSizeClass;
    long long _userInterfaceStyle;
    long long _displayGamut;
}

@property(readonly, nonatomic) long long displayGamut; // @synthesize displayGamut=_displayGamut;
@property(readonly, nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(readonly, nonatomic) long long verticalSizeClass; // @synthesize verticalSizeClass=_verticalSizeClass;
@property(readonly, nonatomic) long long horizontalSizeClass; // @synthesize horizontalSizeClass=_horizontalSizeClass;
@property(readonly, copy) NSString *description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithHorizontalSizeClass:(long long)arg1 verticalSizeClass:(long long)arg2 userInterfaceStyle:(long long)arg3 displayGamut:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

