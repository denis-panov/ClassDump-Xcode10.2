//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTWeakInterposer, NSDictionary, NSString;

@interface DVTBindingInfo : NSObject
{
    DVTWeakInterposer *_observedObject_dvtWeakInterposer;
    NSString *_observedKeyPath;
    NSDictionary *_bindingOptions;
    NSString *_modelKeyPath;
}

@property(readonly, copy) NSDictionary *bindingOptions; // @synthesize bindingOptions=_bindingOptions;
@property(readonly, copy) NSString *observedKeyPath; // @synthesize observedKeyPath=_observedKeyPath;
- (void).cxx_destruct;
- (id)_modelKeyPath;
- (id)_infoDictionary;
- (id)initWithObservedObject:(id)arg1 observedKeyPath:(id)arg2 bindingOptions:(id)arg3;
@property __weak id observedObject;

@end

