//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface DTKPKDebugCodeSet : NSObject
{
    NSMutableSet *_kdebugCodes;
}

+ (void)releaseFilterMask:(char *)arg1;
@property(readonly, retain, nonatomic) NSMutableSet *kdebugCodes; // @synthesize kdebugCodes=_kdebugCodes;
- (void).cxx_destruct;
- (char *)createFilterMask:(BOOL)arg1;
- (id)legacyXML;
- (BOOL)containsClass:(unsigned int)arg1 subclassID:(unsigned int)arg2;
- (BOOL)containsClass:(unsigned int)arg1;
- (void)addClass:(unsigned int)arg1 subclassID:(unsigned int)arg2;
- (void)addClass:(unsigned int)arg1;
- (void)addCodes:(id)arg1;
- (void)addCodeSet:(id)arg1;
- (id)description;
- (id)initWithCodes:(id)arg1;
- (id)init;

@end
