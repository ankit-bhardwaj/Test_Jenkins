//
//  DetailViewController.h
//  Test
//
//  Created by Ankit Bhardwaj on 12/12/12.
//  Copyright (c) 2012 Ankit Bhardwaj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
