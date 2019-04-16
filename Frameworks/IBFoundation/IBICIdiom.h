//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/IBICSlotComponent.h>

#import <IBFoundation/IBICCoreUISlotComponent-Protocol.h>

@class NSString;

@interface IBICIdiom : IBICSlotComponent <IBICCoreUISlotComponent>
{
    BOOL _isMarketingIdiom;
    NSString *_platform;
    long long _coreUIIdiom;
    NSString *_infoPlistSuffix;
}

+ (id)identifierFromFileName:(id)arg1 inRange:(struct _NSRange *)arg2;
+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 isMarketingIdiom:(BOOL)arg5 coreUIIdiom:(long long)arg6 infoPlistSuffix:(id)arg7 displayOrder:(double)arg8;
+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 coreUIIdiom:(long long)arg5 infoPlistSuffix:(id)arg6 displayOrder:(double)arg7;
+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 coreUIIdiom:(long long)arg5 displayOrder:(double)arg6;
+ (id)displayName;
+ (id)contentsJSONKey;
+ (id)unspecifiedValuePlaceholder;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
@property(readonly) BOOL isMarketingIdiom; // @synthesize isMarketingIdiom=_isMarketingIdiom;
@property(readonly) NSString *infoPlistSuffix; // @synthesize infoPlistSuffix=_infoPlistSuffix;
@property(readonly) long long coreUIIdiom; // @synthesize coreUIIdiom=_coreUIIdiom;
@property(readonly) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long coreUIValue;
- (BOOL)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 isMarketingIdiom:(BOOL)arg5 coreUIIdiom:(long long)arg6 infoPlistSuffix:(id)arg7 displayOrder:(double)arg8;
- (long long)componentID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

