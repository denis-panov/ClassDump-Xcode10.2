//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUDebuggerKit/GPUBufferViewerDataElementTableCellView.h>

@class GPUBufferViewerColorView;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerColorElementTableCellView : GPUBufferViewerDataElementTableCellView
{
    GPUBufferViewerColorView *_colorView;
}

@property(retain, nonatomic) GPUBufferViewerColorView *colorView; // @synthesize colorView=_colorView;
- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setValue:(id)arg1 forComponent:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (id)initWithTableColumn:(id)arg1;

@end

