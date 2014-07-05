//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Daniel Wells on 7/5/14.
//  Copyright (c) 2014 sllewdk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
