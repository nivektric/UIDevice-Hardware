//
//  UIDevice+Hardware.h
//
//  Used to determine EXACT version of device software is running on.

#import <Foundation/Foundation.h>

@interface UIDevice (Hardware)

- (NSString *) platform;
- (NSString *) platformString;

@end