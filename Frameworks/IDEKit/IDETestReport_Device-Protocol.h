//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/NSObject-Protocol.h>

@class NSImage, NSString;

@protocol IDETestReport_Device <NSObject>
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_platformName;
@property(readonly, nonatomic) NSImage *ide_testReport_device_statusImage;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_architecture;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_osVersion;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_modelCodename;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_modelName;
@property(readonly, nonatomic) BOOL ide_testReport_device_isSimulator;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_UTI;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_name;
@property(readonly, copy, nonatomic) NSString *ide_testReport_device_identifier;
@end

