//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TSXMLUnarchiver : NSObject
{
    struct __CFXMLParser *_parser;
    NSMutableDictionary *_entityNamesToClasses;
    id _delegate;
}

- (void).cxx_destruct;
- (void)finishDecoding;
- (long long)decodeIntAttribute:(id)arg1;
- (BOOL)decodeBoolAttribute:(id)arg1;
- (id)decodeStringAttribute:(id)arg1;
- (id)decodeObject;
- (Class)classForEntityName:(id)arg1;
- (void)setClass:(Class)arg1 forEntityName:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initForReadingWithData:(id)arg1;

@end

