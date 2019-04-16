//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <MTLTools/DYGraphicsAPIInfo-Protocol.h>
#import <MTLTools/NSCopying-Protocol.h>
#import <MTLTools/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface DYMTLDeviceProfile : NSObject <DYGraphicsAPIInfo, NSSecureCoding, NSCopying>
{
    NSArray *_supportedFeatureSets;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *supportedFeatureSets; // @synthesize supportedFeatureSets=_supportedFeatureSets;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)supportsCapabilitiesOfGraphicsAPI:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

