//
//  LibraryAPI.h
//  BlueLibrary
//
//  Created by Vishal Aggarwal on 16/10/14.
//  Copyright (c) 2014 Eli Ganem. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Album.h"

@interface LibraryAPI : NSObject
+ (LibraryAPI*)sharedInstance;

- (NSArray*)getAlbums;
- (void)addAlbum:(Album*)album atIndex:(int)index;
- (void)deleteAlbumAtIndex:(int)index;
- (void)saveAlbums;
@end
