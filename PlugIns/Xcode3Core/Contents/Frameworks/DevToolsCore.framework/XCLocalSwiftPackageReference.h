//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/XCSwiftPackageReference.h>

@class NSString;

@interface XCLocalSwiftPackageReference : XCSwiftPackageReference
{
    NSString *_packageName;
}

+ (id)archivableAttributes;
+ (id)keyPathsForValuesAffectingDisplayName;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
- (void).cxx_destruct;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)gidCommentForArchive;
- (void)findFeaturesInUseAndAddToSet:(id)arg1 usingPathPrefix:(id)arg2;
- (id)displayName;
- (id)detailedName;

@end

