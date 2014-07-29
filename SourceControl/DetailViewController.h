//
//  DetailViewController.h
//  SourceControl
//
//  Created by Yan Grunes de Alencar on 29/07/14.
//  Copyright (c) 2014 Yan Grunes de Alencar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
