//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IDEScriptingElement : NSObject
{
    id _container;
    id _accessor;
}

@property(retain) id accessor; // @synthesize accessor=_accessor;
@property(retain) id container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)objectSpecifier;
- (id)objectSpecifierAsProperty;
- (id)objectSpecifierByIndex;
- (id)objectSpecifierByName:(id)arg1;
- (id)objectSpecifierByID:(id)arg1;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (void)setScriptingID:(id)arg1;
- (void)setName:(id)arg1;
- (id)description;

@end

