//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/Xcode3Library.h>

@class NSString, XCLibraryDescriptor;

@interface Xcode3LibraryDescriptor : Xcode3Library
{
    XCLibraryDescriptor *_libraryDescriptor;
    NSString *_disambiguationString;
}

+ (id)libraryForLibraryDescriptor:(id)arg1;
- (id)disambiguationString;
@property(retain) XCLibraryDescriptor *_libraryDescriptor; // @synthesize _libraryDescriptor;
- (void).cxx_destruct;
- (void)_computeDisambiguationString;
- (id)fileURL;
- (id)path;
- (id)displayName;
- (id)initWithLibraryDescriptor:(id)arg1;

@end

