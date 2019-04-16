//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class NSComboBoxCell, NSString;

@protocol NSComboBoxCellDataSource <NSObject>

@optional
- (NSString *)comboBoxCell:(NSComboBoxCell *)arg1 completedString:(NSString *)arg2;
- (unsigned long long)comboBoxCell:(NSComboBoxCell *)arg1 indexOfItemWithStringValue:(NSString *)arg2;
- (id)comboBoxCell:(NSComboBoxCell *)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBoxCell:(NSComboBoxCell *)arg1;
@end

