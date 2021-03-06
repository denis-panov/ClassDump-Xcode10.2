//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEAlert.h>

@class NSSound, NSString;

@interface IDESoundAlert : IDEAlert
{
    NSSound *_sound;
    NSString *_soundPath;
}

+ (id)systemSoundPaths;
+ (void)_addSoundsFromPath:(id)arg1 to:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSString *soundPath; // @synthesize soundPath=_soundPath;
- (void).cxx_destruct;
- (int)alertPropertyListVersion;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)systemSoundPaths;
- (id)init;

@end

