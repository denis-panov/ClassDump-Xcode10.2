//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSUIDataSource/XCSUIDataSourceOperation.h>

@class XCSUIBot;

@interface XCSUILastIntegrationsOperation : XCSUIDataSourceOperation
{
    XCSUIBot *_botSnapshot;
    unsigned long long _requestCount;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)start;
- (id)description;
- (id)operationIdentifier;
- (id)initWithBotSnapshot:(id)arg1 requestCount:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
