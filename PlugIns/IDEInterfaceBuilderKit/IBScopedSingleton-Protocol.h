//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class NSString;
@protocol IBCollection;

@protocol IBScopedSingleton <NSObject>
+ (id)instanceWithIdentifier:(NSString *)arg1;
+ (id <IBCollection>)allInstances;
+ (id)sharedInstance;
- (void)didRegisterSharedInstance;
- (NSString *)identifier;
@end

