//
//  arbitrappAppDelegate.h
//  arbitrapp
//
//  Created by Horacio Herrera on 7/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class arbitrappViewController;

@interface arbitrappAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet arbitrappViewController *viewController;

@end
