//
//  walletManagementTableViewController.h
//  Neodius
//
//  Created by Benjamin de Bos on 17-09-17.
//  Copyright © 2017 ITS-VIsion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FontAwesome4-ios/FontAwesome4-ios.h>
#import <UIAlertView+Blocks/UIAlertView+Blocks.h>
#import "NeodiusDataSource.h"

@interface walletManagementTableViewController : UITableViewController {
    NSMutableArray *storedWallets;
    UIImage *editIcon,*doneIcon;
    UIBarButtonItem *editButton;
}

@end
