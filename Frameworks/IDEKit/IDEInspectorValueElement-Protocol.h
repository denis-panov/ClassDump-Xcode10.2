//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol IDEBindableDeclarativeInspectorController;

@protocol IDEInspectorValueElement <NSObject>
- (id)aggregateReplacementBySettingValue:(id)arg1 forKeyPath:(NSString *)arg2 onObject:(id)arg3 fromKeyPath:(NSString *)arg4 ofObject:(id)arg5;
- (NSArray *)inspectedArrayControllerKeys;
- (id)valueForKeyPath:(NSString *)arg1;
- (id <IDEBindableDeclarativeInspectorController>)inspectorController;
@end

