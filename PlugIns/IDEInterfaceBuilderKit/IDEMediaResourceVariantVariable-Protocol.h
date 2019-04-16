//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>
#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class NSString;
@protocol IDEMediaResourceVariantVariable;

@protocol IDEMediaResourceVariantVariable <NSObject, NSCopying>
- (BOOL)value:(id)arg1 matches:(id)arg2;
- (NSString *)valueFromFileName:(NSString *)arg1 foundInRange:(struct _NSRange *)arg2;
- (NSString *)displayStringForValue:(NSString *)arg1;
- (NSString *)displayName;
- (NSString *)type;
- (BOOL)isEqualToVariable:(id <IDEMediaResourceVariantVariable>)arg1;
@end

