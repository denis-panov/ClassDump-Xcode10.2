//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBGenericDeviceTypeDescription.h>

@class NSString;

@interface IBSimulatorDeviceTypeDescription : IBGenericDeviceTypeDescription
{
    NSString *_deviceTypeIdentifier;
}

+ (id)descriptionWithDeviceTypeIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *deviceTypeIdentifier; // @synthesize deviceTypeIdentifier=_deviceTypeIdentifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToDescription:(id)arg1;
- (id)identifier;
- (id)initWithDeviceTypeIdentifier:(id)arg1;

@end

