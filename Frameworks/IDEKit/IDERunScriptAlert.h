//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEAlert.h>

@class NSString;

@interface IDERunScriptAlert : IDEAlert
{
    NSString *_path;
}

@property(retain) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (int)alertPropertyListVersion;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)valuesForProperty:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;

@end

