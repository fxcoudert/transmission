// This file Copyright © 2008-2022 Transmission authors and contributors.
// It may be used under the MIT (SPDX: MIT) license.
// License text can be found in the licenses/ folder.

#import <Cocoa/Cocoa.h>

@class Torrent;

@interface FileListNode : NSObject<NSCopying>

@property(nonatomic, readonly) NSString* name;
@property(nonatomic, readonly) NSString* path;

@property(nonatomic, weak, readonly) Torrent* torrent;

@property(nonatomic, readonly) uint64_t size;
@property(nonatomic, readonly) NSImage* icon;
@property(nonatomic, readonly) BOOL isFolder;
@property(nonatomic, readonly) NSMutableArray* children;

@property(nonatomic, readonly) NSIndexSet* indexes;

- (instancetype)initWithFolderName:(NSString*)name path:(NSString*)path torrent:(Torrent*)torrent;
- (instancetype)initWithFileName:(NSString*)name
                            path:(NSString*)path
                            size:(uint64_t)size
                           index:(NSUInteger)index
                         torrent:(Torrent*)torrent;

- (void)insertChild:(FileListNode*)child;
- (void)insertIndex:(NSUInteger)index withSize:(uint64_t)size;

@property(nonatomic, readonly) NSString* description;

- (BOOL)updateFromOldName:(NSString*)oldName toNewName:(NSString*)newName inPath:(NSString*)path;

@end
