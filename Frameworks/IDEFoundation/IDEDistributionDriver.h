//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IDEDistributionContext, NSDictionary, NSString;

@interface IDEDistributionDriver : NSObject
{
    NSString *_successMessage;
    IDEDistributionContext *_initialContext;
    NSDictionary *_exportOptionsPlist;
}

+ (id)distributionDriverWithArchive:(id)arg1 optionsPlist:(id)arg2;
@property(readonly, copy) NSDictionary *exportOptionsPlist; // @synthesize exportOptionsPlist=_exportOptionsPlist;
@property(retain) IDEDistributionContext *initialContext; // @synthesize initialContext=_initialContext;
@property(copy) NSString *successMessage; // @synthesize successMessage=_successMessage;
- (void).cxx_destruct;
- (BOOL)runWithDestinationPath:(id)arg1 error:(id *)arg2;

@end

