//
//  UIImagePickerController+SimulatedCamera.h
//
//  Created by Paul King on 29/06/2010.
//  Copyright 2010 Paul King. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIImagePickerController(SimulatedCamera)

-(void)mockCameraWithImageURL:(NSString*)url;
-(void)mockCameraWithImageURL:(NSString*)url delay:(NSInteger)delay;
-(void)mockCancel;
-(void)mockCancelWithDelay:(NSInteger)delay;

@end

