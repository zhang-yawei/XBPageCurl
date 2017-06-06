//
//  SimpleCurlViewController.h
//  XBPageCurl
//
//  Created by xiss burg on 8/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XBCurlView.h"


@interface SimpleCurlViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, strong) XBCurlView *curlView;
// 载体view
@property (nonatomic, weak) IBOutlet UIView *messyView;

//这个也是载体view
@property (nonatomic, weak) IBOutlet UIView *backView;
// 日期选择
@property (nonatomic, weak) IBOutlet UIDatePicker *pickerView;
@property (nonatomic, weak) IBOutlet UISearchBar *searchBar;
@property (nonatomic, weak) IBOutlet UITextView *textView;

//curl 按钮
- (IBAction)curlButtonAction:(id)sender;
// ... 按钮
- (IBAction)uncurlButtonAction:(id)sender;

// back 按钮
- (IBAction)backButtonAction:(id)sender;

@end
