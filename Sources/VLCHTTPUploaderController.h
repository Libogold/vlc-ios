/*****************************************************************************
 * VLCHTTPUploaderController.h
 * VLC for iOS
 *****************************************************************************
 * Copyright (c) 2013-2015 VideoLAN. All rights reserved.
 * $Id$
 *
 * Authors: Jean-Baptiste Kempf <jb # videolan.org>
 *          Gleb Pinigin <gpinigin # gmail.com>
 *          Felix Paul Kühne <fkuehne # videolan.org>
 *          Carola Nitz <caro # videolan.org>
 *
 * Refer to the COPYING file of the official project for license.
 *****************************************************************************/

#import <UIKit/UIKit.h>

@class MediaLibraryService;

@interface VLCHTTPUploaderController : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, readonly) BOOL isReachable;
@property (nonatomic, readwrite) MediaLibraryService *medialibrary;

- (BOOL)changeHTTPServerState:(BOOL)state;
- (NSString *)httpStatus;
- (BOOL)isServerRunning;
- (NSString *)hostname;
- (NSString *)hostnamePort;

- (void)moveFileFrom:(NSString *)filepath;
- (void)cleanCache;
- (void)resetIdleTimer;

@end
