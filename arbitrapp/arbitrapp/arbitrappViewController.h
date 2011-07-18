//
//  arbitrappViewController.h
//  arbitrapp
//
//  Created by Horacio Herrera on 7/18/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YellowCardViewController.h"


@interface arbitrappViewController : UIViewController {
    
    IBOutlet YellowCardViewController *yellow;
}

- (IBAction)displayYellowCard;

@end
