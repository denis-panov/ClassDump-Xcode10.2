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

@interface XCProjectSnapshot : NSObject
{
    NSString *_name;
    NSString *_path;
}

@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithInformationFromProject:(id)arg1;

@end

