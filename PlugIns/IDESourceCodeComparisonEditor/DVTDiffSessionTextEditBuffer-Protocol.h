//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESourceCodeComparisonEditor/NSObject-Protocol.h>

@class NSAttributedString, NSString, NSUndoManager;

@protocol DVTDiffSessionTextEditBuffer <NSObject>
@property(nonatomic, readonly) NSString *string;
- (void)setAttributedString:(NSAttributedString *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(NSString *)arg2 withUndoManager:(NSUndoManager *)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(NSString *)arg2;
- (void)endEditing;
- (void)beginEditing;
@end

