//
//  ListViewController.h
//  Todos
//
//  Created by Rahul Somasunderam on 6/26/15.
//  Copyright (c) 2015 Rahul Somasunderam. All rights reserved.
//


#import <UIKit/UIKit.h>


@interface ListViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *tblTodos;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *btnClear;

@end
