//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/NSObject-Protocol.h>

@class IBICAbstractCatalogItem, IBICIssueGenerationContext, NSMutableArray;

@protocol IBICCatalogItemIssueProvider <NSObject>
- (void)populateIssues:(NSMutableArray *)arg1 forCatalogItem:(IBICAbstractCatalogItem *)arg2 withContext:(IBICIssueGenerationContext *)arg3;
@end

