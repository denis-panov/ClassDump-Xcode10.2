//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/XCBuildProductStructureElementCreator.h>

@class NSString;

@interface XCBuildProductStructureElementCreator_Directory : XCBuildProductStructureElementCreator
{
    NSString *_path;
    NSString *_commandStringRepresentation;
}

- (void).cxx_destruct;
- (BOOL)createElementIfNecessaryWithBuildLogRecorderBlock:(CDUnknownBlockType)arg1;
- (id)commandStringRepresentation;
- (id)initWithDirectoryAtPath:(id)arg1;

@end

