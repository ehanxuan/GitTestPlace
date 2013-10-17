//
//  Day01AppDelegate.h
//  Day01
//
//  Created by Ying Lu
//  Copyright《iPhone SDK 三十天入门到精通》. All rights reserved.
//  E-Mail iossdk@126.com
//

#import <UIKit/UIKit.h>

@class Day01ViewController;

@interface Day01AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Day01ViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Day01ViewController *viewController;

@end

