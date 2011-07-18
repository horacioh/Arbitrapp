//
//  arbitrappViewController.h
//  arbitrapp
//
//  Created by Horacio Herrera on 7/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YellowCard.h"
#import "RedCard.h"


@interface arbitrappViewController : UIViewController {
    
    IBOutlet YellowCard *yellow;
    IBOutlet RedCard *red;
}

-(IBAction) gotoYellowCard;
-(IBAction)gotoRedCard;

@end
