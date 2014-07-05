//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Daniel Wells on 7/5/14.
//  Copyright (c) 2014 sllewdk. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
