//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTSourceCodeSymbolKind, NSString;

@interface IBGeniusConnectionDefinition : NSObject
{
    NSString *_className;
    NSString *_memberName;
    DVTSourceCodeSymbolKind *_kind;
    NSString *_geniusCategory;
}

+ (id)connectionDefinitionForClass:(id)arg1 member:(id)arg2 kind:(id)arg3 category:(id)arg4;
@property(retain) NSString *geniusCategory; // @synthesize geniusCategory=_geniusCategory;
@property(retain) DVTSourceCodeSymbolKind *kind; // @synthesize kind=_kind;
@property(retain) NSString *memberName; // @synthesize memberName=_memberName;
@property(retain) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (id)description;
- (id)symbolFromIndex:(id)arg1;
- (id)propertySymbolForName:(id)arg1 inClass:(id)arg2;
- (id)instanceVariableSymbolForName:(id)arg1 inClass:(id)arg2;
- (id)instanceMethodSymbolForName:(id)arg1 inClass:(id)arg2;

@end
