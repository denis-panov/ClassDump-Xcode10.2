//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DNTDocumentationSupport/DNTDisplayTreeIndexDeserializationDelegate-Protocol.h>
#import <DNTDocumentationSupport/NSObject-Protocol.h>

@class NSError;

@protocol DNTDisplayTreeIndexDelegate <NSObject, DNTDisplayTreeIndexDeserializationDelegate>

@optional
- (void)indexDidFinishLoading;
- (void)indexFailedLoadingWithError:(NSError *)arg1;
@end
