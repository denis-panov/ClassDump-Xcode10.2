//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/XCPropertyDefinition.h>

@class NSArray;

@interface XCEnumerationPropertyDefinition : XCPropertyDefinition
{
    NSArray *_allowedValueDefns;
}

+ (BOOL)isListType;
+ (id)localizedName;
+ (id)identifier;
- (void).cxx_destruct;
- (id)argumentGenerationInfoProvidersForValue:(id)arg1;
- (id)localizedAllowedValues;
- (id)allowedValues;
- (id)initFromPListDictionary:(id)arg1;

@end

