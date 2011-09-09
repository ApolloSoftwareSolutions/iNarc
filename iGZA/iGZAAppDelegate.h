//
//  iGZAAppDelegate.h
//  iGZA
//
//  Created by Amit Barman on 9/8/11.
//  Copyright (c) 2011 USACE. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iGZAAppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UITabBarController *tabBarController;

@end
