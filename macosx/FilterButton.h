// This file Copyright © 2007-2022 Transmission authors and contributors.
// It may be used under the MIT (SPDX: MIT) license.
// License text can be found in the licenses/ folder.

#import <Cocoa/Cocoa.h>

@interface FilterButton : NSButton
{
    NSUInteger fCount;
}

- (void)setCount:(NSUInteger)count;

@end
