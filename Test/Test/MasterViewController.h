//
//  MasterViewController.h
//  Test
//
//  Created by Ankit Bhardwaj on 12/12/12.
//  Copyright (c) 2012 Ankit Bhardwaj. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
