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

@interface XRSchemaErrorReplacementElement : NSObject
{
    NSString *_name;
    NSString *_key;
    NSString *_replacementString;
}

@property(copy, nonatomic) NSString *replacementString; // @synthesize replacementString=_replacementString;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 key:(id)arg2 replacementString:(id)arg3;

@end

