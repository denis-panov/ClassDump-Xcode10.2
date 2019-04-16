//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSString;

@interface IDEIntentBuilderDocumentLocation : DVTDocumentLocation
{
    NSString *_groupIdentifier;
    NSString *_parentItemName;
    NSString *_itemName;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly, copy, nonatomic) NSString *parentItemName; // @synthesize parentItemName=_parentItemName;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 groupIdentifier:(id)arg2 parentItemName:(id)arg3 itemName:(id)arg4;

@end

