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
@protocol IDEIndexSymbol;

@interface IDESourceKitUnhandledURLSymbolInfo : NSObject
{
    NSString *_oldName;
    NSString *_name;
    id <IDEIndexSymbol> _symbol;
}

@property(readonly) id <IDEIndexSymbol> symbol; // @synthesize symbol=_symbol;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *oldName; // @synthesize oldName=_oldName;
- (void).cxx_destruct;
- (id)initWithSymbol:(id)arg1 oldName:(id)arg2 newName:(id)arg3;

@end

