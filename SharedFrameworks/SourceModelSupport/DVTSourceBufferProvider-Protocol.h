//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <SourceModelSupport/DVTLineRangeCharacterRangeConverter-Protocol.h>
#import <SourceModelSupport/NSObject-Protocol.h>

@class DVTSourceCodeLanguage, DVTSourceModelItem, NSString;

@protocol DVTSourceBufferProvider <NSObject, DVTLineRangeCharacterRangeConverter>
- (unsigned long long)leadingWhitespacePositionsForLine:(unsigned long long)arg1;
- (unsigned long long)length;
- (NSString *)string;

@optional
- (void)scheduleLazyInvalidationForRange:(struct _NSRange)arg1;
- (NSString *)stringForItem:(DVTSourceModelItem *)arg1;
- (DVTSourceCodeLanguage *)language;
@end
