//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IDEProductType, NSString;

@interface Xcode3AddPackageProductDependencyViewControllerPackageProductSpecifier : NSObject
{
    NSString *_displayName;
    IDEProductType *_productType;
    NSString *_productName;
}

@property(readonly, copy) NSString *productName; // @synthesize productName=_productName;
@property(readonly) IDEProductType *productType; // @synthesize productType=_productType;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)arg1 productType:(id)arg2 productName:(id)arg3;

@end

