//
//  CalculatorViewController.h
//  Calculator
//
//  Created by McKenzie Kurtz on 10/18/11.
//  Copyright 2011 Oregon Institute of Technology. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CalculatorViewController : UIViewController {
	IBOutlet UILabel *displayNumber;
}

-(IBAction)pressNumber:(id)sender;

@property(nonatomic, retain)IBOutlet UILabel *displayNumber;

@end

