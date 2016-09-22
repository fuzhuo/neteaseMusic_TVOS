//
//  AppDelegate.h
//  neteaseMusicTVOS
//

//  Copyright (c) 2016年 zfu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TVMLKit/TVMLKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) TVApplicationController *appController;

@end

